==========================
Short introduction to AROS
==========================

:Authors:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski
:Copyright: Copyright © 1995-2017, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Almost finished, I think...


.. Include:: index-abstract.en.rst


Goal
=====

The primary goals of the AROS project are to create an open source OS which:

1.  Is as compatible as possible with AmigaOS 3.1 where appropriate;

2. Can be easily ported to different kinds of hardware architecture and
   processors, such as x86, PowerPC, Alpha, Sparc, HPPA;

3. Is binary compatible on Amiga, and as source compatible as possible on
   other hardware;

4. Can run as a stand-alone 'native' version, bootable directly from hard disk -
   or hosted, opening a window on an existing OS, to develop
   software and run Amiga and native applications at the same time;

5. Improves upon the functionality of AmigaOS.


History
=======

Back in the year 1993, the situation for the Amiga family of computers - a highly
popular system at the time - was looking bleak due to bad management decisions
by the then owners.  A motley group of Amiga fans got together and discussed what
could be done to save their beloved machine. As some saw it, an increase in
acceptance was necessary, since the main reason for the missing success of the
Amiga seemed clear to them: it was propagation, or rather the lack thereof.
The Amiga needed a more widespread basis to make it more attractive for
everyone to use and to develop for. So plans were made to reach this goal.

One of the main plans was to fix bugs present in the original AmigaOS, another
was to make it a 'modern' operating system. This eventually lead to the birth of the 
AOS project.

At the time of the Amiga's demise , it seemed feasible that it might be possible to
acquire the AmigaOS sources. Until this happened, the scope of the intended work had to
be determined more precisely: Which, exactly, were the bugs? What would be the
best way to fix them? What were the features a so-called *modern* OS had to
have? And how should they be implemented for the AmigaOS?

...

Two years later, people were still arguing about this, and since the sources
to the AmigaOS had not been obtained yet, not a single line of code had been
added to them. Discussions were still continuing, often repeating previous
discussion or turning into mere claims that things were, or weren't,
impossible.

In the winter of 1995, Aaron Digulla, who was fed up with this situation,
posted an RFC (request for comments) to the AOS mailing list in which he asked
what the minimal common ground might be. Several options were given and the
conclusion was that almost everyone would like to see an open OS which was
compatible with AmigaOS 3.1 (Kickstart 40.68) on which further discussions
could be based, to see what was possible and what was not.

And so work on AROS began, and the rest is history...


