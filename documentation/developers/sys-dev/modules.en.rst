==============================================
AROS Application Development Manual -- Modules
==============================================

:Authors:   Matthias Rustler (some parts copied from other documents)
:Copyright: Copyright (C) 2008-2010, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished
:ToDo:      Complete...

`Index <index>`__

.. Contents::



Introduction
============

Modules are shared binaries. Their main purpose is to deliver tables of
functions and classes for object-oriented access to GUI elements and
multimedia data.

Building modules consists of two parts:
+ a macro to use in mmakefile.src files
+ a configuration file that describes the contents of the module.



MetaMake
========

The build system has the macro "build_module" for the task of creating
modules. The parameters are:

``mmake=/A``
    This is the name of the metatarget that will build the module. Also a
    ``%(mmake)-quick`` and ``%(mmake)-clean`` metatarget will be defined.

``modname=/A``
    Name of the generated module without the suffix.

``modtype=/A``
    Type of the generated module. Possible values: library, mcc, mui, mcp,
    device, resource, gadget, datatype, hidd, usbclass, handler or hook.

``modsuffix``
    You don't normally need to specify this as the build system has a default
    suffix for every type of module.

``version``
    A string which will be appended to the version string of the module.

``conffile``
    The name if the configuration file. Default is <modname>.conf.

``files``
    A list of all the C source files, without the .c suffixes, that make up
    the code for this module. By default all the .c files in the current
    directory will be used.

``cxxfiles``
    A list of all the C++ source files, without the .c++ suffixes, that make up
    the code for this module. By default all the .c++ files in the current
    directory will be used.

``linklibfiles``
    A list of all the C source files, without the .c suffixes, that contain
    the code that needs to be added to the module linklib.

``linklibobjs``
    A list of all the object files, without the .o suffixes, that contain
    the code that needs to be added to the module linklib.

``cflags``
    The flags to use when compiling the .c files. By default the standard
    AROS cflags (e.g. ``$(CFLAGS)``) are taken. This also
    means that some flags can be added by assigning these to the
    USER_CFLAGS and USER_INCLUDES make variables before using this macro.

``dflags``
    The flags to add when doing the dependency check. Default is the same
    as the ``cflags``.

``objdir``
    The directory where to generate all the intermediate files. The
    default value is ``$(OBJDIR)`` which in itself is by default equal to
    ``$(GENDIR)/$(CURDIR)``.

``moduledir``
    Target directory. See table "Defaults" below.

``prefix``
    A prefix for the path where the "Development" directory will be created
    The generated headers and linklibs will be stored there.

``linklibname``
    The name to be used for the static link library that contains the
    library autoinit code and the stubs converting C stack calling
    convention to a call of the function from the library functable with
    the appropriate calling mechanism. These stubs are normally not needed
    when the AROS defines for module functions are not disabled.

    There will always be a file generated with the name
    ``$(LIBDIR)/lib%(linklibname).a`` and by default linklibname will be
    the same as modname.

``uselibs``
    A list of static libraries to add when linking the module. This is the
    name of the library without the `lib` prefix or the `.a` suffix and
    without the `-l` prefix for the use in the flags for the C compiler.

    By default no libraries are used when linking the module.

``usehostlibs``
    Same as ``uselibs`` but for static libraries of the host system.

``compiler``
    The compiler for building the module. Can be "target", "host" or
    "kernel". Defaults to "target" which creates binaries which run
    under AROS.

``nostartup``
    Defines whether the module should be linked with startup code. Defaults
    to "no".

``archspecific``
    If "yes" the module will be created in an architecture specific
    directory. Defaults to "no".


Module Types
============

``library``
    Collection of functions.

``usbclass``
    Driver for USB devices.

``mcc``
    MUI custom class.

``mui``
    MUI standard class.

``mcp``
    MUI preferences class. This kind of Zune classes are shown in the Zune
    preferences Editor.

``device``
    EXEC device driver.

``resource``
    Lightweight libraries.

``gadget``
    Intuition GUI elements. These are also known as BOOPSI gadgets (Basic
    Object-Oriented Programming System for Intuition).

``datatype``
    The datatypes system allows loading of all kind of data (graphics, music,
    text etc.) into your application.

``hidd``
    A HIDD is a Hardware Independent Device Driver - a collection of code
    that provides an interface to hardware that hides as many details of
    the hardware as practical.

``handler``
    DOS device driver.

``hook``
    FIXME


Configuration File
==================

