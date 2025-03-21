==========================
Frequently Asked Questions
==========================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright © 1995-2020, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::


General questions
=================

Can I ask a question?
---------------------

Of course you can. Please go to the `AROSWorld forum`__ and
read the threads and ask everything you want. This FAQ will
be updated with the users' questions, but the forum will be
more up-to-date.

__ https://www.arosworld.org/


What is AROS all about?
-----------------------

Please read the introduction_.

.. _introduction: ../../introduction/index


What is the legal status of AROS?
---------------------------------

European law says that it is legal to apply reverse engineering techniques to
gain interoperability. It also says that it is illegal to distribute the
knowledge gained by such techniques. It basically means that you are allowed
to disassemble or resource any software to write something which is compatible
(for example, it would be legal to disassemble Word to write a program which
converts Word documents into ASCII text).

There are of course limitations: you are not allowed to disassemble the
software if the information you would gain by this process can be obtained by
other means. You must also not tell others what you learned. A book like
"Windows inside" is therefore illegal or at least of dubious legality.

Since we avoid disassembling techniques and instead use common available
knowledge (which includes programming manuals) which don't fall under any NDA,
the above doesn't apply directly to AROS. What counts here is the intention of
the law: it is legal to write software which is compatible with some other
software. Therefore we believe that AROS is protected by the law.

Patents and header files are a different issue, though. European law doesn't
allow patents on algorithms, hence algorithms patented elsewhere could be used
freely in Europe. However, code that uses algorithms that are patented in the
USA could not be imported to the USA. Examples of patented algorithms in
AmigaOS include screen dragging and the specific way menus work. Therefore we
avoid implementing these features in exactly the same way. Header files on the
other hand must be compatible but as different as possible from the original.

To avoid any trouble we applied for an official OK from Amiga Inc. They are
quite positive about the effort but they are very uneasy about the legal
implications. We suggest that you take the fact that Amiga Inc did not send us
any cease and desist letters as a positive sign. Unfortunately, no legally
sound agreement has been made yet; both sides just expressed good intentions.


Why are you only aiming for compatibility with 3.1?
---------------------------------------------------

There have been discussions about writing an advanced OS with the features of
the AmigaOS. This has been dropped for a good reason. First, everyone agreed
that the current AmigaOS would have to be enhanced, but no one knew how to do
that or even agreed on what had to be enhanced or what was important. For
example, some wanted memory protection, but they disliked its cost (a major
rewrite of the available software and speed decrease).

In the end, the discussions ended in either flame wars or reiteration of the
arguments. So we decided to start with something we knew how to handle. Then,
when we have the experience to see what is possible or not, we could decide
on improvements.

We also want to be binary compatible with the original AmigaOS on Amiga
computers. The reason for this is just that a new OS without any programs to
run on it has little chance to survive. Therefore we try to make the shift from
the original OS to our new one as painless as possible (but not to the extent
that we can't improve AROS afterwards). As usual, everything has its price and
we try to decide carefully what that price might be and if we and everyone else
would be willing to pay it.


Can't you implement feature XYZ?
--------------------------------

No, because:

a) If it was really important, it would be in the original OS. :-)
b) Why don't you do it yourself and send a patch to us?

The reason for this attitude is that there are plenty of people around who
think that their feature is the most important and that AROS has no future if
that feature is not built in right away. Our position is that AmigaOS, which
AROS aims to implement, can do everything a modern OS should do. We see that
there are areas where AmigaOS could be enhanced, but if we do that, who would
write the rest of the OS? In the end, we would have lots of nice improvements
to the original AmigaOS which would break most of the available software but
be worth nothing, because the rest of the OS would be missing.

Therefore, we decided to block every attempt to implement major new features
in the OS until it is more or less completed. We are getting quite close to
that goal now, though, so there have indeed been a couple of innovations
implemented in AROS that aren't available in AmigaOS.


How compatible is AROS with AmigaOS?
------------------------------------

Very compatible. We expect that AROS will run existing software on the Amiga
without problems. On other hardware, the existing software must be recompiled.
We hope to offer a preprocessor which you can use on your code which will
change any code that might break with AROS and/or warn you about such code.

Porting programs from AmigaOS to AROS is currently mostly a matter of a simple
recompilation, with the occasional tweak here and there. There are of course
programs for which this is not true, but it holds for most modern ones.


What hardware architectures is AROS available for?
--------------------------------------------------

Currently AROS is available in a quite usable state as native and hosted
(under Linux) for the i386 architecture (i.e. IBM PC AT
compatible clones) and for X86_64. There are ports under way at varying
degrees of completeness to 68k Amigas and Raspberry Pi.


Will there be a port of AROS to PowerPC?
----------------------------------------

It's already available. The maintained ports of AROS for PowerPC are
sam440-ppc and darwin-ppc.


Why are you using Linux and X11?
--------------------------------

We use Linux and X11 to speed up development. For example, if you implement
a new function to open a window you can simply write that single function and
don't have to write hundreds of other functions in layers.library,
graphics.library, a slew of device drivers and the rest that that function
might need to use.

