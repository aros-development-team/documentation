============================================================
AROS Application Development Manual -- The AROS Build System
============================================================

:Authors:   Staf Verhaegen, Sebastian Rittau, Stefan Rieken, Matt Parsons,
            Adam Chodorowski, Fabio Alemagna, Matthias Rustler
:Copyright: Copyright (C) 1995-2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished
:ToDo:      Complete...

`Index <index>`__

.. Contents::

.. Warning::

    This guide has its last major revision begin November 2006. Changes
    to the build system after this date will not be reflected in this guide.


Introduction
============

Purpose of the AROS build system
--------------------------------

One may wonder why AROS needs a build system. The answer is that it
simplifies the building of more complex binaries and takes away a lot of the
manual work otherwise needed to compile, link and copy the files.
Additionally this system builds a dependency tree over a big source code
tree and will build the binaries in the right order so that all dependencies
are fulfilled when a certain binary is built. The build system also makes the
source code tree modular: you can add or remove certain directories and the
build system will adapt to these changes. (Of course, one always has to take
care not to delete code other parts still depend upon).




Components of the build system
------------------------------

AROS uses several development tools in its build system. A short list of
the most important components is:

+ *GNU make*: the GNU version of the make program.
  The task of this program is to regenerate an output file from its
  dependencies using a user-defined program, like a compiler, a text
  processor, etc. The main advantage over a normal list of commands is that
  it will check if anything has changed in the source files and save time by
  not redoing the command if it's not necessary.

  Familiarity with GNU make and it's input file syntax is not strictly
  necessary where a developer's need is covered by the high level macros
  discussed later in this paragraph.
  Where this is not the case, one can use GNU's makefile syntax directly.
  The usage of the GNU make program won't be discussed in these pages but
  the GNU info pages about the `make` program are a good source of
  documentation.
+ *MetaMake*: A make supervisor program. It can keep an overview of all
  makefiles which exist in subdirectories of a certain root directory.
  A more in-depth explanation is given below.
+ *genmf*: (generate makefile) A macro language for makefiles. It simplifies
  the writing of the makefiles by providing high level macros for easy
  building of binary files for AROS.
+ Several other tools will be used by the build instructions. These contain
  AROS- and non-AROS-specific tools. More explanation of these tools will be
  given when appropriate.

To illustrate how these tools interact which each other we will explain what
happens under the hood when you compile the HelloWorld program given in the
`previous chapter`__.

If you followed the tutorial for building the program with the build system
you first added the `local/helloworld` directory with some source files;
afterwards you called ``make local/helloworld`` in the top make directory.
During the execution of this command the following steps were taken:

+ The make program calls the MetaMake program with the following command
  ``mmake AROS.local-helloworld``. This instructs the MetaMake program to
  build the local-helloworld meta-target of the AROS project. If you build
  from the regular AROS source tree, AROS is the one and only project known
  to MetaMake.

+ The first thing MetaMake does when it is started, is to go over the source
  tree to see if there are directories added or deleted.

+ During the scanning of the directory tree MetaMake will also see if there
  are mmakefiles to be (re)generated. The program allows to generate a
  mmakefile from a mmakefile.src file. This feature is used by AROS to
  implement high level macros. In the helloworld example the ``%build_prog``
  macro was used. If you have followed the helloworld example you can have a
  look at the resulting build instructions in `local/helloworld/mmakefile`.
  MetaMake also detects whether a mmakefile.src is newer then the existing
  mmakefile and will regenerate it.

+ A last thing MetaMake does when scanning the source tree is collect the
  MetaMake targets from all available `mmakefile` files and the dependency
  between the MetaMake targets. In the helloworld example the
  meta-target was defined as ``local-helloworld``, by passing the argument
  ``mmake=local-helloworld`` to the ``%build_prog`` macro.
  If you look in the mmakefile you can see several lines starting with
  ``#MM``; these are the lines defining the meta-targets and the dependency
  between them. It is not necessary to understand the exact meaning of
  these statements to be able to use the high level build macros provided
  by AROS.

