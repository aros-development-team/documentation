=============
Developer FAQ
=============

:Authors:   Kalamatee, Matthias Rustler
:Copyright: Copyright (C) 2021, The AROS Development Team
:Status:    Work in progress.

.. Contents::


How can I get rid of the linker error __LIBS__symbol_set_handler_missing?
-------------------------------------------------------------------------

You need to find which symbol causes it. If it's coming from utility.library
you have to add ``-D__UTILITY_NOLIBBASE__`` to the USER_CPPFLAGS.

When you include headers without ``-Dxx_NOLIBBASE`` it exposes a symbol that
makes the autoinit logic work. If you are handling the base yourself or build
a module which has a different startup behavior you don't want that.


How can I set the library base if it has been disabled by -Dxxx_NOLIBBASE?
--------------------------------------------------------------------------

If you have the required library base as element of another library you can
just do something like ``#define UtilityBase (DOSBase->dl_UtilityBase)``. 

If that isn't possible you have to open the library by yourself::

    struct Library *UtilityBase;
    ...
    UtilityBase = OpenLibrary("utility.library", version);

ROM modules might use the private function Tagged_OpenLibrary().


How to shrink the size of the Kickstart ROM for the amiga-m68k port?
--------------------------------------------------------------------

Get rid of the C runtime functions. Use replacement functions from exec.library
or utility.library, or use inline functions which you get by including
``<aros/crt_replacement.h>``.

Add ``-fno-builtin`` to the USER_CFLAGS. That prevents GCC to pull in symbols
like memset, abs etc.


How to run the unit test locally
--------------------------------

Copy some files::

    cd <srcdir>/scripts/nightly/autotest
    cp Test.cunit <arosdir>/S/Test
    cp Try <arosdir>/S/Try
    cp User-Startup.cunit <arosdir>/S/User-Startup

Restart AROS. The output is sent to DEBUG: which means on hosted the Console
from where you have started AROS. Note that AROS exits after running the script.
