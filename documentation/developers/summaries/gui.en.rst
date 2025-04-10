============
Summary: GUI
============

:Authors:   Sven Drieling
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Finished.

.. Contents::


Abstract
========

This is a summary of discussions about GUIs for AROS on aros-dev during
January 2002.

This summary contains comments from:

+ Björn Hagström <orgin@home.se>
+ Peter Eriksson
+ Adam Chodorowski <adam.chodorowski@home.se>
+ Iain Templeton <iaint@starbug.ugh.net.au>
+ Daniel Holmen <lys_lue@hotmail.com>


Uniform GUI for AROS
====================

I think it's time to start to think about a uniform GUI standard for
AROS system tool GUIs before we get too many different ways of
implementing GUIs.


Reasons for an uniform GUI
==========================

+ Conform look for the OS
+ Third parties must not use the official GUI system

I would like to point out that this common gui system should be used for
everything from tools, prefs, commodities, utilities to requesters.

At the moment there's a mix of a few different systems that is in use, which
really goes against the point that it should have a small footprint. We
could use one single with twice the features and still get a smaller
footprint than using a range of different systems at the same time.

So basically the main point is to define what system people should use, a
sort of enforced direction. Giving the os a more conform look.

The system used for non-OS applications would naturally be a free choice.
This idea is just about the things that come with the core distribution.
Sort of what you get with the 3.1 rom and disks.


Features / Requirements
=======================

This GUI system should follow the following requirements:

- Should look as pretty as possible
- Small basic footprint.
- Scalable.
- Runtime configurable.
- Extendable with new classes and items.
- Light-weighted to fit on removable media (such as boot floppies)
- No recompilation of binaries when new features are added, such as
  adding the ability to define a standard system wide background texture
  for buttons etc.
- AROS Style Guide
- More ?

Now, gadtools for example, might be a fine system. But it does not allow
for stuff like defining backgrounds textures, different fonts, colors,
bordertypes and so on without recompiling. This is IMHO unacceptable from
a user standpoint, and AROS really should have something more modern.

So what do we do?

We have things like BGUI, MUI, ClassAct etc out there. Should we try to
use one of these systems or build a new one? What do you all think?


Which GUI?
==========

+ Improve Gadtools?
+ Using BGUI
+ Using MUI
+ Using ReAction (AmigaOS V3.5+)


Gadtools
--------

+ GadTools is simply not good enough for a modern OS (which I think AROS
  should be ;-)).
+ Hardcoded position and sizes
+ gadtools.library being implemented using BOOPSI is that it would be
  quite easy to, say, have a prefs editor that let you set the classname
  that gets constructed when you create boopsi gadgets of a specific kind.

  This way you could do some theme-ability without having to let the
  programs know. It also means you don't need to reimplement most of the
  complex stuff, just the GM_RENDER code (such as the layout parts).

  I don't think you can do very much theme-ability without breaking
  compatibility, since GadTools is based on absolute position and
  size of gadgets. Many programs assume that GadTools gadgets have 'x'
  amount of border etc (AFAIK it's not possible to 'find out' such
  things, since it's hardcoded anyway).

  ...And this is bad practice from the very beginning. There should have
  been a clientWidth, or innerWidth to go along with a borderWidth
  (or something like that).


MUI
----

+ Problem MUI is closed source, commercial software.
+ Convince Stefan Stuntz to release the source.
+ Convince Stefan Stuntz to release a binary for AROS.
+ Reimplement MUI starting with Zune (GPLed MUI clone for X11).
  Author is Flavio Stanchina, *(dead link removed)*, flavio.stanchina@tin.it.


ReAction
--------

+ ReAction is the GUI system of AmigaOS V3.5+
+ AROS should only have one GUI standard

+ A lot of work to implement it (no special ReAction code base to start)
+ Not many programs use ReAction, much more use MUI but ReAction is new.
+ ReAction isn't very configurable but it seems possible to make it
  very configurable and good looking without breaking API compatibility.

I think we should use ReAction. My reasoning goes something like this:

1. The official goal of AROS is to be compatible with AmigaOS 3.1, but
   this is only because it was written down before 3.5 and above existed.
   I assume that we want AROS to be compatible with AmigaOS 3.5 and above,
   and probably higher version numbers (as long as it's the basic, same
   classic style OS (i.e. not AmigaDE)).

2. Since we want to be compatible with AmigaOS 3.5 and above, we want to have
   ReAction compatability, since this is the official GUI standard (and most
   core applications in AmigaOS 3.5+ are written in it).

3. If we have ReAction compatability, we most likely want to have it in the
   core distribution (since it's in the core distribution of AmigaOS).

4. Since we do not want to have multiple GUI standards in the core OS
   (since, as you say, we want to fit it on a single disk perhaps),
   there is only one option: use ReAction for all core applications,
   because of the point above.

So, we should go for ReAction. There are a couple of issues with this you'll
probably bring up:

1. It's a lot of work to implement ReAction, since there is no existing
   codebase to work from (i.e. we must begin from scratch).

   This is true, but since we want ReAction anyway (see point 2 above),
   we'd have to invest this time anyway.

2. ReAction isn't very configurable, and people (e.g. me ;-)) think it's
   ugly.

   I haven't looked very closely at the API of ReAction, but I think it's
   possible to make it very configurable and good looking without breaking
   API compatability. You can already specify some options, like background
   texture and basic look of buttons ('gadtools', 'thin', 'xen'), which seems
   totally transparent to the application using ReAction, so extending it
   with more configuration options should be possible.

3. Not many programs use ReAction, much more use MUI.

   Granted, but see point 2 and 3 above. We want to have ReAction compatability
   anyway, so we might just as well use it. Also, the number of ReAction
   applications is AFAIK rising, since it's the GUI standard of AmigaOS 3.5+.
   Also, it's probably just as much work to implement an Open Source version
   of MUI (i.e. Zune) as implementing ReAction.

