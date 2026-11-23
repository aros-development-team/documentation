==========================
Frequently Asked Questions
==========================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::


General questions
=================

Can I ask a question?
---------------------

Of course you can. There are several places where you can ask questions, discuss
AROS, and find help. The AROS developer mailing lists and Slack channels are
listed on the `AROS Git repository wiki`__ . There are also community forums
and discussions on various Amiga-related forums, where you may find people
with experience using AROS and other Amiga-like systems.

In addition, a considerable amount of documentation and literature about AROS,
AmigaOS, and related Amiga-like systems is available online and can provide useful
background and practical information.

This FAQ will be updated as useful questions and answers arise, but community
discussions and the development channels are likely to contain more recent information.

__ https://github.com/aros-development-team/AROS/wiki


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

(Patches are welcome, but see `AROS is open source. Does that mean anybody can
change it as they see fit?`_ for what is expected of them.)

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

Please provide details of the problem, including the command you used to
build AROS and any error messages you received, and ask for help on the
AROS Developer Mailing List__ or in the AROS Slack channel. These are the
appropriate places for discussing build problems and other issues related
to AROS development, and are where developers and other people familiar
with the build system can help diagnose the problem.

You do not need to be an established AROS developer to ask for help with a
build problem. If you are building AROS from source, you are already
working with the development environment.

__ https://www.aros.org/


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


Project organisation and governance
===================================

Who runs the AROS project?
--------------------------

AROS is a volunteer project. It is not owned or operated by a company, and
nobody is paid by the project to work on it.

The project was started in 1995 by Aaron Digulla. Today it is maintained by
Nick Andrews (Kalamatee) and Matthias Rustler (mazze). They are responsible
for the project's direction and decisions, and are ultimately accountable for
its ongoing development, its infrastructure and its preservation.

Other long-standing members of the development team remain in contact with
the project, but are no longer active in its day-to-day development. Michal
Schulz, previously one of the maintainers, stepped back to concentrate on his
m68k emulation work.


What does the project's infrastructure consist of, and who pays for it?
-----------------------------------------------------------------------

+ **Source code** is hosted on GitHub, in the `aros-development-team`__
  organisation.
+ **Builds**, including the nightly builds, are produced with Azure Pipelines.
+ **The website** is hosted on SourceForge.
+ **The aros.org domain** is still paid for by Aaron Digulla. Its DNS is
  managed by the current maintainers.

The project has no other running costs, and there is no project fund.
Donations made through this website go directly to the individual developer
that the donor selects, not to the project.

__ https://github.com/aros-development-team


How are decisions made?
-----------------------

Changes are proposed, discussed and reviewed in the open: on the developer
mailing list, in the development Slack channel, and in issues and pull
requests on GitHub. Everyone is welcome to take part in those discussions,
and different opinions and ideas are encouraged.

The final decision on what is accepted into AROS, and on the direction the
project takes, rests with the maintainers. Decisions are made with the whole
project in mind: all of its supported platforms, its existing users and
software, and its long-term goals, rather than the needs of any one
contributor, platform or distribution.


AROS is open source. Does that mean anybody can change it as they see fit?
--------------------------------------------------------------------------

Anybody may use, study, modify and redistribute the AROS sources under the
terms of the `AROS Public License`__, and anybody may propose changes.

That openness should not be mistaken for an absence of oversight, direction
or standards. AROS is not a free-for-all. Contributions are welcome, but they
must respect the project's ethos, its objectives and its overall direction,
and they are reviewed before they are accepted. Nobody should expect to be
able to impose their own agenda on the project, or to use its openness as a
justification for doing so.

In particular, the following are not acceptable in AROS:

+ using the project or its components to further private or commercial
  interests, for example by introducing advertising into components;
+ steering development towards one favoured platform at the expense of the
  others, or of the project's wider objectives;
+ changes that serve one distribution or fork to the detriment of AROS as a
  whole.

__ ../../license.html


Why is control of the project held by so few people?
----------------------------------------------------

There are two reasons.

