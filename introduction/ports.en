=====
Ports
=====

:Authors:   Adam Chodorowski, Matthias Rustler
:Copyright: Copyright (C) 1995-2020, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    WIP

.. Contents::


Introduction
============

Since AROS is a portable operating system, it is available for several
different platforms. A "port" of AROS is exactly what the name implies, i.e. a
version of AROS ported to some specific platform.


Flavors
--------

Ports are divided into two major groups, or "flavors" in AROS terminology,
namely "native" and "hosted".

Native ports run directly on the hardware and have total control over the
computer. They will become the recommended way to run AROS in the future since
it gives superior performance and efficiency, but they have currently only a
limited support for hardware.

Hosted ports run on top of another operating system and do not access the
hardware directly, but use the facilities provided by the host OS. The
advantages of hosted ports is that they are easier to write since it is not
necessary to write low-level drivers. Also, it greatly speeds up programming
since we can run the development environment and AROS side-by-side
without wasting time on constant reboots to try out new code.


Naming
------

The different AROS ports have names that of the form <platform>-<cpu>, where
<platform> is a symbolic name for the platform and <cpu> is the CPU
architecture. For a native port, the platform refers to the hardware, such as
"pc" or "amiga"; for a hosted port it refers to an operating system, such as
"linux" or "freebsd". In situations where it might not be obvious that the
topic is AROS, "AROS/" is commonly prefixed to the port name, giving you e.g.
"AROS/pc-i386".


Portability
-----------

AROS executables for a specific CPU are portable across all ports using that
CPU, which means that executables compiled for "pc-i386" will work fine on
"linux-i386" and "freebsd-i386".



Existing ports
==============

Below is a list of all AROS ports that are in working order and/or actively
developed. Not all of these are available for download, since they might
either not be complete enough or have compilation requirements that we can't
always meet due to limited resources.


AROS/amiga-m68k
---------------

:Flavour:    Native
:Status:     Working, incomplete driver support
:Maintained: Yes

AROS/amiga-m68k is the native port for m68k Amigas, or emulators like WinUAE.
This version is binary compatible with AmigaOS.


AROS/pc-i386 and pc-x86-64
--------------------------

:Flavour:    Native
:Status:     Working, incomplete driver support
:Maintained: Yes

AROS/pc-i386 is the native port of AROS to the common IBM PC AT computers and
compatibles using the x86 (or x86-64) family of processors. The name is
actually a bit misleading since AROS/pc-i386 actually requires at least a 486
class CPU due to usage of some instructions not available on the 386. This
port also requires that the computer is PCI-based.

This port works quite well, but we only have the most basic driver support.
One of the biggest limitations is that we currently only have support for
accelerated graphics on nVidia and ATI graphics hardware. Other graphics
adapters must be used with generic (non-accelerated) VGA and VBE graphics
drivers.


AROS/pc-x86_64-smp
------------------

:Flavour:    Native
:Status:     Working, incomplete driver support
:Maintained: Yes

AROS/pc-x86_64-smp is an experimental port with support for some kind of
Symmetric MultiProcessing.


AROS/linux-i386 and x86-64
--------------------------

:Flavour:    Hosted
:Status:     Working
:Maintained: Yes

AROS/linux-i386 is the hosted port of AROS to the Linux operating system [#]_
running on the x86 (or x86-64) family of processors.

This is the most complete port of AROS, feature-wise, since most of the
developers currently use Linux when developing AROS, and there are far
fewer drivers to write.


AROS/mingw32-i386
------------------

:Flavour:    Hosted
:Status:     Working
:Maintained: Yes

This port is intended to run on Microsoft Windows (beginning from Windows 98)
as the hosted system.


AROS/darwin-i386 and darwin-x86_64
----------------------------------

:Flavour:    Hosted
:Status:     Working
:Maintained: Yes

The hosted version for Darwin and MacOS X on the i386 and x86_64 platform.
This should work on all Intel MacOS X versions starting from 10.4. It requires
an X11 server for the display.


AROS/darwin-ppc
---------------

:Flavour:    Hosted
:Status:     Working
:Maintained: Yes

The hosted version for Darwin and MacOS X on the PowerPC platform.
This should work on all MacOS X versions. It requires
an X11 server for the display.


AROS/raspi-armhf
----------------

:Flavour:    Native
:Status:     Not working
:Maintained: Yes

The native version for ARMv6 based Raspberry Pi computers. 


AROS/sam440-ppc
---------------

:Flavour:    Native
:Status:     Working
:Maintained: Yes

The native version for Sam440EP, Sam440EP Flex and Sam460ex computers.


Legacy
======

Some more ports were developed in the past. They aren't maintained and it's
doubtable wether they still work on current systems. Examples are: freebsd-i386,
pp-m68k (Palm Pilot), android-arm, linux-arm, linux-ppc and efika-chrp-ppc.


Footnote
========

.. [#] Yes, we know that Linux is really just a kernel and not a whole OS, but
       it is much shorter than "operating systems based on the Linux kernel,
       some of the common GNU tools and the X windowing system". This size
       optimization is of course negated by having to write this explanation
       for the pedantic readers, but anyway...

