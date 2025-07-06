===========================================================
AROS Application Development Manual -- The Graphics Library
===========================================================

:Authors:   Matthias Rustler
:Copyright: Copyright (C) 2007-2025, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Unfinished
:ToDo:      Write introductions and examples

`Index <index>`_

.. Warning::

   This document is not finished! It is highly likely that many parts are
   out-of-date, contain incorrect information, or are simply missing
   altogether. If you want to help rectify this, please contact us.


.. Contents::


Bitmaps
-------
Bitmaps are the drawing sheets of AROS. Their coordinate systems have the
zero point in the upper left corner. The x-axis goes from left to right, the
y-axis from top to bottom.
The number of possible colors depends on the depth of the bitmap:

===== ==========
Depth Colors
===== ==========
1     2
2     4
3     8
4     16
5     32
6     64
7     128
8     256
15    32,768
16    65,536
24    16,777,216
===== ==========

The depths from 1 to 8 are LUT (look-up-table) modes. This means the red,
green, and blue (RGB) value for each color is stored in a table. The index
will then be stored as pen number in the bitmap.

The depths 15 and 16 are called high color, 24 is called true color. Unlike
LUT mode the RGB value is stored directly in the bitmap.

The graphics library has only a limited support for high/true color modes.
Some of the drawing functions work only with LUT modes. For full access you
need the functions from the `cybergraphics library <../autodocs/cgfx>`__.

