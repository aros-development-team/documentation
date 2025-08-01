================================================================
AROS Application Development Manual -- Writing Portable Software
================================================================

:Authors:   Matthias Rustler
:Copyright: Copyright (C) 2007-2025, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Work in progress.
:Abstract:
    This document will explain how to write software in such a way that it can
    be compiled for different AROS flavours.

.. Contents::



Introduction
============

Back in the old days it was easy: both integer and address types had a size of
32 bit and the bytes were ordered in big-endian. But because AROS is portable,
developers have to mind certain things or their code will not run on all AROS
ports.



Endianness
==========

Computer architectures differ in the order the bytes of integer values are
stored in memory, i.e. their endianness_. On little-endian systems the least
significant byte is stored first, i.e. on systems where a byte has 8 bits the
bits 0 to 7 are stored in address n, 8 to 15 in address n+1, 16 to 23 in n+2
and so on. On big-endian systems it's the other way round.

Endianness becomes important when you write binary data to files or try to
access hardware like graphics cards etc.

You can query the endianness this way::

    #include <aros/cpu.h>
    ...
    if (AROS_BIG_ENDIAN) {
        Puts("We are big-endian.");
    } else {
        Puts("We are little-endian.");
    }


AROS_BIG_ENDIAN is always defined, if you include `aros/cpu.h`_. It has a
value of 1 on big-endian systems and of 0 on little-endian systems. This allows
for testing the define with both C "if" and preprocessor "#if". Since the
macro is always defined, however, "#ifdef" can not be used to test it.

You can find some conversion macros, like *AROS_WORD2BE*, in the header
`aros/macros.h`_. Some peek and poke functions with built-in endianness
conversion, can be found in `aros/io.h`_.

.. _Endianness: https://en.wikipedia.org/wiki/Endianness



Data Types
==========

The AROS data types are defined in the header `exec/types.h`_.

The fundamental integer data types have a defined size, which is the same for
both 32-bit and 64-bit systems:

===========  ============
Type         sizeof(Type)
===========  ============
BYTE, UBYTE       1
WORD, UWORD       2
LONG, ULONG       4
QUAD, UQUAD       8
===========  ============

This is different from C types like *int* and *long*, the sizes of which
which depend on the hardware.


IPTR
----

*IPTR* is defined as an unsigned integer type which is large enough to store a
pointer. You should use it to store an address in an integer type.
The following source code::

    ...
    ULONG address;
    GetAttr(obj, Gimme_Address, &address);
    ...

has to be translated for AROS to::

    ...
    IPTR address;
    GetAttr(obj, Gimme_Address, &address);
    ...

Other notable things which are affected by this:
`TagItems` (the `ti_Data` field is now an `IPTR` instead of `ULONG`),
BOOPSI classes (e.g. the return value of `DoMethod()`),
`ReadArgs()`, `VPrintf()`, `VFPrintf()`, and more.


64-bit variables
----------------

The type of 64-bit variables is `QUAD` (unsigned: `UQUAD`). This is,
for example, returned by the function `SMult64()`_ of utility.library.
To access the high- and low-order 32-bit values of the 64-bit variable,
use `LOW32OF64()` and `HIGH32OF64()` which are defined in `aros/64bit.h`_.



Hooks
=====

Hooks are used when a system function takes a pointer to a callback function
as an argument. They are used quite often in Zune user interfaces. There are
two ways to define them:

Register-based::

    #include <utility/hooks.h>
    ...
    static struct Hook myhook;
    ...
    AROS_UFH3(ULONG, myfunction,
    AROS_UFHA(struct Hook *, h, A0),
    AROS_UFHA(Object *, object, A2),
    AROS_UFHA(APTR, msg, A1))
    {
        AROS_USERFUNC_INIT
        ....
        return retval;
        AROS_USERFUNC_EXIT
    }

    int main(void)
    {
        myhook.h_Entry = (HOOKFUNC)myfunction;
        ...
        DoMethod(button, MUIM_Notify, MUIA_Pressed, FALSE,
            (IPTR)app, 2, MUIM_CallHook, (IPTR)&myhook);
        ...
    }