The first is simply history. The current structure has evolved over a long
period and reflects who has consistently contributed to, supported and
remained committed to AROS. For most of the last fifteen years and more
there has been little sustained interest from others in taking on
responsibility for the project, so the group of people looking after it has
remained small.

The second is experience. There have been attempts in the past by
individuals to assume positions of authority over the project, to redirect
its development, and to use it as a vehicle for their own benefit. A project,
its community and the work that has gone into it take many years to build,
but very little time is needed for someone to do them significant damage.

The level of control that is maintained is a direct consequence of this. It
is not intended to restrict legitimate involvement or collaboration. It is
there to protect the project, and the contributions that many people have
made to it over the years, from being commandeered, misdirected or exploited
for purposes other than those for which AROS was established.


How can I get involved?
-----------------------

More people becoming actively involved in AROS is something the project
wants to see. The way in is the same for everybody:

1. Fork the repository on GitHub and submit improvements as pull requests.
2. Join the developer mailing list or the Slack channel and take part in the
   discussion, particularly before starting on a larger change.
3. Read and follow the contribution guidelines, the pull request process and
   the code of conduct in the source repository (``CONTRIBUTING.md`` and
   ``PULL_REQUESTS.md``).

You do not need any special status to do this. See `Contributing`__ for
other ways of helping, such as testing, documentation and translation.

__ ../developers/contribute


How do I get commit access, or a say in the direction of the project?
---------------------------------------------------------------------

Direct access to the repository, and any greater level of responsibility or
influence, are built on demonstrated trust, reliability and a sustained
commitment to the project. In practice that means a track record of good
contributions, made over time, that respect the project's goals and the
people working on it.

There is no fixed number of patches or length of time that qualifies
somebody. Decisions about extending access, responsibility or control are
made by the maintainers and, given the project's history, they are not taken
lightly. An expression of interest is welcome, but on its own it is not a
substitute for involvement.


Who owns the copyright on AROS?
-------------------------------

Code written for AROS is contributed to the project as a whole. It carries
the copyright notice of The AROS Development Team and is licensed under the
AROS Public License. Contributors do not attach personal copyright notices
or their own licence terms to code written for AROS.

Code that comes from elsewhere keeps its original copyright notice and
licence, and is used in AROS under the terms of that licence.


Can I make my own fork or distribution of AROS?
-----------------------------------------------

Yes. Forks and distributions are permitted under the AROS Public License,
and distribution maintainers are free to decide what their distribution
contains and how it looks.

In return, a fork or distribution is expected to attribute upstream AROS
development clearly and accurately, to distinguish itself clearly from the
upstream project, and to be open about any binary incompatibility with
upstream AROS. The AROS website does not link to forks, distributions or
community resources that misrepresent where the work comes from. The full
statement is on the `front page`__ of this site.

Forks and distributions are independent of the AROS project. They are
maintained by their own authors, who do not speak for AROS, and questions
about them are best directed to those authors.

A distribution based on mainline AROS may use "AROS" in its name; a fork may
not. See `Can I use the name "AROS" for my own project or product?`_.

__ ../../index


Can I use the name "AROS" for my own project or product?
--------------------------------------------------------

That depends on what the project is.

==========================================  ================================
Kind of project                             "AROS" in its name
==========================================  ================================
A distribution based on mainline AROS       Permitted
A fork of AROS                              Not permitted
Software that runs on AROS                  Not permitted
==========================================  ================================

Everybody may use the name to *refer* to AROS: to say truthfully that their
software runs on AROS, was written for AROS, or is based on AROS. The
restrictions are on using the name, or a name derived from it, to *identify*
something else.

Distributions based on mainline AROS
    A distribution that packages the operating system as it is developed in
    the main AROS repository, together with a selection of software and
    settings, *is* AROS, and may use "AROS" in its name. It should still
    have a name that distinguishes it from the upstream project and from
    other distributions.

Forks
    A fork is a separately developed version of the sources that has
    diverged from mainline AROS. It is no longer the operating system that
    this project develops, and it may not be compatible with it. A fork must
    therefore not use "AROS" in its name. It may, and should, say that it
    is derived from AROS.