+ When MetaMake has gone through the source tree and collected all the
  information about the meta-targets it will (try to) build the specified
  meta-target. In the previous step the program has built a dependency tree
  of the meta-targets. Before building the specified meta-target it will
  first build the meta-targets it depends on. In our example there are no
  dependencies and it will directly build the program from `local/helloworld`
  by calling the GNU make program in that directory.

__ introduction#the-hello-world-program





Build system tutorial
=====================

In this section a description is given of the most important macros for AROS
application development. The purpose is not to give an in-depth discussion
but enough information to be able to perform most of the application
development needs. An in-depth discussion of the build tools is given in the
reference section in this manual.




Basic file syntax and set-up
----------------------------

As was seen in the helloworld example above you use the build system by
putting a `mmakefile.src` file in the directory containing your source
files. For the AROS build system to notice your file the directory
containing it has to be within the AROS main source directory (the name of
this top directory is most likely `AROS`). So for the moment you need to get
hold of the AROS source code to be able to use the build system which is
discussed in `another chapter`__. A good place to put your own source code
is in the `AROS/local` directory, as was done for the helloworld example.

An AROS `mmakefile` has to start with the following line::

  include $(SRCDIR)/config/aros.cfg

  ...

The start line will set the environment in the makefile for AROS
compilation. It has to be included because this environment is used by the
MetaMake macros.

After this first line, most of the time one or more calls to a ``genmf``
macro will follow. Such a macro has the following syntax::

  %macro param1=... param2=... ...

When the `mmakefile.src` file is translated into a `mmakefile` file  the line
above will be replaced with make commands defined by the macro. A macro is
called by it's name followed by zero or more parameters with an optional
value assigned to the parameter. The order of the parameters is not important
and not all parameters defined by a macro have to get values; a default value
will be used when a parameter is not provided. Some parameters may be
mandatory and an error message will be generated when it is left out.

One macro call can be spread over several lines by ending a line with a
backslash and continue the macro on the next line. So the example macro call
could have been written also as::

  %macro \
      param1=... \
      param2=... \
      ...