The build system calls the tool "genmodule" in order to create some additional
C source and header files. This tool is driven be a configuration file which
allows to set a lot of options for the fine tuning of the generated files.
Configuration files contain named sections with definitions::

    ##begin <sectionname>
    <definitions>
    ##end <sectionname>

Sectionname can be "config", "cdef", "cdefprivate", "functionlist", "cfunctionlist",
"startup", "methodlist", "class", "handler", "interface" or "attributelist".


Section "config"
----------------

The lines in this section have all the same format::

    optionname string

with the string starting from the first non-white-space after optionname
to the last non-white-space character on that line.

``basename``
    Followed by the base name for this module. This will be used as a
    prefix for a lot of symbols. By default the modname specified in the
    makefile is taken with the first letter capitalized.

``libbase``
    The name of the variable to put the library base in. By default the
    basename will be taken with "Base" added to the end.

``libbasetype``
    The type to use for the libbase for internal use by the library code.
    E.g. the sizeof operator applied to this type has to yield the real
    size of the object. Be aware that it may not be specified as a pointer.
    By default 'struct Library' is taken.

``libbasetypeextern``
    The type to use for the libbase for code using the library externally.

``version``
    The version to compile into the module. This has to be specified as
    <major>.<minor>. By default 0.0 will be used.

``date``
    The date that this library was made. This has to have the format of
    DD.MM.YYYY. As a default the current date is taken.

``copyright``
    Example: ``copyright Copyright (C) 2006 Foobar team``

``forcebase``
    This will force the use of a certain base variable in the static
    link library for auto opening the module. Thus it is only valid for
    modules that support auto opening. This option can be present more than
    once in the config section and all these base variables will be in the
    link library. By default no base variable will be present in the link
    library.

``superclass``
    Name of the parent class. Example: ``superclass MUIC_Group``.

``superclass_field``
    FIXME

``residentpri``
    Sets the value of the rt_Pri field in struct Resident. Additionally,
    the resident flag is set:

    ======== ==============
    priority flag
    ======== ==============
    >=105    RTF_SINGLETASK
    >=-60    RTF_COLDSTART
    <-120    RTF_AFTERDOS
    ======== ==============
    
``options``
    Comma separated list of options. The defaults depend on the type of module.

    ``noautolib``
        Do not call the symbolsets. 

    ``noexpunge``
        Do not expunge the module.

    ``noresident``
        Do not create struct Resident.

    ``peropenerbase``
        Every time the library is opened a new address is returned. This is
        useful if you have defined ``libbasetypeextern``.

    ``pertaskbase``
        See comments in writestart.c of genmodule.

    ``includes``
        Create the module's public include headers (proto, clib, defines, inline).

    ``noincludes``
        Don't create public include headers.

    ``nostubs``
        Don't write the stubs file for the linker library.

    ``autoinit``
        Add code for automatic library opening to the linker library.

    ``noautoinit``
        Don't add code for automatic library opening to the linker library.

    ``resautoinit``
        Automatically setup the library functions in struct Resident.

    ``noopenclose``
        Do not add standard functions for opening and closing the module.

    ``selfinit``
        FIXME

``sysbase_field``
    Sets the name of the sysbase field in the library.

``seglist_field``
    Sets the name of the seglist field in the library.

``rootbase_field``
    Sets the name of the rootbase field in the library.

``classptr_field``
    Sets the name of the classptr field in the library.

``classptr_var``
    The variable which contains a pointer to the class is per default hidden.
    If you need to have access to this pointer you have to use this option,
    like::
    
        classptr_var MyClass

``classid``
    Public name of the class, either a string or a C macros. Examples::
    
        classid "gradientslider.gadget"
        classid AROSCHECKBOXCLASS

``classdatatype``
    Example: ``classdatatype struct Data``.

``beginio_func``
    Name of the beginio function of a device.

``abortio_func``
    Name of the abortio function of a device.

``dispatcher``
    Use this if you want to use a dispatcher which exists in
    the source code instead of one generated by the build system.

``initpri``
    Sets the priority of initialization if you have more than one class
    in a conf file. Use this if you want to ensure that a base class
    is initialized before a sub class. The class with the highest
    value is initialized first.

``type``
    Set the type of a class.
    "mcc", "mui", "mcp", "image", "gadget", "datatype", "usbclass", "class", "hidd"

``addromtag``
    Define the variable name of struct Resident.

``oopbase_field``
    Sets the name of the oopbase field in the library.

``rellib``
    See comments in genmodule's source.

``interfaceid``
    Sets the ID of the interface.

``interfacename``
    Sets the name of the interface.

``methodstub``
    FIXME

``methodbase``
    FIXME

``attributebase``
    FIXME