The goal for AROS is of course to be independent of Linux and X11 (but it
would still be able to run on them if people really wanted to), and that is
slowly becoming a reality with the native versions of AROS. We still need to
use Linux for development though, since some development tools haven't been
ported to AROS yet.


How do you intend to make AROS portable?
----------------------------------------

One of the major new features in AROS compared to AmigaOS is the HIDD
(Hardware Independent Device Drivers) system, which will allow us to port AROS
to different hardware quite easily. Basically, the core OS libraries do not
hit the hardware directly but instead go through the HIDDs, which are coded
using an object oriented system that makes it easy to replace HIDDs and reuse
code.


Why do you think AROS will make it?
-----------------------------------

We hear all the day from a lot of people that AROS won't make it. Most of them
either don't know what we are doing or they think the Amiga is already dead.
After we explained what we do to the former, most agree that it is possible.
The latter make more problems. Well, is Amiga dead right now? Those who are
still using their Amigas will probably tell you that it isn't. Did your A500
or A4000 blow up when Commodore went bankrupt? Did it blow up when Amiga
Technologies did?

The fact is that there is not much new software developed for the Amiga
(although Aminet still chugs along quite nicely) and that hardware is also
developed at a lower speed (but the most amazing gadgets seem appear right
now). The Amiga community (which is still alive) seems to be sitting and
waiting. And if someone releases a product which is a bit like the Amiga back
in 1984, then that machine will boom again. And who knows, maybe you will get
a CD along with the machine labelled "AROS". :-)


What do I do if AROS won't compile?
-----------------------------------

Please post a message with details (for example, the error messages you
get) on the Help forum at `AROSWorld`__ or become a developer and
subscribe to the AROS Slack channel and post it there, and someone will
try to help you.

__ https://www.arosworld.org/


Will AROS have memory protection, SVM, RT, ...?
-----------------------------------------------

Several hundred Amiga experts (and people who considered themselves such)
tried for three years to find a way to implement memory protection (MP) for
AmigaOS. They did not meet with success. This indicates that it's quite
unlikely that the normal AmigaOS will never have MP like Unix or Windows NT.

But all is not lost. There are plans to integrate a variant of MP into AROS
which will allows protection of at least new programs which know about it.
Some efforts in this area look really promising. Also, it's not really a
problem if your machine crashes. Rather, the problem might be that:

1. You have no good idea why it crashed. Basically, you end up having to poke
   with a 100ft pole into a swamp with a thick fog.
2. You lose your work.

Rebooting the machine is really no issue.

What we could try to construct is a system which will at least alert if
something dubious is happening and which can tell you in great detail what was
happening when the machine crashed and which will allow you to save your work
and *then* crash. It should also need a means to check what has been saved so
you can be sure that you don't continue with corrupted data.

The same thing goes for SVM (swappable virtual memory), RT (resource tracking)
and SMP (symmetric multiprocessing). We are currently planning how to
implement them, making sure that adding these features will be painless.
However, they do not have the highest priority right now. Very basic RT has
been added, though.


Can I become a beta tester?
---------------------------

Sure, no problem. In fact, we want as many beta testers as possible, so
everyone is welcome! We don't keep a list of beta testers though, so all
you have to do is to download AROS, test whatever you want and send us
reports.


What is the relation between AROS and UAE?
------------------------------------------

UAE is an Amiga emulator, and as such its goal is somewhat different from that
of AROS. UAE wants to be binary compatible even for games and hardware hitting
code, while AROS wants to have native applications. Therefore AROS is much
faster than UAE, but you can run more software under UAE.

We are in loose contact with the author of UAE and there is a good chance that
code for UAE will appear in AROS and vice versa. For example, the UAE
developers are interested in the source for the OS because UAE could run some
applications much faster if some or all OS functions could be replaced with
native code. On the other hand, AROS could benefit from having an integrated
Amiga emulation.

Since most programs won't be available on AROS from the start, Fabio Alemagna
has ported UAE to AROS so you can run old programs at least in an emulation
box.

Also available in Contrib is `E-UAE`__, which is UAE improved by some features
from `WinUAE`__.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


What is the relation between AROS and Haage & Partner?
------------------------------------------------------

Haage & Partner used parts of AROS in AmigaOS 3.5 and 3.9, for example the
Colorwheel and Gradientslider gadgets and the SetENV command. This means that
in a way, AROS has become part of the official AmigaOS. This does not imply
that there is any formal relation between AROS and Haage & Partner. AROS is an
open source project, and anyone can use our code in their own projects
provided they follow the license.


What is the relation between AROS and MorphOS?
----------------------------------------------

The relationship between AROS and MorphOS is basically the same as between
AROS and Haage & Partner. MorphOS uses parts of AROS to speed up their
development effort; under the terms of our license. As with Haage & Partner,
this is good for both the teams, since the MorphOS team gets a boost to their
development from AROS and AROS gets good improvements to our source code from
the MorphOS team. There is no formal relation between AROS and MorphOS; this
is simply how open source development works.


What programming languages are available?
-----------------------------------------

GCC (C, C++) is available both as native and as cross compiler.

