================================================
AROS Application Development Manual -- Libraries
================================================

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



Building an AROS library
------------------------

Another type of binary often built for AROS is a shared library. First a basic
skeleton will be given of how to build a library; some handy extensions will
follow.


Basic library skeleton
""""""""""""""""""""""

A shared library is built with the ``%build_module`` macro with a line like
this::

  %build_module mmake=MetaTarget modname=mylib modtype=library files=SourceFiles

This macro can build different AROS module types, like devices, Zune classes,
HIDDs, etc., but in this text the focus is on shared libraries. Therefore,
the assumption is that you specify the ``modtype=library`` parameter.

The ``mmake`` and the ``files`` parameter act the same as for the
``%build_prog`` macro. Additionally to the meta-target `MetaTarget` and
`MetaTarget-quick`, also meta-targets `MetaTarget-includes`,
`MetaTarget-includes-quick` and `MetaTarget-linklib` are defined. This
allows to build just a subset of all the files normally generated. They will
most of the time be used to specify dependencies.

For building a shared library, more information is necessary than is given in
the ``%build_module`` macro. That extra information is stored in another file
that by default is called `mylib.conf` when ``modname=mylib`` is
specified. This file can contain a lot of information but for brevity only a
minimal example is shown. More information can be found in the
`reference section`__ of the ``%build_module`` macro. Here is an
example .conf file::

  ##begin config
  version 1.0
  ##end config

  ##begin functionlist
  void func1(LONG a, LONG b)
  int func2(char *s, ULONG a)
  ##end functionlist

As you can see this is a file with two sections, each section starting with
``##begin sectionname`` and ending with ``##end sectionname``. The section
``config`` is for providing the information about the library that AROS needs
to use the shared library and for giving options to influence the type of
module that will be built. In-depth discussion can be found in the `reference
section`__. The ``functionlist`` section gives a list of functions that will
be included in the library; the list consist of the function prototypes.
The order of the list is important because it will determine the location of
the function in the lookup table. Empty lines are important as well, as an
empty in this list will cause an empty slot in the table. Lines start with one
'#' character are considered comments, and are ignored without causing empty
slots in the library's lookup table.

If all this information is present and you then execute the command ``make
MetaTarget`` the following files will be generated ($(AROSDIR) corresponds
with the directory for the binary tree):

+ `$(AROSDIR)/Libs/mylib.library`: the module itself
+ several include files in `$(AROSDIR)/Development/include`, with the main
  include file `proto/mylib.h`. The latter file can be included, for the
  function prototypes, in code using the library.
+ `$(AROSDIR)/Development/lib/libmylib.a`: a static link library that can be
  linked to other code and that can take care of auto-opening the library
  and contains stub functions. When these functions are called it will
  redirect to the code in the library using the lookup table in the libbase.

__ modules
__ modules


Using non-standard types
""""""""""""""""""""""""

In the example given above, standard C variable type or standard exec types
were used for the arguments of the function. If you want to use your own
types or types defined in other include files, you will need to take extra
steps. This can be done in the ``cdef`` section, as shown in this example of
using a extra include file::

  ##begin config
  ...
  ##end config

  ##begin cdef
  #include <exec/semaphores.h>
  ##end cdef

  ##begin functionlist
  ...
  BOOL func3(struct SignalSemaphore *sig)
  ##end functionlist

The lines in the cdef structures are normal C code and they will be included
in the generated include files before the library's function prototypes. You
could also define your own structure like this::

  ##begin cdef
  struct MyStruct
  {
      ...
  };
  ##end cdef

  ##begin functionlist
  ...
  int func4(struct MyStruct *sig)
  ##end functionlist

When doing it this way the structure definition will be included in the
generated include files. The recommended way to do this in AROS, however,
is to have a separate header file for the definition, and then include that
header file. One way to do this is to define your own file, named
`libraries/mylib.h`, with the following contents::

  #ifndef __LIBRARIES_MYLIB_H
  #define __LIBRARIES_MYLIB_H

  struct MyStruct
  {
      ...
  };

  ...

  #endif /* __LIBRARIES_MYLIB_H */

This file is then copied as explained in `another paragraph`__ and then simply
included by the cdef section::

  ##begin cdef
  #include <libraries/mylib.h>
  ##end cdef

__ libraries#copying-include-files


Functions with m68k register passing
""""""""""""""""""""""""""""""""""""

The functions put into the library vector table up to now were regular C
functions. In the Amiga m68k days the parameters for library functions most
of the time were passed in registers and not on the stack. For backwards
compatibility it's possible to define functions where the arguments are passed
in m68k registers. When your library is compiled for m68k it will use the
specified registers, on other architectures different conventions will be used
either by using registers available on that CPU or by using stack-based
argument passing. Defining a function with m68k registers is done by adding
the registers to the line in the function list and using macros for the header
of the function in the source code. The line in the functionlist looks as
follows::

  ##begin functionlist
  ...
  ULONG func5(ULONG a, STRPTR b) (D0,A0)
  ...
  ##end functionlist

And the function in the source code is defined as follows::

  AROS_LH2(ULONG, func5,
      AROS_LHA(ULONG, a, D0),
      AROS_LHA(STRPTR, b, A0),
      struct Library *, MylibBase, 9, Mylib
  )
  {
      AROS_LIBFUNC_INIT

      ...

      AROS_LIBFUNC_EXIT
  }

This macro has the name AROS_LHn with n the number of arguments passed to the
function. The macros has the following arguments:

+ The function return type
+ The name of the function
+ The list of function arguments using the AROS_LHA(vartype, varname,
  register) macro. vartype is the type of the argument, varname is the name of
  the argument and register the m68k register to use. The register is
  specified as D0-D7 for numeric arguments and A0-A5 for pointer arguments (A6
  and A7 are reserved for other purposes).
+ The library base type. When you have not defined your own libbase type as
  explained in `this paragraph`__
+ The variable for the libbase, which can be used in the function for
  accessing the libbase
+ The number of the vector in the vector table. For libraries the first
  function in the functionlist has number 5, the next 6 and so on. Although
  this information is not necessary, because the functionlist in the .conf
  already determines this number, it's still required for legacy reasons.
+ The base name of the library. If this is not overridden in the config
  section of the .conf file it is equal to the name given to the ``modname``
  parameter with the first letter capitalized.

__ libraries#using-an-extended-libbase


Using an extended libbase
"""""""""""""""""""""""""

On AROS and other Amiga-like systems every shared library has a library base.
The base of a library contains the vector table and some data about the
library used by the OS. It can also be extended with user-defined data.
This can be done by providing your own C struct for the type of the libbase.
There are two config options that let you decide the type of the libbase::

  ##begin config
  ...
  libbasetype struct MyLibIntBase
  libbasetypeextern struct MyLibBase
  ...
  ##end config

``libbasetype`` is the type used internal in the library code, this type
also decides how much memory is allocated for the libbase. If this type is
not given ``struct Library`` is taken as default. ``libbasetypeextern`` is
the type by external programs using your library. Here too, ``struct Library``
is used as the default type. Both the internal and the external
type have to start with a ``struct Library`` structure. If an external type
is specified, the first part of the internal type has to be the same as the
external type.

To keep libraries backwards compatible, the external type of a library can not
be changed. Once a version of the library is released into the public, the
only possible modification is too extend the structure. The internal type
can be changed at will, provided all internal code of your library is adapted
to the new internal library structure.

The external type also has be exported to the users of your library. This
is the same as `the usage of other non-standard types`__. On the other hand,
the internal type is not meant to be exported to the users, which is why a
cdefprivate section can be put in the config file. This way the library
initialization code has all the information about your internal type without
having the internal structure publicly exported. A common convention is to
declare your internal structures in `mylib_intern.h` and then include this in
the ``cdefprivate`` section. The `mylib_intern.h` would then include the
following code::

  struct MyLibIntBase
  {
      struct Library base;

      ...
  };

And the config file the following section::

  ...
  ##begin cdefprivate
  #include "mylib_intern.h"
  ##end cdefprivate
  ...

__ ../app-dev/buildsystem#using-non-standard-types


Using a per-opener libbase
""""""""""""""""""""""""""

So far, in each case only one libbase would be created for a library. All
users who opened the library would get a pointer to the same library base.
Sometimes there's an advantage in having data that differs per opener of
the library. This can be accomplished by using a special option in the
``config`` section::

  ##begin config
  ...
  options peropenerbase
  ##end config

The use of a base per opener of the library does not make much sense when
not using `an extended libbase`__. Also, currently the only way to pass
the libbase to the functions of the library is to use
`m68k register passing`__.
(Development is under way to also be able to get the libbase in library
functions using the normal C argument passing). You could also add the
libbase as an explicit argument to the function but this is not encouraged.

.. Note:: On AROS the need for extended libbases is much less then on classic
          AmigaOS. On classic AmigaOS it was discouraged to use global
          variables in the library and to use the libbase for storing
          variables. On AROS global variables are handled fine so the
          `use of an extended libbase`__ is only needed for using a
          per-opener libbase.

__ libraries#using-an-extended-libbase
__ libraries#functions-with-m68k-register-passing
__ libraries#using-an-extended-libbase


Library initialization
""""""""""""""""""""""