======================== =====================================================
`GetBitMapAttr()`_       Query bitmap attributes. (Don't peek at bitmap.)
`AllocBitMap()`_         Allocate and initialize bitmap
`InitBitMap()`_          Initialize bitmap
`FreeBitMap()`_          Free resources allocated by a bitmap
`AllocRaster()`_         Allocate a single bitplane
`FreeRaster()`_          Free a single bitplane
`CopySBitMap()`_         Syncronize super-bitmap (see Intuition)
`SyncSBitMap()`_         Syncronize super-bitmap
======================== =====================================================



RastPort
--------
The connection between the bitmaps and most drawing functions is done by a
rastport. The rastport contains information about drawing pens, line and
area patterns, drawing mode and text font.

You can connect more than one rastport to a bitmap. This allows a fast switch
between different drawing configurations. Just copying a rastport is not
possible in AROS, however; you have to use the function `CloneRastPort()`_.

Some Intuition elements, like screens and windows, already have a RastPort
element. You can immediately use that for your drawing operations.

====== ============= ========
Object Structure     RastPort
====== ============= ========
screen struct Screen RastPort
window struct Window \*RPort
====== ============= ========

If you create a bitmap and want to draw into it you have to create the
rastport by yourself. Warning: this example is simplified and lacks checks
of return values::

    struct BitMap *bm = AllocBitMap(400, 300, 8, BMF_CLEAR, NULL);
    struct RastPort *rp = CreateRastPort();
    rp->BitMap = bm;
    ...
    WritePixel(rp, 50, 30);
    ...
    FreeRastPort(rp);
    FreeBitMap(bm);


Pens
~~~~
A rastport contains 3 pens. The A (foreground, primary) pen, B (background,
secondary) pen and the O (area outline) pen. The latter is used by the area
fill and flood fill functions.


Drawing modes
~~~~~~~~~~~~~
- JAM1: draw only with A pen.
- JAM2: draw bit 1 in a pattern with A pen, bit 0 with B pen
- COMPLEMENT: for each set bit, the state in the target is reversed
- INVERSVID: is used for text rendering
    - JAM1|INVERSVID: transparent letters outlined in foreground color
    - JAM2|INVERSVID: like previous, but letter in background color.

TODO: check whether the drawing modes are really available.


Pattern
~~~~~~~
The line pattern can be set with the macro `SetDrPt()`.  The second
parameter is a 16 bit pattern::

    SetDrPt(&rastPort, 0xCCCC);

The pattern can be reset with::

    SetDrPt(&rastPort, ~0);

For area patterns a macro `SetAfPt()` exists. The width is 16 bit, the
height a power of two (2, 4, 8, 16, ...). 
The third parameter is the n in 2^n=height::

    UWORD areaPattern[] =
    {
        0x5555, 0xAAAA
    };
    SetAfPt(&rastPort, areaPattern, 1);

Colored patterns are possible with a negative value for the height. The
number of bitplanes in the pattern must be the same as in the target bitmap.

Reset of area pattern::

    SetAfPt(&rastPort, NULL, 0);

===================== ========================================================
`CloneRastPort()`_    Copy rastport
`CreateRastPort()`_   Create rastport
`InitRastPort()`_     Initialize rastport
`DeinitRastPort()`_   Deinitialize rastport
`FreeRastPort()`_     Free rastport
`SetAPen()`_          Set primary pen
`GetAPen()`_          Get primary pen
`SetBPen()`_          Set secondary pen
`GetBPen()`_          Get secondary pen
SetOPen()             Set area outline pen and switch outline mode on \*
`SetOutlinePen()`_    Get area outline pen
`GetOutlinePen()`_    Get area outline pen
BNDRYOFF()            Switch off area outline mode \*
`SetDrMd()`_          Set drawing mode
`GetDrMd()`_          Get drawing mode
SetDrPt()             Set line pattern \*
SetAfPt()             Set area pattern \*
`SetABPenDrMd()`_     Set primary & secondary pen and drawing mode in one step
`SetRPAttrsA()`_      Set misc. drawing attributes
`GetRPAttrsA()`_      Get misc. drawing attributes
`InitTmpRas()`_       Initialize a TmpRas structure.
`SetWriteMask()`_     Set write mask
===================== ========================================================

\* Macro in `graphics/gfxmacros.h`_



Drawing functions
-----------------

A line is drawn by setting the pen position with `Move()`_ to the start
position and with `Draw()`_ to the end position.

For the `Flood()`_ function you have to attach a TmpRas to the rastport as
explained under `Area operations`_.

======================= ======================================================
`Move()`_               Change pen position
`Draw()`_               Draw line from pen position to given coordinates
`DrawEllipse()`_        Draw an ellipse
DrawCircle()            Draw a circle (macro in `graphics/gfxmacros.h`_)
`PolyDraw()`_           Draw connected lines from an array of points
`WritePixel()`_         Write a single pixel
`ReadPixel()`_          Read the pen value of a pixel
`EraseRect()`_          Fill rectangular area with current backfill hook
                        (TODO: what's this?)
`SetRast()`_            Fill entire drawing area with given pen
`RectFill()`_           Fill rectangular area with current rastport settings
`Flood()`_              Flood fill an arbitrary shape
======================= ======================================================



Data moving
-----------

========================== ===================================================
`BltBitMap()`_             Copy rectangular area
`BltBitMapRastPort()`_     Copy rectangular area
`BltRastPortBitMap()`_     Copy rectangular area (AROS extension)
`ClipBlit()`_              Copy rectangular area with layers and clip rects.
                           Use this if you want to blit into a window
`BltClear()`_              Set a memory block to zero. On classic Amigas this
                           block has to be in chip ram.
`BltMaskBitMapRastPort()`_ Copy rectangular area with using a mask
`BltPattern()`_            Draw a rectangular pattern into a bitmap
`BltTemplate()`_           Draw a rectangular pattern into a bitmap
`BitMapScale()`_           Copy a rectangular area and change its size
`ScalerDiv()`_             Helper function for `BitMapScale()`_
`ScrollRaster()`_          Move rectangular area within a bitmap
`ScrollRasterBF()`_        Move rectangular area, the vacated space is filled
                           with `EraseRect()`_
`WriteChunkyPixels()`_     Write rectangular area from array with pen values
`WritePixelArray8()`_      Write rectangular area from array with pen values
`ReadPixelArray8()`_       Read rectangular area into memory
`WritePixelLine8()`_       Write horiz. line from an array with pen values
`ReadPixelLine8()`_        Read horiz. line from an array into memory
========================== ===================================================



Area operations
---------------

The area functions allow a fast drawing of filled polygons and ellipses.

In order to use this functions you need a struct AreaInfo which must be
connected to the rastport. The area buffer must be WORD-aligned (it must have
an even address).
You need five bytes per vertex::

    #define AREA_SIZE 200
    WORD areaBuffer[AREA_SIZE];
    struct AreaInfo areaInfo = {0};
    memset(areabuffer, 0, sizeof(areabuffer));
    InitArea(&areaInfo, areaBuffer, sizeof(areaBuffer)/5);
    rastPort->AreaInfo = &areaInfo;

Additionally, you need a TmpRas structure. It should have the same width and
height as the bitmap you want to draw into::

    #define WIDTH 400
    #define HEIGHT 300
    PLANEPTR rasplane = AllocRaster(WIDTH, HEIGHT);
    struct TmpRas tmpRas = {0};
    InitTmpRas(&tmpRas, rasPlane, WIDTH * HEIGHT);
    rastPort->TmpRas = &tmpRas;

================== ===========================================================
`InitArea()`_      Initializes the AreaInfo
`AreaMove()`_      Closes open polygon and sets start point for a new one.
                   You don't have to connect the end point to the start point.
`AreaDraw()`_      Add point to vector buffer
`AreaEllipse()`_   Add filled ellipse to vector buffer
`AreaEnd()`_       Start filling operation
================== ===========================================================



Text
----

==================  ==========================================================
`OpenFont()`_       Open a font which is in the system font list.
                    Better use `OpenDiskFont()`_ from the diskfont library.
`CloseFont()`_      Close font opened by `OpenFont()`_ or `OpenDiskFont()`_
`AddFont()`_        Add font to the system list
`RemFont()`_        Remove font from the system list
`SetFont()`_        Set current font of rastport
`AskFont()`_        Get TextAttr for current rastport font
`SetSoftStyle()`_   Set soft style bits of current font
`AskSoftStyle()`_   Get soft style bits of current font
`Text()`_           Render text at current pen position
`ClearEOL()`_       Clear from current position to end of line
`ClearScreen()`_    Clear from current position to end of rastport
`ExtendFont()`_     Extend struct TextFont by a struct ExtendFont
`StripFont()`_      Remove tf_Extension from a font
`TextLength()`_     Calculate the width of a string in pixels. You can use
                    `TextExtent()`_ if you need more detailed information
`TextExtent()`_     Fill TextExtend structure with information on current font
`FontExtent()`_     Fill TextExtend structure with information on given font
`TextFit()`_        Give number of characters that will fit into given bounds
`WeighTAMatch()`_   Checks how well two different fonts match
==================  ==========================================================



Clipping
--------

Bitmaps you've created with `AllocBitMap()`_ don't have a clipping rectangle.
This means that you trash memory when you draw outside the bitmap. You can
either take care about your drawing operations or you can install a clipping
rectangle. There are two possibilities:

- Using the tag RPTAG_ClipRectangle in `SetRPAttrsA()`_::

    struct Rectangle rect = {0, 0, 399, 299};
    SetRPAttrs(&rastPort, RPTAG_ClipRectangle, &rect, TAG_DONE);

- Installing a layer::

    li = NewLayerInfo())
    rastPort.Layer = CreateUpfrontLayer(li, rastPort->BitMap, 0, 0, width - 1, height - 1, 0, NULL))

    ...

    DeleteLayer(0,rastPort.Layer)
    DisposeLayerInfo(li)

