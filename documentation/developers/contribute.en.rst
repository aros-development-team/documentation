==========
Contribute
==========

:Authors:   Adam Chodorowski, Neil Cafferkey
:Copyright: Copyright © 1995-2020, The AROS Development Team
:Status:    Done.

.. Contents::


We need your help!
==================

We have quite few active developers, which unfortunately means that progress
is quite slow. We simply need more people to help us out! There is a huge
number of tasks that are in need of a dedicated developer. They range from
large projects to small ones, from hardware hacking, through high-level system
programming to application programming. There is basically something for
everyone who wishes to contribute, regardless of how proficient they are in
coding!

For those of you who aren't programmers, there are still plenty of tasks that
you can help with! This includes writing documentation, translating programs
and documentation to other languages, creating nice graphics and hunting
bugs. These tasks are just as important as coding!


Available tasks
===============

This is a list of some tasks that we need help with and which nobody is
currently working on. It's by no means a complete list; it simply contains
the most prominent things that we need help with in AROS.


Programming
-----------

+ Implementing missing libraries, resources, devices or parts of these.
  See the detailed status report for more information what bits are missing.

+ Implementing or improving hardware device drivers:

  - AROS/i386-pc:

    + Graphic card drivers:

      - nVidia chipsets
      - Intel HD Graphics
      - AMD Radeon

    + Missing USB classes
    + Specific SATA and PATA chipsets.
    + Improved HD Audio support.
    + Ethernet and WiFi drivers.
    + Bluetooth
    + CardBus and PCMCIA.
    + ...anything else you can think of.

  - AROS/m68k-amiga:

    + Native graphics optimisations
    + Support for Vampire Standalone

  - AROS/arm-raspi

    + Native USB Chipset Driver
    + Native graphics optimisations

  - Generic printer support.

  - AROS/Raspberry Pi:

    + Native drivers


+ Porting to other architectures. Some examples of hardware for which no
  maintained AROS port exists or has been started:

  - AmigaOne
  - Macintosh PowerPC.

+ Implementing missing Preferences editors:

  - Overscan

+ Improving the C standard library

  This involves implementing missing ANSI functions in the AROS crt (stdc),
  aswell as POSIX functions in the posixc library, to make it easier to port
  \*nix software (particularly the GNU toolchain and associated tools). The
  biggest things missing are support for wchar and POSIX style signalling,
  but there are some other functions missing as well.

+ Implementing more datatypes and improve existing ones

  The number of datatypes available in AROS is quite small. Some examples of
  datatypes that need improvement to become usable or need implementing from
  scratch:

  - amigaguide.datatype
  - sound.datatype

    + 8svx.datatype

  - animation.datatype

    + cdxl.datatype


+ Porting third-party programs:

  - Multi-platform applications such as LibreOffice, GIMP, AbiWord.
  - AmigaOS Open Source software.


Documentation
-------------

+ Writing user documentation. This consists of writing a general User's
  Guide for novices and experts, and also reference documentation for all
  standard AROS programs.

+ Writing developer documentation. Although this is in a bit better state
  than user documentation, there is still a lot of work to do. For example,
  there is really no good tutorial for novice programmers yet. The equivalent
  of the ROM Kernel Manuals for AROS would be really nice to have.


Translation
-----------

+ Translating AROS itself to more languages. Currently, only the following
  languages are more or less completely supported:

  - English
  - Deutsch
  - Svenska
  - Norsk
  - Italiano
  - French
  - Russian

+ Translating the documentation and website to more languages. Currently, it
  is only completely available in English. Parts have been translated to
  other languages, but there is still much work to do.


Other
-----

+ Coordinating GUI design for AROS programs, such as prefs programs,
  tools and utilities using the Zune toolkit.


Joining the Team
================

Want to join the development effort? Great! Then join the `development mailing
lists`__ you are interested in (at least joining the main development list is
*highly* recommended) and request access to the `GitHub organization`__.
That's it. :)

Writing a short mail to the development list containing an introduction about
yourself and what you want to help out with is encouraged. If you have any
problems, please don't hesitate to send a mail to the list or ask around on
the `IRC channels`__. Also, before starting to work on something specific,
please write a mail to the list stating what you are about to do or update the
task database. This way we can make sure people don't work on the same thing
by mistake...

__ ../../contact#mailing-lists
__ https://github.com/aros-development-team
__ ../../contact#irc-channels


The Git repository
-------------------------

The AROS Git repository is hosted on GitHub under the `AROS Development Team`__
umbrella organization.  If you would like to be able to collaborate in
the development of AROS then please apply for membership (however, if you just
want to browse the sources, there is a `read-only access`

For information on how to use the AROS Git repository, please read "`Working with
Git`__". Even if you already know how to use Git it is useful to look through
that page, as it contains information and tips specific to the AROS repository.

__ https://github.com/aros-development-team
__ git