The languages that are available natively are Python_, Regina_, Lua_
and Hollywood_:

+ Python is a scripting language which has become quite popular, because of
  its nice design and features (object-oriented programming, module system,
  many useful modules included, clean syntax, ...). A separate project has
  been started for the AROS port and can be found at
  https://pyaros.sourceforge.net/.

+ Regina is a portable ANSI-compliant REXX interpreter. The goal for the AROS
  port is to be compatible with the ARexx interpreter for the classic
  AmigaOS.

+ Lua is a powerful, fast, light-weight, embeddable scripting language. The
  AROS port has been extended by two modules: siamiga and zulu. The first one
  has some simple graphics commands, the latter is an interface to Zune.

+ Hollywood is a commercial programming language for multimedia applications
  including games. You can buy a version for i386-aros (ABI v0).

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


Why is there no m68k emulator in AROS?
--------------------------------------

There is already an attempt to integrate the emulator janus-uae.

But why don't we simply implement a virtual m68k CPU to run software directly
on AROS? Well, the problem here is that m68k software expects the data to be
in big-endian format while AROS also runs on little-endian CPUs. The problem
here is that the little-endian routines in the AROS core would have to work
with the big-endian data in the emulation. Automatic conversion seems to be
impossible (just an example: there is a field in a structure in the AmigaOS
which sometimes contains one ULONG and sometimes two WORDs) because we cannot
tell how a couple of bytes in RAM are encoded.

.. _UAE: http://www.amigaemulator.org/


Will there be an AROS Kickstart ROM?
------------------------------------

They are already available in the amiga-m68k-boot-iso package in the
directory boot/amiga.


Software questions
==================

What is Zune?
-------------

In case you read on this site about Zune, it's simply an open-source
reimplementation of MUI, which is a powerful (as in user- and
developer-friendly) object-oriented shareware GUI toolkit and de-facto
standard on AmigaOS. Zune is the preferred GUI toolkit to develop
native AROS applications. As for the name itself, it means nothing,
but sounds good.


What is the Graphical and other memory in Wanderer?
---------------------------------------------------

This memory division is mostly a relic from Amiga past, when graphical memory
was application memory before you added some other, called FAST RAM, a memory
where applications were located, while the graphics, sounds and some system
structures were still in graphic memory.

In AROS-hosted, there isn't such kind of memory as Other (FAST), but only GFX,
when on Native AROS, GFX can have a maximum of 16MB, although it wouldn't
reflect the state of the graphic adapter memory...  It has no relation to the
amount of memory on your graphics card.

*The long-winded answer*
Graphics memory in i386-native signifies the lower 16MB of memory in the
system. That lower 16MB is the area where ISA cards can do DMA. Allocating
memory with MEMF_DMA or MEMF_CHIP will end up there, the rest in the other
(fast) memory.

Use C:Avail HUMAN command for memory info.


What does the Wanderer Snapshot <all/window> action actually do?
----------------------------------------------------------------

This command remembers icon placement of all windows (or of a single window).


What are the command line options for AROS-hosted executable?
-------------------------------------------------------------

You can get a list of them by running an ./aros -h command.


What are the AROS-native kernel options used in GRUB line?
----------------------------------------------------------

Here are some::

    floppy=<disabled/nomount>	Sets the trackdisk device options
        disabled		- completely disable trackdisk.device
                                  initialisation
        nomount			- initialise trackdisk.device but do not
                                  create DOS devices

    ATA=32bit		- Enables 32-bit I/O in the hard disk driver (safe)
    forcedma 		- Forces DMA to be active in the hard disk driver
                          (should be safe, but might not be)
    gfx=<hidd name>	- Use the named HIDD as the gfx driver
    lib=<name>		- Load and initiate the named library/HIDD

Please note that the options are case-sensitive.



How can I make a DOS script that automatically runs for an installed package?
-----------------------------------------------------------------------------

1) Create a sub-directory S and add a file with name 'Package-Startup' with
   the DOS script for that package that you want to run every boot.

2) Create a variable in the envarc:sys/packages file which contains the path
   to the S sub-directory of your package.

Example directory layout::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

The variable in envarc:sys/packages could have the name 'myapp' (the name is
an example); the content would then be 'sys:extras/myappdir'

The Package-Startup script would then be called by the startup-sequence.



Hardware questions
==================

Where can I find an AROS Hardware Compatibility List?
-----------------------------------------------------

You can find one on the
`AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__
page. There can be another lists made by the AROS users.


Why does AROS fail to boot from my drive set as the SLAVE on IDE channel?
-------------------------------------------------------------------------

Well, AROS should boot if the drive is SLAVE but ONLY if there's also a drive
on MASTER. That appeared to be a correct connection respecting to the IDE
specification, and AROS follows it.


My system hangs with red cursor on the screen, or with a blank screen
---------------------------------------------------------------------

One reason for this can be use of a serial mouse (this isn't supported yet).
You must use PS/2 mouse with AROS at the moment. Another cause might be that
you've chosen a video mode in the boot menu that your hardware doesn't
support. Reboot and try a different one.