UFH3 means User Function Head with 3 arguments. You can append an "S" if you
want to make the function static.

Stack-based::

    #include <proto/alib.h>
    #include <utility/hooks.h>
    ...
    static struct Hook myhook;
    ...
    static ULONG myfunc(struct Hook *hook, Object *object, APTR msg)
    {
        ...
        return retval;
    }

    int main(void)
    {
        myhook.h_Entry = HookEntry;
        myhook.h_SubEntry = (HOOKFUNC)myfunc;
        ...
        DoMethod(button, MUIM_Notify, MUIA_Pressed, FALSE,
            (IPTR)app, 2, MUIM_CallHook, (IPTR)&myhook);
        ...
    }

In contrast to register-based you have to use the function address in
h_SubEntry and *HookEntry* from amiga.lib in h_Entry. *HookEntry* is a
function which forwards the register arguments to stack arguments.


User Function Prototype
-----------------------

If you want to define a prototype for a register-based user function you have
to use the AROS_UFP (User Function Prototype) macro, like this::

    AROS_UFP3(ULONG, myfunction,
        AROS_UFPA(struct Hook *, h, A0),
        AROS_UFPA(Object *, obj, A2),
        AROS_UFPA(APTR, msg, A1));


Hints
------

So far only user functions with 3 arguments were demonstrated, but the UFxx
macros are way more flexible. You can define functions with 0 to 15 arguments,
as you can see in the header `aros/asmcall.h`_. But if you need a hook
function for the system (e.g. for Zune callback functions) you need the
special case with 3 arguments and they must be given in the order A0, A2, A1.

-----

When porting old Amiga software to AROS you will sometimes find code for hooks
which omits arguments, e.g.::

    ULONG ASM RenderHookFunc(reg (a1) struct LVDrawMsg *msg, reg (a2) struct ImageNode *in)

This doesn't work on AROS because

+ the arguments aren't in the order A0, A2, A1.
+ the argument for A0 is mentioned at all.

A valid translation with register macros of the line above would be::

    AROS_UFH3(ULONG, RenderHookFunc,
    AROS_UFHA(struct Hook *, h, A0),
    AROS_UFHA(struct ImageNode *, in, A2),
    AROS_UFHA(struct LVDrawMsg *, msg, A1))

Arguments can only be omitted come after the arguments that are necessary,
e.g.:

+ A1 can be omitted if only A0 and A2 are necessary
+ A1 and A2 can be omitted if only A0 is necessary

-----

In case you should wonder what these A0, A1, A2 are: Those are register
names of the 68k architecture. On other platforms they are forwarded to other
registers or even put on the stack.


Calling User Functions
----------------------

For the standard case with 3 arguments, utility.library provides the function
`CallHookPkt()`_::

    retval = CallHookPkt(hook, par1, par2);

There is another macro named UFC (User Function Call) if you want to call
the user function with more than 3 arguments::

    retval = AROS_UFC4(ULONG, myfunction,
            AROS_UFCA(APTR, value1, A0),
            AROS_UFCA(Object *, value2, A2),
            AROS_UFCA(APTR, value3, A1),
            AROS_UFCA(LONG, value4, D1) );



Variadic functions with structure parameters
============================================

Messages for BOOPSI/Zune methods are defined as structs. The structure elements
are then used as arguments for the variadic function *DoMethod()*, e.g.::

    struct MUIP_Application_SetMenuCheck { ULONG MethodID; ULONG MenuID; LONG stat; };
    DoMethod(obj, MUIM_Application_SetMenuCheck, 10, 20);

This causes problems on AROS for several reasons:

* small data types, like WORD, aren't expanded correctly, i.e. some bytes
  contain trash data
* on some CPUs the stack grows upwards
* on some architectures the parameters are passed on stack, in registers, or
  even in both

The solution is to prefix all elements in the struct with *STACKED*::

    struct MUIP_Application_SetMenuCheck { STACKED ULONG MethodID;
            STACKED ULONG MenuID; STACKED LONG stat; };

.. Warning::

   Don't use types smaller than ULONG for message structures. It will not
   work on big-endian.