The latter is compatible with AmigaOS.



Color
-----

So far, only the SetXPen() functions have been used to select the drawing
pens. Described here is changing the red, green blue values of the pens.

We have to distinguish between two cases:

+ The colormap belongs to you.
  You can change the colors as you like with the LoadRGB... and SetRGB...
  functions. You'll get a private colormap when we open a private screen.

+ You want to draw in a window on a public Screen.
  You have to query a shared pen with the `ObtainBestPenA()`_ function.
  Otherwise you might change the colors used by other applications.


=================== ==========================================================
`GetColorMap()`_    Allocate and initialize colormap
`FreeColorMap()`_   Free colormap
`AttachPalExtra()`_ Allocate and attach palette sharing structure to colormap
`FindColor()`_      Find closest matching color
`ObtainBestPenA()`_ Search for closest color match or allocate a new pen
`ObtainPen()`_      Obtain a free palette entry
`ReleasePen()`_     Frees pen created with `ObtainPen()`_/`ObtainBestPenA()`_
`GetRGB32()`_       Read a series of RGB values from a colormap
`GetRGB4()`_        Reads RGB value of a single color register (deprecated)
`LoadRGB32()`_      Set a series of RGB values for this viewport
`LoadRGB4()`_       Set RGB color values from an array (deprecated)
`SetMaxPen()`_      Set maximum pen value for a rastport
`SetRGB32()`_       Set one color register for a viewport
`SetRGB32CM()`_     Set one color register for a colormap
`SetRGB4()`_        Set one color register for a viewport (deprecated)
`SetRGB4CM()`_      Set one color register for a colormap (deprecated)
=================== ==========================================================