Normally no spaces are allowed in the values given to a parameter, if that
is needed one has to enclose the list by double quotes (").

The following chapters will discuss the more important high level commands.
Only the most important parameters for the macros will be treated there; a
list and description of all parameters of a macro will be given in the
reference section.

__ ../compiling




Building an AROS program
------------------------

You can build a program by using the following macro in your mmakefile.src
file::

  %build_prog mmake=MetaTarget progname=Prog files=SourceFiles

This will build a program named `Prog` from the list of `SourceFiles`. By
giving the ``mmake`` argument the `MetaMake` program will see that this
program can be built by `MetaTarget`; e.g. doing ``make MetaTarget`` in the
top AROS source directory will build the program. When typing this command
also the dependencies will be built every time you want to recompile this
module.
Additionally a `MetaTarget-quick` meta-target will be defined that allows to
build the program without the dependencies being rebuilt. This can save time
when you are changing the source code of a program and want to rebuild it
often.

The list of files `SourceFiles` are the name of the C input files without the
.c suffix. As explained above this list has to be enclosed by double quotes
if it contains more than one file.

By default, the program will have the same file path in the AROS binary tree
as its source files had in the source tree. This can be changed by specifying
the ``targetdir=...`` argument. The latter argument has to contain a full
path, so most of the time it will start with ``$(AROSDIR)/``, to put the
program somewhere in the binary AROS tree.

So, to put the program in the Extras directory you use this::

  %build_prog ... targetdir=$(AROSDIR)/Extras

As explained above the argument to a macro has to be enclosed in quotation
marks if it contains more then one file. Currently the list can't be
split over more then one line and often make variables are used to pass the
list of files to build. The next three examples do the same only with
different syntax. First: the in-line list version::

  %build_prog \
      mmake=myprog progname=MyProg \
      files="file1 file2 file3"

Second: Using a make variable::

  FILES := file1 file2 file3

  %build_prog \
      mmake=myprog progname=MyProg \
      files=$(FILES)

Third: Using the make line continuation::

  FILES := \
      file1 \
      file2 \
      file3

  %build_prog \
      mmake=myprog progname=MyProg \
      files=$(FILES)





Build system reference
======================

.. Warning::

   This reference manual is out of date and things have changed considerably.
   Please consult config/make.tmpl in the source code tree to see the
   current implementation.
   If you want to help updating this section, please contact us.




MetaMake
--------

Introduction
""""""""""""

`MetaMake` is a version of `make` which allows to recursively build targets
in the various directories of a project or even another project. It searches
a directory tree for makefiles and all makefiles it finds for "metatargets".
Then it tries to build all metatargets. You can also specify a program which
converts "source" makefiles into makefiles before `MetaMake` will invoke
`make`.



Syntax of the makefile
""""""""""""""""""""""

`MetaMake` uses normal makefile syntax but gives a special meaning to a
comment line that starts with ``#MM``. This line is used to define so called
metatargets. The name of the makefile itself is defined in the `MetaMake`
config file that is discussed in one of the following sections.

There exist three ways of defining a metatarget in a makefile:

+ This defines a metatarget with its meta-prerequisites::

      #MM metatarget : meta-prerequisites

  When a user asks to build this metatarget, first the meta-prerequisites will
  be build as metatargets and afterwards the given metatarget.

  This form also indicates that in this makefile also a makefile target is
  present with the same name. This makefile target has to be defined, yet.

+ This is the same definition as in the previous paragraph, but now no
  normal make target is present in the makefile with the same name as the
  metatarget. Using this 'virtual' metatargets speeds up the build because
  `make` isn't called with this target::

      #MM- metatarget : meta-prerequisites

+ This form defines both a metatarget and a `make` target with the same name.
  The prerequisites are no meta-prerequisites::

      #MM
      metatarget : prerequisites

The line for the definition of a metatarget can be spread over several lines
if you end every line with the \\ character and start the next line with
``#MM``.

You can define a metatarget with the same name in several files. The
meta-prerequisites are then gathered as if they were in a single entry.

If a metatarget is defined both with ``#MM`` and ``#MM-`` the ``#MM`` has
priority.



How MetaMake works
""""""""""""""""""

`MetaMake` is run by calling ``make`` in the root directory of the AROS source
tree.

At first `MetaMake` will build up a tree of all the makefiles present in
a root directory and all subdirectories. At the same time it will also build
a tree of all the metatargets and their dependencies.

Next it will build all the meta-prerequisites needed for this metatarget and
then finally the metatarget itself. Or viewed differently: every
meta-prerequisite is handled as a metatarget when it needs to be build. For
each of these metatargets a walk through of all the directories is done. In
every makefile where the metatarget is defined by the first or third way
from the previous section `make` is called with the name of the target as a
`make` target.

When `MetaMake` calls normal `make` also two variables are defined. $(TOP)
has the value of the root directory and $(CURDIR) the path relative to this
root directory.

Metatargets which aren't a prerequisite of another target aren't build by
default. If you want to build such a metatarget you have to type ``make``
`metatarget` in the root directory of the AROS source tree.



Auto-generated makefiles
""""""""""""""""""""""""

Another feature of `MetaMake` is automatic generating a makefile from a
source makefile. When the directory tree is scanned for all the makefiles in
every directory it is checked if a makefile is present with a .src suffix
added. If it is there and is newer than the makefile present in that
directory a script will be called to regenerate the makefile from the source
makefile. What script has to be called is defined in the configuration file.



Examples
""""""""

The next few examples are taken from the AROS project.


Example 1: Normal dependencies
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

::

    #MM contrib-regina-module : setup linklibs includes contrib-regina-includes

This example says that in this makefile a `contrib-regina-module` is exists
that has to be built. Before building this metatarget first the
metatargets `setup`, `linklibs`, ... have to be built; this ensures that the
includes, linklibs etc. will be present before this module will be built.


Example 2: Metatarget consisting of submetatargets
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

::

   #MM- contrib-freetype : contrib-freetype-linklib \
   #MM      contrib-freetype-graph \
   #MM      contrib-freetype-fonts \
   #MM      contrib-freetype-demos

Here, it actually says that the `contrib-freetype` metatarget requires the
building of `linklib`, `graph`, `fonts` and `demos` of `freetype`. If some
extra work needs to be done in the makefile where this metatarget is, the
definition can start with ``#MM`` and then a normal `make` target
`contrib-freetype` should be present in the makefile.

Also, the use of the line continuation for the metatarget definition is
demonstrated here.


Example 3: Quick building of a target
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

::

    #MM workbench-utilities : includes linklibs setup-clock-catalogs
    #MM
    workbench-utilities-quick : workbench-utilities

Normally, when a user executes `MetaMake` with as its argument
`workbench-utilities`, `make` will be called in every the directories where
the meta-prerequisites are included in the makefile. This can become quite
annoying when debugging programs. If the second metatarget
`workbench-utilities-quick` is defined as shown above, only that target will
be build in this directory. Of course, the user has then to be sure that the
metatargets on which `workbench-utilities` depend are up-to-date.



Configuration file
""""""""""""""""""

The `MetaMake` configuration file should have the path $(TOP)/mmake.config.
A short explanation of its content:

``[AROS]``
    Begins a config section for the project `AROS`.

``maketool $(HOST_MAKE) $(MKARGS) TOP=$(TOP) CURDIR=$(CURDIR) TARGET=$(TARGET)``
    Specifies the name of the tool to build a target. This is usually `make`.

``defaultmakefilename mmakefile``
    This defines `mmakefile` as name for `MetaMake` makefiles.

``genmakefilescript $(GENMF) $(TOP)/config/make.tmpl --listfile $(MMLIST)``
    `MetaMake` allows to generate makefiles with a script. The makefile
    will be regenerated if it doesn't exist, if the source file is
    newer or if the file specified with `genmakefiledeps` is newer.
    The name of the source file is generated by concatenating
    `defaultmakefilename` and ".src"

``genmakefiledeps $(GENMF) $(TOP)/config/make.tmpl``
    If this file is newer than the makefile, the given script will be
    executed.

``globalvarfile $(TOP)/bin/$(AROS_HOST_ARCH)-$(AROS_HOST_CPU)/gen/config/host.cfg``
    `MetaMake` will read this file and every variable in this file will
    be available everywhere where you can use a variable.

``genglobalvarfile sh $(TOP)/configure``
    This defines a script to regenerate the `globalvarfile`.

``ignoredir ...``
    This tells `MetaMake` to ignore these directories.




Genmf
-----

Introduction
""""""""""""

`Genmf` uses two files for generating a makefile. The first one is the macro
definition file and the second the source makefile (mmakefile.src) where
these macros can be used. The macros for AROS are in the file
$(TOP)/config/make.tmpl.



Syntax
""""""

In general the ``%`` character is used as the special character for genmf
source makefiles.


Macro definition
^^^^^^^^^^^^^^^^

A macro definition has the following syntax::

    %define macroname option1[=[default][\A][\M]] option2[=[default][\A][\M]] ...
    ...
    %end

`macroname` is the name of the macro. `option1`, `option2`, ... are the
arguments for the macro. These options can be used in the body of this
template by typing %(option1). This will be replaced be the value of option1.

The argument can be followed by a default value. If no default value is
specified an empty string is taken. Normally no spaces are allowed in the
default value of an argument. If this is needed this can be done by
surrounding the value with double quotes (``"``).

Also two switches can be added:

    ``\A``
        Is the switch to always require a value for this. When the macro is
        instantiated, it always needs a value to be assigned to this
        argument.

    ``\M``
        Is the switch to turn on multi-words. This also means that this has
        to be the final argument, as any argument specified after this would
        be swallowed by the multi-word.


Macro instantiation
^^^^^^^^^^^^^^^^^^^

The instantiation of the macro is done by using the '%' character followed
by the name of the macro to instantiate (without round brackets around it)::

    %macro_name [option1=]value [option2=]value

Two ways are possible to specify value for arguments to a macro:

    ``value``
        This will assign the first value to the first argument, the second
        value to the second argument, and so on.

    ``option1=value``
        This will assign the given value to the option with the specified
        name.

When giving values to arguments, again double quotes are required to include
spaces in the values of the arguments.

Macro instantiation may be used inside the body of a macro, even macros
that will only be defined later on in the macro definition file.

.. Note:: In the definition of the genmf rules sometimes `MetaMake`
          variables are used as default variables for an argument (e.g.
          ``dflags=%(cflags)``).
          This is not really possible in the definition file but is done by
          using text that has the same effect.





AROS application development macros reference
=============================================

High level mmakefile.src macros
-------------------------------

AROS standard MetaMake targets
""""""""""""""""""""""""""""""

The following metatargets are often used as prerequisite:

+ ``includes``: the \*.h files
+ ``linklibs``: static linker libraries

FIXME: complete

.. Note::

   These mega MetaMake targets were introduced in the beginning of the
   project. The usage of these metatargets is now considered as deprecated
   and should be avoided.

   One should try to use more specific targets for dependencies, e.g. if a
   certain program uses a certain library one should specify this library as
   a dependency of this program not all the linklibs by using the
   ``linklibs`` metatarget.



Building programs
"""""""""""""""""

There are two macros for building programs. One macro ``%build_progs``
that will compile every input file to a separate executable and one macro
``%build_prog`` that will compile and link all the input files into one
executable.


Macro %build_progs
^^^^^^^^^^^^^^^^^^

This macro will compile and link every input file into a separate executable
and has the following definition::

    %define build_progs mmake=/A files=/A \
        objdir=$(GENDIR)/$(CURDIR) targetdir=$(AROSDIR)/$(CURDIR) \
        cflags=$(CFLAGS) dflags=$(BD_CFLAGS$(BDID)) ldflags=$(LDFLAGS) \
        uselibs= usehostlibs= usestartup=yes detach=no

With the following arguments:

    ``mmake=/A``
        This is the name of the metatarget that will build the programs.
        Also a ``%(mmake)-quick`` metatarget will be defined.

    ``files=/A``
        The base-names of the C source files that will be compiled and linked
        to executables. For every name present in this list an executable
        with the same name will be generated.

    ``objdir=$(GENDIR)/$(CURDIR)``
        The directory where the compiled object files will be put.

    ``targetdir=$(AROSDIR)/$(CURDIR)``
        The directory where the executables will be placed.

    ``cflags=$(CFLAGS)``
        The flags to add when compiling the .c files. By default the standard
        AROS cflags (the ``$(CFLAGS)`` make variables are taken. This also
        means that some flags can be added by assigning these to the
        USER_CFLAGS and USER_INCLUDES make variables before using this macro.

    ``dflags=%(cflags)``
        The flags to add when doing the dependency check. Default is the same
        as the ``cflags``.

    ``ldflags=$(LDFLAGS)``
        The flags to use when linking the executables. By default the
        standard AROS link flags will be used.

    ``uselibs=``
        A list of static libraries to add when linking the executables. This
        is the name of the library without the `lib` prefix or the `.a`
        suffix and without the `-l` prefix for the use in the flags for the
        C compiler.

        By default no libraries are used when linking the executables.

    ``usehostlibs=``
        A list of static libraries of the host to add when linking the
        executables. This is the name of the library without the `lib`
        prefix or the `.a` suffix and without the `-l` prefix for the use in
        the flags for the C compiler.

        By default no libraries are used when linking the executables.

    ``usestartup=yes``
        Use the standard start-up code for the executables. By default this
        is yes and this is also what someone wants most of the time. Only
        disable this if you know what you are doing.

    ``detach=no``
        Whether the executables will run detached. Defaults to no.


Macro %build_prog
^^^^^^^^^^^^^^^^^

This macro will compile and link the input files into an single executable
and has the following definition::

    %define build_prog mmake=/A progname=/A files=%(progname) asmfiles= \
        objdir=$(GENDIR)/$(CURDIR) targetdir=$(AROSDIR)/$(CURDIR) \
        cflags=$(CFLAGS) dflags=$(BD_CFLAGS$(BDID)) ldflags=$(LDFLAGS) \
        aflags=$(AFLAFS) uselibs= usehostlibs= usestartup=yes detach=no

With the following arguments:

    ``mmake=/A``
        This is the name of the metatarget that will build the program. Also
        a ``%(mmake)-quick`` metatarget will be defined.

    ``progname=/A``
        The name of the executable.

    ``files=``
        The base-names of the C source files that will be compiled and linked
        into the executable. By default just the name of the executable is
        taken.

    ``asmfiles=``
        The assembler files to assemble and include in the executable. By
        default no asm files are included in the executable.

    ``objdir=$(GENDIR)/$(CURDIR)``
        The directory where the compiled object files will be put.

    ``targetdir=$(AROSDIR)/$(CURDIR)``
        The directory where the executables will be placed.

    ``cflags=$(CFLAGS)``
        The flags to add when compiling the .c files. By default the standard
        AROS cflags (the ``$(CFLAGS)`` make variable) are taken. This also
        means that some flags can be added by assigning these to the
        USER_CFLAGS and USER_INCLUDES make variables before using this macro.

    ``dflags=%(cflags)``
        The flags to add when doing the dependency check. Default is the same
        as the ``cflags``.

    ``aflags=$(AFLAGS)``
        The flags to add when compiling the asm files. By default the
        standard AROS aflags (e.g. ``$(AFLAGS)``) are taken. This also
        means that some flags can be added by assigning these to the
        SPECIAL_AFLAGS make variable before using this macro.

    ``ldflags=$(LDFLAGS)``
        The flags to use when linking the executable. By default the
        standard AROS link flags will be used.

    ``uselibs=``
        A list of static libraries to add when linking the executable. This
        is the name of the library without the `lib` prefix or the `.a`
        suffix and without the `-l` prefix for the use in the flags for the
        C compiler.

        By default no libraries are used when linking the executable.

    ``usehostlibs=``
        A list of static libraries of the host to add when linking the
        executable. This is the name of the library without the `lib` prefix
        or the `.a` suffix and without the `-l` prefix for the use in the
        flags for the C compiler.

        By default no libraries are used when linking the executable.

    ``usestartup=yes``
        Use the standard start-up code for the executables. By default this
        is yes and this is also what someone wants most of the time. Only
        disable this if you know what you are doing.

    ``detach=no``
        Whether the executable will run detached. Defaults to no.



Common
""""""

    %define common

This adds some common stuff to the makefile, like a `clean` target. The
`clean` target only deletes generated makefiles.



Building catalogs
"""""""""""""""""

The definition of the macro is as follows::

    %define build_catalogs mmake=/A name=/A subdir=/A \
      catalogs="$(basename $(wildcard *.ct))" source="../strings.h" \
      description="$(basename $(wildcard *.cd))" dir=$(AROS_CATALOGS) \
      sourcedescription="$(TOOLDIR)/C_h_orig"

With the meaning of the arguments as follows:

    ``mmake=/A``
        This is the name of the metatarget that will build the catalogs.
        Also a ``%(mmake)-clean`` metatarget will be defined.

    ``name=/A``
        This is the name of the destination catalog, without the .catalog
        suffix.

    ``subdir=A``
        This is the destination subdir of the catalogs.

    ``catalogs``
        This is the list of catalogs, without the .ct suffix (default \*.ct)

    ``source``
        This is the path to the generated source code file. The default value
        creates the file `strings.h` in the parent directory. Remember that
        generated files must not be committed to SVN.

    ``description``
        This is the catalog description file (.cd) (default \*.cd).

    ``dir``
        This is the base destination directory (default $(AROS_CATALOGS)).

    ``sourcedescription``
        This is the path to the FlexCat's source description file, without
        the .sd suffix.

Example::

    %build_catalogs mmake=workbench-system-wanderer-tools-info-catalogs \
    name=Info subdir=System/System/Wanderer/Tools



Building icons
""""""""""""""

Creates icons. The images must be in `PNG` or `ILBM` format. The icon is
configured from an additional text file with the name %(iconname).info.src.
You can find the documentation of this file in
$(TOP)/tools/ilbmtoicon/README

The definition of the macro is as follows::

    %define build_icons mmake=/A icons=/A dir=/A

With the meaning of the arguments as follows:

    ``mmake``
        This is the name of the metatarget. Also a
        ``%(mmake)-clean`` metatarget will be defined.

    ``icons``
        This is a list of icon base names (without the .info suffix).

    ``dir``
        This is the destination directory.

Example::

    %build_icons mmake=workbench-system-wanderer-tools-newdrawer-icons \
    icons=newdrawer dir=$(AROS_WANDERER)/Tools

The definition file has the name newdrawer.info.src.



Building static link-libraries
""""""""""""""""""""""""""""""

Building link-libraries is straight-forward. A list of files will be
compiled or assembled and collected into a link library in a specified
target directory.

The definition of the macro is as follows::

    %define build_linklib mmake=/A libname=/A files="$(basename $(wildcard *.c)) \
      asmfiles= objs= cflags=$(CFLAGS) dflags=%(cflags) aflags=$(AFLAGS) \
      objdir=$(OBJDIR) libdir=$(LIBDIR)

With the meaning of the arguments as follows:

    ``mmake=/A``
        This is the name of the metatarget that will build the linklib.

    ``libname=/A``
        The base name of the library to generate. The file that will be
        generated will be called lib%(libname).a

    ``files=$(basename $(wildcard *.c))``
        The C files to compile and include in the library. By default all
        the files ending in .c in the source directory will be used.

    ``asmfiles=``
        The assembler files to assemble and include in the library. By
        default no asm files are included in the library.

    ``objs=``
        Additional objects to link into the linklib. The objects have to be
        given with full absolute path and the .o suffix.

    ``cflags=$(CFLAGS)``
        The flags to use when compiling the .c files. By default the standard
        AROS cflags (e.g. ``$(CFLAGS)``) are taken. This also
        means that some flags can be added by assigning these to the
        USER_CFLAGS and USER_INCLUDES make variables before using this macro.

    ``dflags=%(cflags)``
        The flags to add when doing the dependency check. Default is the same
        as the ``cflags``.

    ``aflags=$(AFLAGS)``
        The flags to add when compiling the asm files. By default the
        standard AROS aflags (e.g. ``$(AFLAGS)``) are taken. This also
        means that some flags can be added by assigning these to the
        SPECIAL_AFLAGS make variable before using this macro.

    ``objdir=$(OBJDIR)``
        The directory where to generate all the intermediate files. The
        default value is ``$(OBJDIR)`` which in itself is by default equal to
        ``$(GENDIR)/$(CURDIR)``.

    ``libdir=$(LIBDIR)``
        The directory to put the library in. By default the standard library
        directory ``$(LIBDIR)`` will be used.



Compiling arch- and/or CPU-specific files
"""""""""""""""""""""""""""""""""""""""""

In the previous paragraph the method was explained how a module can be built
with the AROS genmf macros. Sometimes someone wants to replace certain files
in a module with an implementation only valid for a certain arch or a certain
CPU.


The macro definition
^^^^^^^^^^^^^^^^^^^^

Arch-specific files are handled by the macro called %build_archspecific and
it has the following header::

    %define build_archspecific mainmmake=/A maindir=/A arch=/A files= asmfiles= \
    cflags=$(CFLAGS) dflags=%(cflags) aflags=$(AFLAGS) compiler=target

The explanation of the argument to this macro:

    ``mainmmake=/A``
        The mmake of the module from which someone wants to replace files or
        to which to add additional files.

    ``maindir=/A``
        The directory where the object files of the main module are stored.
        The is only the path relative to $(GENDIR). Most of the time this is
        the directory where the source files of the module are stored.

    ``arch=/A``
        The architecture for which these files have to be build. It can
        have three different forms: ARCH-CPU, ARCH or CPU. For example, when
        linux-i386 is specified, these files will only be built for the linux
        port on i386. With ppc it will be build for all PowerPC processors and
        with linux it will be build for all Linux ports.

    ``files=``
        The base-names of the C source files to replace or to add to the
        module.

    ``asmfiles=``
        The base-names of the asm source files to replace or to add to the
        module.

    ``cflags=$(CFLAGS)``
        The flags to add when compiling the .c files. By default the standard
        AROS cflags (the ``$(CFLAGS)`` make variables are taken. This also
        means that some flags can be added by assigning these to the
        USER_CFLAGS and USER_INCLUDES make variables before using this macro.

    ``dflags=%(cflags)``
        The flags to add when doing the dependency check. Default is the same
        as the ``cflags``.

    ``aflags=$(AFLAGS)``
        The flags to add when assembling the asm files. By default the
        standard AROS cflags (the ``$(AFLAGS)`` make variable) are taken.
        This also means that some flags can be added by assigning these to
        the SPECIAL_AFLAGS make variable before using this macro.

    ``compiler=target``
        Indicates which compiler to use when compiling C source files.
        Can be either target or host to use the target compiler or the
        host compiler. By default the target compiler is used.


Code shared by different ports
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

A second macro called %rule_archalias allows to create a virtual
architecture. Any code for that virtual architecture can be shared between
several other architectures. Most likely this is used for code that uses an
API that is shared between several architecture but not all of them.

The macro has the following header::

    %define rule_archalias mainmmake=/A arch=/A alias=/A

With the following arguments

    ``mainmmake=/A``
        The mmake of the module from which someone wants to replace files or
        to which to add additional files.

    ``arch=/A``
        The arch someone wants to make alias from.

    ``alias=/A``
        The arch someone wants to alias to.


Examples
^^^^^^^^

1. This is an extract from the file config/linux/exec/mmakefile.src that
   replaces the main init.c file from exec with a linux specialized one::

       %build_archspecific \
         mainmmake=kernel-exec maindir=rom/exec arch=linux \
         files=init compiler=host

2. For the dos.library some arch-specific files are grouped together in the
   Unix arch. The following lines are present in the several mmakefiles to
   make this possible

   In config/linux/mmakefile.src::

       %rule_archalias mainmmake=kernel-dos arch=linux alias=unix

   In config/freebsd/mmakefile.src::

       %rule_archalias mainmmake=kernel-dos arch=freebsd alias=unix

   And finally in config/unix/dos/mmakefile.src::

       %build_archspecific \
         mainmmake=kernel-dos maindir=rom/dos \
         arch=unix \
         files=boot \
         compiler=host

The file $(TOP)/config/make.tmpl contains more macros. See the comments in
that file for their usage.




Lower level mmakefile.src macros
---------------------------------

FIXME




AROS portable makefile variables
--------------------------------

The file $(TOP)/config/make.cfg is usually included in all makefiles. It
contains a lot of variables which are often used in these makefiles. The most
important are the absolute paths for standard directories (e.g. `AROS_C`)
and names for tools (e.g. `MMAKE`, `GENMF`).

Platform-dependent definitions can be found in:

+ $(TOP)/bin/$(AROS_HOST_ARCH)-$(AROS_HOST_CPU)/gen/config/host.cfg
+ $(TOP)/bin/$(AROS_HOST_ARCH)-$(AROS_HOST_CPU)/gen/config/target.cfg

