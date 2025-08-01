==============
Compiling AROS
==============

:Authors:   + Flavio Stanchina
            + Henning Kiel
            + Bernardo Innocenti
            + Lennard voor den Dag
            + Aaron Digulla
            + Adam Chodorowski
            + Neil Cafferkey
:Copyright: Copyright (C) 2001-2025, The AROS Development Team
:Status:    Done.
:Abstract:
    This document provides information and advice on how to compile AROS. Development of AROS is
    possible in two ways. One way is to use a Linux, FreeBSD or Mac OS X
    system to cross-compile AROS. The other is to perform the compilation
    directly under AROS. Both methods are explained below.

.. Contents::

Requirements
============

The following software is required for compiling AROS:

+ GCC 3.2.2+
+ GNU Binutils
+ GNU Make
+ GNU AWK (GAWK) - other awks may also be suitable
+ Python 3
+ Python-Mako 3
+ Bison
+ Flex 2
+ pngtopnm and ppmtoilbm (part of the netpbm package)
+ Autoconf 2.61+
+ Automake
+ CMake
+ gperf
+ Patch
+ sed
+ Perl
+ Switch.pm
+ C library development files (libc)
+ Common utilities, like cp, mv, sort, uniq, head, ...

To compile the hosted Linux or FreeBSD ports, the following are
also required:

+ X11 or SDL development headers and libraries
+ OpenGL development headers and libraries

To build the ISO image of the i386-pc or x86-64-pc ports with the GRUB 2
bootloader (the default), the following is also required:

+ ncurses



Mac OS X
--------

OS-X-hosted and PC-native versions of
AROS can be cross compiled under OS X. There are several additional
requirements for compiling AROS on this platform.
Firstly, these software packages must be installed:

+ XCode
+ MacPorts
+ XQuartz (not needed for native AROS)

The following MacPort packages then need to be installed to complete the
set of required software listed earlier:

+ netpbm
+ cdrtools (not needed for hosted AROS)
+ gawk
+ py-pil
+ wget
+ gsed
+ cmake
+ autoconf (may not be needed with some versions of XCode)
+ automake

These can be installed with, for example::

    > sudo port install netpbm



Sources
=======

You can download the AROS sources either from the `download page`__ or by
using Git (see `git documentation`__).

Extract or download ``source`` package sources into a directory of your
choice. If you want to build contributed software as well, download and
extract ``contrib`` package sources into a ``./contrib`` subdirectory
of your ``source`` package directory tree.

__ {{ devdepthpath }}download
__ {{ devdepthpath }}{{ devdocpath }}git




Building
========

Configuring
-----------

There are two ways to build AROS. The preferred method is described in the
Appendix: Building AROS in different directories. Here, however, we will
build AROS within the source directory. To do this we will first need to
configure the AROS build using the following steps::

    > cd AROS
    > ./configure

You can specify several options to configure. The following options are
available for all targets:

``--enable-debug=LIST [default: none]``
    Enable different types of debug. Commas or white space can be used to
    separate the items in the list. If no list is provided then ``all`` is
    assumed. If ``--enable-debug`` is not specified at all, ``none`` is the
    default. Available types:

    ``none``
        Disables all debug types, and debugging in general.

    ``all``
        Enables all debug types below.

    ``stack``
        Enables stack debug.

    ``mungwall``
        Enables mungwall debug.

    ``modules``
        Enables modules debug.

``--enable-ccache``
    Enable using ccache on the host to improve compilation times, particularly
    when recompiling files with the same options.

``--with-portssources=DIR``
    External sources downloaded by the build system will be stored in DIR,
    so that it can be cached/shared/preserved between builds.

``--with-c-compiler=<host c compiler> [default: autodetected]``
    Specifies the host c compiler to use when compiling code to run on the build host.

``--with-cxx-compiler=<host c++ compiler> [default: autodetected]``
    Specifies the host c++ compiler to use when compiling code to run on the build host.

``--with-optimization=FLAGS``
    Specifies the optimization FLAGS to use when compiling AROS.

``--with-paranoia=(yes|no|FLAGS) [default: -Wall -Werror]``
    Specifies compiler warning FLAGS to enable for paranoia builds.

``--with-toolchain=TOOLCHAINFAMILY [default: gnu]``
    Specifies the TOOLCHAINFAMILY whos cross compiler toochain will be created to
    build AROS.
    Currently the Following options are available:

    ``llvm``
        Uses the LLVM/Clang toolchain to build AROS

    ``gnu``
        Uses the GNU/GCC toolchain to build AROS. Additonaly, the following configure options
        are accepted when using the "gnu" toolchain...

        ``--with-binutils-version=VER [default: 2.23.2]``
            Specifies a specific version of the GNU Binutils package to use for crosscompiling and
            generating native binaries. Suitable patches must be available
            (patches are present for binutils 2.25 and 2.30)

        ``--with-gcc-version=VER [default: 4.6.4]``
            Specifies a specific version of the GNU GCC compiler to use for the cross compiler
            and native compiler. Suitable patches must be available 
            (patches are present for GCC 6.3.0 and 8.1.0)

        ``--enable-coverage``
            Enables coverage instrumentation support for programs built in the build system (gcov)

        ``--enable-lto (experimental)``
            Enables Link Time Optimization(s)

