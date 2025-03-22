====================
Summary: Preferences
====================

:Authors:   Sven Drieling
:Copyright: Copyright © 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Finished.

.. Contents::


Abstract
========

Summary of the "preferences" thread on the aros-dev mailinglist during
Februari 2001.


Classic style
=============

One prefs editor for each iff format.


Framework
=========

A common framework for preferences editors to maximize code reuse across
several small programs.


Modular prefs system
====================

Single preference program with many preference modules? Like MUI Prefs.

+ Model for data with an OOP class.
+ GUI handler to support different GUI systems (BGUI, MUI, Gadtools, GTK...)
+ Description of GUI in text form (programming language, html, xml like).

  - XML

    + Mozilla as bad example.
    + Overkill?


IPrefs
======

+ RAM: handler
+ File notification
+ Special ENV: handler like HappyEnv.


GUI
====

Which (default) GUI(s) should the system support?

+ Gadtools

  - Not font sensitive

+ BGUI

  - Font sensitive
  - Part of AROS
  - Useful to finding bugs in BGUI

+ MUI

  - Not open source
  - Font senstive
  - Popular
  - Many classes of third parties
  - Zune (open source) with implementation of MUI parts.

+ Reaction
  - Official GUI of AmigaOS V3.5+
  - Font sensitive


Formats
=======

+ First of all, we want to be compatible. When we understand what is going in,
  then we can improve.
+ Converter for the different formats.
+ If you change the prefs file format you won't break any compatibility.
  Prefs file are not likely at all to be exchange among users and even in
  such a case we can supply a converter.
+ Users will want to transfer their current settings to AROS.


+ IFF

  - Amiga standard
  - Flexible
  - Binary format

+ Text

  - No real standard
  - Could be use without a frontend (prefs application).
  - Easy to read and write with ascii editor.
  - Easy to destroy/hack with ascii editor.

+ XML

  - Standard
  - Offers the flexibility of IFF in ascii form.
  - Could be use without a frontend (prefs application).
  - Readable and writable with ascii editor.
  - Easy to destroy/hack with ascii editor.
  - XML support needs

    + We need a working XML parser
    + We must port it to AROS
    + We must define DTDs
    + We must still provide a way to load/save IFF Prefs
    + We must have additional code which can distinguish between
      XML and IFF and load/save both formats.

One of the many strengths of AmigaOS has - from day one back in 1985 -
been its superior 'end user experience'. If you know how to handle a
computer mouse and a keyboard, you pretty much grasp the AmigaOS GUI
components in just a few minutes.

Sure, you could easily have all of the configuration files stored as
plain ASCII allowing for users to fire up 'C:Ed' and do whatever you
wanna do. However, this is not the AmigaOS tradition.


New and extended prefs formats
==============================

+ Coordination with H&P and Amiga.
+ Extension of the current prefs formats with AROS-specific chunks.
+ New formats in iff or a new format.
+ Still storing prefs in IFF format but providing an interface
  so that they could be edit as text or XML.

You mean an additional built in iffparse stream hook in iffparse.library?
As of now there is a clip stream hook (InitIFFasClip() - for reading from
clipboard) and a dos stream hook (InitIFFasDOS() for reading normal files).

So one could have an ascii stream hook (InitIFFasAscii()) which reads/writes
files which look like this::

  <FORM type=ILBM>
   <CHUNK1>
    AB CD 01 34 57 A9
   </CHUNK1>
   <CHUNK2>
    01 AB C9 F0
   </CHUNK2>
  </FORM>

Or something similiar. But it looks ugly as the stream hook does not know
what the user is going to write/read. What kind of data (string/integer). So
it can only generate hex strings.

So, one would have to add some new functions/parameters to iffparse.library
with which to tell it about the chunky you are going to write/read.

For example Input Prefs which uses INPT chunk as defined in
compiler/include/prefs/input.h::

    struct InputPrefs {
        char           ip_Keymap[16];
        UWORD          ip_PointerTicks;
        struct timeval ip_DoubleClick;
        struct timeval ip_KeyRptDelay;
        struct timeval ip_KeyRptSpeed;
        WORD           ip_MouseAccel;
    };

    struct ChunkDataInfo
    {
      UWORD type;
      UWORD size;
      STRPTR name;
    } [] cdi =
    {
      {CDTYPE_STRING, 16, "Keymap"},
      {CDTYPE_UINT, 16, "PointerTicks"},
      {CDTYPE_UINT, 4, "DoubleClickSeconds"},
      {CDTYPE_UINT, 4, "DoubleClikcMicros"},
      {CDTYPE_UINT, 4, "KeyRptDelaySeconds"},
      {CDTYPE_UINT, 4, "KeyRptDelayMicros"},
      {CDTYPE_UINT, 4, "KeyRptSpeedSeconds"},
      {CDTYPE_UINT, 4, "KeyRptSpeedMicros"},
      {CDTYPE_INT, 2, "MouseAccel"},
      {0}
    };

    New_WriteChunkBytes
    (
        iff, &MyBigEndianAmigaAlignedInputPrefs, sizeof(..),
        IFFPARSEA_ChunkInfo, cdi, TAG_DONE
    );

    -->

    <INPT>
     <Keymap type=string value="usa">
     <PointerTicks type=uint value="10">
     ...
    </INPT>

Unfortunately there are also prefs chunks with variable look/length
(WBPattern), so one might have to generate this tables above during runtime
(in the prefs program) in certain cases.


Misc
====

+ Multi user support.


Conclusion
==========

+ Current prefs applications must use the IFF formats of AmigaOS 3.0.
+ BGUI would be a good choice for the GUI (avaible in AROS, font sensitive).