Software that runs on AROS
    Applications, libraries, frameworks, runtime environments and other
    layers that run on top of AROS are not AROS, and must not use "AROS",
    or a name derived from it, as their own name.

"AROS" has been the name of this operating system, and of the project that
develops it, since the 1990s. A different project that carries the same
name, or one that is easily mistaken for it, suggests a connection that does
not exist.

For forks and for software that runs on AROS, this rules out in particular
names that:

+ consist of "AROS" with letters or words added to it, or that differ from
  it by only a letter or two;
+ could be read as a version, edition, branch, component or successor of
  AROS;
+ otherwise suggest that the project is official, or is endorsed or
  maintained by The AROS Development Team.

It makes no difference what such a name stands for. Giving a name a
different expansion as an acronym does not change how it looks or sounds, or
what people will assume when they see it.


Doesn't the licence allow me to use the name?
---------------------------------------------

No. Copyright licensing and naming are separate matters.

The AROS Public License governs the use, modification and redistribution of
the *source code*. It expressly does not grant trademark rights. Permission
to build on AROS, to fork it, or to write software for it is therefore not
permission to use the AROS name or logos in a way that implies endorsement
by, or affiliation with, the AROS project.

The same distinction is made by most open source projects, and for the same
reason: users, developers and contributors need to be able to tell where a
piece of software comes from, who is responsible for it, and where to go for
support.


How should I name and describe software that is built on or for AROS?
---------------------------------------------------------------------

Give it a name of its own, and state the connection to AROS in its
description. For example:

+ "*Name*, an application framework for AROS"
+ "*Name*, a runtime environment for AROS"
+ "*Name*, an operating system derived from AROS" (for a fork)

This acknowledges the operating system that the software runs on without
borrowing its identity. Nothing is lost by doing so: software written for
other operating systems is described as running on them without taking
their names.

A distinct name is especially important where the software is something
other than an operating system, such as a library, framework or application
layer that runs on top of AROS. A name that is nearly identical to that of
the operating system makes it hard for anybody to tell where one ends and
the other begins: which documentation applies, where a bug should be
reported, and who is responsible for fixing it.

An independent project should also say that it is independent, for example:
"This is an independent project and is not affiliated with The AROS
Development Team". A disclaimer is good practice, but it does not make up
for a name that is confusing in the first place.

If you are unsure whether a name is acceptable, ask on the developer mailing
list before you publish under it. It is far easier to change a name before a
project is established than afterwards.


Who speaks for the AROS project?
--------------------------------

The maintainers named under `Who runs the AROS project?`_ speak for the
project. Official information is published on this website, in the source
repository, and through the project's developer mailing list and
development channels.

AROS is discussed in many other places, including forums and social media,
by people who use it, write software for it, or simply have an interest in
it. Those discussions are welcome, but the people taking part in them speak
for themselves. Statements made there about the project's position, plans,
policies, or its relationship with other projects are personal opinion and
do not represent AROS, however confidently they are expressed, unless they
come from the maintainers.

If you need to know the project's position on something, ask through the
official channels.


Nightly Builds
==============

What are the nightly builds?
----------------------------

AROS nightly builds are development builds produced from the current state of
the AROS source tree. They are primarily intended for developers, testers,
and people who want to follow and experiment with the latest developments
in AROS. As such, they should be regarded as a moving development snapshot
rather than a polished, end-user-oriented release. Their configuration is therefore
intended to provide a consistent environment for testing current AROS development,
rather than to represent a definitive choice of desktop appearance or user experience.

Why dont the nightly builds use "nice" themes?
----------------------------------------------

The problem is that "nice" is subjective. There is no default theme that
will satisfy everyone, and changing the upstream default whenever somebody
dislikes it just turns aesthetics into an endless cycle of "change it back."

That's why the distinction between AROS itself and individual distributions matters.
Distribution maintainers are free to decide how their particular distribution looks
and what defaults it ships with.

The nightly builds aren't intended to be a polished, opinionated desktop product;
they're a consistent environment for development and testing. If you prefer a
different look, customise it or build a distribution around that preference.

Personal preference is a perfectly legitimate reason to customise your own system,
but it's not a particularly good basis for changing the upstream project's defaults.


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

