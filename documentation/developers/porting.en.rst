=============
PORTING GUIDE
=============

:Authors:   Johann Samuellson, Matthias Rustler
:Copyright: Copyright © 2006, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Beta
:ToDo:      Some real world examples


.. Contents::



Introduction
============

This guide is about porting to AROS software that comes with configure or make
scripts, which is true for most of the open source software from the Linux
world. It's based on a `document`__ which was written by Johan Samuellson for
AmigaOS4.

__ https://www.os4depot.net/index.php?function=showfile&file=document/manual/spots-pfd.lha


What to port?
-------------

* The best supported programming language is C. Support for C++ lacks some
  features.

* Look what additional packages are required for the software you want to
  port. You cannot simply port when GUI toolkits are needed, like GTK or QT.
  Only software which runs under a console can be ported directly.

* When you would like to port games, look if they use `libSDL`__.
  But avoid software which requires OpenGL.

__ http://www.libsdl.org


Getting the SDK up to date
--------------------------

The easiest way to port to AROS is from a Linux box, because it usually has
all the needed development tools. Look in the `Development Guide`__
for some information on installing the SDK.

__ app-dev/introduction.html#compiling-on-linux-with-the-fake-gcc


The basics
----------

The first thing you do is to check how to build your project.
If there is a file called *configure* in the root directory of the archive,
it means you'll have to configure it for your platform. See the next chapter
for a description on how to do that. However, if the project doesn't have
a file called *configure*, look for a file called *Makefile*. Edit it to suit
AROS.

After the project is properly configured it's time to roll out the compiler.
Start building your project by typing ``make``.

If everything compiled and linked, you are ready to test your port. A very
common problem is that it won't find its datafiles, and crash. Fix the paths
as described in the path-fixing chapter, and try to run it again.

Strip the binaries in order to remove debugging information and making them
smaller.

OK, you're done now, upload it to https://archives.arosworld.org and
http://www.aminet.net



How to configure
================

On Linux, packages with a configure script are usually installed in 3 steps::

    ./configure
    make
    sudo make install

What makes configuring for AROS more difficult than e.g. for AmigaOS4 is the
fact that for AROS compiling is done with a cross compiler.

Type ``./configure --help`` to see what options are available. If configuring
fails try to disable some features.


Simple example
--------------

::

    ./configure CC=i386-aros-gcc \
    --build=local --host=i686-aros
    --disable-nls --without-x --without-pic --disable-shared

.. Hint::

    It makes sense to write the configure statement to a text file. This way
    re-run it is as easy as ``sh build.sh``. But before re-running the
    script, you'll have to do ``rm -f config.cache``, in order to reset the
    configuration process.


Here is an explanation of the options used above:

``CC=i386-aros-gcc``
    Use the AROS compiler. Otherwise the result will be a Linux binary.

``--build=local --host=i686-aros``
    Tells the configure script to cross-compile to i686-aros.

``--disable-nls --without-x --without-pic --disable-shared``
    Disables some features that AROS doesn't support.


.. Warning::

    Don't do ``sudo make install``, because this would install your
    application in Linux paths like */usr/local*.


SDL example (manual installation)
----------------------------------

The following example is for `Ltris`__, but it should be similar for other SDL
applications::

    ./configure CC=i386-aros-gcc  LDFLAGS="-nix" \
    --prefix=/PROGDIR \
    --build=local --host=i686-aros \
    --disable-nls --without-x --without-pic --disable-shared \
    --with-sdl-prefix=/usr/local/aros-sdk/i386-aros

``LDLAGS="-nix"``
    This enables Linux semantics for paths. Linux applications often use
    absolute paths to their data files. But an absolute Linux path like
    */usr/local/app* means for AROS: go one level up, then go into the
    *usr* directory.

``--prefix=/PROGDIR``
    Prefixes all paths with */PROGDIR*. Together with the *-nix* option this
    allows to use Linux paths when compiling and AROS paths when running.

``--with-sdl-prefix=/usr/local/aros-sdk/i386-aros``
    The configure script calls *sdl_config* to find out the required CFLAGS
    and LDFLAGS for SDL applications. Without this option it would call the
    Linux version of *sdl_config*, which would give wrong results.

After a successful run of the configure script and *make*, copy the ltris
binary and the data files in such a way that the binary finds the data files::

    ltris
        ltris (binary)
        share
            ltris
                gfx
                sounds