Tag Identifiers/Values
======================

The original AmigaOS didn't use the tags below `TAG_USER` (have a look a at
``utility/tagitem.h`` if you're not certain) which means, you shouldn't use
tags at or near `TAG_USER` because then they might interfere with the OS's
own tags. To solve this, AROS *does* use the tags *below* `TAG_USER` and the
various implementers need not fear that their tags may overlap with the
ones from the system. The file `utility/tagitem.h`_ now contains
the basic offsets for the various parts of the OS. In the future, it might be
possible for users to allocate ranges of tags for specific uses.

To write programs easily portable to 64-bit architectures make sure that all
variadic arguments to functions using AROS_SLOWSTACKTAGS macros (NewObject(),
MUI_NewObject(), CreateNewProcTags(), and many more) are of a type with size
equal to the *Tag* type for tag identifiers and the *IPTR* type for tag
values. If you use any arguments with smaller types, the functions mentioned
may receive randomly corrupted argument values.

TO ensure this size, add *UL* to tag identifiers::

    #define MUIA_NList_Horiz_DeltaFactor  0x9d510032UL

You don't have to care about this when you're OR-ing with TAG_USER or
derivatives, like MUIB_MUI, MUIB_RSVD, MUIB_ZUNE and MUIB_AROS::

    #define MUIA_Application_Active  (MUIB_MUI|0x004260ab)



Forwarding Variadic Parameters to a Variadic Function
=====================================================

Sometimes, variadic functions are needed which forward their parameters to
a variadic system function.

On 68k this was often done like this::

    APTR DoSuperNew(struct IClass *cl,Object *obj,ULONG tag1, ...)
    {
        return (APTR)(DoSuperMethod(cl,obj,OM_NEW,&tag1,TAG_DONE));
    }

This isn't portable because you can't control how the compiler stores the
variadic parameters.

Instead, this has to be written this way::

    IPTR DoSuperNew(struct IClass *cl, Object *obj, IPTR tag1, ...)
    {
        AROS_SLOWSTACKTAGS_PRE(tag1)
        retval = (IPTR)DoSuperMethod(cl, obj, OM_NEW, AROS_SLOWSTACKTAGS_ARG(tag1));
        AROS_SLOWSTACKTAGS_POST
    }

Note that the name of the return variable "retval" is defined by the macros and
can't be changed.

Functions with no return value can be written in a similar way with the macros
*AROS_NR_SLOWSTACKTAGS_PRE* and *AROS_NR_SLOWSTACKTAGS_POST*. All these
slowstacktags macros are defined in `utility/tagitem.h`_.

For variadic hook functions exists similar to macros in `clib/alib_protos.h`.
Example usage::

    ULONG MyCallHookPktA(Object *obj, struct Hook *hook, ...)
    {
        AROS_SLOWSTACKHOOKS_PRE(hook)
        retval = CallHookPkt(hook, obj, AROS_SLOWSTACKHOOKS_ARG(hook));
        AROS_SLOWSTACKHOOKS_POST
    }

Also `clib/alib_protos.h` defines AROS_SLOWSTACKMETHODS_XXX macros. DoMethod()
is implemented with this. As an application developer you'll normally not come
in touch with these macros.



Node
====

The order of elements of ``struct Node`` differs, on some AROS platforms,
from the original AmigaOS version. See `exec/nodes.h`_. This is
considered a bug and will be changed for the V1 ABI. For now, however,
we have to live with it. There are three cases you'll have to look at:

* Initialization like ``struct Node node = {0, 0, type, pri,name};``
* Nodes with exposed structure elements like::

    struct Mynode {
        struct Node * mn_succ;
        struct Node * mn_pred;
        UBYTE  mn_Type;
        BYTE   mn_pri;
        char   * mn_Name;
        ULONG  mn_color;
    };

* Nodes which are based on MinNodes, e.g.::

    struct Mynode {
        struct MinNode * mn;
        char           * id;
    };
    ...
    struct Mynode *node;
    ...
    ((struct Node*)node)->ln_Name = "XYZ";