Animation
---------

======================== =====================================================
`AddAnimOb()`_           Add AnimObject to linked list
`AddBob()`_              Add Bob to GEL list
`AddVSprite()`_          Add VSprite to GEL list
`AllocSpriteDataA()`_    Allocate sprite data and convert from a bitmap
`FreeSpriteData()`_      Free data allocated by AllocSpriteDataA()
`Animate()`_             Processes all AnimObs in the current animation list
`ChangeExtSpriteA()`_    Change extended sprite
`ChangeSprite()`_        Change simple sprite
`DoCollision()`_         Test all GEL for collisions
`DrawGList()`_           Draw all GEL
`GetGBuffers()`_         Allocate all buffers for an AnimOb
`FreeGBuffers()`_        Release memory which was allocated by GetGBuffers()
`SortGList()`_           Sort GEL list by y and x coordinates
`GetSprite()`_           Get a simple sprite
`FreeSprite()`_          Free sprite
`GetExtSpriteA()`_       Attempt to allocate one of the 8 sprites
`InitGMasks()`_          Initialize all masks of an AnimOb
`InitGels()`_            Initialize GEL list
`InitMasks()`_           Initialize BorderLine and CollMask of a VSprite
`MoveSprite()`_          Move sprite relative to viewport
RemBob()                 Remove a Bob from GEL list (macro)
`RemIBob()`_             Remove a Bob from GEL list and RastPort
`RemVSprite()`_          Remove VSprite from GEL list
`SetCollision()`_        Set which is called at collisions
`AllocDBufInfo()`_       Allocate structure for multi-buffered animation
`FreeDBufInfo()`_        Free multi-buffer information
`ChangeVPBitMap()`_      Change buffer
======================== =====================================================



Layers
------

======================== =====================================================
`AndRectRect()`_
`AndRectRegion()`_
`AndRectRegionND()`_
`AndRegionRegion()`_
`AndRegionRegionND()`_
`AreRegionsEqual()`_
`AttemptLockLayerRom()`_
`ClearRectRegion()`_
`ClearRectRegionND()`_
`ClearRegion()`_
`ClearRegionRegion()`_
`ClearRegionRegionND()`_
`CopyRegion()`_
`DisposeRegion()`_
`IsPointInRegion()`_
`NewRectRegion()`_
`NewRegion()`_
`OrRectRegion()`_
`OrRectRegionND()`_
`OrRegionRegion()`_
`OrRegionRegionND()`_
`ScrollRegion()`_
`SetRegion()`_
`SwapRegions()`_
`XorRectRegion()`_
`XorRectRegionND()`_
`XorRegionRegion()`_
`XorRegionRegionND()`_
======================== =====================================================



Display database
----------------

======================== =====================================================
`BestModeIDA()`_         Find a mode for the given properties
`OpenMonitor()`_         Open named monitor specification
`CloseMonitor()`_        Close monitor specification
`CoerceMode()`_          Viewport mode coercion
`FindDisplayInfo()`_     Get display information from the database
`NextDisplayInfo()`_     Iterate displayinfo
`ModeNotAvailable()`_    Check availability of a display ID
`GetVPModeID()`_         Get display ID from viewport
`GfxNew()`_              Allocate a graphics extended data structure
`GfxFree()`_             Free structure allocated by GfxNew()_
`GfxAssociate()`_        Associate a graphics extended node with a pointer
`GfxLookUp()`_           Find a graphics extended node by pointer
======================== =====================================================



