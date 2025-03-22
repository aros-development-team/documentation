==============================================
AROS System Development Manual -- Introduction
==============================================

:Authors:   Aaron Digulla, Bernardo Innocenti
:Copyright: Copyright © 2001, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

.. Warning::

   This document is not finished! It is highly likely that many parts are
   out-of-date, contain incorrect information, or are simply missing
   altogether. If you want to help rectify this, please contact us.

.. Contents::


----------------
Licensing policy
----------------

Almost all code written by the AROS Development Team is licensed under the
AROS Public License (APL), and this is the recommended choice for all new code
written for the project.

However, we understand that this is not always possible; for example we often
want to use good third party libraries and applications instead of reinventing
the wheel ourselves. Therefore, it is allowed to import foreign code into the
SVN repository that is not licensed under the APL, as long as the license
of that code satisfies the requirements below.


Requirements on source code in the contrib tree
===============================================

To include source code in the contrib tree, the following requirements must
be satisfied:

1. The license must allow us to:

   a. Redistribute the sources.
   c. Redistribute the binaries.

   If changes to the source code are necessary to make it compile and work
   for AROS, then additionally the license must allow us to make modifications
   and redistribute sources and binaries containing those modifications.

2. The license must be explicitly stated in a file named LEGAL located in the
   root directory of the sources it applies to.


Requirements on source code in the main AROS tree
=================================================

To include foreign source code, which is not licensed under the APL, in the
main AROS tree the following requirements must be satisfied:

1. The source code is required to build some component or is depended upon by
   some other component (which might or might not be APL) that we want to be
   included in the binary base distribution of AROS.

2. The license must be open source as defined by the Open Source Initiative
   (OSI), meaning that it must be allowed for us to:

   a. Make modifications.
   b. Redistribute the source (possibly with modifications).
   c. Redistribute the binaries (possibly based on modified sources).

3. The license does not conflict with the APL:

   a. If it is a stand-alone program, almost any license that complies with
      (2) is allowed.

   b. If it is a library, the license must allow linking with programs and
      libraries that use a different license without any problems. This means
      that libraries that are under GPL (as opposed to LGPL) are disallowed.

4. The license must be explicitly stated in a file named LEGAL located in the
   root directory of the sources it applies to.



------------------
Coding conventions
------------------

General style
=============

This code is used by many people and therefore you should keep some things
in mind when you submit source code:

+ Keep things simple
+ Keep the source clean
+ Always know what you are doing
+ Tell what you are doing
+ Remember that you write code once but that it is read many times
  by many people


Comments
========

AROS uses some of the comments in the source to generate the documentation.
Therefore it's necessary to keep a certain format so the tools can find
their information. Other comments are ignored but they should explain what
you thought when you wrote the code. If you really can't think of an
explanation, then don't write the code a second time like this::

    /* This adds 1 to t */
    t++;

What we think of is this::

    /* Go on with next element */
    t++;


Function prototypes and headers
===============================

Every function in AROS must have a full ANSI C prototype. Prototypes should
be collected in one header per file if it's needed by only a few files (no
need to recompile the whole project if you change a function which is used
only once), in one header per directory if it's a commonly used function in
that directory or in one header per logical group (i.e. one header for all
functions in a library).