In some cases, some initialization should be performed when a library is
loaded or when it is opened. For this, the same mechanism as for programs
can be used through the ADD2INIT and ADD2EXIT, as in the next example::

  static int InitFunc(void)
  {
      ...
  }

  static void ExitFunc(void)
  {
      ...
  }

  ADD2INIT(InitFunc, 0);
  ADD2EXIT(ExitFunc, 0);

When this code in added to a source file, the code in InitFunc will
be executed when the library is initialized and the code in ExitFunc when
the library is expunged. The return value of InitFunc indicates success or
failure, with a zero (== FALSE) value indicating a failure to initialize,
and the library will be unloaded again and not be usable. The ExitFunc
should not be able to fail, and thus has no return value.

Often part of the libbase should be initialized, and therefore the methods
discussed above are not appropriate. For libraries, additional ways are
available for adding initialization or clean-up code::

  static int InitFunc(struct Library *lh);
  ADD2INITLIB(InitFunc, 0);

  static int ExpungeFunc(struct Library *lh);
  ADD2EXPUNGELIB(ExpungeFunc, 0);

  static int OpenFunc(struct Library *lh);
  ADD2OPENLIB(OpenFunc, 0);

  static void CloseFunc(struct Library *lh);
  ADD2CLOSELIB(CloseFunc, 0);