Blitter
-------

======================== =====================================================
`DisownBlitter()`_       Release the bitter from private use
`OwnBlitter()`_          Try to own the blitter for private use
`QBSBlit()`_             Queue a beam-synchronized blit
`QBlit()`_               Queue a blit
`WaitBlit()`_            Wait for the blitter to finish
======================== =====================================================



Copper
------

======================== =====================================================
`CBump()`_               Increment user copper list pointer
`CMove()`_               Add a copper move instruction to user copper list
`CWait()`_               Add a copper wait instruction to user copper list
`FreeCopList()`_         Deallocate all memory associated with copper list
`FreeCprList()`_         Deallocate all memory associated of cprlist structure
`FreeVPortCopLists()`_   Deallocate copperlist from viewport
`MrgCop()`_              Merge together copper instructions
`UCopperListInit()`_     Allocate & initialize copperlist structures & buffers
======================== =====================================================



Miscellaneous
-------------

============================== ===============================================
`SetRGBConversionFunctionA()`_ Replace pixel conversion routine
`ConvertPixelsA()`_            Convert pixels from one pixfmt to another
`InitVPort()`_                 Initialize ViewPort structure
`InitView()`_                  Initialize View structure
`LoadView()`_                  Create current display from coprocessor
                               instruction list
`LockLayerRom()`_              Lock layer structure
`UnlockLayerRom()`_            Unlock layer structure
`MakeVPort()`_                 Create copper list for viewport
`ScrollVPort()`_               Scroll viewport
`SetChipRev()`_                Switch on chip-set features
`VBeamPos()`_                  Get vertical beam position
`VideoControl()`_              Modify viewport's colormap
`WaitBOVP()`_                  Wait till vertical beam reaches bottom viewport
`WaitTOF()`_                   Wait for vertical blank
`CalcIVG()`_                   Calculate number of blank lines above viewport
============================== ===============================================


.. Hyperlinks to graphics.library autodocs