``handler_func``
    Sets the name of the handler function.


section "class"
---------------

You need "class" sections only when you want to define additional classes in
your module. If you create a module for e.g. a gadget a class for a gadget
is automatically created. This means you can use the definitions below
in the "config" section.

``type``
    Type of the class. Possible values: 
    
    ``mcc``
        See `Module Types`_.

    ``mui``
        See `Module Types`_.

    ``mcp``
        See `Module Types`_.

    ``image``
        BOOPSI image class.

    ``gadget``
        See `Module Types`_.
    
    ``datatype``
        See `Module Types`_.

    ``class``
        FIXME

    ``hidd``
        See `Module Types`_.

``superclass``
    See `Section "config"`_.

``superclass_field``
    See `Section "config"`_.

``classptr_field``
    See `Section "config"`_.

``classptr_var``
    See `Section "config"`_.

``classid``
    See `Section "config"`_.

``classdatatype``
    See `Section "config"`_.

``dispatcher``
    See `Section "config"`_.


Section "cdef"
--------------

In this section all the C code has to be written that will declare all the
type of the arguments of the function listed in the function. All valid C
code is possible including the use of #include.


Section "cdefprivate"
---------------------

Like "cdef" but for all declarations which must not be visible for the
module user.


Section "functionlist"
----------------------

In this section are all the functions that are externally accessible by
programs.
    
For stack-based argument passing, only a list of the functions has to be
given::

    ##begin functionlist
    void func1(LONG a, LONG b)
    int func2(char *s, ULONG a)
    ##end functionlist

For register-based argument passing, the names of the register have
to be given between parentheses::

    ##begin functionlist
    ULONG func5(ULONG a, STRPTR b) (D0,A0)
    ##end functionlist

There are some modifiers which influence the previously defined function.

``.alias``
    Define an alternate name for the function.

``.function``
    Define the real name of the function in the source code. Note that
    for register based function that name will be prefixed by basename
    and lvo.

``.cfunction``
    Adds a wrapper from a register based function to a C fucntion.

``.private``
    FIXME

``.novararg``
    Do not create a vararg wrapper for the function. By default that
    wrapper is generated for register based functions if:
    
    + The last letter of the function name is A; the vararg function name is
      the name without this letter A.
    
    + The function name ends in TagList; the vararg function name is TagList
      replaced with Tags.
    
    + The function name ends in Args and the name of the last argument to the
      function is args or arglist or a variation with other capitalization
      (Args, Arglist, ArgList, ...); the vararg function name is the name
      without the ending Args.
    
    + The type of the last argument is "struct TagItem \*"; the vararg
      function name is the name with Tags appended.

``.unusedlibbase``
    FIXME

There are some modifiers which influence the following functions.

``.skip``
    Every function gets an index number, the Library Vector Offset.
    With this tag you can increase the LVO without inserting empty
    lines in the "functionlist" section.

``.version``
    The function will be only available if the library is opened with
    at least that version.


Section "cfunctionlist"
-----------------------

Same as functionlist but with modifier ".cfunction" for each function.


Section "methodlist"
--------------------

Here you can list all you methods for an automatic creation of a dispatcher.
The real function name for a method "name" must become <basename>__<name>
in the source code.

There are some tags which influence the previously defined method.

``.alias``
    Alternative name for the method

``.function``
    Define the real name of the function in the source code.

``.interface``
    FIXME


Section "startup"
-----------------

The content will be written at the begin of autoinit.c which will be part
of the autostart linker library.


Section "handler"
-----------------

``.autodetect``
    FIXME

``.stacksize``
    FIXME

``.priority``
    FIXME

``.bootpri``
    FIXME

``.startup``
    FIXME

resident=
    FIXME

dosnode=
    FIXME

dostype=
    FIXME


Section "interface"
-------------------

FIXME


Section "attributelist"
-----------------------

FIXME


Defaults
========

Modules
-------

======== ================= =======
Type     Target directory  1st LVO
======== ================= =======
library  Libs              5
mcc      Classes/Zune      6
mui      Classes/Zune      6
mcp      Classes/Zune      6
device   Devs              7
resource Devs              1
gadget   Classes/Gadgets   5
datatype Classes/Datatypes 6
hidd     Devs/Drivers      5
======== ================= =======


Classes
-------

======== =================
Type     Superclass
======== =================
mcc      MUIC_Area
mui      MUIC_Area
mcp      MUIC_Mccprefs
image    IMAGECLASS
gadget   GADGETCLASS
datatype DATATYPESCLASS
class    ROOTCLASS
hidd     CLID_Root
======== =================