__ https://lgames.sourceforge.io/LTris/


SDL example (semi-automatic installation)
-----------------------------------------

The options will be nearly the same as above::

    ./configure CC=i386-aros-gcc  LDFLAGS="-nix" \
    --prefix=/PROGDIR --bindir=/PROGDIR \
    --build=local --host=i686-aros \
    --disable-nls --without-x --without-pic --disable-shared \
    --with-sdl-prefix=/usr/local/aros-sdk/i386-aros

``--bindir=/PROGDIR``
    Avoids that a subdirectory *bin* will be created.

Don't forget the *--prefix* option or it will install AROS files in some
Linux paths.

Now you can rebuild your project (``make distclean``, run the configure
script, ``make``). You could call ``sudo make install`` at this point, but
it's better to instead do the following steps:

+ sudo mkdir /PROGDIR
+ sudo chmod a+rwx /PROGDIR

This allows accessing */PROGDIR* without root rights. Now you can do
``make install`` which should install the game in */PROGDIR*. As this isn't a
good place you'll have to copy it to a place were AROS can reach it (e.g.
cp -r /PROGDIR ~/AROS/games/ltris).

Remember to do ``rm -rf /PROGDIR/*`` before you build another project.


Common errors that can occur when configuring
---------------------------------------------

You get errors like target or host i686-aros isn't available.

Solution:
    The *config.sub* script is probably old or doesn't exist. Run ``autoconf``
    in the root directory of the package. If this doesn't help, copy an actual
    version of the file *config.sub* from e.g. */usr/share/automake*.

.. _autoconf: http://ftp.gnu.org/gnu/autoconf/

I get errors like this:
    checking for IMG_Load in -lSDL_image... no

Solution:
    You're linking with static libraries, and need to tell exactly what
    to link in. Locate this line in the configure script::

        LIBS="-lSDL_image $LIBS"

    SDL_image depends on some more libraries to function correctly,
    add them like this::

        LIBS="-lSDL_image -lpng -ljpeg -lz $LIBS"


I get errors like this:
    checking for Mix_OpenAudio in -lSDL_mixer... no

Solution:
    You're linking with static libraries, and need to tell exactly what
    to link in. Locate this line in the configure script::

        LIBS="-lSDL_mixer $LIBS"

    SDL_mixer depends on some more libraries to function correctly,
    add them like this::

        LIBS="-lSDL_mixer -lvorbisfile -lvorbis -logg $LIBS"


The same thing also often happens when configure is searching for
SDL_ttf, and you know why by now. You need to specify some more libs that
SDL_ttf depends on. It needs -lfreetype and -lz. Proceed as before.

If you've added the needed dependencies to the configure script, and
it still doesn't work it can be due missing files in the SDK. E.g. the
SDL libs might not be included.

If it still doesn't work, and you are sure that you have the library
installed, try to remove the whole section where it checks
for the failing library in the configure file.
This is not recommended, but if there is no other way...

Now you should be ready to build your project. When porting Unix applications
always type ``make``.



Creating a makefile by hand
===========================

This makefile could be used if the build system is a mess and you want to
simplify it a bit. Alter it to fit your needs.
Usually you only need to modify an existing makefile, change the name of
the C compiler (otherwise it would create binaries for Linux) and add some
linklibraries.

Here's an explanation of what the flags do.

CC
    The name of the C compiler executable.

RM
    The name of the delete command.

STRIP
    The name of the strip command (used to remove debug data from exe files).

CFLAGS
    Tells the compiler where to find the includes (-I) etc.

LDFLAGS
    Tells the linker what libraries to include (-l) and where
    to find them (-L).

