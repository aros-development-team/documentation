========
diskfont
========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AvailFonts()`_                         `DisposeFontContents()`_                `NewFontContents()`_                    `NewScaledDiskFont()`_                  
`OpenDiskFont()`_                       
======================================= ======================================= ======================================= ======================================= 

-----------

AvailFonts()
============

Synopsis
~~~~~~~~
::

 LONG AvailFonts(
          STRPTR buffer,
          LONG bufBytes,
          LONG flags );

Function
~~~~~~~~
::

     Fill the supplied buffer with info about the available fonts.
     The buffer will after function execution first contains a
     struct AvailFontsHeader, and then an array of struct AvailFonts
     element (or TAvailFonts elements if AFF_TAGGED is specified in the
     flags parameter). If the buffer is not big enough for the
     descriptions than the additional length needed will be returned.


Inputs
~~~~~~
::

     buffer    - pointer to a buffer in which the font descriptions
                 should be placed.
                 
     bufBytes  - size of the supplied buffer.
     
     flags     - flags telling what kind of fonts to load,
                 for example AFF_TAGGED for tagged fonts also,
                 AFF_MEMORY for fonts in memory, AFF_DISK for fonts
                 on disk.


Result
~~~~~~
::

     shortage  - 0 if buffer was big enough or a number telling
                 how much additional place is needed.


Notes
~~~~~
::

     If the routine failes, then the afh_Numentries field
     in the AvailFontsHeader will be 0.



See also
~~~~~~~~

`OpenDiskfont()`_ `diskfont/diskfont.h </documentation/developers/headerfiles/diskfont/diskfont.h>`_ 

----------

DisposeFontContents()
=====================

Synopsis
~~~~~~~~
::

 VOID DisposeFontContents(
          struct FontContentsHeader * fontContentsHeader );

Function
~~~~~~~~
::


 Free a FontContents array obtained from NewFontContents().


Inputs
~~~~~~
::


 fontContentsHeader  --  Pointer to a struct FontContentsHeader got from
                         NewFontContents().



See also
~~~~~~~~

`NewFontContents()`_ 

----------

NewFontContents()
=================

Synopsis
~~~~~~~~
::

 struct FontContentsHeader * NewFontContents(
          BPTR fontsLock,
          STRPTR fontName );

Function
~~~~~~~~
::


 Create an array of FontContents entries describing the fonts related
 with 'fontName' -- this is those in the directory with the same name
 as 'fontName' without the ".font" suffix.


Inputs
~~~~~~
::


 fontsLock  --  A lock on the FONTS: directory or another directory
                containing the font file and associated directory
                exists.
 fontName   --  The font name (with the ".font" suffix).


Result
~~~~~~
::


 Pointer to a struct FontContentsHeader describing the font or NULL
 if something went wrong.



See also
~~~~~~~~

`DisposeFontContents()`_ 

----------

NewScaledDiskFont()
===================

Synopsis
~~~~~~~~
::

 struct DiskFont * NewScaledDiskFont(
          struct TextFont * sourceFont,
          struct TextAttr * destTextAttr );


----------

OpenDiskFont()
==============

Synopsis
~~~~~~~~
::

 struct TextFont * OpenDiskFont(
          struct TextAttr * textAttr );

Function
~~~~~~~~
::

             Tries to open the font specified by textAttr. If the font has allready
             been loaded into memory, it will be opened with OpenFont(). Otherwise
             OpenDiskFont() will try to load it from disk.


Inputs
~~~~~~
::

     textAttr - Description of the font to load. If the textAttr->ta_Style
                        FSF_TAGGED bit is set, it will be treated as a struct TTextAttr.
     


Result
~~~~~~
::

     Pointer to a struct TextFont on success, 0 on failure.



See also
~~~~~~~~

`AvailFonts()`_ 