You're on the safe side if you have ``struct Node`` at the beginning::

    struct Mynode {
        struct Node mn;
        ULONG  mn_color;
    } mynode;

Then set the elements explicitly::

    mynode.mn->ln_Type = type;
    mynode.mn->ln_Pri = pri;
    mynode.mn->ln_Name = name;
    mynode.mn_color = color;


.. Note::

   This is only a temporary requirement. When V1 ABI is released ``struct Node``
   will be the same on all platforms.



Include files
=============

Include headers for shared libraries from *proto*, e.g.::

    #include <proto/intuition.h>

It happens that the include files for workbench.library aren't called
"workbench.h" etc. for AmigaOS, but rather "wb.h": clib/wb_protos.h,
defines/wb.h, inline/wb.h, wb_pragmas.h and proto/wb.h.
For AROS "wb" is replaced by the library's name "workbench", to follow the
common naming system. Wrapper includes are provided for consistency to
(old) AmigaOS programs, but it's recommended to use the new names
clib/workbench_protos.h, defines/workbench.h, inline/workbench.h,
workbench_pragmas.h and proto/workbench.h instead.



Cloning RastPorts
=================

AROS uses an external driver to access the graphics hardware. Since the
nature of this driver is unknown to AROS, it is no longer valid to clone
a RastPort by simply copying it. To be compatible, there are three new
functions (in AROS) or macros (on Amiga): * `CreateRastPort()`_,
`CloneRastPort()`_ and `FreeRastPort()`_. Call `CreateRastPort()`_ for
an empty RastPort, call `CloneRastPort()`_ to create a copy, and call
`FreeRastPort()`_ when you're done with it.

This approach produces equivalent code on the Amiga but on AROS it can slow
things down a bit. If you must preserve the original state of the RastPort,
it's safer to create a clone, work on it and then dispose of it again. It
can also be faster, if you would have to make a lot of changes to the
RastPort, to create two clones and set them to the two states you need.
But your code should not depend on certain gains or losses of speed due
to cloned RastPorts since the behaviour of the underlying graphics system
is undefined.



Registers and CPUs
==================

Some effort has been put in defining a way for AROS to write code which is
hardware independent. To achieve this, a couple of macros have been defined.
Some of them have already been mentioned above.

AROS_ASMSYMNAME(n)
    Use this macro to access the assembler symbol ``n`` from C.

AROS_CSYMNAME(n)
    Use this macro to access the C symbol ``n`` from assembler.

AROS_CDEFNAME(n)
    Use this macro to define the assembler symbol ``n`` in such a
    way that it can be accessed from C.

AROS_SLIB_ENTRY(n,l)
    Use this macro to get the name of a function ``n`` which is part of
    the shared library ``l``.

AROS_UFH#(...)
    Use this macro to declare a function which needs its arguments passed
    in registers. ``"#"`` is the number of arguments the function
    expects. The parameters of the macro are the return type of the function,
    its name and the parameters in the `AROS_UFHA()` macros. If the function
    is an assembler function, use the `AROS_ASMSYMNAME()` macro to get its
    name.

AROS_UFHA(t,n,r)
    Use this macro to declare a parameter for a function which is declared
    with the AROS_UFH*() macro. It takes three arguments: The type of the
    parameter, the name of the parameter and the register the parameter is
    expected in.

AROS_UFC#(...)
    Call a function which needs its arguments in registers.
    Works the same way as AROS_UFH*().

AROS_LH#[I](...)
    Use this macro to declare a function which is part of a shared library.
    "#" is the number of arguments the function expects. If the function
    doesn't need the library base passed, you can speed things up by
    appending "I" to the macros name. The parameters of the macro are the
    return type of the function, its name, the parameters in AROS_LHA()
    macros, the type of the library, the name of the variable the library base
    is passed in, the offset in the function table (1 is the first offset and 5
    is the first offset for a user function) and the name of the library.

AROS_LHA(t,n,r)
    Use this macro to declare a parameter for a function
    which is declared with the AROS_LH*() macro. It takes three arguments:
    The type of the parameter, the name of the parameter and the register the
    parameter is expected in.