Running ``./configure --help`` will give details of further additional options.


Hosted AROS/i386-linux and AROS/i386-freebsd
""""""""""""""""""""""""""""""""""""""""""""

You do not have to specify the ``--target`` option to build these targets.
The following options are available for hosted builds:

``--with-resolution=WIDTHxHEIGHTxDEPTH [default: initial Workbench screen]``
    Set the default resolution and depth AROS will use.

``--enable-x11-shm [default: auto]``
    Enable usage of the X11 MIT-SHM extension. Enabling it gives a
    significant performance gain, but it might not work very well if you are
    using a remote display.

You cannot cross compile these ports, although you can build 32-bit 
versions on a 64-bit host by providing an option such as 
``--target=linux-i386``.


Native AROS/i386-pc
"""""""""""""""""""

To build the native i386-pc port, configure must be called with the following
option:

``--target=pc-i386``.

Additionally, the following i386-pc-specific options are available:

``--with-serial-debug=N [default: disabled]``
    Enable serial debug, sending the output to port ``N``.

``--with-bootloader=NAME [default: grub2]``
    Use a specific bootloader.



Compiling
---------

To start the compilation, simply run::

    > make

If this doesn't work after a Git pull, you can try::

    > make clean
    > rm -rf bin/
    > ./configure {options}
    > make

If you use FreeBSD or some other system that does not use GNU Make as the
system make, then you should substitute the GNU Make command for the above.
For example, under FreeBSD you'll have to install the GNU Make port, then
run::

    > gmake

After you've made "make" once, and some changes were made to the files, you
can use quick compilation of changes using a ``make <target-name>-quick``
command.


Hosted AROS/i386-linux or AROS/i386-freebsd
"""""""""""""""""""""""""""""""""""""""""""

If you are building a hosted i386-linux or i386-freebsd build, you should
additionally also run the following to properly set-up the keyboard support::

    > make default-x11keymaptable


Native AROS/i386-pc
"""""""""""""""""""

If you are building the native i386-pc port, you should complete
compilation by creating a bootable ISO image::

    > make distfiles

The ISO image can be found at ``distfiles/aros-pc-i386.iso``.




Building AROS on AROS
=====================

It's possible to build i386-pc and x86_64-pc AROS on
AROS. Only building on SFS partitions is currently possible. To do this,
you need to install a few additional packages from The AROS Archives (file
names for i386 architecture):

* autoconf-2.62.i386.tar.gz
* automake-1.9.6.all.tar.gz
* perl-5.7.2.i386-aros.tar.gz
* python-2.5.2.i386-aros.tar.gz

Install these packages by unpacking them in the parent directory of
Development::

    > CD Development:/
    > tar -xzf RAM:autoconf-2.62.i386.tar.gz
    > tar -xzf RAM:automake-1.9.6.all.tar.gz
    > tar -xzf RAM:perl-5.7.2.i386-aros.tar.gz
    > tar -xzf RAM:python-2.5.2.i386-aros.tar.gz

Now download and unpack the AROS source code and contributed software source
code. To unpack, you need to have bzip2 installed. In nightly builds it
should be present in Extras:Misc/aminet/C/bzip2. Instead of using bzip2 to
manually unpack sources you can copy bzip2 to bin: and let tar take care of
this (change the date embedded within the file names)::

    > Copy Extras:Misc/aminet/C/bzip2 bin:
    > tar --exclude=contrib -xjf AROS-20081117-source.tar.bz2

Note the --exclude=contrib option. It's necessary because there's a symbolic
link named contrib in the source code snapshots pointing to a non-existent
Contrib directory. Once it's extracted to the SFS file system, there's no
way to delete it without removing the whole directory, so it's best to skip
it.

Contributed software is not guaranteed to build on AROS, but if you want to
try, you should extract these sources inside the main sources as follows::

    > CD AROS-20081117-source
    > tar -xjf AROS-20081117-contrib-source.tar.bz2
    > Rename AROS-20081117-contrib-source contrib

Now run the configure script, with the appropriate target, CFLAGS, LDFLAGS
and host-side strip command::

    > CD AROS-20081117-source
    > bin:sh
    > ./configure --target=pc-i386 LDFLAGS="-nix" CFLAGS="-nix -I/Development/netinclude"
      aros_host_strip="strip --strip-unneeded"

When configure finishes, run make::

    > make