The ``InitFunc`` function will be called once during initialization and the
``ExpungeFunc`` once during expunge of the module. ``OpenFunc`` and
``CloseFunc`` functions are called respectively every time the module is
opened or closed. ``InitFunc``, ``ExpungeFunc`` and ``OpenFunc`` return a
value indicating the success of the function. If InitFunc fails, the module
will be expunged, if ``OpenFunc`` fails, the opening of the library will fail,
and if ``ExpungeFunc`` fails, expunging the library will be delayed. If the
latter happens, the next time the expunge will be tried, again all registered
functions for expunge will be called. This means that if more then one
function is registered and the second function returns 0, the first function
will be called a second time the next time AROS tries to expunge the module.
If you implement an ``ExpungeFunc`` that can return a 0, you also have to be
sure that other ``ExpungeFunc``\s may be called more then once.

If you look at the ADD2...LIB macros above, you can also see that next to the
function name there is an extra number. This number indicates the priority
to call the function. A ``InitFunc`` or ``OpenFunc`` with a higher number will
be called after one with a lower number. For ``CloseFunc`` and
``ExpungeFunc`` the opposite order is used, e.g. higher numbers are called
before lower numbers. The number is a signed byte, which means it must have
a value from -128 to 127. Usually, this value can be kept at 0.

If a `per-opener base`__ is used, a copy will be made of your libbase
every time the module is opened. ``InitFunc``\s will be called before the copy
so initialization of values in the libbase will be seen by all the openers.
``OpenFunc``\s are called after the copy of the libbase and changes made to
libbase are thus private to the opener.

__ libraries#using-a-per-opener-libbase



Copying include files
---------------------

When writing a library, extra includes often have to be provided that can be
included by the programs using your library by using ``#include <...>`` in
the code. For this purpose a ``copy_includes`` macro is available. In the
following line the arguments are given for the macro with the default values::

  %copy_includes mmake=includes-copy includes=$(INCLUDE_FILES) path=. dir=

The arguments of the macro are as follows:

+ Similar to the macros earlier in this document, the ``mmake`` argument
  indicates the meta-target that will copy the includes. The default value
  is ``includes-copy`` so if the argument is not specified the includes
  will be copied by this meta-target.

+ ``includes``: these are the files to be copied in the system include
  directory. It may be a list that contains files in subdirectories. By
  default ``$(INCLUDE_FILES)`` is used. This means that you can put the
  list of the files to copy in the INCLUDE_FILES make variable.

+ ``path``: this argument allows you to copy the includes to a subdirectory
  of the system include directory. This name is added in front of the include
  files before they are copied so that the path is added in the include
  statement e.g. ``#include <path/...>``

+ ``dir``: this argument allows to strip a directory from the include files
  list before they are copied to the system include directory. This is often
  used to put the include files in a subdirectory called `include`. By then
  specifying the argument ``dir=include`` the include files are copied from
  this subdirectory but to a path in the system directory not containing the
  `include` directory.

Some examples to make this more clear:

+ Example 1: copy the \*.h files from the current directory to the system
  include directory::

    INCLUDE_FILES := $(wildcard *.h)
    %copy_includes mmake=MyIncludes

+ Example 2: copy the mylib.h file to the ``libraries`` directory::

    %copy_includes mmake=MyLib-includes includes=mylib.h path=libraries

  The programs can then use ``#include <libraries/mylib.h>`` to access your
  include file.

+ Example 3: copy files from the `include` subdirectory to the system include
  directory::

    INCLUDE_FILES := $(wildcard include/*.h)
    %copy_includes mmake=MyIncludes dir=include

  If then a file `include/myinclude.h` is available the programs don't use
  ``#include <include/myinclude.h>``m but rather``#include <myinclude.h>``.



Using non-core libraries in programs or libraries
-------------------------------------------------

Before programs or other libraries can use a library that is not part
of the core AROS libraries, they have to add it to the list of libraries to
use, by using the ``uselibs`` argument for the ``%build_prog`` or the
``build_module`` macro. So if you want your program to use the mylib library
you have to do it like this::

  %build_prog ... uselibs=mylib

For a library it looks the same::

  %build_module ... uselibs=mylib