AROS_LC#[I](...)
    Call a function which is part of a shared library.
    Works the same way as AROS_LH*().

AROS_STACK_GROWS_DOWNWARDS
    Has the value 1 if it is true, and 0 otherwise.

AROS_BIG_ENDIAN
    Has the value 1 if the machine is big-endian (e.g. Amiga), or
    0 if little-endian (e.g. PCs). Endianess means the way a number is stored
    in memory. An Amiga stores ``0x11223344`` as ``0x11 0x22 0x33 0x44`` in
    memory while a PC does it as ``0x44 0x33 0x22 0x11``.

AROS_SIZEOFULONG
    The result of ``sizeof(ULONG)``.

AROS_WORDALIGN
    The minimal alignment of 16-bit numbers in the memory of the computer
    (`WORD` and `UWORD`).

AROS_LONGALIGN
    The minimal alignment of 32-bit numbers in the memory of the computer
    (LONG and ULONG).

AROS_PTRALIGN
    The minimal alignment of pointers in the memory of the computer
    (e.g. ``char *`` or APTR).

AROS_DOUBLEALIGN
    The minimal alignment of 64-bit IEEE floating point numbers in the memory
    of the computer (``double``).

AROS_WORSTALIGN
    The worst possible alignment of any data type in the memory of the
    computer (usually the same as `AROS_DOUBLEALIGN`).

AROS_ALIGN(x)
    Get the next possible address where one can put any data type. This macro
    will return ``x`` if any data type can be put at ``x``.  Most of the time,
    this macro is used like this: Get a buffer, put some data in it and then
    use `AROS_ALIGN()` to find out where the next data can be put.

AROS_SLOWSTACKTAGS
    This macro is defined, when it's necessary to use `GetTagsFromStack()` and
    `FreeTagsFromStack()` instead of just passing the address of the tag of
    the first tagitem.

AROS_SLOWSTACKMETHODS
    This macro is defined, when it's necessary to use `GetMsgFromStack()` and
    `FreeMsgFromStack()` instead of just passing the address of the method ID.



Porting from AmigaOS
====================

AmigaOS source code often contains compiler attributes like *__asm* and
*__saveds*, to use registers for parameters etc. Sometimes, macros like *ASM*
and *SAVEDS* are used to get some platform/compiler independence.

The following macros/attributes can be removed or replaced by empty macros:

+ SAVEDS/__saveds/__geta4
+ ASM/__asm
+ CHIP/__chip
+ STDARGS/__stdargs

VARARGS68K is for variadic functions and has to be defined this way::

    #define VARARG68K __stackparm


SDI
---

Another macro set used for compatibility between different Amiga-like
operating systems and compilers is the set of are the SDI_ macros. Currently,
they aren't fully compatible with AROS, and have to be replaced by AROS
macros.

.. _SDI: http://sditools.cvs.sourceforge.net/sditools/sditools/headers/


.. Links to headers:

.. _aros/asmcall.h:     /{{ devdocpath }}headerfiles/aros/asmcall.h
.. _aros/cpu.h:         /{{ devdocpath }}headerfiles/aros/cpu.h
.. _aros/macros.h:      /{{ devdocpath }}headerfiles/aros/macros.h
.. _aros/io.h:          /{{ devdocpath }}headerfiles/aros/io.h
.. _aros/64bit.h:       /{{ devdocpath }}headerfiles/aros/64bit.h
.. _exec/types.h:       /{{ devdocpath }}headerfiles/exec/types.h
.. _exec/nodes.h:       /{{ devdocpath }}headerfiles/exec/nodes.h
.. _utility/tagitem.h:  /{{ devdocpath }}headerfiles/utility/tagitem.h


.. Links to functions

.. _CallHookPkt():     ../autodocs/utility#callhookpkt
.. _SMult64():         ../autodocs/utility#smult64
.. _CreateRastPort():  ../autodocs/graphics#createrastport
.. _CloneRastPort():   ../autodocs/graphics#clonerastport
.. _FreeRastPort():    ../autodocs/graphics#freerastport