Some requesters asking to insert volumes HOME: or DEV: to any drive may
appear during the build process, they can safely be cancelled.

Building AROS on AROS takes more time than on Linux (from 1.5 to several hours
depending on your CPU and hard disk performance). To shorten the build
time, try increasing the number of buffers and cache size for your SFS
partitions.

Since grub2 still hasn't been ported to AROS, creating an ISO image containing
the resulting binaries by making the boot ISO target is not yet possible.




Appendix
========

Building AROS in different directories
--------------------------------------

It is possible to configure and build AROS in a directory other than the
working copy. For example::

   > git clone https://github.com/aros-development-team/AROS.git aros-src
   > cd aros-src
   > mkdir ../build
   > cd ../build
   > ../aros-src/configure [...with options as appropriate...]
   > make

puts the AROS working copy in the directory "aros-src" and builds it in a
separate, parallel directory "build".

Why would you want to do this? Well there are a number of reasons:

+   You may want to separate the source and object code and only
    backup the source / avoid "polluting" the working copy with
    files generated during the build.
+   You may want to put the build directory and the working
    copy on different physical disks to improve performance.
+   You may want to remote mount the working copy on multiple
    machines, and build for different machines from the same
    working copy.
+   You may want to build multiple configurations from the
    same working copy.

The last reason above is possibly the most useful. For instance you can have
builds for separate architectures and/or debug builds each using the same
working copy. Using multiple build directories you can rebuild any or all
configurations after an edit without the need to either clean and
reconfigure, or identify and copy changes into another working copy.

.. Note::

   If you have previously built AROS inside the working copy you will
   need to delete all obsolete generated files from the source tree
   before attempting to configure/build in another directory. The reason
   for this is that some parts of the build will detect an existing file in
   the source tree before the correct version and attempt to use that. It is
   best to delete the bin/ directory, as well as any files that shouldn't
   exist when the following command is used:

   git status -s --ignored

   Delete any files which are ignored/not supposed to be there
   (unless they are your own projects files).

.. Note::

   If you are compiling multiple AROS builds from the same working directory,
   the following configure option will make them use a common location to
   download external sources to

   --with-portssources=<path to common location>

   It is best to use a separate directory outside of both the working dir
   and build dir(s) to store these files - so that if you delete a build
   or the working dir you will still have the files and not need to download
   them every time.



Building several targets from the same source
---------------------------------------------

If you intend to compile several different targets from one source 
tree, you should compile outside the source tree (see the previous 
subsection). For example, you could place your sources in ``AROS/src``, 
and create a directory for your 32-bit Linux-hosted build at 
``AROS/linux-i386``::

    > cd AROS
    > mkdir linux-i386
    > cd linux-i386
    > ../src/configure --target=linux-i386
    > make

If you then want to also build for 64-bit Linux and Amiga, you can 
create the directories ``AROS/linux-x86_64`` and ``AROS/amiga-m68k``, 
and perform similar steps to those above.


Compiling HowTos
-----------------

This step-by-step guide will describe how to prepare the development 
environment and compile 32-bit Linux-hosted AROS on Ubuntu Linux 18.04. 
Let's assume you have a CD image (iso) from an Ubuntu site and have 
installed the system from it. Also, you should set it up to access the 
Internet.


Getting the needed packages
"""""""""""""""""""""""""""

Because the Live CD misses needed packages we have to get them from the
Internet::

    > sudo apt-get install git-core gcc g++ make cmake gawk bison flex bzip2
    netpbm autoconf automake libx11-dev libxext-dev libc6-dev liblzo2-dev
    libxxf86vm-dev libpng-dev libsdl1.2-dev byacc python-mako libxcursor-dev

If you are using the 64-bit version of Ubuntu, you will need some 
extra packages::

    > sudo apt-get install gcc-multilib libxxf86vm1:i386

You will need to enter your user password at the prompt.

And if you are compiling the 32bit target on a 64bit host and will use the X11 display
driver, you may also need::

    > sudo apt-get install libxcursor-dev:i386


Get the sources
"""""""""""""""

To find out more instruction on how to use our Git Repository,
please refer to `Working with Git <git.html>`__

In brief, the commands you must use are the following::

   > git clone https://github.com/aros-development-team/AROS.git
   > cd AROS
   > git clone https://github.com/aros-development-team/contrib.git


Configure and compile AROS sources
""""""""""""""""""""""""""""""""""

First we will configure::

      > ./configure --target=linux-i386

Then, type::

      > make

This may take a while (up to some hours on slow machines).
But once it finishes, you will have a compiled Linux-hosted AROS.
Please note that you will need Internet access during the build,
as it downloads sources from various servers.


Scripts
"""""""

There are some Bash `scripts`__ in the archive. They do all required
steps interactively.

__ https://archives.arosworld.org/?function=showfile&file=development/cross/gimmearos.zip