The function header (i.e. the comment before the function) must be of a
special format because the AutoDocs are generated from it. Here is an
example for it (from <filename>AROS/exec/addhead.c</filename>)::

    /*****************************************************************************

        NAME */
    #include <exec/lists.h>
    #include <clib/exec_protos.h>

        AROS_LH2I(void, AddHead,

    /*  SYNOPSIS */
            AROS_LHA(struct List *, list, A0),
            AROS_LHA(struct Node *, node, A1),

    /*  LOCATION */
            struct ExecBase *, SysBase, 40, Exec)

    /*  FUNCTION
            Insert Node node as the first node of the list.

        INPUTS
            list - The list to insert the node into
            node - This node is to be inserted

        RESULT
            None.

        NOTES

        EXAMPLE
            struct List * list;
            struct Node * pred;

            // Insert Node at top
            AddHead (list, node);

        BUGS

        SEE ALSO
            NewList(), AddTail(), Insert(), Remove(), RemHead(), RemTail(),
            Enqueue()

        INTERNALS

    ******************************************************************************/
    {

As you can see, comments are used to merge the function prototype and the
header into one.

NAME
    This field contains all necessary prototypes to use the function
    from the user point of view and the name of the function in an
    `AROS_LH#?()` macro. (LH for "Library Header") These macros are used to
    make the same code work on different kind of hardware. The name of the
    macro depends on the amount of parameters and whether the function needs
    the library base. `AddHead()` does not need the library base and therefore
    an "I" is appended to the macros name. If it had needed the library base
    (like `AddTask()`), then the "I" is omitted.

    If the function is not part of a shared library, and it's arguments must
    be passed in specific registers (e.g. callback hooks), instead of
    `AROS_LH#?()` macros, you should use `AROS_UFH#?()` macros (UFH for
    "User Function Header"). Append the number of arguments to this macro.
    Since it has never a base, the field LOCATION must be omitted and it's not
    necessary to append the "I" to the macros name. An example for a callback
    hook `foo()` would be::

        AROS_UFH3(ULONG, foo,
            AROS_UFHA(struct Hook, hook,  A0),
            AROS_UFHA(APTR,        obj,   A2),
            AROS_UFHA(APTR,        param, A1)
        )

    (Note that the registers need not have a particular order).

    If the function is not part of a shared library and it's arguments don't
    have to be in specific registers, you don't need `AROS_#?H#?()` macros::

        /*****************************************************************************

            NAME */
        #include <header.h>

            int foo (

        /*  SYNOPSIS */
            int a,
            int b)

        /*  FUNCTION
            blahblahblah.
            ...

        *****************************************************************************/

SYNOPSIS
    This field contains all arguments of the function one by one in
    `AROS_LHA()` macros (LHA for "Library Header Argument"). This macro makes
    sure each argument will be put in the right CPU register when the function
    is called (if possible and necessary). The first argument for the macro is
    the type of the parameter, followed by the name of the parameter, and the
    register the parameter is expected in. Valid names for registers are D0,
    D1, D2 up to D7 and A0 up to A6.

    If the function is not part of a library but the arguments must be passed
    to it in registers, then use `AROS_UFHA()` macros (UFHA for "User Function
    Header Argument"), which take the same parameters as the `AROS_LHA()`
    macros. Don't forget the closing parenthesis for the `AROS_UFC`.

    If the function is not part of a library and the arguments need not be
    passed in registers, no macros are necessary.

LOCATION
    This field is necessary for shared libraries only. It contains the last
    four parameters for the `AROS_LH#?()` macro which are the
    type of the library, the name of the variable, in which the function
    expects the library base, the offset of the function in the jump table
    (the first vector has 1 and the first vector which may be used by a
    function is 5) and the name of the library.

FUNCTION
    This field contains a description of the function.

INPUTS
    This field contains a list of all parameters of the form
    "name - description" or "name, name, name - description". The description
    should tell what the parameter is and what values can be passed to it.
    There is no point in explaining the parameter twice in FUNCTION and here.
    If the function has no parameters, say "None." here.

TAGS
    Optional, for functions with taglists.

    Format::

        name (type) - description

    or::

        name (type)
        description

    Don't forget the default value.

RESULT
    What the function passes back. This includes return values
    and values passed in arguments of the function. If the function may fail,
    you should explain what it returns on failure and why it might fail.

NOTES
    Important things the user must know or take into account.

EXAMPLE
    This field should contain a small or fully featured example.
    A good way to present an example, is to write some code which
    tests the function, put it into `#ifdef TEST` somewhere in the file and
    put a "See below." here. If you need comments in the code, you have two
    ways for this. If you need only short one-line comments, use C++ style
    (``//``) comments. Everything from the ``//`` to the end of the line is
    the comment.  If you need more comment, then you can end the comment after
    the `EXAMPLE` and use `#ifdef EXAMPLE` to mask the example out::

            EXAMPLE */
        #ifdef EXAMPLE
            struct List * list;
            struct Node * pred;

            /* Insert Node at top of the list */
            AddHead (list, node);
        #endif

    Don't use `#ifdef EXAMPLE` if you have a fully featured example (i.e. one
    which can be compiled without errors).


BUGS
    This field contains a list of known bugs.

SEE ALSO
    This field contains a list of other functions and documents
    which might be of interest. This includes function which you need to
    initialize, create or destroy an object necessary for this function,
    functions which do similar and opposite things on the main object.

    For example, `SetAttrs()` should list functions here which can create,
    destroy and manipulate BOOPSI objects but not taglists.

INTERNALS
    This field should contain information for other developers
    which are irrelevant to the user, for example an explanation of the
    algorithm of the function or dependencies.


Formatting
==========

Here is an example of how to format AROS code::

    {
        /* a */
        struct RastPort * rp;
        int               a;

        /* b */
        rp = NULL;
        a  = 1;

        /* c */
        if (a == 1)
            printf ("Init worked\n");

        /* d */
        if
        (
            !(rp = Get_a_pointer_to_the_RastPort
                (
                    some
                    , long
                    , arguments
                )
            )
        ||
            a <= 0
        )
        {
            printf ("Something failed\n");
            return FAIL;
        }

        /* e */
        a = printf ("My RastPort is %p, a=%d\n"
            , rp
            , a
        );

        return OK;
    }


And here are the rules that make it look like it does:

+ If several lines contain similar code, put similar things below each
  other (see a and b);

+ Put spaces between operands and operators

+ Put matching braces ``{}``, brackets ``[]`` and parentheses
  ``()`` below each other (d) if there is much code between. Brackets and
  parentheses may be in one line if the code between is small (c)

+ Indent by 4 Spaces.

  The reasons for this are:

  1. While some editors can use an arbitrary sizes for tabs, it's a bit
     complicated to tell another editor which
     tab size was used by the one used to write the code.
  2. Most code in AROS was written this way and your code should look like the
     rest.
  3. You can print this code on any printer without special
     tools to "fix" the tabs.
  4. Most editors have smart tabs which do exactly this. If your editor
     doesn't, write a bug report.

+ If you have a function with many arguments (d, e) you should put the
  parentheses in lines of their own and each argument in one line (d) or put
  the first argument behind the opening parenthesis (e) and each following
  argument in a line of its own with the comma in front. The closing
  parenthesis is in a line of its own and aligned with the beginning of the
  expression (i.e. the a and not the opening parenthesis or the
  `printf()`).

+ Use a single blank line to separate logical blocks. Large comments
  should have a blank line before and after them, small comments should be
  put before the code they explain with only one blank line before them.


Writing ROMable code
====================

Code in AROS modules should be written in a way that makes it suitable
for embedding into a ROM, FlashRAM or other kinds read-only
memory. The following coding style rules are meant to make that
possible. Of course they apply to all Kickstart modules and to code
that may be made resident, shared or linked to other modules.

+ ROM modules must have no .data and .bss sections.
  Basically, we need to get rid of all non-const global data.
  The Amiga Kickstart proves that it's both possible
  and easy to achieve this.

  If you encounter an external variable (static or not) that
  is modified by the code, try to get rid of it or move it into
  the base of the library/device (or in the device node of your
  handler or in the userdata of your class).

+ The above applies to library bases as well. If you are writing
  a library, put the bases of other libraries into your own library
  base structure. BOOPSI classes can store library bases in their
  class private data.

+ Try to set the `static` and `const` attributes to all
  your global data. You can also use the `CONST_STRPTR` and
  `CONST_APTR` types defined in <exec/types.h>. Using `static const`
  allows the compiler to move data into the ".text" (AKA code)
  segment.  If you need to pass these globals to another function, try to
  change its prototype to use `const` too. Note that, as of OS 3.5, Olaf
  Barthel has finally switched to using `const` in
  <clib/#?_protos.h> headers.

+ **NEVER EVER** touch buffers passed in by the user as an "input"
  parameter. The concept of input parameters is often implicit
  in the function description. For instance, the filename passed
  to `Open()` is clearly an input variable and
  `Open()` must not
  mess with it, even if it is going to fix it back later. Keep
  in mind that the buffer might be in read-only memory or shared
  among several instances of a resident or multi-threaded program.

+ Try to avoid host-OS calls such as `malloc()` and
  `free()` if you can do with `AllocMem()` and
  `FreeMem()`. This is because
  the pointer checking debug macros rely on finding the pointer
  within the Exec memory blocks with `TypeOfMem()`.



-------
Porting
-------

This file describes how to port AROS to a new kind of hardware.

1. Select an identifying name for your CPU (e.g. i386, m68k, hppa, sparc)
   and add "-emul" (e.g. i386-emul) if your port is to be running as
   a "sub-OS" or "-native" (e.g. m68k-native) if the port will be a
   stand-alone OS.

2. Select an identifying name for your system (e.g. sgi, linux, amiga, etc.).

3. Edit "configure" and make it recognize your kind of hardware and adjust
   the numerous variables as your system requires.

   KERNEL
       The kind of CPU you use (see 1.)

   ARCH
       Name of your system (see 2.)

   SYS_CC
       The name of your C compiler

   COMMON_CFLAGS
       options which should be handed to every call to the
       C compiler (e.g. -g -Wall -O0 etc.)

   ILDFLAGS
       The flags you must give to the compiler when linking to
        prevent it to use any standard libraries or start-up modules
        (for GCC the options are -nostartfiles -nostdlib -Xlinker -i).
        This is used to create AROS executables. These executables must
        not have any unresolved symbols and all references must be
        filled.

   RANLIB
       contains the name of your ranlib program. If you don't have
        one, specify "true" here (or the name of any other shell command
        which simply ignores all parameters and doesn't return an
        error code).

4. Type "make". It will abort because there is no $(KERNEL) yet, but it'll
   set up some important files and directory trees.

5. Make a copy of i386-emul to $(KERNEL) and convert all assembler sources
   from x86 to your CPU.

6. Populate $(KERNEL)/. It is recommended that you make a copy of i386-emul,
   because that is the most up to date version of the kernel.

7. Type "make machine". It will compile a program and run it. The output
   can be used to modify $(KERNEL)/machine.h.

8. Run "make machine.i" in $(KERNEL). It will generate a file "machine.i"
   which you need to compile the assembler files. "machine.i" contains the
   values of numerous system constants (function vector offsets, structure
   field offsets and system flags).

9. Edit all #?.s files in $(KERNEL) and generate the appropriate machine code
   for your CPU. To compile the files, type "make".

10. Go to the main directory and type make. If there any errors, write them
    down, then fix them and continue with step 10.

11. Go to bin/$(ARCH)/AROS and start "arosshell". Now you can type
    some commands (e.g. "dir all", "list" or "demowin"). If all works well,
    you get a list of directories and files with "dir all" and "demowin"
    opens a window with some gadgets and renderings with which you can
    play. Typing "Esc" or clicking on "Exit" quits the demo. To stop the
    arosshell, you must press ^C (Ctrl-C) since as a real OS it has
    no way to stop it nicely.

