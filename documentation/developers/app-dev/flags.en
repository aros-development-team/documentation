============================================
AROS Application Development Manual -- Flags
============================================

:Authors:   Nick Andrews, Matthias Rustler
:Copyright: Copyright (C) 2021, The AROS Development Team
:Status:    Unfinished
:Abstract:
    This document explains various AROS specific defines, compiler flags and
    linker flags which allow fine-tuning of the generated binaries and
    sometimes help to troubleshoot.


`Index <index>`__

.. Contents::


Preprocessor
============

Read-only
---------

These defines can be checked within the source code to query various system
aspects. Example::

    #ifdef __AROS__
    #warning "Yeah, we build for AROS"
    #else
    #warning "Sky is falling"
    #endif


__AROS__
    Check whether we build for AROS.

__i386__, __x86_64__, __mc68000__, __powerpc__, __arm__
    On which CPU we are running.

AROS_BIG_ENDIAN
    Is 0 on little endian and 1 on big endian systems.

There are many more which you can find in the "Developer/include/aros" directory.


Read/Write
----------

Example usage in a mmakefile.src::
    USER_CPPFLAGS := -DPOSIXC_NO_VAARGS

POSIXC_NO_VAARGS
    Makes it use ``#define fwrite __posixc_fwrite`` instead of
    ``#define fwrite(...) __posixc_fwrite(__VA_ARG__)``.

POSIXC_NOINLINE_VAARGS
    It's needed for c++ code. It prevents the defines and the inlines being
    used, and instead uses the c++ wrappers.

NO_POSIX_WRAPPERS
    Prevents posixc using the wrappers at all and passes through to
    stdcio for symbol definitions.


Compiler flags
==============

Example usage in a mmakefile.src::
    USER_CFLAGS := -noposixc

\-noposixc
    Only use functions from stdc.library


Linker flags
============

Example usage in a mmakefile.src::
    USER_LDFLAGS := -xxx

\-nix
    Enables unix style file name mangling. E.g. a path like
    ``/progdir/dir////file`` is converted to ``progdir:dir/file``.
    Note that some build-system macros have a parameter for
    setting this.


