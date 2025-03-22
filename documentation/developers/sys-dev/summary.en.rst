==============================================
AROS Application Development Manual -- Summary
==============================================

:Authors:   AROS Developer Mailing List
:Copyright: Copyright (C) 2008-2010, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Big mess
:ToDo:

`Index <index>`__

Introduction
============

This is an unordered summary of discussions of the AROS Developer Mailing
List, mainly about the build system, problems with shared libraries and Zune
classes. This document needs a major overhaul, either turning it into a proper
FAQ or moving some parts in other documents.

::

    > The doc says, global variables are no problem. But not long ago, someone
    > wrote that turning a link library into a shared library is difficult
    > because of some sections (.bbs?).

    The existence of these sections is not a problem. The meaning of these
    sections will be different between a static link lib and a shared
    library, though. When a .bbs section is available in a static link
    library, it will generate a .bbs section in each binary it is linked for,
    e.g. every program using this link library will have this global
    variable.
    The .bbs section in an Amiga shared library will contain global
    variables for internal use in the library. These global variables are not
    accessible in the programs using these libraries. At the moment, the only
    way to pass variables to programs using a shared library is through the
    libbase.
    On Unix, first there were only static link libraries and later on dynamic
    shared libraries were introduced. This was done is such a way that
    global variables still behaved the same, e.g. if a library exports
    global variables it will generate a set of these global variables for
    every program using them. An additional complexity is that other shared
    libraries may be linked with the same shared library and then the global
    variable will be the same for the whole program. Take for example the
    standard C variable errno. On Unix this is a global variable defined by
    the C library and every program using the C library will have it's own
    global errno variable. If now also other shared libraries in the same
    program access errno they will all access the same variable.
    What Fabio now said is that shared libraries depending on this behavior
    can, at the moment, not be ported into an AROS shared library. He also
    said he is working on a solution for that.
    I do plan to rewrite the section that explains Amiga shared libraries to
    indicate these differences.

    > How can I check if I have "forbidden" sections?

    There are no forbidden sections, so no need to check. The only problem is
    if you want to have your modules also ROMable on classic 68k machines.

    > Am I allowed to use floating point arguments/return values for library
    > functions?

    Yes, but we should define how these are passed in the ABI. Otherwise
    problems can arise if for example vbcc and gcc would have a different
    convention.

    > If I want to use other libraries in my library, can I just do "#include
    > <proto/graphics.h>" or do I need to open the library manually? If
    > latter, how do I define the library base? (global or within extended
    > type).

    If the library does not have a per-opener base you can use the automatic
    opening of libraries.
    If you use another library with a per-opener base in your library, you
    have to make your library also generate a libbase per-opener and put the
    other library's libbase in the extended section of your library.
    Additionally, you then have to manually open/close the other library
    every time your library is opened/closed. Another problem is that you
    also have to access the other library through the base in your extended
    section, then. As you can see, this is not easy, and I hope that what
    Fabio is working on will make this more automatic.

    > Are there limits for linker libraries which can used with the 'uselibs'
    > attribute?

    I don't think so, but I may not fully understand what you are getting at.
    Could you elaborate a little bit?

    > How do I write a library function which takes a pointer to a function as
    > argument (callback)? Do I need struct Hook?

    Again, normal function pointers can be passed and it is the task of the
    ABI to have compatibility. Of course nobody forbids you to use Hooks and
    this may be better if you plan to port to OS3/OS4/MorphOS.

    > Can I call all functions from dos.library in my library?

    If your library is called from a task and not a process, the same
    restrictions apply. I'm not aware of any more restriction but I'm not
    familiar enough with the DOS internals to be sure.

    ---

    > The macro for generating libraries has the uselibs attribute. Are there
    > limits to what linker libraries I can use here (I'm thinking about the
    > ROM/arosc issue)

    It's difficult to put a general statement here. It should be documented
    per library. I think most of these problems are solved now and you can
    link also ROM files with arosc. The only problem remaining with arosc is
    that if you have a library that uses arosc, the program using that
    library also has to open arosc.
    I did plan to reorganize the C library but Fabio wanted to do his work
    first so I'm waiting for Fabio.

    > Last question (I'm sure I can find the answer in the AROS source, but it
    > should be in the documentation): How can I overwrite InitLib, OpenLib,
    > CloseLib, ExpungeLib?

    In normal circumstances you don't overwrite these function, you register
    code that will be executed when the lib is initialized, opened, closed
    and expunged. That's the paragraph I'm writing ATM so have a little bit
    of patience.

    If you really want to use your own functions you can put the following
    in the config section of the .conf file:
    options noresident
    With this option, no struct Resident will be generated and no
    startup/expunge code; you have to implement everything yourself.
    This will not be covered in the tutorial as you only need it for very
    special occasions; currently only exec.library uses this option.

    ----

    > also... is there a comprehensive list of the "default" metatargets
    > used during AROS compilation ( in particular the ones performed for the
    > main "Make" target) .. I'm finding it hard to work out exactly what
    > goes where at the moment.

    From Makefile::

    all: makedirs tools mmake
            @$(CALL) $(MMAKE) AROS.AROS

    .DEFAULT :
            @$(CALL) $(MMAKE) AROS.$@


    CALL and MMAKE are set in config/make.cfg. CALL expands to "env <various
    environment variables", while MMAKE expands to the location of the mmake
    binary.

    So, calling "make foo" ends up running "mmake AROS.foo", while just
    "make" runs "mmake AROS.AROS"

    ----------

    > Now it's available in the main tree. Two notes on it:
    > 1. I'd like to know how to fetch SysBase correctly if I link the
    > binary without startup code. Using startup code currently breaks one
    > nice feature of this command - it's pure and can be made resident. I
    > remember my first attempt in trackdisk prefs failed.

    All the commands under C/ShellCommands are pure and can be made resident
    too. They too, don't use startup code.

    You just have to declare an "external struct ExecBase *SysBase" and
    compile and link. The loader will take care of replacing the references
    to SysBase with the correct address.

    ---------

    2. SysBase hack. If SysBase symbol is defined nowhere, the linker
    auto-defines it and assigns magic value 0x0515BA5E to it. ELF loader
    in AROS catches this symbol and places correct value into this
    variable. Older collect-aros also doesn't support it.
     The actual question is: why were these hacks invented? Currently my
    Assign starts with:

    AROS_UFH3(__used static int, Start,
              AROS_UFHA(char *, argstr, A0),
              AROS_UFHA(ULONG, argsize, D0),
              AROS_UFHA(struct ExecBase *, sBase, A6))
    {
            AROS_USERFUNC_INIT
            return Main(sBase);
            AROS_USERFUNC_EXIT
    }

    ------------

    > Provided that programs need to be recompiled anyway, with a little
    > modification of the existing source code things can work smoothly.
    >
    > Given that arguments are read by means of a structure... they just need
    > to be passed by means of a structure too. This would also provide with
    > arguments type checking, something the current system is lacking.
    >
    > Example:
    >
    >     DoMethod(obj, M_FOO, arg1, arg2, arg3)
    >
    > would be handled by these:
    >
    >     #define M_FOO_args M_FOO_whatever_is_the_structure_name
    >     typedef struct
    >     {
    >         ULONG methodid;
    >
    >         TYPE1 arg1;
    >         TYPE2 arg2;
    >         TYPE3 arg3;
    >     } M_FOO_whatever_is_the_structure_name;
    >
    > And then the generic DoMethod defined this way:
    >
    >     #define DoMethod(obj, mname, args...)                 \
    >      ({                                                   \
    >          M_FOO ## args __args = { mname, # __VA_ARGS__ }) \
    >          DoMethodA(obj, &__args);                         \
    >      })

    Let me clarify what is that would need to be modified in existing source
    codes: one would only have to had the M_FOO_args #definition, if the
    arguments structure is publicly available (as it happens in most cases),
    or one would also have to define the arguments structure, something
    which would be easily derivable by the known arguments that are passes
    to the methods.

    -------------

    do NEVER EVER compare ULONG against ~0
    -  if ((flags == ~0L) || !get(imgobj,MUIA_Bitmap_Width,&CI_BM_Width))
    +  if ((flags == (ULONG)~0) || !get(imgobj,MUIA_Bitmap_Width,&CI_BM_Width))

    ----

    The expression ~0UL/2 is platform-specific!!! On x86_64 it does
    not fit into ULONG!!!
    -       dir->usecount = ~0ul/2 + 1;
    +       dir->usecount = ((ULONG)~0)/2 + 1;

    -----

    > Looks like recursion.
    > I'm running out of ideas. What are the remaining possibilities?

    Are you including <proto/codesets.h> in the codesets library source
    code ?
    If so, be sure to define the global variable somewhere in the source
    without an extern statement in the source code otherwise it will try to
    open itself in the init code causing recursion. (And as always this is
    one of the points in my to-do list to improve).

    -------
    > This helped a bit, but now I'm getting an error on another place:

    Memory trashes aren't detected in real-time, so you can get error anywhere
    (or even never). But you can use C:CheckMem or AvailMem(MEMF_CLEAR) in
    code to track it down.

    My guess is that the library allocates a too small librarybase, because
    in codesets.conf I see:

      libbasetype struct LibraryHeader *

    which most likely should be:

      libbasetype struct LibraryHeader

    Sometimes it helps to look at auto-generated files:

      bin/linux-i386/gen/[...]/[...]/<libname>_start.c
      bin/linux-i386/gen/[...]/[...]/<libname>_libdefs.h

    and possibly modify them (add debug output). Of course if some
    files which those auto-generated files depend on are changed,
    they will be regenerated and your changes (debug output) will
    get lost.

    --------

    > I will post my test program when I get back home.

    Maybe check generated asm:

      objdump -d bin/[...]/readbattclock.o        /* asm code only */
      objdump -d -S bin/[...]/readbattclock.o     /* C source intermixed with asm code */

    ----

    > I'm stuck with the "TheBar" MCC port. Problem is that I need at some
    > point the class pointer (the return value of MUI_CreatCustomClass).
    >
    > The build system creates file TheBar_start.c with the line:
    >
    > TheBar_CLASSPTR_FIELD(LIBBASE) = MUI_CreateCustomClass((struct Library
    > *)LIBBASE, MUIC_Group, NULL, TheBar_DATA_SIZE, _Dispatcher);
    >
    > But how can I get this value?

    If you don't specify a variable to put the classptr in it will be stored
    in a static variable in the _start.c file.
    You can use a line with option classptr_field or classptr_var. The
    former is for putting it in a field of the libbase but then you also
    have to provide your own definition of the libbase with that field.
    The latter is to put it in a global variable.
    See workbench/hidds/graphics/graphics.conf for the first variation,
    workbench/classes/gadgets/texteditor/mcp/texteditor.conf for the second.


    -----

    > I'm not quite sure I understand what is happening with clib.  It
    > looks like it builds both libarosc and arosc.library.  But will this
    > technique cover both types of library?  If it matters, I am using
    > libarosc right now.

    For every libname.library made with %build_module, also a liblibname.a
    file is generated. This liblibname.a file contains code for auto-opening
    the library and stub functions for calling the functions of the library.
    This means that to use a shared library you only have to include the
    library proto include (e.g #include <proto/libname.h>) and link with the
    static link library (e.g. -llibname).
    arosc does not use %build_module (yet) but it has the same principle. So
    if you link with -larosc you are actually using arosc.library and the
    opening and initialization is done by the linked-in code.

    -------------

    If something is causing too much trouble and it's getting too annoying,
    try to disable its build for now by adding
    "ignoredir contrib/necessary/AHI" lines and similar to mmake.config.
    If something (like sound.datatype) depends on AHI you'll have to disable
    that, too.

    ---------

    By using nm on the .o files, you can see which library bases are used in
    the files. External variables start with a U.

    -------------

    > Do we actually have a common definition what AROS_HOST_CC,
    > AROS_KERNEL_CC and AROS_TARGET_CC need to actually do ?
    > Especially I get a feeling AROS_KERNEL_CC currently has different
    > meanings for different ports and host configurations. Can somebody make
    > this clear as then it would be easier to get a bug free configure.in
    > file.

    In brief, HOST_CC compiles the build tools, KERNEL_CC compiles AROS
    kernel components, GRUB etc., and TARGET_CC compiles code that runs
    within AROS.

    -------------

    > What does 'kernel component' actually mean ?

    I probably should have said just 'kernel'. I'm not sure which compiler
    is used for i386 kobjs for example.

    > Why is KERNEL_CC different from TARGET_CC ?

    Because you can't compile the kernel as if it's an AROS executable.
    TARGET_CC is either a wrapper around KERNEL_CC or a true cross-compiler
    built with crosstools.

    > Actually there should not be a difference because in theory you should
    > be able to choose between kobj or normal module at will. One port should
    > be able to have something in the kernel and another port should be able
    > to have it as a disk-based module.

    That's true for some ports, but for i386, the files linked into the kernel
    are different from the disk-based files. As I said though, I'm not sure if
    different compilers are used.