OBJS
    The compiler (GCC/G++) compiles object files (#?.o) from your .c
    files; the object files are later linked together to become an executable
    file. Specify the object filenames here.

OUTPUT
    The name of the final executable file.

::

    CC      = i386-aros-gcc
    RM      = rm
    STRIP   = i386-aros-strip --strip-unneeded --remove-section .comment
    CFLAGS  = -Wall -O2
    LDFLAGS = -nix -lsmpeg -lSDL_gfx -lSDL_net -lSDL_image -lpng -ljpeg -lz -lSDL_mixer \
              -lvorbisfile -lvorbis -logg -lSDL_ttf -lfreetype -lz -lsdl -lauto -lpthread -lm
    OBJS    = a.o b.o c.o
    OUTPUT  = test.exe

    all: $(OBJS)
            $(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $(OUTPUT)

    main.o: main.cpp main.h
            $(CC) $(CFLAGS) -c main.cpp

    strip:
            $(STRIP) $(OUTPUT)

    clean:
            $(RM) -f $(OBJS) $(OUTPUT)

Remember that you have to use tabulator chars before the command.



Using the build system
======================

The build system contains some scripts for configuring of packages. The big
advantage when using the build system is that you can easily port to different
AROS flavours.

+ %build_with_configure
+ %fetch_and_build
+ %fetch_and_build_gnu_development

Look in the file $(TOP)/config/make.tmpl for an explanation of the arguments.
In *$(TOP)/contrib/gnu* you can already find a lot of GNU packages.



Miscellaneous
=============

Converting Unix paths to AROS paths
-----------------------------------

How to convert Unix paths into AROS paths?

Solution:
    Change *getenv("HOME")* to *"/PROGDIR/"*

Examples::

    old: strcpy(path, getenv("HOME"));
    new: strcpy(path, "/PROGDIR/");

    old: strcpy(home,getenv("HOME"));
    new: strcpy(home,"/PROGDIR/");

    old: sprintf(rc_dir, "%s/.gngeo/romrc.d", getenv("HOME"));
    new: sprintf(rc_dir, "%sgngeo/romrc.d", "/PROGDIR/");

Notice that in the last example "/." was removed.

Paths to datadirs are often set during the configure process by issuing
*-DDATADIR=*. If this is the case, set it to *-DDATADIR=/PROGDIR/*
It's also common that the datadir are set in the makefiles. Locate *DATADIR=*
and change it to *DATADIR=/PROGDIR/*


Defines
-------

Defines are often set in *config.h*; if something is configured incorrectly,
you can often change it there by using *#define* and *#undef*.

A define example that considers all AmigaOS flavours::

    #ifdef __AMIGA__
        blah blah blah
    #else
        blah blah blah
    #endif

A define example that only considers AROS::

    #ifdef __AROS__
        blah blah blah
    #else
        blah blah blah
    #endif

A define example, that considers BeOS and AROS::

    #if !defined(__BEOS__) && !defined(__AROS__)

An example of a more complex #ifdef::

    #ifdef GP2X
        char *gngeo_dir="save/";
    #elif defined __AROS__
        char *gngeo_dir="/PROGDIR/save/";
    #else
        char *gngeo_dir=get_gngeo_dir();
    #endif

Some open-source packages are already adapted to Amiga-like operating systems.
If you find something like *#ifdef __AMIGA__* in the source you can try to add
the define to the config options (e.g. CFLAGS="-nix -D__AMIGA__").


Understanding error messages
----------------------------

Error: No return statement in function returning non-void
    There is no *return* in a function that needs a return.

Error: Control reaches end of non-void function
    It is reaching the end of a function that needs to return a value, but
    there is no return.

Error: May be used uninitialized in this function
    The variable is not initialized.

Warning: implicit declaration of function 'blah blah'
  You need to include a header.


Common errors
-------------

warning: incompatible implicit declaration of built-in function 'exit';
warning: incompatible implicit declaration of built-in function 'abort':

solution::

    #include <stdlib.h>

warning: implicit declaration of function 'strlen';
warning: incompatible implicit declaration of built-in function 'strlen':

solution::

    #include <string.h>

warning: implicit declaration of function 'memcpy';
warning: incompatible implicit declaration of built-in function 'memcpy':

solution::

    #include <string.h>

error: memory.h: No such file or directory:

solution::

    #include <string.h>

error: malloc.h: No such file or directory:

solution::

    #include <stdlib.h>

warning: incompatible implicit declaration of built-in function 'printf':

solution::

    #include <stdio.h>

warning: implicit declaration of function 'MyRemove':

solution::

    #define MyRemove Remove


Tips and tricks
---------------

How do I search for text strings using GREP?

::

    grep -R "I am looking for this" *

How do I make a DIFF file with my changes?

::

    diff originalfile.c mychangedfile.c >./originalfile.patch

My executeable is crashing, how do I debug it?
    Look in `Debugging manual <debugging>`_. You can use sys:utilities/snoopy
    to find out what your application tries to do.

How do I redirect GCC warnings and errors to a text file?

::

    make 2>warnings.txt