.. _AddAnimOb(): ../autodocs/graphics#addanimob
.. _AddBob(): ../autodocs/graphics#addbob
.. _AddFont(): ../autodocs/graphics#addfont
.. _AddVSprite(): ../autodocs/graphics#addvsprite
.. _AllocBitMap(): ../autodocs/graphics#allocbitmap
.. _AllocDBufInfo(): ../autodocs/graphics#allocdbufinfo
.. _AllocRaster(): ../autodocs/graphics#allocraster
.. _AllocScreenBitMap(): ../autodocs/graphics#allocscreenbitmap
.. _AllocSpriteDataA(): ../autodocs/graphics#allocspritedataa
.. _AndRectRect(): ../autodocs/graphics#andrectrect
.. _AndRectRegion(): ../autodocs/graphics#andrectregion
.. _AndRectRegionND(): ../autodocs/graphics#andrectregionnd
.. _AndRegionRegion(): ../autodocs/graphics#AndRegionRegion
.. _AndRegionRegionND(): ../autodocs/graphics#AndRegionRegionnd
.. _Animate(): ../autodocs/graphics#animate
.. _AreRegionsEqual(): ../autodocs/graphics#areregionsequal
.. _AreaDraw(): ../autodocs/graphics#areadraw
.. _AreaEllipse(): ../autodocs/graphics#areaellipse
.. _AreaEnd(): ../autodocs/graphics#areaend
.. _AreaMove(): ../autodocs/graphics#areamove
.. _AskFont(): ../autodocs/graphics#askfont
.. _AskSoftStyle(): ../autodocs/graphics#asksoftstyle
.. _AttachPalExtra(): ../autodocs/graphics#attachpalextra
.. _AttemptLockLayerRom(): ../autodocs/graphics#attemptlocklayerrom
.. _BestModeIDA(): ../autodocs/graphics#bestmodeida
.. _BitMapScale(): ../autodocs/graphics#bitmapscale
.. _BltBitMap(): ../autodocs/graphics#bltbitmap
.. _BltBitMapRastPort(): ../autodocs/graphics#bltbitmaprastport
.. _BltClear(): ../autodocs/graphics#bltclear
.. _BltMaskBitMapRastPort(): ../autodocs/graphics#bltmaskbitmaprastport
.. _BltPattern(): ../autodocs/graphics#bltpattern
.. _BltRastPortBitMap(): ../autodocs/graphics#bltrastportbitmap
.. _BltTemplate(): ../autodocs/graphics#blttemplate
.. _CBump(): ../autodocs/graphics#cbump
.. _CMove(): ../autodocs/graphics#cmove
.. _CWait(): ../autodocs/graphics#cwait
.. _CalcIVG(): ../autodocs/graphics#calcivg
.. _ChangeExtSpriteA(): ../autodocs/graphics#changeextspritea
.. _ChangeSprite(): ../autodocs/graphics#changesprite
.. _ChangeVPBitMap(): ../autodocs/graphics#changevpbitmap
.. _ClearEOL(): ../autodocs/graphics#cleareol
.. _ClearRectRegion(): ../autodocs/graphics#clearrectregion
.. _ClearRectRegionND(): ../autodocs/graphics#clearrectregionnd
.. _ClearRegion(): ../autodocs/graphics#clearregion
.. _ClearRegionRegion(): ../autodocs/graphics#clearregionregion
.. _ClearRegionRegionND(): ../autodocs/graphics#clearregionregionnd
.. _ClearScreen(): ../autodocs/graphics#clearscreen
.. _ClipBlit(): ../autodocs/graphics#clipblit
.. _CloneRastPort(): ../autodocs/graphics#clonerastport
.. _CloseFont(): ../autodocs/graphics#closefont
.. _CloseMonitor(): ../autodocs/graphics#closemonitor
.. _CoerceMode(): ../autodocs/graphics#coercemode
.. _ConvertPixelsA(): ../autodocs/graphics#convertpixelsa
.. _CopyRegion(): ../autodocs/graphics#copyregion
.. _CopySBitMap(): ../autodocs/graphics#copysbitmap
.. _CreateRastPort(): ../autodocs/graphics#createrastport
.. _DeinitRastPort(): ../autodocs/graphics#deinitrastport
.. _DisownBlitter(): ../autodocs/graphics#disownblitter
.. _DisposeRegion(): ../autodocs/graphics#disposeregion
.. _DoCollision(): ../autodocs/graphics#docollision
.. _Draw(): ../autodocs/graphics#draw
.. _DrawEllipse(): ../autodocs/graphics#drawellipse
.. _DrawGList(): ../autodocs/graphics#drawglist
.. _EraseRect(): ../autodocs/graphics#eraserect
.. _ExtendFont(): ../autodocs/graphics#extendfont
.. _FindColor(): ../autodocs/graphics#findcolor
.. _FindDisplayInfo(): ../autodocs/graphics#finddisplayinfo
.. _Flood(): ../autodocs/graphics#flood
.. _FontExtent(): ../autodocs/graphics#fontextent
.. _FreeBitMap(): ../autodocs/graphics#freebitmap
.. _FreeColorMap(): ../autodocs/graphics#freecolormap
.. _FreeCopList(): ../autodocs/graphics#freecoplist
.. _FreeCprList(): ../autodocs/graphics#freecprlist
.. _FreeDBufInfo(): ../autodocs/graphics#freedbufinfo
.. _FreeGBuffers(): ../autodocs/graphics#freegbuffers
.. _FreeRastPort(): ../autodocs/graphics#freerastport
.. _FreeRaster(): ../autodocs/graphics#freeraster
.. _FreeSprite(): ../autodocs/graphics#freesprite
.. _FreeSpriteData(): ../autodocs/graphics#freespritedata
.. _FreeVPortCopLists(): ../autodocs/graphics#freevportcoplists
.. _GetAPen(): ../autodocs/graphics#getapen
.. _GetBPen(): ../autodocs/graphics#getbpen
.. _GetBitMapAttr(): ../autodocs/graphics#getbitmapattr
.. _GetColorMap(): ../autodocs/graphics#getcolormap
.. _GetDrMd(): ../autodocs/graphics#getdrmd
.. _GetExtSpriteA(): ../autodocs/graphics#getextspritea
.. _GetGBuffers(): ../autodocs/graphics#getgbuffers
.. _GetOutlinePen(): ../autodocs/graphics#getoutlinepen
.. _GetRGB32(): ../autodocs/graphics#getrgb32
.. _GetRGB4(): ../autodocs/graphics#getrgb4
.. _GetRPAttrsA(): ../autodocs/graphics#getrpattrsa
.. _GetSprite(): ../autodocs/graphics#getsprite
.. _GetVPModeID(): ../autodocs/graphics#getvpmodeid
.. _GfxAssociate(): ../autodocs/graphics#gfxassociate
.. _GfxFree(): ../autodocs/graphics#gfxfree
.. _GfxLookUp(): ../autodocs/graphics#gfxlookup
.. _GfxNew(): ../autodocs/graphics#gfxnew
.. _InitArea(): ../autodocs/graphics#initarea
.. _InitBitMap(): ../autodocs/graphics#initbitmap
.. _InitGMasks(): ../autodocs/graphics#initgmasks
.. _InitGels(): ../autodocs/graphics#initgels
.. _InitGfxHidd(): ../autodocs/graphics#initgfxhidd
.. _InitMasks(): ../autodocs/graphics#initmasks
.. _InitRastPort(): ../autodocs/graphics#initrastport
.. _InitTmpRas(): ../autodocs/graphics#inittmpras
.. _InitVPort(): ../autodocs/graphics#initvport
.. _InitView(): ../autodocs/graphics#initview
.. _IsPointInRegion(): ../autodocs/graphics#ispointinregion
.. _LateGfxInit(): ../autodocs/graphics#lategfxinit
.. _LoadRGB32(): ../autodocs/graphics#loadrgb32
.. _LoadRGB4(): ../autodocs/graphics#loadrgb4
.. _LoadView(): ../autodocs/graphics#loadview
.. _LockLayerRom(): ../autodocs/graphics#locklayerrom
.. _MakeVPort(): ../autodocs/graphics#makevport
.. _ModeNotAvailable(): ../autodocs/graphics#modenotavailable
.. _MouseCoordsRelative(): ../autodocs/graphics#mousecoordsrelative
.. _Move(): ../autodocs/graphics#move
.. _MoveSprite(): ../autodocs/graphics#movesprite
.. _MrgCop(): ../autodocs/graphics#mrgcop
.. _NewRectRegion(): ../autodocs/graphics#newrectregion
.. _NewRegion(): ../autodocs/graphics#newregion
.. _NextDisplayInfo(): ../autodocs/graphics#nextdisplayinfo
.. _ObtainBestPenA(): ../autodocs/graphics#obtainbestpena
.. _ObtainPen(): ../autodocs/graphics#obtainpen
.. _OpenFont(): ../autodocs/graphics#openfont
.. _OpenMonitor(): ../autodocs/graphics#openmonitor
.. _OrRectRegion(): ../autodocs/graphics#orrectregion
.. _OrRectRegionND(): ../autodocs/graphics#orrectregionnd
.. _OrRegionRegion(): ../autodocs/graphics#orregionregion
.. _OrRegionRegionND(): ../autodocs/graphics#orregionregionnd
.. _OwnBlitter(): ../autodocs/graphics#ownblitter
.. _PolyDraw(): ../autodocs/graphics#polydraw
.. _QBSBlit(): ../autodocs/graphics#qbsblit
.. _QBlit(): ../autodocs/graphics#qblit
.. _ReadPixel(): ../autodocs/graphics#readpixel
.. _ReadPixelArray8(): ../autodocs/graphics#readpixelarray8
.. _ReadPixelLine8(): ../autodocs/graphics#readpixelline8
.. _RectFill(): ../autodocs/graphics#rectfill
.. _ReleasePen(): ../autodocs/graphics#releasepen
.. _RemFont(): ../autodocs/graphics#remfont
.. _RemIBob(): ../autodocs/graphics#remibob
.. _RemVSprite(): ../autodocs/graphics#remvsprite
.. _ScalerDiv(): ../autodocs/graphics#scalerdiv
.. _ScrollRaster(): ../autodocs/graphics#scrollraster
.. _ScrollRasterBF(): ../autodocs/graphics#scrollrasterbf
.. _ScrollRegion(): ../autodocs/graphics#scrollregion
.. _ScrollVPort(): ../autodocs/graphics#scrollvport
.. _SetABPenDrMd(): ../autodocs/graphics#setabpendrmd
.. _SetAPen(): ../autodocs/graphics#setapen
.. _SetBPen(): ../autodocs/graphics#setbpen
.. _SetChipRev(): ../autodocs/graphics#setchiprev
.. _SetCollision(): ../autodocs/graphics#setcollision
.. _SetDrMd(): ../autodocs/graphics#setdrmd
.. _SetFont(): ../autodocs/graphics#setfont
.. _SetFrontBitMap(): ../autodocs/graphics#setfrontbitmap
.. _SetMaxPen(): ../autodocs/graphics#setmaxpen
.. _SetOutlinePen(): ../autodocs/graphics#setoutlinepen
.. _SetPointerPos(): ../autodocs/graphics#setpointerpos
.. _SetPointerShape(): ../autodocs/graphics#setpointershape
.. _SetRGB32(): ../autodocs/graphics#setrgb32
.. _SetRGB32CM(): ../autodocs/graphics#setrgb32cm
.. _SetRGB4(): ../autodocs/graphics#setrgb4
.. _SetRGB4CM(): ../autodocs/graphics#setrgb4cm
.. _SetRGBConversionFunctionA(): ../autodocs/graphics#setrgbconversionfunctiona
.. _SetRPAttrsA(): ../autodocs/graphics#setrpattrsa
.. _SetRast(): ../autodocs/graphics#setrast
.. _SetRegion(): ../autodocs/graphics#setregion
.. _SetSoftStyle(): ../autodocs/graphics#setsoftstyle
.. _SetWriteMask(): ../autodocs/graphics#setwritemask
.. _ShowImminentReset(): ../autodocs/graphics#showimminentreset
.. _SortGList(): ../autodocs/graphics#sortglist
.. _StripFont(): ../autodocs/graphics#stripfont
.. _SwapRegions(): ../autodocs/graphics#swapregions
.. _SyncSBitMap(): ../autodocs/graphics#syncsbitmap
.. _Text(): ../autodocs/graphics#text
.. _TextExtent(): ../autodocs/graphics#textextent
.. _TextFit(): ../autodocs/graphics#textfit
.. _TextLength(): ../autodocs/graphics#textlength
.. _UCopperListInit(): ../autodocs/graphics#ucopperlistinit
.. _UnlockLayerRom(): ../autodocs/graphics#unlocklayerrom
.. _VBeamPos(): ../autodocs/graphics#vbeampos
.. _VideoControl(): ../autodocs/graphics#videocontrol
.. _WaitBOVP(): ../autodocs/graphics#waitbovp
.. _WaitBlit(): ../autodocs/graphics#waitblit
.. _WaitTOF(): ../autodocs/graphics#waittof
.. _WeighTAMatch(): ../autodocs/graphics#weightamatch
.. _WriteChunkyPixels(): ../autodocs/graphics#writechunkypixels
.. _WritePixel(): ../autodocs/graphics#writepixel
.. _WritePixelArray8(): ../autodocs/graphics#writepixelarray8
.. _WritePixelLine8(): ../autodocs/graphics#writepixelline8
.. _XorRectRegion(): ../autodocs/graphics#xorrectregion
.. _XorRectRegionND(): ../autodocs/graphics#xorrectregionnd
.. _XorRegionRegion(): ../autodocs/graphics#xorregionregion
.. _XorRegionRegionND(): ../autodocs/graphics#xorregionregionnd


.. Hyperlinks to diskfont.library autodocs

.. _OpenDiskFont(): ../autodocs/diskfont#opendiskfont


.. Hyperlinks to headerfiles

.. _graphics/gfxmacros.h: /{{ devdocpath }}headerfiles/graphics/gfxmacros.h
