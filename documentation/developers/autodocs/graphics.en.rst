========
graphics
========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`AddAnimOb()`_                          `AddBob()`_                             `AddDisplayDriverA()`_                  `AddFont()`_                            
`AddVSprite()`_                         `AllocBitMap()`_                        `AllocDBufInfo()`_                      `AllocRaster()`_                        
`AllocSpriteDataA()`_                   `AndRectRegion()`_                      `AndRectRegionND()`_                    `AndRegionRegion()`_                    
`AndRegionRegionND()`_                  `Animate()`_                            `AreaCircle()`_                         `AreaDraw()`_                           
`AreaEllipse()`_                        `AreaEnd()`_                            `AreaMove()`_                           `AreRegionsEqual()`_                    
`AskFont()`_                            `AskSoftStyle()`_                       `AttachPalExtra()`_                     `AttemptLockLayerRom()`_                
`BestModeIDA()`_                        `BitMapScale()`_                        `BltBitMap()`_                          `BltBitMapRastPort()`_                  
`BltClear()`_                           `BltMaskBitMapRastPort()`_              `BltPattern()`_                         `BltTemplate()`_                        
`CalcIVG()`_                            `CBump()`_                              `CEND()`_                               `ChangeExtSpriteA()`_                   
`ChangeSprite()`_                       `ChangeVPBitMap()`_                     `CINIT()`_                              `ClearEOL()`_                           
`ClearRectRegion()`_                    `ClearRectRegionND()`_                  `ClearRegion()`_                        `ClearRegionRegion()`_                  
`ClearRegionRegionND()`_                `ClearScreen()`_                        `ClipBlit()`_                           `CloseFont()`_                          
`CloseMonitor()`_                       `CMove()`_                              `CoerceMode()`_                         `CopySBitMap()`_                        
`CWait()`_                              `DisownBlitter()`_                      `DisposeRegion()`_                      `DoCollision()`_                        
`Draw()`_                               `DrawEllipse()`_                        `DrawGList()`_                          `EraseRect()`_                          
`ExtendFont()`_                         `FindColor()`_                          `FindDisplayInfo()`_                    `Flood()`_                              
`FontExtent()`_                         `FreeBitMap()`_                         `FreeColorMap()`_                       `FreeCopList()`_                        
`FreeCprList()`_                        `FreeDBufInfo()`_                       `FreeGBuffers()`_                       `FreeRaster()`_                         
`FreeSprite()`_                         `FreeSpriteData()`_                     `FreeVPortCopLists()`_                  `GetAPen()`_                            
`GetBitMapAttr()`_                      `GetBPen()`_                            `GetColorMap()`_                        `GetDisplayInfoData()`_                 
`GetDrMd()`_                            `GetExtSpriteA()`_                      `GetGBuffers()`_                        `GetOutlinePen()`_                      
`GetRGB32()`_                           `GetRGB4()`_                            `GetRPAttrsA()`_                        `GetSprite()`_                          
`GetVPModeID()`_                        `GfxAssociate()`_                       `GfxFree()`_                            `GfxLookUp()`_                          
`GfxNew()`_                             `InitArea()`_                           `InitBitMap()`_                         `InitGels()`_                           
`InitGMasks()`_                         `InitMasks()`_                          `InitRastPort()`_                       `InitTmpRas()`_                         
`InitView()`_                           `InitVPort()`_                          `IsPointInRegion()`_                    `LoadRGB32()`_                          
`LoadRGB4()`_                           `LoadView()`_                           `LockLayerRom()`_                       `MakeVPort()`_                          
`ModeNotAvailable()`_                   `Move()`_                               `MoveSprite()`_                         `MrgCop()`_                             
`NewRegion()`_                          `NextDisplayInfo()`_                    `ObtainBestPenA()`_                     `ObtainPen()`_                          
`OpenFont()`_                           `OpenMonitor()`_                        `OrRectRegion()`_                       `OrRectRegionND()`_                     
`OrRegionRegion()`_                     `OrRegionRegionND()`_                   `OwnBlitter()`_                         `PolyDraw()`_                           
`QBlit()`_                              `QBSBlit()`_                            `ReadPixel()`_                          `ReadPixelArray8()`_                    
`ReadPixelLine8()`_                     `RectFill()`_                           `ReleasePen()`_                         `RemFont()`_                            
`RemIBob()`_                            `RemVSprite()`_                         `ScalerDiv()`_                          `ScrollRaster()`_                       
`ScrollRasterBF()`_                     `ScrollRegion()`_                       `ScrollVPort()`_                        `SetABPenDrMd()`_                       
`SetAPen()`_                            `SetBPen()`_                            `SetChipRev()`_                         `SetCollision()`_                       
`SetDisplayDriverCallback()`_           `SetDrMd()`_                            `SetFont()`_                            `SetMaxPen()`_                          
`SetOutlinePen()`_                      `SetRast()`_                            `SetRegion()`_                          `SetRGB32()`_                           
`SetRGB32CM()`_                         `SetRGB4()`_                            `SetRGB4CM()`_                          `SetRPAttrsA()`_                        
`SetSoftStyle()`_                       `SetWriteMask()`_                       `SortGList()`_                          `StripFont()`_                          
`SyncSBitMap()`_                        `Text()`_                               `TextExtent()`_                         `TextFit()`_                            
`TextLength()`_                         `UCopperListInit()`_                    `UnlockLayerRom()`_                     `VBeamPos()`_                           
`VideoControl()`_                       `WaitBlit()`_                           `WaitBOVP()`_                           `WaitTOF()`_                            
`WeighTAMatch()`_                       `WriteChunkyPixels()`_                  `WritePixel()`_                         `WritePixelArray8()`_                   
`WritePixelLine8()`_                    `XorRectRegion()`_                      `XorRectRegionND()`_                    `XorRegionRegion()`_                    
`XorRegionRegionND()`_                  
======================================= ======================================= ======================================= ======================================= 

-----------

AddAnimOb()
===========

Synopsis
~~~~~~~~
::

 void AddAnimOb(
          struct AnimOb * anOb,
          struct AnimOb ** anKey,
          struct RastPort * rp );

Function
~~~~~~~~
::

     Link the AnimOb into the list pointed to by AnimKey.
     Calls AddBob with all components of a Bob and initializes
     all the timers of the components of this AnimOb.
     You have to provide a valid GelsInfo structure that is linked
     to the RastPort (InitGels())


Inputs
~~~~~~
::

     anOb  = pointer to AnimOb structure to be added to list of
             AnimObs
     anKey = address of a pointer to the first AnimOb in the list
             (when first calling this function the content of
             this address has to be NULL!)
     rp    = pointer to a valid RastPort with initialized GelsInfo
             structure



See also
~~~~~~~~

`InitGels()`_ `Animate()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

AddBob()
========

Synopsis
~~~~~~~~
::

 void AddBob(
          struct Bob * bob,
          struct RastPort * rp );

Function
~~~~~~~~
::

     The Bob is linked into the current gel list via AddVSprite.
     The Bob's flags are set up.


Inputs
~~~~~~
::

     Bob = pointer to Bob to be added to gel list
     rp  = pointer to RastPort that has an initilized GelsInfo linked
           to it (see InitGels()).



See also
~~~~~~~~

`InitGels()`_ `AddVSprite()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

AddDisplayDriverA()
===================

Synopsis
~~~~~~~~
::

 ULONG AddDisplayDriverA(
          APTR gfxclass,
          const struct TagItem * attrs,
          const struct TagItem * tags );
 
 ULONG AddDisplayDriver(
          APTR gfxclass,
          const struct TagItem * attrs,
          TAG tag, ... );

Function
~~~~~~~~
::

     Add a display driver to the system.


Inputs
~~~~~~
::

     gfxhidd - A pointer to an OOP class of the display driver
     attrs   - Additional attributes to supply to the driver class during
               object creation
     tags    - An optional TagList describing how graphics.library should
         handle the driver. Valid tags are:

         DDRV_BootMode     - A boolean value telling that a boot mode
                             driver is being added. Boot mode drivers
                             will automatically shut down on next
                             AddDisplayDriverA() call, unless
                             DDRV_KeepBootMode = TRUE is specified.
                             Defaults to FALSE.
         DDRV_MonitorID    - Starting monitor ID to assign to the driver.
                             Use it with care. An attempt to add already
                             existing ID will fail with a DD_ID_EXISTS
                             code. By default the next available ID will
                             be picked up automatically.
         DDRV_ReserveIDs   - The number of subsequent monitor IDs to
                             reserve. Reserved IDs can be reused only
                             with DDRV_MonitorID tag. This tag is
                             provided as an aid to support possible
                             removable display devices. Defaults to 1.
         DDRV_KeepBootMode - Do not shut down boot mode drivers. Use this
                             tag if you are 100% sure that your driver
                             won't conflict with boot mode driver (like
                             VGA or VESA) and won't attempt to take over
                             its hardware. Defaults to FALSE.
         DDRV_ResultID     - A pointer to a ULONG location where the ID
                             assigned to your driver will be placed.
                             Useful if you reserve some ID for future use.
                             Note that the returned ID will be the one
                             just assigned to your driver instance.
                             Increment it yourself in order to obtain
                             other reserved IDs.
         DDRV_IDMask       - A mask for separating the monitor ID from the
                             HIDD-specific part. This mask specifies what
                             mode ID bits are the monitor ID and what bits
                             actually specify the mode. The default value
                             is 0xFFFF0000.
                             
                             Using the mask you can split your monitor ID
                             into 'sub-Ids'. Example:

                             Supplied tags: DDRV_IDMask, 0xFFFFFF00,
                                            DDRV_ResultID, &myid

                             After a successful call, myid will contain the
                             base ID assigned by graphics.library to your
                             driver, let's say 0x00140000. However, since
                             you specified a longer mask, you leave only
                             one byte for mode designation, and reserve
                             the whole range of IDs from 0x001400xx to
                             0x0014FFxx for different instances of your
                             driver. They can now be used by specifying
                             DDRV_MonitorID with corresponding value.

                             Note that for this feature to work correctly,
                             you also need to override ID processing in
                             your driver class. Default methods provided
                             by the hidd.graphics.graphics base class
                             suppose that the whole lower word of the mode
                             ID specifies the display mode.

                             It is generally not allowed to specify
                             shorter masks than 0xFFFF0000. The only
                             driver which can do this is the Amiga(TM)
                             chipset driver, which needs to occupy the
                             reserved range of IDs from 0x0000xxxx to
                             0x000Axxxx. In any other case, supplying a
                             short mask will cause undefined behavior.

                             Since DDRV_ReserveIDs provides a simpler way
                             to reserve IDs for your driver (without the
                             need to override mode ID processing), this
                             option can be considered experimental and
                             even private. In fact the primary reason for
                             it to exist is to provide support for
                             Amiga(tm) chipset driver.


Result
~~~~~~
::

     error - One of following codes:

         DD_OK           - Operation completed OK.
         DD_NO_MEM       - There is not enough memory to set up internal
                           data.
         DD_ID_EXISTS    - Attempt to assign monitor IDs that are already
                           used.
         DD_IN_USE       - One of boot-mode drivers is in use and cannot
                           be shut down.
         DD_DRIVER_ERROR - Failure to create driver object.


Notes
~~~~~
::

     This function is AROS-specific.



----------

AddFont()
=========

Synopsis
~~~~~~~~
::

 void AddFont(
          struct TextFont * textFont );

Function
~~~~~~~~
::

     Add a font to the list of public fonts. After that, you can
     open the font with OpenFont().


Inputs
~~~~~~
::

     textFont - The font to add.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`OpenFont()`_ `RemFont()`_ `CloseFont()`_ `SetFont()`_ 

----------

AddVSprite()
============

Synopsis
~~~~~~~~
::

 void AddVSprite(
          struct VSprite * vs,
          struct RastPort * rp );

Function
~~~~~~~~
::

     The VSprite is linked into the current gel list using it's
     y and x coordinates. The VSprite's flags are set up.


Inputs
~~~~~~
::

     vs = pointer to VSprite to be linked into gel list
     rp = pointer to RastPort that has an initialized GelsInfo linked
          to it (see InitGels()).



See also
~~~~~~~~

`InitGels()`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

AllocBitMap()
=============

Synopsis
~~~~~~~~
::

 struct BitMap * AllocBitMap(
          UWORD sizex,
          UWORD sizey,
          ULONG depth,
          ULONG flags,
          struct BitMap * friend_bitmap );

Function
~~~~~~~~
::

     Allocates and initializes a bitmap structure. Allocates and
     initializes bitplane data, and sets the bitmap's planes to point to
     it.


Inputs
~~~~~~
::

     sizex, sizey - The width and height in pixels
     
     depth - The depth of the bitmap. A depth of 1 will allocate a
         bitmap for two colors, a depth of 24 will allocate a bitmap for
         16 million colors. Pixels with AT LEAST this many bits will be
         allocated.
     
     flags - One of these flags:

         BMF_CLEAR: Fill the bitmap with color 0.

         BMF_DISPLAYABLE: to specify that this bitmap data should
             be allocated in such a manner that it can be displayed.
             Displayable data has more severe alignment restrictions
             than non-displayable data in some systems.
             Note that it may be not enough to specify only this flag
             to make the bitmap really displayable. See "INTERNALS"
             section below.

         BMF_INTERLEAVED: tells graphics that you would like your
             bitmap to be allocated with one large chunk of display
             memory for all bitplanes. This minimizes color flashing on
             deep displays. If there is not enough contiguous RAM for an
             interleaved bitmap, graphics.library will fall back to a
             non-interleaved one.

         BMF_MINPLANES: causes graphics to only allocate enough
             space in the bitmap structure for "depth" plane pointers.
             This is for system use and should not be used by
             applications use as it is inefficient, and may waste
             memory.

         BMF_SPECIALFMT: causes graphics to allocate a bitmap
             of a standard CyberGraphX format. The format
             (PIXFMT_????) must be stored in the 8 most significant bits.

         BMF_RTGTAGS,
         BMF_RTGCHECK,
         BMF_FRIENDSTAG: Setting these flags to 1's while BMF_SPECIALFMT
             and BMF_INVALID are set to 0 means that friend_bitmap
             points to a taglist instead of BitMap structure.

     friend_bitmap - pointer to another bitmap, or NULL. If this pointer
         is passed, then the bitmap data will be allocated in
         the most efficient form for blitting to friend_bitmap.

         This pointer can also point to a TagList, if specified by flags.
         In this case it may contain the following tags:

           - BMATags_Friend (struct BitMap *)
                 An actual pointer to friend bitmap. Defaults to NULL.

           - BMATags_Depth (ULONG)
                 Depth of the bitmap to create. Defaults to depth argument
                 of AllocBitMap().

           - BMATags_Clear (BOOL)
                 Tells if the newly created bitmap should be explicitly
                 cleared. Defaults to the value of BMF_CLEAR flag in
                 AllocBitMap() arguments.

           - BMATags_Displayable (BOOL)
                 Tells if the bitmap should be displayable by the hardware.
                 Defaults to the value of BMF_DISPLAYABLE flag in AllocBitMap()
                 arguments.

           - BMATags_NoMemory (BOOL)
                 Tells AllocBitMap() not to allocate actual bitmap storage. Only
                 header is allocated and set up. Default value is FALSE.
     
           - BMATags_DisplayID (ULONG)
                 Allocate a displayable bitmap for specified display mode.


Result
~~~~~~
::

     A pointer to the new bitmap.


Notes
~~~~~
::

     When allocating using a friend_bitmap bitmap, it is not safe to assume
     anything about the structure of the bitmap data if that friend_bitmap
     BitMap might not be a standard Amiga bitmap (for instance, if the
     workbench is running on a non-Amiga display device, its
     Screen->RastPort->BitMap won't be in standard Amiga format. The
     only safe operations to perform on a non-standard BitMap are:

         blitting it to another bitmap, which must be either a
             standard Amiga bitmap, or a friend_bitmap of this bitmap.

         blitting from this bitmap to a friend_bitmap bitmap or to a
             standard Amiga bitmap.

         attaching it to a rastport and making rendering calls.

     Good arguments to pass for the friend_bitmap are your window's
     RPort->BitMap, and your screen's RastPort->BitMap. Do NOT pass
     &(screenptr->BitMap)!

     BitMaps not allocated with BMF_DISPLAYABLE may not be used as
     Intuition Custom BitMaps or as RasInfo->BitMaps.  They may be
     blitted to a BMF_DISPLAYABLE BitMap, using one of the BltBitMap()
     family of functions.
     
     When allocating a displayable bitmap, make sure that its size is
     within limits allowed by the display driver. Use GetDisplayInfoData()
     with DTAG_DIMS in order to obtain the needed information.



See also
~~~~~~~~

`FreeBitMap()`_ 

----------

AllocDBufInfo()
===============

Synopsis
~~~~~~~~
::

 struct DBufInfo * AllocDBufInfo(
          struct ViewPort * vp );

Function
~~~~~~~~
::


 Allocates a double buffering structure used by ChangeVPBitMap().


Inputs
~~~~~~
::


 vp  -  pointer to a ViewPort

 RESULTS

 Returns NULL if there wasn't enough memory (or if the viewport doesn't
 support double buffering).



----------

AllocRaster()
=============

Synopsis
~~~~~~~~
::

 PLANEPTR AllocRaster(
          UWORD width,
          UWORD height );

Function
~~~~~~~~
::

     Allocates memory for a single bitplane with the specified size in
     pixels.


Inputs
~~~~~~
::

     width, height - The size of the resulting bitplane in pixels.


Result
~~~~~~
::

     A pointer to the single bitplane.


Notes
~~~~~
::

     You should not use this function to create BitMaps. Call
     AllocBitMap() instead.



See also
~~~~~~~~

`AllocBitMap()`_ `FreeRaster()`_ `FreeBitMap()`_ 

----------

AllocSpriteDataA()
==================

Synopsis
~~~~~~~~
::

 struct ExtSprite * AllocSpriteDataA(
          struct BitMap * bitmap,
          struct TagItem * tagList );
 
 struct ExtSprite * AllocSpriteData(
          struct BitMap * bitmap,
          TAG tag, ... );

Inputs
~~~~~~
::

     bitmap - pointer to a bitmap. This bitmap provides the source data
              for the sprite image
     tags   - pointer to a taglist


Tags
~~~~
::

     SPRITEA_Width (ULONG)        - Width of the sprite. If bitmap is smaller it will
                                    be filled on the right side with transparent
                                    pixels. Defaults to 16.
     SPRITEA_XReplication (LONG)  -  0 - perform a 1 to 1 conversion
                                     1 - each pixel from the source is replicated twice
                                     2 - each pixel is replicated 4 times.
                                    -1 - skip every 2nc pixel in the source bitmap
                                    -2 - only include every fourth pixel from the source.
     SPRITEA_YReplication (LONG)  - like SPRITEA_YReplication, but for vertical direction.
     SPRITEA_OutputHeight (ULONG) - Output height of the sprite. Must be at least as high
                                    as the bitmap. Defaults to bitmap height.
     SPRITEA_Attach               - (Not implemented)


Result
~~~~~~
::

     SpritePtr - pointer to a ExtSprite structure,
                 or NULL if there is a failure.
                 You should pass this pointer to FreeSpriteData()
                 when this sprite is not needed anymore.



----------

AndRectRegion()
===============

Synopsis
~~~~~~~~
::

 void AndRectRegion(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Remove everything inside 'region' that is outside 'rectangle'


Inputs
~~~~~~
::

     region - pointer to Region structure
     rectangle - pointer to Rectangle structure


Notes
~~~~~
::

     This is the only *RectRegion function that cannot fail



See also
~~~~~~~~

`AndRegionRegion()`_ `OrRectRegion()`_ `XorRectRegion()`_ `ClearRectRegion()`_ `NewRegion()`_ 

----------

AndRectRegionND()
=================

Synopsis
~~~~~~~~
::

 struct Region * AndRectRegionND(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Remove everything inside 'region' that is outside 'rectangle'


Inputs
~~~~~~
::

     region - pointer to Region structure
     rectangle - pointer to Rectangle structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory



See also
~~~~~~~~

`AndRegionRegion()`_ `OrRectRegion()`_ `XorRectRegion()`_ `ClearRectRegion()`_ `NewRegion()`_ 

----------

AndRegionRegion()
=================

Synopsis
~~~~~~~~
::

 BOOL AndRegionRegion(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     AND of one region with another region, leaving result in
     second region.


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     TRUE if the operation was successful, else FALSE
     (out of memory)



See also
~~~~~~~~

`XorRegionRegion()`_ `OrRegionRegion()`_ 

----------

AndRegionRegionND()
===================

Synopsis
~~~~~~~~
::

 struct Region * AndRegionRegionND(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     AND of one region with another region


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory



See also
~~~~~~~~

`XorRegionRegion()`_ `OrRegionRegion()`_ 

----------

Animate()
=========

Synopsis
~~~~~~~~
::

 void Animate(
          struct AnimOb ** anKey,
          struct RastPort * rp );

Function
~~~~~~~~
::

     Animate every AnimOb in the list. In particular do the following:
     - update location and velocities
     - call AnimOb's special routine if supplied
     - for every component of the Anim ob do:
       - switch to new sequence if current sequence times out
       - call the special routine of the component if supplied
       - set the the coordinates of the VSprite of this
         sequence to whatever these routines cause

 INPUT
     anKey = address of a pointer to the first AnimOb in the list
             (same address that was passed to AddAnimOb!)
     rp    = pointer to a valid RastPort structure



See also
~~~~~~~~

`AddAnimOb()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

AreaCircle()
============

Synopsis
~~~~~~~~
::

  AreaCircle(
     rp,
     cx,
     cy,
     r );


Function
~~~~~~~~
::

     Calls AreaEllipse with "a" and "b" set to "r".


Notes
~~~~~
::

     Implemented as macros.



See also
~~~~~~~~

`AreaEllipse()`_ 

----------

AreaDraw()
==========

Synopsis
~~~~~~~~
::

 ULONG AreaDraw(
          struct RastPort * rp,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Add a point to the vector buffer.


Inputs
~~~~~~
::

     rp - pointer to a valid RastPort structure with a pointer to
          the previously initialized AreaInfo structure.
     x  - x-coordinate of the point in the raster
     y  - y-coordinate of the point in the raster


Result
~~~~~~
::

     error -  0 for success
             -1 if the vector collection matrix is full



See also
~~~~~~~~

`InitArea()`_ `AreaMove()`_ `AreaEllipse()`_ `AreaCircle()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

AreaEllipse()
=============

Synopsis
~~~~~~~~
::

 ULONG AreaEllipse(
          struct RastPort * rp,
          WORD cx,
          WORD cy,
          WORD a,
          WORD b );

Function
~~~~~~~~
::

     Add an ellipse to the vector buffer. An ellipse takes up two
     entries in the buffer.


Inputs
~~~~~~
::

     rp - pointer to a valid RastPort structure with a pointer to
          the previously initialized AreaInfo structure.
     cx - x coordinate of the center point relative to rastport
     cy - y coordinate of the center point relative to rastport
     a  - horizontal radius of the ellipse (> 0)
     b  - vertical radius of the ellipse (> 0)


Result
~~~~~~
::

     error -  0 for success
             -1 if the vector collection matrix is full



See also
~~~~~~~~

`InitArea()`_ `AreaMove()`_ `AreaDraw()`_ `AreaCircle()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

AreaEnd()
=========

Synopsis
~~~~~~~~
::

 LONG AreaEnd(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Process the filled vector buffer.
     After the operation the buffer is reinitialized for
     processing of further Area functions.
     Makes use of the raster given by the TmpRas structure that
     is linked to the rastport.


Inputs
~~~~~~
::

     rp - pointer to a valid RastPort structure with a pointer to
          the previously initialized AreaInfo structure.



Result
~~~~~~
::

     error -  0 for success
             -1 a error occurred


Bugs
~~~~
::

     There is still a problem when some polygons are filled that
     pixels are missing. This could be due to the way lines are
     drawn. All lines should be drawn from lower
     y coordinates to higher y coordinates since this is the
     way the algorithm calculates lines here. For example, it
     might make a difference whether a line is drawn from lower
     to higher y coordinates. Examples for two same lines with
     different layout:
     
          ****              *****
     *****              ****
     



See also
~~~~~~~~

`InitArea()`_ `AreaDraw()`_ `AreaEllipse()`_ `AreaCircle()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

AreaMove()
==========

Synopsis
~~~~~~~~
::

 ULONG AreaMove(
          struct RastPort * rp,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Define a new starting point in the vector list for the following
     polygon defined by calls to AreaDraw(). The last polygon is closed
     if it wasn't closed by the user and the new starting points are
     added to the vector collection matrix.


Inputs
~~~~~~
::

     rp - pointer to a valid RastPort structure with a pointer to
          the previously initialized AreaInfo structure.
     x  - x-coordinate of the starting-point in the raster
     y  - y-coordinate of the starting-point in the raster


Result
~~~~~~
::

     error -  0 for success
             -1 if the vector collection matrix is full



See also
~~~~~~~~

`InitArea()`_ `AreaDraw()`_ `AreaEllipse()`_ `AreaCircle()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

AreRegionsEqual()
=================

Synopsis
~~~~~~~~
::

 BOOL AreRegionsEqual(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     Compares two regions.


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     TRUE if the regions are equal, FALSE otherwise.



See also
~~~~~~~~

`XorRegionRegion()`_ `OrRegionRegion()`_ 

----------

AskFont()
=========

Synopsis
~~~~~~~~
::

 void AskFont(
          struct RastPort * rp,
          struct TextAttr * textAttr );

Function
~~~~~~~~
::

     Query the attributes of the current font in a RastPort.


Inputs
~~~~~~
::

     rp - Query this RastPort.


Result
~~~~~~
::

     textAttr will contain a description of the font.



----------

AskSoftStyle()
==============

Synopsis
~~~~~~~~
::

 ULONG AskSoftStyle(
          struct RastPort * rp );

Function
~~~~~~~~
::


 Query algorithmically generated style attributes. These are the bits
 valid to set via SetSoftStyle().


Inputs
~~~~~~
::


 pr   --  pointer to rastport


Result
~~~~~~
::


 Algorithmically generated style bits (bits not defined are also set).



See also
~~~~~~~~

`SetSoftStyle()`_ `graphics/text.h </documentation/developers/headerfiles/graphics/text.h>`_ 

----------

AttachPalExtra()
================

Synopsis
~~~~~~~~
::

 LONG AttachPalExtra(
          struct ColorMap * cm,
          struct ViewPort * vp );

Function
~~~~~~~~
::

     Allocates a PalExtra structure and attaches it to the
     given ColorMap. This function must be called prior to palette
     sharing. The PalExtra structure will be freed by FreeColorMap().


Inputs
~~~~~~
::

     cm  - Pointer to a color map structure
     vp  - Pointer to the viewport associated with the ColorMap


Result
~~~~~~
::

     0 - success
     1 - out of memory



----------

AttemptLockLayerRom()
=====================

Synopsis
~~~~~~~~
::

 BOOL AttemptLockLayerRom(
          struct Layer * l );

Function
~~~~~~~~
::

     Try to lock the current layer. If it is already locked this
     function will return FALSE, TRUE otherwise.
     If the layer could be locked successfully nesting will take place
     which means that for every successful locking of a layer
     UnlockLayerRom() has to be called for that layer to let other
     tasks access that layer.


Inputs
~~~~~~
::

     l - pointer to layer


Result
~~~~~~
::

     TRUE  - layer is successfully locked for the task
     FALSE - layer could not be locked, it's locked by another task.



See also
~~~~~~~~

`LockLayerRom()`_ `UnlockLayerRom()`_ 

----------

BestModeIDA()
=============

Synopsis
~~~~~~~~
::

 ULONG BestModeIDA(
          struct TagItem * TagItems );
 
 ULONG BestModeID(
          TAG tag, ... );

Inputs
~~~~~~
::

     TagItems - pointer to an array of TagItems


Tags
~~~~
::

     BIDTAG_ViewPort (struct ViewPort *) - Viewport for which a mode is searched. Default: NULL
     BIDTAG_MonitorID (ULONG)            - Returned ID must use this monitor
     BIDTAG_SourceID (ULONG)             - Use this ModeID instead of a ViewPort.
                                           DIPFMustHave mask is made up of the
                                           ((DisplayInfo->PropertyFlags of this ID & SPECIAL_FLAGS) |
                                           DIPFMustHave flags).
                                           Default:
                                           if BIDTAG_ViewPort was passed: VPModeID(vp), else the
                                           DIPFMustHave and DIPFMustNotHave are unchanged.
     BIDTAG_Depth (UBYTE)                - Minimal depth. Default:
                                           if BIDTAG_ViewPort is passed: vp->RasInfo->BitMap->Depth,
                                           else 1.
     BIDTAG_NominalWidth (UWORD),
     BIDTAG_NominalHeight (UWORD)        - Aspect ratio. Default:
                                           if BIDTAG_SourceID: SourceID NominalDimensionInfo
                                           if BIDTAG_ViewPort: vp->DWidth and vp->DHeight
                                           or 640 x 200.
     BIDTAG_DesiredWidth (UWORD)         - Width. Default: DIBTAG_NominalWidth.
     BIDTAG_DesiredHeight (UWORD)        - Height. Default: BIDTAG_NominalHeight.
     BIDTAG_RedBits (UBYTE),
     BIDTAG_GreenBits (UBYTE),
     BIDTAG_BlueBits (UBYTE)             - Bits per gun the mode must support. Default: 4
     BIDTAG_DIPFMustHave (ULONG)         - DIPF flags the resulting mode must have
     BIDTAG_DIPFMustNotHave (ULONG)      - DIPF flags the resulting mode must not have


Result
~~~~~~
::

     ID - ID of the best mode to use, or INVALID_ID if a match
          could not be found



See also
~~~~~~~~

`graphics/modeid.h </documentation/developers/headerfiles/graphics/modeid.h>`_ `graphics/displayinfo.h </documentation/developers/headerfiles/graphics/displayinfo.h>`_ 

----------

BitMapScale()
=============

Synopsis
~~~~~~~~
::

 void BitMapScale(
          struct BitScaleArgs * bitScaleArgs );

Function
~~~~~~~~
::

     Scale a source bit map to a destination bit map other than
     the source bit map.


Inputs
~~~~~~
::

     Pass a BitScaleArgs structure filled with the following arguments
     to this function:
       bsa_SrcX, bsa_SrcY - upper left coordinate in source bitmap
       bsa_SrcWidth, bsa_SrcHeight - Width and Height of source bitmap
       bsa_DestX, bsa_DestY - upper left coordinate in destination
                              bitmap
       bsa_DestWidth, bsa_DestHeight - this function will set these
             values. Use the bsa_???Factor for scaling
       bsa_XSrcFactor:bsa_XDestFactor - Set these to get approximately
             the same ratio as bsa_SrcWidth:bsa_DestWidth, but
             usually not exactly the same number.
       bsa_YSrcFactor:bsa_YDestFactor - Set these to get approximately
             the same ratio as bsa_SrcHeight:DestHeight, but
             usually not exactly the same number.
       bsa_SrcBitMap - pointer to source bitmap to be scaled
       bsa_DestBitMap - pointer to destination bitmap which will
                        hold the scaled bitmap. Make sure it's
                        big enough!
       bsa_Flags - reserved for future use. Set it to zero!
       bsa_XDDA, bsa_YDDA - for future use.
       bsa_Reserved1, bsa_Reserved2 - for future use.


Result
~~~~~~
::

       bsa_DestWidth and bsa_DestHeight will be set by this function


Notes
~~~~~
::

     - Overlapping source and destination bitmaps are not supported
     - Make sure that you provide enough memory for the destination
       bitmap to hold the result
     - In the destination bitmap only the area where the scaled
       source bitmap is put into is changed. A frame of the old
       bitmap is left.



See also
~~~~~~~~

`ScalerDiv()`_ `graphics/scale.h </documentation/developers/headerfiles/graphics/scale.h>`_ 

----------

BltBitMap()
===========

Synopsis
~~~~~~~~
::

 LONG BltBitMap(
          struct BitMap * srcBitMap,
          LONG xSrc,
          LONG ySrc,
          struct BitMap * destBitMap,
          LONG xDest,
          LONG yDest,
          LONG xSize,
          LONG ySize,
          ULONG minterm,
          ULONG mask,
          PLANEPTR tempA );

Function
~~~~~~~~
::

     Moves a part of a bitmap around or into another bitmap.


Inputs
~~~~~~
::

     srcBitMap - Copy from this bitmap.
     xSrc, ySrc - This is the upper left corner of the area to copy.
     destBitMap - Copy to this bitmap. May be the same as srcBitMap.
     xDest, yDest - Upper left corner where to place the copy
     xSize, ySize - The size of the area to copy
     minterm - How to copy. Most useful values are 0x00C0 for a vanilla
             copy, 0x0030 to invert the source and then copy or 0x0050
             to ignore the source and just invert the destination. If
             you want to calculate other values, then you must know that
             channel A is set, if you are inside the rectangle, channel
             B is the source and channel C is the destination of the
             rectangle.

             Bit     ABC
              0      000
              1      001
              2      010
              3      011
              4      100
              5      101
              6      110
              7      111

             So 0x00C0 means: D is set if one is inside the rectangle
             (A is set) and B (the source) is set and cleared otherwise.

             To fill the rectangle, you would want to set D when A is
             set, so the value is 0x00F0.

     mask - Which planes should be copied. Typically, you should set
             this to ~0L.
     tempA - If the copy overlaps exactly to the left or right (i.e. the
             scan line addresses overlap), and tempA is non-zero, it
             points to enough chip accessible memory to hold a line of a
             source for the blit (i.e. CHIP RAM). BltBitMap will allocate
             (and free) the needed TempA if none is provided and one is
             needed.  Blit overlap is determined from the relation of
             the first non-masked planes in the source and destination
             bit maps.


Result
~~~~~~
::

     The number of planes actually involved in the blit.


Notes
~~~~~
::

     If a special hardware is available, this function will use it.

     As a special case, plane pointers of destBitMap can contain NULL
     or -1, which will act as if the plane was filled with 0's or 1's,
     respectively.



See also
~~~~~~~~

`ClipBlit()`_ `BltBitMapRastPort()`_ 

----------

BltBitMapRastPort()
===================

Synopsis
~~~~~~~~
::

 void BltBitMapRastPort(
          struct BitMap   * srcBitMap,
          WORD xSrc,
          WORD ySrc,
          struct RastPort * destRP,
          WORD xDest,
          WORD yDest,
          WORD xSize,
          WORD ySize,
          ULONG minterm );

Function
~~~~~~~~
::

     Moves part of a bitmap around or into another bitmap.



See also
~~~~~~~~

`ClipBlit()`_ 

----------

BltClear()
==========

Synopsis
~~~~~~~~
::

 void BltClear(
          void * memBlock,
          ULONG bytecount,
          ULONG flags );

Function
~~~~~~~~
::

     Use the blitter for clearing a block of Chip-Ram.


Inputs
~~~~~~
::

     memBlock  - pointer to beginning of memory to be cleared
     flags     - set bit 0 to force function to wait until
                 the blitter - if used - is done
                 set bit 1 for row/bytesperrow - mode
     bytecount - if bit 1 is set to 1: bytecount contains an even number
                                       of bytes to clear
                 if bit 1 is set to 0: low 16 bits are taken as number of
                                       bytes per row and upper 16 bits
                                       are taken as number of rows.


Result
~~~~~~
::

     A cleared block of Chip-Ram.


Notes
~~~~~
::

     THIS FUNCTION IS DEPRECATED except if you want to simply clear
     some memory.



See also
~~~~~~~~

`InitGels()`_ `Animate()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

BltMaskBitMapRastPort()
=======================

Synopsis
~~~~~~~~
::

 void BltMaskBitMapRastPort(
          struct BitMap   * srcBitMap,
          WORD xSrc,
          WORD ySrc,
          struct RastPort * destRP,
          WORD xDest,
          WORD yDest,
          WORD xSize,
          WORD ySize,
          ULONG minterm,
          PLANEPTR bltMask );

Function
~~~~~~~~
::

     Copies a part of a bitmap to another bitmap with using a mask.



See also
~~~~~~~~

`ClipBlit()`_ 

----------

BltPattern()
============

Synopsis
~~~~~~~~
::

 void BltPattern(
          struct RastPort * rp,
          PLANEPTR mask,
          WORD xMin,
          WORD yMin,
          WORD xMax,
          WORD yMax,
          ULONG byteCnt );

Function
~~~~~~~~
::

     Blit using drawmode, areafill pattern and mask.


Inputs
~~~~~~
::

     rp - destination RastPort for blit.
     mask - Mask bitplane. Set this to NULL for a rectangle.
     xMin, yMin - upper left corner.
     xMax, yMax - lower right corner.
     byteCnt - BytesPerRow for mask.



----------

BltTemplate()
=============

Synopsis
~~~~~~~~
::

 void BltTemplate(
          PLANEPTR source,
          WORD xSrc,
          WORD srcMod,
          struct RastPort * destRP,
          WORD xDest,
          WORD yDest,
          WORD xSize,
          WORD ySize );

Function
~~~~~~~~
::

     Draws part of a single-bitplane image into the RastPort in the current
     colors (foreground and background) and drawing mode.


Inputs
~~~~~~
::

     source - pointer to the aligned UWORD in which the top-lefthand corner
         of the template is located.
     xSrc - bit offset of top-lefthand corner of template from start of
         UWORD pointed to by 'source' input (0 to 15).
     srcMod - number of bytes per row in template's bitplane.
     destRP - destination RastPort.
     xDest,yDest - upper left corner of destination.
     xSize,ySize - size of destination.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     The size and destination coordinates may be outside the RastPort
     boundaries, in which case the affected area is safely truncated.



----------

CalcIVG()
=========

Synopsis
~~~~~~~~
::

 UWORD CalcIVG(
          struct View * View,
          struct ViewPort * ViewPort );

Function
~~~~~~~~
::

     Calculate the number of blank lines above a ViewPort.


Inputs
~~~~~~
::

     View     - pointer to the View
     ViewPort - pointer to the ViewPort you are interested in


Result
~~~~~~
::

     count - the number of ViewPort resolution scan lines needed
             to execute all the copper instructions for ViewPort,
             or 0 if any error


Bugs
~~~~
::

     This function is unimplemented.



----------

CBump()
=======

Synopsis
~~~~~~~~
::

 void CBump(
          struct UCopList * ucl );

Function
~~~~~~~~
::

     Increment user copper list pointer. If the current user copper list
     is full a new one will be created and worked on.


Inputs
~~~~~~
::

     ucl - pointer to a UCopList structure


Notes
~~~~~
::

     CWAIT() and CMOVE() automatically call this function!



See also
~~~~~~~~

`CINIT()`_ `CWAIT()`_ `CMOVE()`_ `CEND()`_ `graphics/copper.h </documentation/developers/headerfiles/graphics/copper.h>`_ 

----------

CEND()
======

Synopsis
~~~~~~~~
::

  CEND(
     c );


Notes
~~~~~
::

     Not implemeted yet.



----------

ChangeExtSpriteA()
==================

Synopsis
~~~~~~~~
::

 LONG ChangeExtSpriteA(
          struct ViewPort * vp,
          struct ExtSprite * oldsprite,
          struct ExtSprite * newsprite,
          struct TagItem * tags );
 
 LONG ChangeExtSprite(
          struct ViewPort * vp,
          struct ExtSprite * oldsprite,
          struct ExtSprite * newsprite,
          TAG tag, ... );

Inputs
~~~~~~
::

     vp        - pointer to ViewPort structure that this sprite is
                 relative to, or NULL if relative only top of View
     oldsprite - pointer to the old ExtSprite structure
     newsprite - pointer to the new ExtSprite structure
     tags      - pointer to taglist


Result
~~~~~~
::

     success - 0 if there was an error



----------

ChangeSprite()
==============

Synopsis
~~~~~~~~
::

 void ChangeSprite(
          struct ViewPort * vp,
          struct SimpleSprite * s,
          void * newdata );

Bugs
~~~~
::

     This function is unimplemented.



----------

ChangeVPBitMap()
================

Synopsis
~~~~~~~~
::

 void ChangeVPBitMap(
          struct ViewPort * vp,
          struct BitMap * bm,
          struct DBufInfo * db );

Inputs
~~~~~~
::

     vp - pointer to a viewport
     bm - pointer to a BitMap structure. This BitMap structure must be of
          the same layout as the one attached to the viewport
          (same depth, alignment and BytesPerRow)
     db - pointer to a DBufInfo



----------

CINIT()
=======

Synopsis
~~~~~~~~
::

  CINIT(
     c,
     n );


Notes
~~~~~
::

     Not implemented yet.



----------

ClearEOL()
==========

Synopsis
~~~~~~~~
::

 void ClearEOL(
          struct RastPort * rp );

Function
~~~~~~~~
::


 Clear a rectangular area from the current position to the end of the
 rastport, the height of which is the height of the current text font.


Inputs
~~~~~~
::


 pr   --  pointer to rastport



See also
~~~~~~~~

`Text()`_ `ClearScreen()`_ `SetRast()`_ `graphics/text.h </documentation/developers/headerfiles/graphics/text.h>`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

ClearRectRegion()
=================

Synopsis
~~~~~~~~
::

 BOOL ClearRectRegion(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Clear the given Rectangle from the given Region


Inputs
~~~~~~
::

     region - pointer to a Region structure
     rectangle - pointer to a Rectangle structure


Result
~~~~~~
::

     FALSE if not enough memory was available, else TRUE



See also
~~~~~~~~

`AndRectRegion()`_ `OrRectRegion()`_ `XorRectRegion()`_ 

----------

ClearRectRegionND()
===================

Synopsis
~~~~~~~~
::

 struct Region * ClearRectRegionND(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Clear the given Rectangle from the given Region


Inputs
~~~~~~
::

     region - pointer to Region structure
     rectangle - pointer to Rectangle structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory



See also
~~~~~~~~

`AndRegionRegion()`_ `OrRectRegion()`_ `XorRectRegion()`_ `ClearRectRegion()`_ `NewRegion()`_ 

----------

ClearRegion()
=============

Synopsis
~~~~~~~~
::

 void ClearRegion(
          struct Region * region );

Function
~~~~~~~~
::

     Removes all rectangles in the specified region.


Inputs
~~~~~~
::

     region - pointer to the region structure


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`NewRegion()`_ 

----------

ClearRegionRegion()
===================

Synopsis
~~~~~~~~
::

 BOOL ClearRegionRegion(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     Clear the given Region region1 from the given Region region2
     leaving the result in region2.


Inputs
~~~~~~
::

     region1 - pointer to a Region structure
     region2 - pointer to a Rectangle structure


Result
~~~~~~
::

     FALSE if not enough memory was available, else TRUE


Notes
~~~~~
::

     This function does not exist in AmigaOS.



See also
~~~~~~~~

`ClearRectRegion()`_ `AndRectRegion()`_ `OrRectRegion()`_ `XorRectRegion()`_ 

----------

ClearRegionRegionND()
=====================

Synopsis
~~~~~~~~
::

 struct Region * ClearRegionRegionND(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     Clear the given Region region1 from the given Region region2.


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory



See also
~~~~~~~~

`XorRegionRegion()`_ `OrRegionRegion()`_ 

----------

ClearScreen()
=============

Synopsis
~~~~~~~~
::

 void ClearScreen(
          struct RastPort * rp );

Function
~~~~~~~~
::


 Clear from the current position to the end of the rastport. Clearing
 means setting the colour to 0 (or to BgPen if the drawmode is JAM2).
 This includes a ClearEOL().


Inputs
~~~~~~
::


 rp   --  pointer to rastport



See also
~~~~~~~~

`Text()`_ `ClearEOL()`_ `SetRast()`_ `graphics/text.h </documentation/developers/headerfiles/graphics/text.h>`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

ClipBlit()
==========

Synopsis
~~~~~~~~
::

 void ClipBlit(
          struct RastPort * srcRP,
          WORD xSrc,
          WORD ySrc,
          struct RastPort * destRP,
          WORD xDest,
          WORD yDest,
          WORD xSize,
          WORD ySize,
          UBYTE minterm );

Function
~~~~~~~~
::

     Copies the contents of one rastport to another rastport.
     Takes care of layered and non-layered source and destination
     rastports.
     If you have a window you should always use this function instead
     of BltBitMap().


Inputs
~~~~~~
::

     srcRP        - Copy from this RastPort.
     xSrc, ySrc   - This is the upper left corner of the area to copy.
     destRP       - Copy to this RastPort.
     xDest, yDest - Upper left corner where to place the copy
     xSize, ySize - The size of the area to copy
     minterm - How to copy. Most useful values are 0x00C0 for a vanilla
             copy, 0x0030 to invert the source and then copy or 0x0050
             to ignore the source and just invert the destination. If
             you want to calculate other values, then you must know that
             channel A is set, if you are inside the rectangle, channel
             B is the source and channel C is the destination of the
             rectangle.

             Bit     ABC
              0      000
              1      001
              2      010
              3      011
              4      100
              5      101
              6      110
              7      111

             So 0x00C0 means: D is set if one is inside the rectangle
             (A is set) and B (the source) is set and cleared otherwise.

             To fill the rectangle, you would want to set D when A is
             set, so the value is 0x00F0.




Result
~~~~~~
::

     None



See also
~~~~~~~~

`BltBitMapRastPort()`_ 

----------

CloseFont()
===========

Synopsis
~~~~~~~~
::

 void CloseFont(
          struct TextFont * textFont );

Function
~~~~~~~~
::

     Close a font.


Inputs
~~~~~~
::

     font - font pointer from OpenFont() or OpenDiskFont()



----------

CloseMonitor()
==============

Synopsis
~~~~~~~~
::

 LONG CloseMonitor(
          struct MonitorSpec * monitor_spec );

Inputs
~~~~~~
::

     monitor_spec - pointer to a MonitorSpec opened via OpenMonitor(),
                    or NULL


Result
~~~~~~
::

     error - FALSE if MonitorSpec closed uneventfully
             TRUE if MonitorSpec could not be closed



See also
~~~~~~~~

`OpenMonitor()`_ `graphics/monitor.h </documentation/developers/headerfiles/graphics/monitor.h>`_ 

----------

CMove()
=======

Synopsis
~~~~~~~~
::

 void CMove(
          struct UCopList * ucl,
          void * reg,
          WORD value );

Function
~~~~~~~~
::

     Add a copper move instruction to the given user copper list.
     The copper is told to move a value to register reg.
     If you are using CMOVE() a call to CMove() and CBump() will
     be made.


Inputs
~~~~~~
::

     ucl   - pointer to a UCopList structure
     reg   - hardware register
     value - 16 bit value to be moved to the hardware register



See also
~~~~~~~~

`CINIT()`_ `CWAIT()`_ `CEND()`_ `graphics/copper.h </documentation/developers/headerfiles/graphics/copper.h>`_ 

----------

CoerceMode()
============

Synopsis
~~~~~~~~
::

 ULONG CoerceMode(
          struct ViewPort * RealViewPort,
          ULONG MonitorID,
          ULONG Flags );

Function
~~~~~~~~
::

     Determine the best mode in the MonitorID to coerce RealViewPort to.


Inputs
~~~~~~
::

     RealViewPort - ViewPort to coerce
     MonitorID    - Monitor number to coerce to
                    (i.e. a mode masked with MONITOR_ID_MASK)
     Flags        - PRESERVE_COLORS - keep the number of bitplanes
                                      in the ViewPort
                    AVOID_FLICKER   - do not coerce to an interlace mode


Result
~~~~~~
::

     ID - ID of best mode to coerce to, or INVALID_ID if could not coerce


Bugs
~~~~
::

     This function is unimplemented.



----------

CopySBitMap()
=============

Synopsis
~~~~~~~~
::

 void CopySBitMap(
          struct Layer * l );

Function
~~~~~~~~
::

     If the layer has a superbitmap all the parts that are visible will
     be refreshed with what is in the superbitmap. This function should
     be called after the SuperBitMap of the layer was synchronized with
     SyncSBitMap() and manipulated.


Inputs
~~~~~~
::

     l  - pointer to superbitmapped layer


Result
~~~~~~
::

     The layer will show the true contents of the superbitmap that is
     attached to it



See also
~~~~~~~~

`SyncSBitMap()`_ 

----------

CWait()
=======

Synopsis
~~~~~~~~
::

 void CWait(
          struct UCopList * ucl,
          WORD v,
          WORD h );

Function
~~~~~~~~
::

     Add a copper wait instruction to the given user copper list.
     The copper is told to wait for a vertical beam position v and
     a horizontal beam position h.
     If you are using CWAIT() a call to CWait() and CBump() will
     be made.


Inputs
~~~~~~
::

     ucl - pointer to a UCopList structure
     v   - vertical beam position (relative to top of viewport)
     h   - horizontal beam position


Bugs
~~~~
::

     It's illegal to wait for horizontal values greater than 222 decimal!



See also
~~~~~~~~

`CINIT()`_ `CMOVE()`_ `CEND()`_ `graphics/copper.h </documentation/developers/headerfiles/graphics/copper.h>`_ 

----------

DisownBlitter()
===============

Synopsis
~~~~~~~~
::

 void DisownBlitter();

Function
~~~~~~~~
::

     The blitter is returned to usage by other tasks.



See also
~~~~~~~~

`DisownBlitter()`_ 

----------

DisposeRegion()
===============

Synopsis
~~~~~~~~
::

 void DisposeRegion(
          struct Region * region );

Function
~~~~~~~~
::

     Frees all memory allocated by this region, including its
     RegionRectangles.


Inputs
~~~~~~
::

     region - pointer to a Region structure


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`NewRegion()`_ 

----------

DoCollision()
=============

Synopsis
~~~~~~~~
::

 void DoCollision(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Tests each gel in gel list for boundary and gel-to-gel collisions.
     If a collision happens the collision handling routine is called.
     The gel list must be sorted by y,x order.


Inputs
~~~~~~
::

     rp - pointer to RastPort



----------

Draw()
======

Synopsis
~~~~~~~~
::

 void Draw(
          struct RastPort * rp,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Draw a line from the current pen position to the given coordinate.


Inputs
~~~~~~
::

     rp  - destination RastPort.
     x,y - line end coordinate.


Notes
~~~~~
::

     Not yet implemented:
     
       - handle layer->Scroll_X/Scroll_Y.
       
       - handle FRST_DOT which indicates whether to draw
         or to don't draw first pixel of line. Important
         for COMPLEMENT drawmode.
     


----------

DrawEllipse()
=============

Synopsis
~~~~~~~~
::

 void DrawEllipse(
          struct RastPort * rp,
          WORD xCenter,
          WORD yCenter,
          WORD a,
          WORD b );

Function
~~~~~~~~
::

     Draw an ellipse


Inputs
~~~~~~
::

     rp              - destination RastPort
     xCenter,yCenter - coordinate of centerpoint
     a               - radius in x direction
     b               - radius in y direction



----------

DrawGList()
===========

Synopsis
~~~~~~~~
::

 void DrawGList(
          struct RastPort * rp,
          struct ViewPort * vp );

Function
~~~~~~~~
::

     Process the gel list, draw VSprites and Bobs.


Inputs
~~~~~~
::

     rp - RastPort where Bobs will be drawn
     vp - ViewPort for VSprites



----------

EraseRect()
===========

Synopsis
~~~~~~~~
::

 void EraseRect(
          struct RastPort * rp,
          LONG xMin,
          LONG yMin,
          LONG xMax,
          LONG yMax );

Function
~~~~~~~~
::

     Fill a rectangular area with the current BackFill hook.
     If layered the BackFill hook is used.
     If non-layered the region is cleared.


Inputs
~~~~~~
::

     rp        - destination RastPort
     xMin,yMin - upper left corner
     xMax,YMax - lower right corner



----------

ExtendFont()
============

Synopsis
~~~~~~~~
::

 ULONG ExtendFont(
          struct TextFont * font,
          struct TagItem  * fontTags );

Function
~~~~~~~~
::

     Checks whether or not a TextFont has a TextFontExtension.
     If no extension exists, and tags are supplied,
     then it will try to build one.


Inputs
~~~~~~
::

     font            - font to check for an extension.
     fontTags        - tags to build the TextFontExtension from if it doesn't exist.
                       If a NULL pointer is given, ExtendFont will allocate default tags.

Result
~~~~~~
::

     success         - FALSE if the font has no TextFontExtension and an extension
                       can't be built. TRUE otherwise.



See also
~~~~~~~~

`StripFont()`_ 

----------

FindColor()
===========

Synopsis
~~~~~~~~
::

 ULONG FindColor(
          struct ColorMap * cm,
          ULONG r,
          ULONG g,
          ULONG b,
          ULONG maxpen );

Function
~~~~~~~~
::

     Find the closest matching color in the given colormap.


Inputs
~~~~~~
::

     cm - colormap structure
     r  - red level   (32 bit left justified fraction)
     g  - green level (32 bit left justified fraction)
     b  - blue level  (32 bit left justified fraction)
     maxpen - the maximum entry in the color table to search.


Result
~~~~~~
::

     The pen number with the closest match will be returned.
     No new pens are allocated and therefore the returned pen
     should not be released via ReleasePen().



----------

FindDisplayInfo()
=================

Synopsis
~~~~~~~~
::

 DisplayInfoHandle FindDisplayInfo(
          ULONG ID );

Function
~~~~~~~~
::

     Search for a DisplayInfo which matches the ID key.


Inputs
~~~~~~
::

     ID - identifier


Result
~~~~~~
::

     handle - handle to a displayinfo record with that key
              or NULL if no match



See also
~~~~~~~~

`graphics/displayinfo.h </documentation/developers/headerfiles/graphics/displayinfo.h>`_ 

----------

Flood()
=======

Synopsis
~~~~~~~~
::

 BOOL Flood(
          struct RastPort * rp,
          ULONG mode,
          LONG x,
          LONG y );

Function
~~~~~~~~
::

     Flood fill a RastPort.


Inputs
~~~~~~
::

     rp   - destination RastPort
     mode - 0: fill adjacent pixels which don't have color of OPen.
            1: fill adjacent pixels which have the same pen as of coordinate x,y.
     x,y  - coordinate to start filling.


Notes
~~~~~
::

     The RastPort must have a TmpRas raster whose size is as large as of
     that of the RastPort.



----------

FontExtent()
============

Synopsis
~~~~~~~~
::

 void FontExtent(
          struct TextFont   * font,
          struct TextExtent * fontExtent );

Function
~~~~~~~~
::


 Fill out a text extent structure with the maximum extent of the
 characters for the font in question.


Inputs
~~~~~~
::


 font        --  The font the extent of which to calculate.
 fontExtent  --  TextExtent structure to hold the values.


Result
~~~~~~
::


 The extent is stored in 'fontExtent'.


Notes
~~~~~
::


 Neither effects of algorithmic additions nor rp_TxSpacing is included
 when the bounding box and font size are calculated. Note that te_Width
 only will be negative when FPF_REVPATH is specified for the font; left
 moving characters are ignored considering the font width (right moving
 character when FPF_REVPATH is set), but affects the bounding box size.



See also
~~~~~~~~

`TextExtent()`_ `graphics/text.h </documentation/developers/headerfiles/graphics/text.h>`_ 

----------

FreeBitMap()
============

Synopsis
~~~~~~~~
::

 void FreeBitMap(
          struct BitMap * bm );

Function
~~~~~~~~
::

     Returns the memory occupied by the BitMap to the system.


Inputs
~~~~~~
::

     bm - The result of AllocBitMap(). Must be non-NULL.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`AllocBitMap()`_ `AllocRaster()`_ `FreeRaster()`_ 

----------

FreeColorMap()
==============

Synopsis
~~~~~~~~
::

 void FreeColorMap(
          struct ColorMap * colormap );

Function
~~~~~~~~
::

     Correctly frees a ColorMap structure and associated structures
     that have previously been allocated via GetColorMap().


Inputs
~~~~~~
::

     colormap - pointer to the ColorMap structure previously
                allocated via GetColorMap().


Result
~~~~~~
::

     Memory returned to pool of free memory.



See also
~~~~~~~~

`GetColorMap()`_ `SetRGB4()`_ `graphics/view.h </documentation/developers/headerfiles/graphics/view.h>`_ 

----------

FreeCopList()
=============

Synopsis
~~~~~~~~
::

 void FreeCopList(
          struct CopList * coplist );

Function
~~~~~~~~
::

     Deallocate all memory associated with this copper list.


Inputs
~~~~~~
::

     coplist - pointer to a CopList structure



See also
~~~~~~~~

`graphics/copper.h </documentation/developers/headerfiles/graphics/copper.h>`_ 

----------

FreeCprList()
=============

Synopsis
~~~~~~~~
::

 void FreeCprList(
          struct cprlist * cprList );

Function
~~~~~~~~
::

     Deallocate all memory associated with this cprlist structure


Inputs
~~~~~~
::

     cprlist - pointer to a cprlist structure



See also
~~~~~~~~

`graphics/copper.h </documentation/developers/headerfiles/graphics/copper.h>`_ 

----------

FreeDBufInfo()
==============

Synopsis
~~~~~~~~
::

 VOID FreeDBufInfo(
          struct DBufInfo * db );

Function
~~~~~~~~
::


 Frees structure allocated with AllocDBufInfo().


Inputs
~~~~~~
::


 RESULTS

 Frees memory occupied by 'db'; ('db' may be NULL, in that case nothing
 is done).



See also
~~~~~~~~

`AllocDBufInfo()`_ `ChangeVPBitMap()`_ 

----------

FreeGBuffers()
==============

Synopsis
~~~~~~~~
::

 void FreeGBuffers(
          struct AnimOb * anOb,
          struct RastPort * rp,
          BOOL db );

Function
~~~~~~~~
::

     Deallocate all buffers for a whole AnimOb. In particular this
     means getting buffers for
     - BorderLine
     - SaveBuffer
     - CollMask
     - ImageShadow (points to the same memory as CollMask does)
     - if db is set to TRUE the user wants double-buffering, so we need
       - DBufPacket
       - BufBuffer


Inputs
~~~~~~
::

     anOb = pointer to AnimOb structure to be added to list of
            AnimObs
     rp   = pointer to a valid RastPort with initialized GelsInfo
            structure
     db   = TRUE when double-buffering is wanted


Notes
~~~~~
::

     A call to GetGBuffers() that resulted in a partially allocation
     of the required buffers will result in a deallocation of these
     buffers. (Possible incompatibility with the real thing, though)



See also
~~~~~~~~

`GetGBuffers()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

FreeRaster()
============

Synopsis
~~~~~~~~
::

 void FreeRaster(
          PLANEPTR p,
          UWORD width,
          UWORD height );

Function
~~~~~~~~
::

     Free the single bitplane allocated by AllocRaster().


Inputs
~~~~~~
::

     p - The result of AllocRaster(). Must be non-NULL.
     width, height - The size of the bitplane as passed to AllocRaster().


Result
~~~~~~
::

     The memory occupied by the bitplane will be returned to the system.



See also
~~~~~~~~

`AllocRaster()`_ `AllocBitMap()`_ `FreeBitMap()`_ 

----------

FreeSprite()
============

Synopsis
~~~~~~~~
::

 void FreeSprite(
          WORD pick );

Function
~~~~~~~~
::

     Free a via GetSprite previously allocated sprite.
     Don't even dare to free a sprite you didn't allocate.


Inputs
~~~~~~
::

     pick - number of sprite in range 0-7


Result
~~~~~~
::

     Sprite is made available for other tasks and the Virtual Sprite
     Machine.



See also
~~~~~~~~

`GetSprite()`_ `ChangeSprite()`_ `MoveSprite()`_ `graphics/sprite.h </documentation/developers/headerfiles/graphics/sprite.h>`_ 

----------

FreeSpriteData()
================

Synopsis
~~~~~~~~
::

 void FreeSpriteData(
          struct ExtSprite * extsp );

Function
~~~~~~~~
::

     Free sprite data allocated by AllocSpriteData().


Inputs
~~~~~~
::

     extsp - The extended sprite structure to be freed.
             Passing NULL is a NO-OP.



----------

FreeVPortCopLists()
===================

Synopsis
~~~~~~~~
::

 void FreeVPortCopLists(
          struct ViewPort * vp );

Function
~~~~~~~~
::

     Deallocate all memory associated with the CopList structures
     for display, color, sprite and the user copper list. The
     corresponding fields in this structure will be set to NULL.


Inputs
~~~~~~
::

     vp - pointer to a ViewPort structure



See also
~~~~~~~~

`graphics/view.h </documentation/developers/headerfiles/graphics/view.h>`_ 

----------

GetAPen()
=========

Synopsis
~~~~~~~~
::

 ULONG GetAPen(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Return the current value of the A pen for the rastport.


Inputs
~~~~~~
::

     rp - RastPort.



----------

GetBitMapAttr()
===============

Synopsis
~~~~~~~~
::

 IPTR GetBitMapAttr(
          struct BitMap * bitmap,
          ULONG attribute );

Function
~~~~~~~~
::

     Returns a specific information about a bitmap. Do not access the
     bitmap directly!


Inputs
~~~~~~
::

     bitmap - The BitMap structure to get information about.
     attribute - Number of the attribute to get. See <graphics/gfx.h> for
                 possible values.


Result
~~~~~~
::

     The information you requested. If you asked for an unknown attribute,
     0 or NULL is returned.



See also
~~~~~~~~

`AllocBitMap()`_ 

----------

GetBPen()
=========

Synopsis
~~~~~~~~
::

 ULONG GetBPen(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Return the current value of the B pen for the rastport.


Inputs
~~~~~~
::

     rp - RastPort.



----------

GetColorMap()
=============

Synopsis
~~~~~~~~
::

 struct ColorMap * GetColorMap(
          ULONG entries );

Function
~~~~~~~~
::

     Allocates and initializes a ColorMap structure and passes back the
     pointer. This enables you to do calls to SetRGB4() and LoadRGB4()
     to load colors for a view port.
     The ColorTable pointer in the ColorMap structure points to a hardware
     specific colormap data structure which you should not interpret.


Inputs
~~~~~~
::

     entries - the number of entries for the colormap


Result
~~~~~~
::

     NULL  - not enough memory could be allocated for the necessary
             data structures
     other - pointer to an initialized ColorMap structure that may be
             stored into the ViewPort.ColorMap pointer.



See also
~~~~~~~~

`FreeColorMap()`_ `SetRGB4()`_ `graphics/view.h </documentation/developers/headerfiles/graphics/view.h>`_ 

----------

GetDisplayInfoData()
====================

Synopsis
~~~~~~~~
::

 ULONG GetDisplayInfoData(
          DisplayInfoHandle handle,
          UBYTE * buf,
          ULONG size,
          ULONG tagID,
          ULONG ID );

Function
~~~~~~~~
::

     Fills buffer with information about displayinfo handle.


Inputs
~~~~~~
::

     handle - displayinfo handle
     buf    - pointer to destination buffer
     size   - buffer size in bytes
     tagID  - data chunk type
              DTAG_DISP (DisplayInfo)
              DTAG_DIMS (DimensionInfo)
              DTAG_MNTR (MonitorInfo)
              DTAG_NAME (NameInfo)
     ID     - displayinfo identifier, optionally used if handle is NULL


Result
~~~~~~
::

     result - if positive, number of bytes actually transferred
              if zero, no information for ID was available



See also
~~~~~~~~

`FindDisplayInfo()`_ `NextDisplayInfo()`_ `graphics/displayinfo.h </documentation/developers/headerfiles/graphics/displayinfo.h>`_ 

----------

GetDrMd()
=========

Synopsis
~~~~~~~~
::

 ULONG GetDrMd(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Get drawmode value of RastPort.


Inputs
~~~~~~
::

     rp - RastPort



----------

GetExtSpriteA()
===============

Synopsis
~~~~~~~~
::

 LONG GetExtSpriteA(
          struct ExtSprite * sprite,
          struct TagItem * tags );
 
 LONG GetExtSprite(
          struct ExtSprite * sprite,
          TAG tag, ... );

Inputs
~~~~~~
::

     sprite - pointer to programmer's ExtSprite (from AllocSpriteData())
     tags   - a standard tag list


Result
~~~~~~
::

     Sprite_number - a sprite number or -1 for an error



----------

GetGBuffers()
=============

Synopsis
~~~~~~~~
::

 BOOL GetGBuffers(
          struct AnimOb * anOb,
          struct RastPort * rp,
          BOOL db );

Function
~~~~~~~~
::

     Allocate all buffers for a whole AnimOb. In particular this
     means getting buffers for
     - BorderLine
     - SaveBuffer
     - CollMask
     - ImageShadow (points to the same memory as CollMask does)
     - if db is set to TRUE the user wants double-buffering, so we need
       - DBufPacket
       - BufBuffer


Inputs
~~~~~~
::

     anOb = pointer to AnimOb structure to be added to list of
            AnimObs
     rp   = pointer to a valid RastPort with initialized GelsInfo
            structure
     db   = TRUE when double-buffering is wanted


Result
~~~~~~
::

     TRUE, if all the memory allocations were successful, otherwise
     FALSE


Notes
~~~~~
::

     If an AnimOb is passed to GetGBuffers twice new buffers will
     be allocated and therefore old pointers to buffers will be
     lost in space.



See also
~~~~~~~~

`FreeGBuffers()`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

GetOutlinePen()
===============

Synopsis
~~~~~~~~
::

 ULONG GetOutlinePen(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Get the outline pen value for a RastPort.


Inputs
~~~~~~
::

     rp - RastPort.



----------

GetRGB32()
==========

Synopsis
~~~~~~~~
::

 void GetRGB32(
          struct ColorMap * cm,
          ULONG firstcolor,
          ULONG ncolors,
          ULONG * table );

Function
~~~~~~~~
::

     Fill the table with the 32 bit fractional RGB values from the
     given colormap.


Inputs
~~~~~~
::

     cm         - ColorMap structure obtained via GetColorMap()
     firstcolor - the index of first color register to get (starting with 0)
     ncolors    - the number of color registers to examine and write
                  into the table
     table      - a pointer to an array of 32 bit RGB triplets


Result
~~~~~~
::

     the ULONG pointed to by table will be filled with the 32 bit
     fractional RGB values from the colormap
     

Notes
~~~~~
::

     table should point to an array of at least 3*ncolors longwords.



See also
~~~~~~~~

`GetColorMap()`_ `FreeColorMap()`_ `SetRGB4()`_ `LoadRGB4()`_ `LoadRGB32()`_ `SetRGB32CM()`_ `graphics/view.h </documentation/developers/headerfiles/graphics/view.h>`_ 

----------

GetRGB4()
=========

Synopsis
~~~~~~~~
::

 ULONG GetRGB4(
          struct ColorMap * colormap,
          LONG entry );

Function
~~~~~~~~
::

     Read a value from the ColorMap. Use this function, as the colormap
     is subject to change.


Inputs
~~~~~~
::

     colormap - pointer to ColorMap structure
     entry    - index into colormap


Result
~~~~~~
::

     -1      : if no valid entry. (index too high)
     other   : UWORD RGB value, 4 bits per electron gun, right justified



See also
~~~~~~~~

`GetColorMap()`_ `FreeColorMap()`_ `SetRGB4()`_ `LoadRGB4()`_ `graphics/view.h </documentation/developers/headerfiles/graphics/view.h>`_ 

----------

GetRPAttrsA()
=============

Synopsis
~~~~~~~~
::

 void GetRPAttrsA(
          struct RastPort * rp,
          struct TagItem  * tags );
 
 void GetRPAttrs(
          struct RastPort * rp,
          TAG tag, ... );

Function
~~~~~~~~
::


     Read the current settings of a RastPort into variables.
     The ti_Tag field specifies the attribute to read and the
     ti_Data field points to an address where to store the result.
     All results are stored as IPTRs!


Inputs
~~~~~~
::

     rp   = pointer to a RastPort structure
     tags = pointer to a taglist specifying the attributes to read and
            the addresses to store the results


Tags
~~~~
::

     RPTAG_Font (UBYTE)              - Font for Text()
     RPTAG_APen (UBYTE)              - Primary rendering pen
     RPTAG_BPen (UBYTE)              - Secondary rendering pen
     RPTAG_DrMd (UBYTE)              - Drawing mode (graphics/rastport.h)
     RPTAG_OutlinePen (UBYTE)        - Area Outline pen
     RPTAG_WriteMask (ULONG)         - Bit Mask for writing
     RPTAG_MaxPen (ULONG)            - Maximum pen to render (see SetMaxPen())

     MorphOS-compatible extensions:

     RPTAG_FgColor (ULONG)           - Primary rendering color in A8R8G8B8 format.
                                       Only working on hicolor/truecolor bitmaps/screens.
     RPTAG_BgColor (ULONG)           - Secondary rendering color in A8R8G8B8 format.
                                       Only working on hicolor/truecolor bitmaps/screens.

     AmigaOSv4-compatible extensions:

     RPTAG_RemapColorFonts (BOOL)    - Automatically remap colorfonts to their color
                                       on hicolor/truecolor screens.

     AROS-specific extensions:

     RPTAG_ClipRectangle (struct Rectangle *) - Rectangle to clip rendering to. Rectangle will
                                                be cloned.
     RPTAG_ClipRectangleFlags (LONG) - RPCRF_RELRIGHT | RPCRF_RELBOTTOM (see <graphics/rpattr.h>)
             

Notes
~~~~~
::

     RPTAG_ClipRectangle and RPTAG_ClipRectangleFlags must not be
     used on manually inited or cloned rastports. Instead the rastport
     must have been created with CreateRastPort() or CloneRastPort().
     

Bugs
~~~~
::

     RPTAG_SoftStyle and RPTAG_DrawBounds are not supported yet.



See also
~~~~~~~~

`SetRPAttrsA()`_ `GetAPen()`_ `GetBPen()`_ `GetOutLinePen()`_ `graphics/rpattr.h </documentation/developers/headerfiles/graphics/rpattr.h>`_ 

----------

GetSprite()
===========

Synopsis
~~~~~~~~
::

 WORD GetSprite(
          struct SimpleSprite * sprite,
          WORD pick );

Function
~~~~~~~~
::

     Try to get a hardware sprite for the simple sprite manager.
     There are eight sprites available in the system and by calling
     this function you can allocate one for yourself. You have to
     call this function before talking to other sprite routines.
     If you want a 15 color sprite, you must allocate both sprites
     (see the manual!) and set the SPRITE_ATTACHED bit in the
     odd sprite's posctldata array.
     


Inputs
~~~~~~
::

     sprite - pointer to a SimpleSprite structure
     pick   - number of the sprite (0-7) of -1 if you just want
              the next available sprite


Result
~~~~~~
::

     -1 - if the selected sprite is not available (pick was 0-7) or
          no further sprites are available (pick was -1). -1 will
          also be found in the SimpleSprite structure.
     0-7: The sprite number of your allocated sprite. The number will
          also be found in the SimpleSprite structure.


Bugs
~~~~
::

     On some machines this will never return anything else than -1!



See also
~~~~~~~~

`FreeSprite()`_ `ChangeSprite()`_ `MoveSprite()`_ `GetSprite()`_ `graphics/sprite.h </documentation/developers/headerfiles/graphics/sprite.h>`_ 

----------

GetVPModeID()
=============

Synopsis
~~~~~~~~
::

 ULONG GetVPModeID(
          struct ViewPort * vp );

Function
~~~~~~~~
::

     returns the normal display modeID, if one is currently associated
     with this ViewPort


Inputs
~~~~~~
::

     vp - pointer to ViewPort structure


Result
~~~~~~
::

     modeID - a 32 bit DisplayInfoRecord identifier associated
              with this ViewPort, or INVALID_ID



See also
~~~~~~~~

`ModeNotAvailable()`_ `graphics/displayinfo.h </documentation/developers/headerfiles/graphics/displayinfo.h>`_ 

----------

GfxAssociate()
==============

Synopsis
~~~~~~~~
::

 void GfxAssociate(
          void * pointer,
          struct ExtendedNode * node );

Function
~~~~~~~~
::

   Associate a special graphics extended data structure with another
   structure via the other structure's pointer. Later, when you call
   GfxLookUp() with the other structure's pointer you may receive
   the pointer to this special graphics extended data structure, if it
   is available


Inputs
~~~~~~
::

   pointer = a pointer to a data structure
   node = an ExtendedNode structure to associate with the pointer


Result
~~~~~~
::

   an association is created between the pointer and the node such
   that given the pointer the node can be retrieved via GfxLookUp().


Notes
~~~~~
::

   Never associate one special graphics extended data structure to
   several pointers. Only one pointer is allowed!



See also
~~~~~~~~

`graphics/gfxnodes.h </documentation/developers/headerfiles/graphics/gfxnodes.h>`_ `GfxFree()`_ `GfxNew()`_ `GfxLookUp()`_ 

----------

GfxFree()
=========

Synopsis
~~~~~~~~
::

 void GfxFree(
          struct ExtendedNode * node );

Function
~~~~~~~~
::

   Free a special graphics extended data structure which was preciously
   allocated by GfxNew()


Inputs
~~~~~~
::

   node = pointer to a graphics extended data structure obtained by
          GfxNew()


Result
~~~~~~
::

   The node will be deallocated from memory. Graphics will disassociate
   this special graphics extended node from any associated data
   structure, if necessary, before freeing it (see GfxAssociate())



See also
~~~~~~~~

`graphics/gfxnodes.h </documentation/developers/headerfiles/graphics/gfxnodes.h>`_ `GfxNew()`_ `GfxAssociate()`_ `GfxLookUp()`_ 

----------

GfxLookUp()
===========

Synopsis
~~~~~~~~
::

 struct ExtendedNode * GfxLookUp(
          void * pointer );

Function
~~~~~~~~
::

   Finds a special graphics extended data structure (if an) associated
   with the pointer to a data structure (e.g.: ViewExtra associated with
   a View structure).


Inputs
~~~~~~
::

   pointer = a pointer to a data structure which may have an
             ExtendedNode associated with it (typically a View)


Result
~~~~~~
::

   result = a pointer to the ExtendedNode that has previously been
            associated with the pointer



See also
~~~~~~~~

`graphics/gfxnodes.h </documentation/developers/headerfiles/graphics/gfxnodes.h>`_ `GfxNew()`_ `GfxAssociate()`_ `GfxFree()`_ 

----------

GfxNew()
========

Synopsis
~~~~~~~~
::

 struct ExtendedNode * GfxNew(
          ULONG node_type );

Function
~~~~~~~~
::

   Allocate a special graphics extended data structure. The type of
   structure to be allocated is passed in the node_type identifier.


Inputs
~~~~~~
::

   node_type = the type of graphics extended data structure to allocate.
               (see gfxnodes.h for identifier definitions.)


Result
~~~~~~
::

   A pointer to the allocated graphics node or NULL if the allocation
   failed



See also
~~~~~~~~

`graphics/gfxnodes.h </documentation/developers/headerfiles/graphics/gfxnodes.h>`_ `GfxFree()`_ `GfxAssociate()`_ `GfxLookUp()`_ 

----------

InitArea()
==========

Synopsis
~~~~~~~~
::

 void InitArea(
          struct AreaInfo * areainfo,
          void * buffer,
          WORD maxvectors );

Function
~~~~~~~~
::

     This function initializes an areainfo structure. The size of the
     passed pointer to the buffer should be 5 times as large as
     maxvectors (in bytes).


Inputs
~~~~~~
::

     areainfo   - pointer to AreaInfo structure to be initialized
     buffer     - pointer to free memory to collect vectors
     maxvectors - maximum number of vectors the buffer can hold.


Result
~~~~~~
::

     Areainfo structure initialized such that it will hold the vectors
     created by AreaMove, AreaDraw and AreaEllipse (AreaCircle).



See also
~~~~~~~~

`AreaDraw()`_ `AreaMove()`_ `AreaEllipse()`_ `AreaCircle()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

InitBitMap()
============

Synopsis
~~~~~~~~
::

 VOID InitBitMap(
          struct BitMap * bm,
          BYTE depth,
          UWORD width,
          UWORD height );

Function
~~~~~~~~
::


 Initialize BitMap structure. A bitmap MUST be initialized before it's
 used in any (other) graphics library function.


Inputs
~~~~~~
::


 bm     --  pointer to BitMap structure
 depth  --  number of bitplanes
 width  --  width in pixels of this bitmap
 height --  height in pixels of this bitmap


Notes
~~~~~
::


 The Planes[] is not affected and must be set up the caller.



See also
~~~~~~~~

`graphics/gfx.h </documentation/developers/headerfiles/graphics/gfx.h>`_ 

----------

InitGels()
==========

Synopsis
~~~~~~~~
::

 void InitGels(
          struct VSprite * head,
          struct VSprite * tail,
          struct GelsInfo * GInfo );

Function
~~~~~~~~
::

     Makes the two VSprites head and tail of the gel list that is connected
     to the GelsInfo structure. The two VSprites are linked together and
     their x and y coordinates are initialized such that the serve as the
     keystones of the list.


Inputs
~~~~~~
::

     head  - pointer to the VSprite structure to be used as head of the gel list
     tail  - pointer to the VSprite structure to be used as tail of the gel list
     GInfo - pointer to the GelsInfo structure to be initialized



See also
~~~~~~~~

graphics/rastport.h  graphics/gels.h 

----------

InitGMasks()
============

Synopsis
~~~~~~~~
::

 void InitGMasks(
          struct AnimOb * anOb );

Function
~~~~~~~~
::

     For every component's sequence initialize the Masks by calling
     InitMasks()


Inputs
~~~~~~
::

     anOb = pointer to the AnimOb



See also
~~~~~~~~

`InitGels()`_ `InitMasks()`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

InitMasks()
===========

Synopsis
~~~~~~~~
::

 void InitMasks(
          struct VSprite * vs );

Function
~~~~~~~~
::

     Creates the standard BorderLine and CollMask masks of the VSprite.
     VSprites and Bobs are treated accordingly.


Inputs
~~~~~~
::

     vs = pointer to VSprite structure



See also
~~~~~~~~

`InitGels()`_ `InitGMasks()`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

InitRastPort()
==============

Synopsis
~~~~~~~~
::

 void InitRastPort(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Initializes a RastPort structure.


Inputs
~~~~~~
::

     rp - The RastPort to initialize.


Result
~~~~~~
::

     all entries in RastPort get zeroed out, with the following exceptions:

         Mask, FgPen, AOLPen, and LinePtrn are set to -1.
         The DrawMode is set to JAM2
         The font is set to the standard system font



----------

InitTmpRas()
============

Synopsis
~~~~~~~~
::

 struct TmpRas  * InitTmpRas(
          struct TmpRas  * tmpras,
          void * buffer,
          ULONG size );

Function
~~~~~~~~
::

     Initializes a TmpRas structure. The user has to connect the
     TmpRas structure to the rastport.
     Some routines need extra memory in order to be able to operate
     properly.


Inputs
~~~~~~
::

     tmpras - pointer to a TmpRas structure to be initialized
     buffer - pointer to a piece of chip memory.
     size   - size in bytes of buffer.


Result
~~~~~~
::

     Properly initialized TmpRas structure to link to RastPort structure
     for use with functions like Flood(), Text() and AreaEnd().


Notes
~~~~~
::

     Alltough the RKRM says InitTmpRas is a VOID function every SDK
     implements it so that it returns the tmpras argument.


Bugs
~~~~
::

     The function itself is a bug.
     Why does this function exist at all? The necessary memory should
     be allocated in InitRastPort() or the functions that need it.



----------

InitView()
==========

Synopsis
~~~~~~~~
::

 void InitView(
          struct View * view );

Function
~~~~~~~~
::

     Initializes a View structure.


Inputs
~~~~~~
::

     view - The View to initialize.


Result
~~~~~~
::

     View is initialized to it`s default values - doesn't care about
     previous contents of this structure.
     All values except for DxOffset,DyOffset are set to 0's.



----------

InitVPort()
===========

Synopsis
~~~~~~~~
::

 void InitVPort(
          struct ViewPort * vp );

Function
~~~~~~~~
::

     Initializes a ViewPort structure.


Inputs
~~~~~~
::

     view - The View to initialize.


Result
~~~~~~
::

     ViewPort is initialized to it`s default values - doesn't care about
     previous contents of this structure.
     All values except for SpritePriorities are set to 0's.



----------

IsPointInRegion()
=================

Synopsis
~~~~~~~~
::

 BOOL IsPointInRegion(
          struct Region * Reg,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Checks if the point (x, y) is contained in the region Reg


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     x       - The point's 'x' coordinate
     y       - The point's 'y' coordinate


Result
~~~~~~
::

     TRUE if the point is contained, FALSE otherwise


Notes
~~~~~
::

     This function isn't available in AmigaOS.



See also
~~~~~~~~

`XorRegionRegion()`_ `OrRegionRegion()`_ 

----------

LoadRGB32()
===========

Synopsis
~~~~~~~~
::

 void LoadRGB32(
          struct ViewPort * vp,
          const ULONG     * table );

Function
~~~~~~~~
::

     Load RGB color values from table.


Inputs
~~~~~~
::

     vp    - ViewPort
     table - pointer to table of records
             1 Word with the number of colors to load
             1 Word with the first color to be loaded.
             3 Longwords representing a left justified 32 bit RGB triplet.
             The list is terminated by a count value of 0.

Example
~~~~~~~
::

     ULONG table[] = { 1l << 16 + 0 , 0xffffffff , 0 , 0 , 0}
     ULONG table[] = { 256l << 16 + 0 , r1 , g1 , b1 , r2 , g2 , b2 , ..... 0}



----------

LoadRGB4()
==========

Synopsis
~~~~~~~~
::

 void LoadRGB4(
          struct ViewPort * vp,
          UWORD           * colors,
          WORD count );

Function
~~~~~~~~
::

     Load RGB color values from table.


Inputs
~~~~~~
::

     vp     - ViewPort
     colors - pointer to table of RGB values (0...15)
                     background--  0x0RGB
                     color1    --  0x0RGB
                     color2    --  0x0RGB
                     ...
     count   - number of UWORDs in the table
     


See also
~~~~~~~~

`LoadRGB32()`_ 

----------

LoadView()
==========

Synopsis
~~~~~~~~
::

 void LoadView(
          struct View * view );

Function
~~~~~~~~
::

     Display a new view


Inputs
~~~~~~
::

     view - pointer to the View structure which contains the pointer to the
            constructed coprocessor instructions list, or NULL


Result
~~~~~~
::

     None.



----------

LockLayerRom()
==============

Synopsis
~~~~~~~~
::

 void LockLayerRom(
          struct Layer * l );

Function
~~~~~~~~
::

     Locks the layer. Returns when the layer is locked for
     exclusive use.
     This call behaves like when a semaphore is locked. The
     same task may lock the same layer several times without
     locking itself out. For every call to this function a
     call to UnlockLayerRom() has to be made as the calls nest.
     This function will also prevent intuition from locking the
     layer so the layer should not be blocked too long.
     This function does exactly the same as layers/LockLayer()


Inputs
~~~~~~
::

     l - pointer to layer that is to be locked


Bugs
~~~~
::

    Does not save all registers.



See also
~~~~~~~~

`UnlockLayerRom()`_ `hyperlayers.library/LockLayer() <./hyperlayers#locklayer>`_ `hyperlayers.library/UnLockLayer() <./hyperlayers#unlocklayer>`_ 

----------

MakeVPort()
===========

Synopsis
~~~~~~~~
::

 ULONG MakeVPort(
          struct View * view,
          struct ViewPort * viewport );

Function
~~~~~~~~
::

     Prepare a ViewPort to be displayed. Calculate all necessary internal data.
     For Amiga(tm) chipset bitmaps this includes calculating preliminary copperlists.


Inputs
~~~~~~
::

     view     - pointer to a View structure
     viewport - pointer to a ViewPort structure
                the viewport must have a valid pointer to a RasInfo


Result
~~~~~~
::

     error - Result of the operation:
         MVP_OK         - Everything is OK, ViewPort is ready
         MVP_NO_MEM     - There was not enough memory for internal data
         MVP_NO_VPE     - There was no ViewPortExtra for this ViewPort and no memory to
                          allocate a temporary one.
         MVP_NO_DSPINS  - There was not enough memory for Amiga(tm) copperlist.
         MVP_NO_DISPLAY - The BitMap can't be displayed using specified mode (for example,
                          misaligned or wrong depth).



----------

ModeNotAvailable()
==================

Synopsis
~~~~~~~~
::

 ULONG ModeNotAvailable(
          ULONG modeID );

Function
~~~~~~~~
::

     returns an error code, indicating why this modeID is not available,
     or 0 if there is no reason known why this mode should not be there


Inputs
~~~~~~
::

     modeID - a 32 bit DisplayInfoRecord identifier


Result
~~~~~~
::

     error - a general indication of why this modeID is not available,
             or 0 if there is no reason why it should not be available



See also
~~~~~~~~

`GetVPModeID()`_ `graphics/displayinfo.h </documentation/developers/headerfiles/graphics/displayinfo.h>`_ 

----------

Move()
======

Synopsis
~~~~~~~~
::

 void Move(
          struct RastPort * rp,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Move the drawing pen to (x,y).


Inputs
~~~~~~
::

     rp  - RastPort
     x,y - target coordinate



----------

MoveSprite()
============

Synopsis
~~~~~~~~
::

 void MoveSprite(
          struct ViewPort * vp,
          struct SimpleSprite * sprite,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Move sprite to a new position on the screen. Coordinates
     are specified relatively to given ViewPort, or relatively
     to the entire View (physical display) if the ViewPort is NULL.

     This function works also with extended sprites, since
     struct SimpleSprite is a part of struct ExtSprite.


Inputs
~~~~~~
::

     vp     - a ViewPort for relative sprite positioning or NULL
     sprite - a pointer to a sprite descriptor structure
     x      - a new X coordinate
     y      - a new Y coordinate


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     AROS currently supports only one sprite #0 for mouse pointer.
     Other sprite numbers are ignored by this function.

     ViewPort is also used in order to specify the physical display.
     If it's not specified, Amiga(tm) chipset display is assumed.
     This is available only on Amiga(tm) architecture.



----------

MrgCop()
========

Synopsis
~~~~~~~~
::

 ULONG MrgCop(
          struct View * view );

Function
~~~~~~~~
::

     Prepare the view for being displayed. Calculate necessary internal data.
     For Amiga(tm) chipset this function also merges together the display, color, sprite and user
     coprocessor instructions into a single coprocessor instruction stream.


Inputs
~~~~~~
::

     view - a pointer to the view structure to prepare


Result
~~~~~~
::

     error - ULONG error value indicating either lack of memory to build the system data,
                     or that MrgCop() has no work to do - ie there where no viewPorts in the list.


Notes
~~~~~
::

     Pre-v39 AmigaOS returns void.
     
     If the given view is already on display, changes appear immediately.



----------

NewRegion()
===========

Synopsis
~~~~~~~~
::

 struct Region * NewRegion();

Function
~~~~~~~~
::

     Allocates memory for a new Region and initializes it
     to an empty Region.


Result
~~~~~~
::

     region - pointer to a newly created Region structure that
              should be freed by a call to DisposeRegion()



See also
~~~~~~~~

`DisposeRegion()`_ 

----------

NextDisplayInfo()
=================

Synopsis
~~~~~~~~
::

 ULONG NextDisplayInfo(
          ULONG last_ID );

Function
~~~~~~~~
::

     Go to next entry in the DisplayInfo database.


Inputs
~~~~~~
::

     last_ID - previous displayinfo identifier
               or INVALID_ID if beginning iteration


Result
~~~~~~
::

     next_ID - subsequent displayinfo identifier
               or INVALID_ID if no more records



See also
~~~~~~~~

`FindDisplayInfo()`_ `GetDisplayInfoData()`_ `graphics/displayinfo.h </documentation/developers/headerfiles/graphics/displayinfo.h>`_ 

----------

ObtainBestPenA()
================

Synopsis
~~~~~~~~
::

 LONG ObtainBestPenA(
          struct ColorMap * cm,
          ULONG r,
          ULONG g,
          ULONG b,
          struct TagItem * tags );
 
 LONG ObtainBestPen(
          struct ColorMap * cm,
          ULONG r,
          ULONG g,
          ULONG b,
          TAG tag, ... );

Function
~~~~~~~~
::

     Try to find a pen which matches the given parameters.


Inputs
~~~~~~
::

     cm   - colormap
     r    - red value (32 bit left justified fraction)
     g    - green value (32 bit left justified fraction)
     b    - blue value (32 bit left justified fraction)
     tags - tagarray
            OBP_Precision - PRECISION_GUI, PRECISION_ICON, PRECISION_IMAGE or PRECISION_EXACT.
                            Defaults to PRECISION_IMAGE.

            OBP_FailIfBad - if TRUE ObtainBestPen returns an error when there
                            is no color in the given tolerance.


Result
~~~~~~
::

     A pen value or -1 if no pen could be found.


Notes
~~~~~
::

     You must call ReleasePen() when you're done with the pen.



----------

ObtainPen()
===========

Synopsis
~~~~~~~~
::

 LONG ObtainPen(
          struct ColorMap * cm,
          ULONG n,
          ULONG r,
          ULONG g,
          ULONG b,
          ULONG flags );

Function
~~~~~~~~
::

     Attempt to allocate an entry in the colormap for exclusive
     or shared use by the application. To deallocate the pen
     ReleasePen() must be called.
     

Inputs
~~~~~~
::

     cm    - A pointer to a color map structure
     n     - index of the entry in the color map; if any entry is fine
             pass -1
     r     - red value (left justified 32 bit fraction)
     g     - green value (left justified 32 bit fraction)
     b     - blue value (left justified 32 bit fraction)
     flags - PEN_EXCLUSIVE - for exclusive access to a color register;
                           default is shared access
                           
             PEN_NO_SETCOLOR - will not change the RGB values
                               for the selected pen.


Result
~~~~~~
::

     n  = allocated pen number, -1 for failure


Notes
~~~~~
::

     Shared palette entries should not be changed (via SetRGB??())
     since other applications might use the same color.
     A PaletteExtra structure must have been attached to the
     ColorMap prior to calling this function (AttachPalExtra()).



----------

OpenFont()
==========

Synopsis
~~~~~~~~
::

 struct TextFont * OpenFont(
          const struct TextAttr * textAttr );

Function
~~~~~~~~
::

     Searches for a text font which best matches the specified attributes.


Inputs
~~~~~~
::

     textAttr - pointer to a TextAttr or TTextAttr font description.


Result
~~~~~~
::

     Returns NULL if the font can't be found.



See also
~~~~~~~~

`CloseFont()`_ `SetFont()`_ `diskfont.library/OpenDiskFont() <./diskfont#opendiskfont>`_ 

----------

OpenMonitor()
=============

Synopsis
~~~~~~~~
::

 struct MonitorSpec * OpenMonitor(
          STRPTR monitor_name,
          ULONG display_id );

Inputs
~~~~~~
::

     monitor_name - pointer to a null terminated string
     display_id   - optional 32 bit monitor/mode identifier


Result
~~~~~~
::

     mspc - pointer to an open MonitorSpec structure
            NULL if MonitorSpec could not be opened



See also
~~~~~~~~

`CloseMonitor()`_ `graphics/monitor.h </documentation/developers/headerfiles/graphics/monitor.h>`_ 

----------

OrRectRegion()
==============

Synopsis
~~~~~~~~
::

 BOOL OrRectRegion(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Add the given Rectangle to the given Region (if not
     already there)


Inputs
~~~~~~
::

     region - pointer to Region structure
     rectangle - pointer to Rectangle structure


Result
~~~~~~
::

     TRUE if the operation was successful, else FALSE
     (out of memory)


Notes
~~~~~
::

     All relevant data is copied, you may throw away the
     given rectangle after calling this function



See also
~~~~~~~~

`AndRectRegion()`_ `XorRectRegion()`_ `ClearRectRegion()`_ 

----------

OrRectRegionND()
================

Synopsis
~~~~~~~~
::

 struct Region * OrRectRegionND(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Add the given Rectangle to the given Region (if not
     already there)


Inputs
~~~~~~
::

     region - pointer to Region structure
     rectangle - pointer to Rectangle structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory



See also
~~~~~~~~

`AndRegionRegion()`_ `OrRectRegion()`_ `XorRectRegion()`_ `ClearRectRegion()`_ `NewRegion()`_ 

----------

OrRegionRegion()
================

Synopsis
~~~~~~~~
::

 BOOL OrRegionRegion(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     OR of one region with another region, leaving result in
     second region.


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     TRUE if the operation was successful, else FALSE
     (out of memory)



See also
~~~~~~~~

`AndRegionRegion()`_ `XOrRegionRegion()`_ 

----------

OrRegionRegionND()
==================

Synopsis
~~~~~~~~
::

 struct Region * OrRegionRegionND(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     OR of one region with another region.


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory



See also
~~~~~~~~

`XorRegionRegion()`_ `OrRegionRegion()`_ 

----------

OwnBlitter()
============

Synopsis
~~~~~~~~
::

 void OwnBlitter();

Function
~~~~~~~~
::

     The blitter is allocated for exclusive use by the calling task.
     This function returns immediately if no other task is using
     the blitter right now or if no blits are in the queues (QBlit(),
     QBSBlit()). Otherwise the function will block until the blitter
     can be accessed.
     It is good practice to start the blitter immediately after calling
     this function and then call DisownBlitter() so other tasks can
     use the blitter.



See also
~~~~~~~~

`DisownBlitter()`_ 

----------

PolyDraw()
==========

Synopsis
~~~~~~~~
::

 void PolyDraw(
          struct RastPort * rp,
          LONG count,
          WORD            * polyTable );

Function
~~~~~~~~
::

     Draw connected lines from an array. The first line is drawn
     from the current pen position to the first entry in the array.


Inputs
~~~~~~
::

     rp        - RastPort
     count     - number of x,y pairs
     polyTable - array of x,y pairs


Notes
~~~~~
::

     Official prototype files declare count as LONG but
     original ROM code only uses low 16-bits.



----------

QBlit()
=======

Synopsis
~~~~~~~~
::

 void QBlit(
          struct bltnode * bn );

Function
~~~~~~~~
::

     Queues a request for a blit. This request is queued at the end
     of the list.


Inputs
~~~~~~
::

     bn - pointer to blitnode structure


Result
~~~~~~
::

     The routine that function in the bltnode is pointing to is
     called when the blitter is ready for work. No other task will
     be able to access the blitter while you're doing the blit.
     Queued blits have precedence over a task that tries to own the
     blitter via OwnBlitter(). So all queued blitter requests will
     be done first until the task that attempts a OwnBlitter can
     actually access the blitter.


Notes
~~~~~
::

     Not all hardware has a blitter. On hardware where there is no
     blitter, a blitter is simulated. Therefore all code that will
     be executed in the function that is called must not contain
     code that is hacking the blitter's register but should contain
     calls to graphics functions instead.



See also
~~~~~~~~

`QBSBlit()`_ `OwnBlitter()`_ `DisownBlitter()`_ `hardware/blit.h </documentation/developers/headerfiles/hardware/blit.h>`_ 

----------

QBSBlit()
=========

Synopsis
~~~~~~~~
::

 void QBSBlit(
          struct bltnode * bn );

Function
~~~~~~~~
::

     Queues a request for a beam-synchronized  blit.


Inputs
~~~~~~
::

     bn - pointer to blitnode structure


Result
~~~~~~
::

     The routine that function in the bltnode is pointing to is
     called when the blitter is ready for work. No other task will
     be able to access the blitter while you're doing the blit.
     Queued blits have precedence over a task that tries to own the
     blitter via OwnBlitter(). So all queued blitter requests will
     be done first until the task that attempts a OwnBlitter can
     actually access the blitter.


Notes
~~~~~
::

     Not all hardware has a blitter. On hardware where there is no
     blitter, a blitter is simulated. Therefore all code that will
     be executed in the function that is called must not contain
     code that is hacking the blitter's register but should contain
     calls to graphics functions instead.



See also
~~~~~~~~

`QBSBlit()`_ `OwnBlitter()`_ `DisownBlitter()`_ `hardware/blit.h </documentation/developers/headerfiles/hardware/blit.h>`_ 

----------

ReadPixel()
===========

Synopsis
~~~~~~~~
::

 LONG ReadPixel(
          struct RastPort * rp,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Read the pen number of the given x,y coordinate.


Inputs
~~~~~~
::

     rp  - RastPort
     x,y - Coordinate



----------

ReadPixelArray8()
=================

Synopsis
~~~~~~~~
::

 LONG ReadPixelArray8(
          struct RastPort * rp,
          WORD xstart,
          WORD ystart,
          WORD xstop,
          WORD ystop,
          UBYTE * array,
          struct RastPort * temprp );

Function
~~~~~~~~
::

     Read the pen numbers of a rectangular area into an array.


Inputs
~~~~~~
::

     rp            - RastPort
     xstart,ystart - starting point
     xstop,ystop   - stopping point
     array         - array where pens are stored. Allocate at least
                     (((width+15)>>4)<<4)*(ystop-ystart+1) bytes.
     temprp        - temporary RastPort; copy of rp with
                     - Layers == NULL
                     - temprp->BitMap with Rows set to 1,
                     - temprp->BytesPerRow set to (((width+15)>>4)<<1),
                       and temporary memory allocated for
                       temprp->BitMap->Planes[])


Result
~~~~~~
::

     The number of pixels read.


Notes
~~~~~
::

     This function doesn't make sense on true-/hicolor rastports.



----------

ReadPixelLine8()
================

Synopsis
~~~~~~~~
::

 LONG ReadPixelLine8(
          struct RastPort * rp,
          LONG xstart,
          LONG ystart,
          ULONG width,
          UBYTE           * array,
          struct RastPort * tempRP );

Function
~~~~~~~~
::

     Read the pen numbers of a horizontal line into an array.


Inputs
~~~~~~
::

     rp            - RastPort
     xstart,ystart - coordinate
     width         - count of pixels to read (must be positive).
     array         - array for storing of the pen numbers. Size must be
                     at least ((width+15)>>4)<<4 bytes.
     tempRP        - see ReadPixelArray8().


Result
~~~~~~
::

     Number of pixels read.


Notes
~~~~~
::

     This function doesn't make sense on true-/hicolor rastports.



----------

RectFill()
==========

Synopsis
~~~~~~~~
::

 void RectFill(
          struct RastPort * rp,
          LONG xMin,
          LONG yMin,
          LONG xMax,
          LONG yMax );

Function
~~~~~~~~
::

     Fills a rectangular area with the current pens, drawing mode
     and areafill pattern. If no areafill pattern is defined fill
     with foreground pen.


Inputs
~~~~~~
::

     rp - RastPort
     xMin,yMin - upper left corner
     xMax,yMax - lower right corner



----------

ReleasePen()
============

Synopsis
~~~~~~~~
::

 void ReleasePen(
          struct ColorMap * cm,
          ULONG n );

Function
~~~~~~~~
::

     Release a pen that was previously allocated as an exclusive
     or shared pen by the application. Any other application can
     then obtain this pen and make changes to the color register
     entries.



Inputs
~~~~~~
::

     cm - ColorMap structure where the pen was allocated
     n  - The number of the pen


Result
~~~~~~
::

     An exclusive pen is deallocated for other applications to use.
     A shared pen is only completely deallocated if no other
     application is using it anymore.



----------

RemFont()
=========

Synopsis
~~~~~~~~
::

 void RemFont(
          struct TextFont * textFont );

Function
~~~~~~~~
::

     Remove a font from the list of public available fonts. Afterwards,
     you can close it.


Inputs
~~~~~~
::

     textFont - Remove this font.


Result
~~~~~~
::

     None.



See also
~~~~~~~~

`OpenFont()`_ `CloseFont()`_ `SetFont()`_ `AddFont()`_ 

----------

RemIBob()
=========

Synopsis
~~~~~~~~
::

 void RemIBob(
          struct Bob * bob,
          struct RastPort * rp,
          struct ViewPort * vp );

Function
~~~~~~~~
::

     Remove a Bob immediately from RastPort and gel list.



Inputs
~~~~~~
::

     bob - Bob
     rp  - RastPort
     vp  - ViewPort



----------

RemVSprite()
============

Synopsis
~~~~~~~~
::

 void RemVSprite(
          struct VSprite * vs );

Function
~~~~~~~~
::

     The VSprite is unlinked from the gel list.


Inputs
~~~~~~
::

     vs = pointer to VSprite to be removed from the gel list



See also
~~~~~~~~

`InitGels()`_ `RemIBob()`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

ScalerDiv()
===========

Synopsis
~~~~~~~~
::

 UWORD ScalerDiv(
          UWORD factor,
          UWORD numerator,
          UWORD denominator );

Function
~~~~~~~~
::

     Use this to precalculate the width/height of the destination
     bitmap. As factor give the width/height of the original bitmap
     that is to be scaled via ScaleBitMap(), as numerator give
     the value you will write into bsa_XSrcFactor/bsa_YSrcFactor
     and as denominator the value of bsa_XDestFactor/bsa_YDestFactor.


Inputs
~~~~~~
::

     factor      - a number in the range of 0..16383
     numerator   - a number in the range of 1..16383
     denominator - a number in the range of 1..16383



See also
~~~~~~~~

`BitMapScale()`_ 

----------

ScrollRaster()
==============

Synopsis
~~~~~~~~
::

 void ScrollRaster(
          struct RastPort * rp,
          LONG dx,
          LONG dy,
          LONG xMin,
          LONG yMin,
          LONG xMax,
          LONG yMax );

Function
~~~~~~~~
::

   Scroll the contents of a rastport (dx,dy) towards (0,0).
   The empty spaces is filled by a call to RectFill().
   Only the pixel in the rectangle (xMin,yMin)-(xMax,yMax)
   will be affected. The lower right corner (xMax, yMax) is
   automatically adjusted to the lower right corner in case
   it would be outside.
   After this operation the Flags bit of the layer associated
   with this rastport, if there is any layer, should be tested
   for simple layers in case there has any damage been created.
   


Inputs
~~~~~~
::

   rp    - pointer to rastport
   dx,dy - distance to move in x and y direction. Positive values go
           towards (0,0)
   xMin,yMin - upper left  hand corner of the affected rectangle
   xMax,yMax - lower right hand corner of the affected rectangle



----------

ScrollRasterBF()
================

Synopsis
~~~~~~~~
::

 void ScrollRasterBF(
          struct RastPort * rp,
          LONG dx,
          LONG dy,
          LONG xMin,
          LONG yMin,
          LONG xMax,
          LONG yMax );

Function
~~~~~~~~
::

   Scroll the contents of a rastport (dx,dy) towards (0,0).
   The empty spaces is filled by a call to EraseRect().
   Only the pixel in the rectangle (xMin,yMin)-(xMax,yMax)
   will be affected. The lower right corner (xMax, yMax) is
   automatically adjusted to the lower right corner in case
   it would be outside.
   After this operation the Flags bit of the layer associated
   with this rastport, if there is any layer, should be tested
   for simple layers in case there has any damage been created.
   


Inputs
~~~~~~
::

   rp    - pointer to rastport
   dx,dy - distance to move in x and y direction. Positive values go
           towards (0,0)
   xMin,yMin - upper left  hand corner of the affected rectangle
   xMax,yMax - lower right hand corner of the affected rectangle



----------

ScrollRegion()
==============

Synopsis
~~~~~~~~
::

 BOOL ScrollRegion(
          struct Region * region,
          struct Rectangle * rect,
          WORD dx,
          WORD dy );

Function
~~~~~~~~
::

     Scroll the rectangles in the region by the amount of pixels specified, within the
     specified rectangle.


Inputs
~~~~~~
::

     region - pointer to a region structure
     rect   - pointer to the rectangle within which the scrolling has to happen.
              If NULL, the region's bounds are used instead.
     dx, dy - the amount of pixels by which to scroll the region. Negative values mean
              respectively left and up, positive values mean right and down.

Result
~~~~~~
::

     TRUE if the operation succeeded, FALSE otherwise.


Notes
~~~~~
::

    This function doesn't exist in AmigaOS



See also
~~~~~~~~

`NewRegion()`_ 

----------

ScrollVPort()
=============

Synopsis
~~~~~~~~
::

 void ScrollVPort(
          struct ViewPort * vp );

Function
~~~~~~~~
::

     Move the ViewPort to the position specified in DxOffset and DyOffset
     members of the ViewPort structure.


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     AROS video drivers can perform a validation of offsets, and may refuse
     to scroll the screen too far (if they somehow can't provide the requested
     offset). In this case offset values in the ViewPort will be updated in
     order to reflect the real result of the operation.



----------

SetABPenDrMd()
==============

Synopsis
~~~~~~~~
::

 void SetABPenDrMd(
          struct RastPort * rp,
          ULONG apen,
          ULONG bpen,
          ULONG drawMode );

Function
~~~~~~~~
::

     Changes the foreground and background pen and the drawmode in one
     step.


Inputs
~~~~~~
::

     rp - Modify this RastPort
     apen - The new foreground pen
     bpen - The new background pen
     drawmode - The new drawmode


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function is faster than the sequence SetAPen(), SetBPen(),
     SetDrMd().

     This functions turns on PenMode for the RastPort.



----------

SetAPen()
=========

Synopsis
~~~~~~~~
::

 void SetAPen(
          struct RastPort * rp,
          ULONG pen );

Function
~~~~~~~~
::

     Set primary pen for rastport


Inputs
~~~~~~
::

     rp  - RastPort
     pen - pen number (0...255)


Notes
~~~~~
::

     This functions turns on PenMode for the RastPort.



----------

SetBPen()
=========

Synopsis
~~~~~~~~
::

 void SetBPen(
          struct RastPort * rp,
          ULONG pen );

Function
~~~~~~~~
::

     Set secondary pen for rastport.


Inputs
~~~~~~
::

     rp  - RastPort
     pen - pen number (0...255)


Notes
~~~~~
::

     This functions turns on PenMode for the RastPort.



----------

SetChipRev()
============

Synopsis
~~~~~~~~
::

 ULONG SetChipRev(
          ULONG ChipRev );

Inputs
~~~~~~
::

     ChipRev - Chip Rev that you would like to be enabled


Result
~~~~~~
::

     chiprevbits - Actual bits set in GfxBase->ChipRevBits0


Notes
~~~~~
::

     This function isn't implemented on all platforms.



----------

SetCollision()
==============

Synopsis
~~~~~~~~
::

 void SetCollision(
          ULONG num,
          VOID_FUNC routine,
          struct GelsInfo * GInfo );

Function
~~~~~~~~
::

     Call this function to set a specified entry (num) in the
     user's collision vector table with the address of the
     routine to be called by DoCollision().


Inputs
~~~~~~
::

     num     = number of collision vector
     routine = pointer to user's collision routine
     GInfo   = pointer to a GelsInfo structure



See also
~~~~~~~~

`InitGels()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ `graphics/gels.h </documentation/developers/headerfiles/graphics/gels.h>`_ 

----------

SetDisplayDriverCallback()
==========================

Synopsis
~~~~~~~~
::

 void SetDisplayDriverCallback(
          APTR callback,
          APTR userdata );

Function
~~~~~~~~
::

     Specify a display driver notification callback.
     
     The callback function is called using "C" calling convention and its
     declaration should have a form:

     APTR DriverNotify(APTR object, BOOL add, APTR userdata);

     The function will be called upon display driver insertion and removal.
     Upon insertion the parameters will be the following:
       object   - A pointer to a struct MonitorHandle for the new driver
       add      - TRUE, indicates driver insertion
       userdata - User data originally passed to SetDisplayDriverCallback()
     The function should return a pointer to opaque data object which will
     be stored in the display driver handle structure.

     Upon driver removal the parameters mean:
       object   - A pointer to opaque object returned by the callback when
                  the driver was added.
       add      - FALSE, indicates driver removal.
       userdata - User data originally passed to SetDisplayDriverCallback()
     Callback return value is ignored in removal mode.


Inputs
~~~~~~
::

     callback - A pointer to a function to call.
     userdata - User-defined data, will be passed to the callback function


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function is private to AROS. Do not use it in any end-user software,
     the specification may change at any moment.



See also
~~~~~~~~

`AddDisplayDriverA()`_ 

----------

SetDrMd()
=========

Synopsis
~~~~~~~~
::

 void SetDrMd(
          struct RastPort * rp,
          ULONG drawMode );

Function
~~~~~~~~
::

     Set the drawing mode for lines, fills and text.


Inputs
~~~~~~
::

     rp       - RastPort
     drawMode - see graphics/rastport.h for possible flags.



----------

SetFont()
=========

Synopsis
~~~~~~~~
::

 void SetFont(
          struct RastPort * rp,
          struct TextFont * textFont );

Function
~~~~~~~~
::

     Select a new font for rendering strings in a RastPort.


Inputs
~~~~~~
::

     rp - Change this RastPort
     textFont - This is the new font


Result
~~~~~~
::

     None.



----------

SetMaxPen()
===========

Synopsis
~~~~~~~~
::

 void SetMaxPen(
          struct RastPort * rp,
          ULONG maxpen );

Function
~~~~~~~~
::

     Set the maximum pen value for a rastport. This will instruct the
     graphics.library that the owner of the rastport will not be rendering
     in any colors whose index is >maxpen. Therefore speed optimizations
     on certain operations are possible and will be done.

     Basically this call sets the rastport mask, if this would improve speed.
     On devices where masking would slow things down (chunky pixels), it will
     be a no-op.


Inputs
~~~~~~
::

     rp     = pointer to a valid RastPort structure
     maxpen = longword pen value



See also
~~~~~~~~

`SetWriteMask()`_ 

----------

SetOutlinePen()
===============

Synopsis
~~~~~~~~
::

 ULONG SetOutlinePen(
          struct RastPort * rp,
          ULONG pen );

Function
~~~~~~~~
::

     Set the outline pen and turn on area outline mode.


Inputs
~~~~~~
::

     rp  - RastPort
     pen - pen


Result
~~~~~~
::

     Previous outline pen.



----------

SetRast()
=========

Synopsis
~~~~~~~~
::

 void SetRast(
          struct RastPort * rp,
          ULONG pen );

Function
~~~~~~~~
::


 Set the entire contents of a specified RastPort to a specific colour.


Inputs
~~~~~~
::


 rp   --  pointer to the RastPort in question
 pen  --  pen number to set the bitmap pixels to


Result
~~~~~~
::


 All pixels are set to the colour corresponding to the specified pen
 number.



See also
~~~~~~~~

`RectFill()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

SetRegion()
===========

Synopsis
~~~~~~~~
::

 BOOL SetRegion(
          struct Region * src,
          struct Region * dest );

Function
~~~~~~~~
::

     Sets the destination region to the source region.
     Allocates necessary RegionRectangles if necessary
     and deallocates any excessive RegionRectangles in
     the destination Region. The source Region remains
     untouched.
     If the system runs out of memory during allocation
     of RegionRectangles the destination Region will
     .
     

Result
~~~~~~
::

     TRUE if everything went alright, FALSE otherwise
     (out of memory).



See also
~~~~~~~~

`NewRegion()`_ `DisposeRegion()`_ 

----------

SetRGB32()
==========

Synopsis
~~~~~~~~
::

 void SetRGB32(
          struct ViewPort * vp,
          ULONG n,
          ULONG r,
          ULONG g,
          ULONG b );

Function
~~~~~~~~
::

     Changes a single color of a viewport.


Inputs
~~~~~~
::

     vp - Modify this viewport
     n - Change this color. If the color is outside the range of
             valid colors, it will be ignored.
     r, g, b - The new values for the red, green and blue. The
             valid range is from 0x000000 (no intensity) to
             0xFFFFFFFF (full intensity).


Result
~~~~~~
::

     If there is a ColorMap for this viewport, then the value will
     be stored in the ColorMap.
     The selected color register is changed to match your specs.
     If the color value is unused then nothing will happen.


Notes
~~~~~
::

     Lower order bits of the palette specification will be discarded,
     depending on the color palette resolution of the target graphics
     device. Use 0xffffffff for the full value, 0x7fffffff for 50%,
     etc. You can find out the palette range for your screen by
     querying the graphics data base.



----------

SetRGB32CM()
============

Synopsis
~~~~~~~~
::

 void SetRGB32CM(
          struct ColorMap * cm,
          ULONG n,
          ULONG r,
          ULONG g,
          ULONG b );

Function
~~~~~~~~
::

     Set one color in the ColorMap.


Inputs
~~~~~~
::

     cm - ColorMap structure obtained via GetColorMap()
     n  - the number of the color register to set
     r  - red level   (32 bit left justified fraction)
     g  - green level (32 bit left justified fraction)
     b  - blue level  (32 bit left justified fraction)
     

Result
~~~~~~
::

     Store the (r,g,b) triplet at index n in the ColorMap structure.
     The changes will not be immediately displayed. Use this function
     before linking the ColorMap to a ViewPort. Do not access the entries
     in the ColorTable yourself, as the ColorTable format is subject to
     change.



See also
~~~~~~~~

`GetColorMap()`_ `SetRGB32()`_ `GetRGB32()`_ `SetRGB4CM()`_ `graphics/view.h </documentation/developers/headerfiles/graphics/view.h>`_ 

----------

SetRGB4()
=========

Synopsis
~~~~~~~~
::

 void SetRGB4(
          struct ViewPort * vp,
          ULONG n,
          ULONG r,
          ULONG g,
          ULONG b );

Function
~~~~~~~~
::

     Changes a single color of a viewport.


Inputs
~~~~~~
::

     vp - Modify this viewport
     n - Change this color. If the color is outside the range of
             valid colors, it will be ignored.
     r, g, b - The new values for the red, green and blue. The
             valid range is from 0x0 (no intensity) to
             0xF (full intensity).


Result
~~~~~~
::

     If there is a ColorMap for this viewport, then the value will
     be stored in the ColorMap.
     The selected color register is changed to match your specs.
     If the color value is unused then nothing will happen.


Notes
~~~~~
::

     Lower order bits of the palette specification will be discarded,
     depending on the color palette resolution of the target graphics
     device. Use 0xf for the full value, 0x7 for 50%,
     etc. You can find out the palette range for your screen by
     querying the graphics data base.



----------

SetRGB4CM()
===========

Synopsis
~~~~~~~~
::

 void SetRGB4CM(
          struct ColorMap * cm,
          WORD n,
          UBYTE r,
          UBYTE g,
          UBYTE b );

Function
~~~~~~~~
::

     Set one color in the ColorMap.


Inputs
~~~~~~
::

     cm - ColorMap structure obtained via GetColorMap()
     n  - the number of the color register to set
     r  - red level   (0-15)
     g  - green level (0-15)
     b  - blue level  (0-15)
     

Result
~~~~~~
::

     Store the (r,g,b) triplet at index n in the ColorMap structure.
     The changes will not be immediately displayed. Use this function
     before linking the ColorMap to a ViewPort.



See also
~~~~~~~~

`GetColorMap()`_ `SetRGB4()`_ `GetRGB4()`_ `graphics/view.h </documentation/developers/headerfiles/graphics/view.h>`_ 

----------

SetRPAttrsA()
=============

Synopsis
~~~~~~~~
::

 void SetRPAttrsA(
          struct RastPort * rp,
          struct TagItem  * tags );
 
 void SetRPAttrs(
          struct RastPort * rp,
          TAG tag, ... );

Function
~~~~~~~~
::

     Modify rastport with values from a taglist.


Inputs
~~~~~~
::

     rp   - RastPort
     tags - see below


Tags
~~~~
::

     RPTAG_Font (struct TextFont *)  - Font for Text()
     RPTAG_APen (UBYTE)              - Primary rendering pen
     RPTAG_BPen (UBYTE)              - Secondary rendering pen
     RPTAG_DrMd (UBYTE)              - Drawing mode (graphics/rastport.h)
     RPTAG_OutlinePen (UBYTE)        - Area Outline pen
     RPTAG_WriteMask (ULONG)         - Bit mask for writing

     The following tags are compatible with MorphOS (V51) :

     RPTAG_FgColor (ULONG)           - Primary rendering color in A8R8G8B8
                                       format. Only working on
                                       hicolor/truecolor bitmaps/screens.
     RPTAG_BgColor (ULONG)           - Secondary rendering color in
                                       A8R8G8B8 format. Only working on
                                       hicolor/truecolor bitmaps/screens.
     RPTAG_PenMode (BOOL)            - TRUE if traditional pen numbers
                                       should be used, FALSE if direct RGB
                                       colors should be used. Has no effect
                                       on non-RTG displays.

     The following tags are compatible with AmigaOSv4 (V51) :

     RPTAG_RemapColorFonts (BOOL)    - Automatically remap colorfonts to
                                       their color on hicolor/truecolor
                                       screens.

     AROS-specific extensions

     RPTAG_ClipRectangle (struct Rectangle *) - Clipping rectangle
     RPTAG_ClipRectangleFlags (LONG) - RPCRF_RELRIGHT | RPCRF_RELBOTTOM
                                       (see graphics/rpattrs.h)


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     Setting one of RPTAG_ClipRectangle or RPTAG_ClipRectangleFlags
     allocates internal extra data for the RastPort. After finishing using
     this RastPort, you need to manually deallocate the extra data using
     FreeVec(rp->RP_Extra).



See also
~~~~~~~~

`GetRPAttrsA()`_ `graphics/rpattr.h </documentation/developers/headerfiles/graphics/rpattr.h>`_ 

----------

SetSoftStyle()
==============

Synopsis
~~~~~~~~
::

 ULONG SetSoftStyle(
          struct RastPort * rp,
          ULONG style,
          ULONG enable );

Function
~~~~~~~~
::


 Set the style of the current font. Only those bits set in 'enable' are
 affected.


Inputs
~~~~~~
::


 rp     --  pointer to rastport
 style  --  the style the font should have
 enable --  mask for style bits


Result
~~~~~~
::


 The style bits used hereinafter (the font may not support all the styles
 you wish to set). Note that this is possibly more style bits than you
 affected by calling SetSoftStyle() as a font may have intrinsic style
 bits set.



See also
~~~~~~~~

`AskSoftStyle()`_ `graphics/text.h </documentation/developers/headerfiles/graphics/text.h>`_ 

----------

SetWriteMask()
==============

Synopsis
~~~~~~~~
::

 ULONG SetWriteMask(
          struct RastPort * rp,
          ULONG mask );


----------

SortGList()
===========

Synopsis
~~~~~~~~
::

 void SortGList(
          struct RastPort * rp );

Function
~~~~~~~~
::

     Sort the current gel list by the y and x coordinates of it's
     elements.
     You have to call this routine prior to calling DoCollision()
     of DrawGList or make sure that the list is sorted!


Inputs
~~~~~~
::

     rp  = pointer to RastPort that has an GelsInfo linked to it



See also
~~~~~~~~

`InitGels()`_ `DrawGList()`_ `DoCollision()`_ `graphics/rastport.h </documentation/developers/headerfiles/graphics/rastport.h>`_ 

----------

StripFont()
===========

Synopsis
~~~~~~~~
::

 void StripFont(
          struct TextFont * font );

Function
~~~~~~~~
::

             Removes a TextFontExtension from a font.


Inputs
~~~~~~
::

     font    - font to remove extension from.



See also
~~~~~~~~

`ExtendFont()`_ 

----------

SyncSBitMap()
=============

Synopsis
~~~~~~~~
::

 void SyncSBitMap(
          struct Layer * l );

Function
~~~~~~~~
::

     If the layer has a superbitmap all the parts that are visible will
     be copied into the superbitmap. This is usually not done except when
     parts of a superbitmapped layer become hidden the visible parts are
     stored into the superbitmap.


Inputs
~~~~~~
::

     l  - pointer to superbitmapped layer


Result
~~~~~~
::

     The superbitmap will be synchronized with the visible part. The
     superbitmap attached to the layer will be up-to-date with what's
     really in the layer.



See also
~~~~~~~~

`CopySBitMap()`_ 

----------

Text()
======

Synopsis
~~~~~~~~
::

 void Text(
          struct RastPort * rp,
          CONST_STRPTR string,
          ULONG count );

Function
~~~~~~~~
::

     Write text to the rastport at the current position.
     The current position is updated to a position after the text.


Inputs
~~~~~~
::

     rp     - RastPort
     string - string to print
     count  - number of characters to print



----------

TextExtent()
============

Synopsis
~~~~~~~~
::

 void TextExtent(
          struct RastPort   * rp,
          CONST_STRPTR string,
          ULONG count,
          struct TextExtent * textExtent );

Function
~~~~~~~~
::

     This function determines the metric of the space that a text string
     would render into.


Inputs
~~~~~~
::

     rp -     RastPort
     string - address of string
     count -  number of characters
     textExtent - storing place for the result
                  te_Width  - same as TextLength() result: the rp_cp_x
                              advance that rendering this text would cause.
                  te_Height - same as tf_YSize.  The height of the
                              font.
                  te_Extent.MinX - the offset to the left side of the
                                   rectangle this would render into.
                                   Often zero.
                  te_Extent.MinY - same as -tf_Baseline.  The offset
                                   from the baseline to the top of the
                                   rectangle this would render into.
                  te_Extent.MaxX - the offset of the left side of the
                                   rectangle this would render into.
                                   Often the same as te_Width-1.
                  te_Extent.MaxY - same as tf_YSize-tf_Baseline-1.
                                   The offset from the baseline to the
                                   bottom of the rectangle this would
                                   render into.



----------

TextFit()
=========

Synopsis
~~~~~~~~
::

 ULONG TextFit(
          struct RastPort   * rp,
          CONST_STRPTR string,
          ULONG strLen,
          struct TextExtent * textExtent,
          struct TextExtent * constrainingExtent,
          LONG strDirection,
          ULONG constrainingBitWidth,
          ULONG constrainingBitHeight );

Function
~~~~~~~~
::

     Tries to fill the given space with as many characters of the
     font in rp as possible and returns that number.


Inputs
~~~~~~
::

     rp - Use the settings in this RastPort (e.g. Font)
     string - Use this string
     strLen - The length of the string
     textExtent - The size actually occupied will be returned here
     constrainingExtent - If non-NULL, the routine will use the
             dimensions of the box described here
     strDirection - In which is the next character. Must be either 1
             or -1. If it is -1, then string must point to the end (the
             first character to check) of the text to fit (this is for
             checking text which runs from right to left).
     constrainingBitWidth - If constrainingExtent is NULL, then this
             is the width of the bounding box.
     constrainingBitHeight - If constrainingExtent is NULL, then this
             is the height of the bounding box.


Result
~~~~~~
::

     The number of characters which fit in the bounding box.
     If any characters fit in the bounding box, then textExtent will
     tell how large the minimal bounding box for the string is.



See also
~~~~~~~~

`TextLength()`_ 

----------

TextLength()
============

Synopsis
~~~~~~~~
::

 WORD TextLength(
          struct RastPort * rp,
          CONST_STRPTR string,
          ULONG count );

Function
~~~~~~~~
::

     Determines the length of a string in pixels.


Inputs
~~~~~~
::

     rp     - RastPort
     string - address of string
     count  - number of characters of string


Result
~~~~~~
::

     Length of string in pixels.


Notes
~~~~~
::

     Use the newer TextExtent() to get more information.



See also
~~~~~~~~

`Text()`_ `TextExtent()`_ 

----------

UCopperListInit()
=================

Synopsis
~~~~~~~~
::

 struct CopList * UCopperListInit(
          struct UCopList * ucl,
          WORD n );

Function
~~~~~~~~
::

     Allocates and initializes copperlist structures and buffers
     internal to UCopList structure.


Inputs
~~~~~~
::

     ucl - pointer to a UCopList structure. Must not be NULL!
     n   - number of instructions the buffer must be able to hold


Result
~~~~~~
::

     cl - pointer to a buffer that will accept n intermediate
          copper instructions

     NOTE: this is a pointer to UCopList->FirstCopList!



See also
~~~~~~~~

`CINIT()`_ `CMOVE()`_ `CWAIT()`_ `CEND()`_ `graphics/copper.h </documentation/developers/headerfiles/graphics/copper.h>`_ 

----------

UnlockLayerRom()
================

Synopsis
~~~~~~~~
::

 void UnlockLayerRom(
          struct Layer * l );

Function
~~~~~~~~
::

     Unlocks a previously locked layer for access by other applications
     or intuition itself.
     If a task has locked a layer multiple times it must unlock it
     as many times as well as locks nest.
     This functions does the same as layers/UnlockLayerRom()


Inputs
~~~~~~
::

     l - pointer to layer structure


Bugs
~~~~
::

     Does not save all registers.



See also
~~~~~~~~

`LockLayerRom()`_ `hyperlayers.library/LockLayer() <./hyperlayers#locklayer>`_ `hyperlayers.library/UnLockLayer() <./hyperlayers#unlocklayer>`_ 

----------

VBeamPos()
==========

Synopsis
~~~~~~~~
::

 LONG VBeamPos();

Inputs
~~~~~~
::

     none


Result
~~~~~~
::

     None.


Notes
~~~~~
::

     This function isn't implemented on all platforms.



----------

VideoControl()
==============

Synopsis
~~~~~~~~
::

 ULONG VideoControl(
          struct ColorMap * cm,
          struct TagItem * tags );
 
 ULONG VideoControlTags(
          struct ColorMap * cm,
          TAG tag, ... );

Inputs
~~~~~~
::

     cm   - pointer to struct ColorMap obtained via GetColorMap()
     tags - pointer to a table of videocontrol tagitems


Result
~~~~~~
::

     error - 0 if no error ocurred in the control operation
             non-0 if bad colormap pointer, no tagitems or bad tag

Notes
~~~~~
::

     Not implemented



----------

WaitBlit()
==========

Synopsis
~~~~~~~~
::

 void WaitBlit();

Function
~~~~~~~~
::

     Wait for the blitter to return to finish, ie. the function returns
     when the blitter is idle.


Inputs
~~~~~~
::

     None.


Result
~~~~~~
::

     None.


Bugs
~~~~
::

     This function is unimplemented.



----------

WaitBOVP()
==========

Synopsis
~~~~~~~~
::

 void WaitBOVP(
          struct ViewPort * vp );

Inputs
~~~~~~
::

     vp - pointer to ViewPort structure


Result
~~~~~~
::

     None.


Bugs
~~~~
::

     This function is unimplemented.



----------

WaitTOF()
=========

Synopsis
~~~~~~~~
::

 VOID WaitTOF();

Function
~~~~~~~~
::


 Wait for vertical blank.


Result
~~~~~~
::


 Adds the task to the TOF queue; it will be signalled when the vertical
 blank interrupt occurs.



----------

WeighTAMatch()
==============

Synopsis
~~~~~~~~
::

 WORD WeighTAMatch(
          const struct TextAttr * reqTextAttr,
          const struct TextAttr * targetTextAttr,
          struct TagItem  * targetTags );

Function
~~~~~~~~
::

             Determines how well two font descriptions match.


Inputs
~~~~~~
::

     reqTextAttr             - the required textattr.
     targetTextAttr  - textattr of potential match.
     targetTags              - tags for the targetTextAttr.


Result
~~~~~~
::

     A weight number which measures how well the TextAttrs
     match. The weight may vary from 0 (no match) to
     MAXFONTMATCHWEIGHT (perfect match).


Bugs
~~~~
::

     Does not yet take tags into account.



----------

WriteChunkyPixels()
===================

Synopsis
~~~~~~~~
::

 void WriteChunkyPixels(
          struct RastPort * rp,
          LONG xstart,
          LONG ystart,
          LONG xstop,
          LONG ystop,
          UBYTE           * array,
          LONG bytesperrow );

Function
~~~~~~~~
::

     Write a rectangular region of pen values into a rastport.


Inputs
~~~~~~
::

     rp            - destination RastPort
     xstart,ystart - starting point
     xstop,ystop   - stopping point
     array         - array with pen values
     bytesperrow   - The number of bytes per row in the source array.
                     This should be at least as large as the number of pixels
                     being written per line.



----------

WritePixel()
============

Synopsis
~~~~~~~~
::

 LONG WritePixel(
          struct RastPort * rp,
          WORD x,
          WORD y );

Function
~~~~~~~~
::

     Write the primary (A) pen colour to the given coordinates of a
     RastPort.


Inputs
~~~~~~
::

     rp  - destination RastPort
     x,y - coordinate


Result
~~~~~~
::

      0: pixel could be written
     -1: coordinate was outside rastport



----------

WritePixelArray8()
==================

Synopsis
~~~~~~~~
::

 LONG WritePixelArray8(
          struct RastPort * rp,
          ULONG xstart,
          ULONG ystart,
          ULONG xstop,
          ULONG ystop,
          UBYTE           * array,
          struct RastPort * temprp );

Function
~~~~~~~~
::

     Write an array of pens into a rectangular area.


Inputs
~~~~~~
::

     rp            - destination RastPort
     xstart,ystart - starting point
     xstop,ystop   - stopping point
     array         - array of pen values. Size must be at least
                     (((width+15)>>4)<<4)*(ystop-ystart+1) bytes.
     temprp        - temporary rastport
                     (copy of rp with Layer set to NULL,
                     temporary memory allocated for
                     temprp->BitMap with Rows set to 1,
                     temprp->BitMap with BytesPerRow set to ((width+15)>>4)<<1,
                     and temporary memory allocated for
                     temprp->BitMap->Planes[])


Result
~~~~~~
::

     Number of plotted pixels.



----------

WritePixelLine8()
=================

Synopsis
~~~~~~~~
::

 LONG WritePixelLine8(
          struct RastPort * rp,
          LONG xstart,
          LONG ystart,
          ULONG width,
          UBYTE * array,
          struct RastPort * tempRP );

Function
~~~~~~~~
::

     Draw a horizontal line from an array of pens.


Inputs
~~~~~~
::

     rp            - destination RastPort
     xstart,ystart - start coordinate of line
     width         - count of pixels to write (must be positive)
     array         - array of pen values. Allocate at least
                     ((width+15)>>4)<<4 bytes.
     tempRP        - temporary rastport
                     (copy of rp with Layer set to NULL,
                     temporary memory allocated for
                     temprp->BitMap with Rows set to 1,
                     temprp->BitMap BytesPerRow == ((width+15)>>4)<<1,
                     and temporary memory allocated for
                     temprp->BitMap->Planes[])


Result
~~~~~~
::

     Number of plotted pixels.



----------

XorRectRegion()
===============

Synopsis
~~~~~~~~
::

 BOOL XorRectRegion(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Exclusive-OR the given rectangle to the given
     region


Inputs
~~~~~~
::

     region - pointer to a region structure
     rectangle - pointer to a rectangle structure


Result
~~~~~~
::

     TRUE if the operation was successful, else FALSE
     (out of memory)


Notes
~~~~~
::

     All relevant data is copied, you may throw away the
     given rectangle after calling this function



See also
~~~~~~~~

`AndRectRegion()`_ `OrRectRegion()`_ `ClearRectRegion()`_ 

----------

XorRectRegionND()
=================

Synopsis
~~~~~~~~
::

 struct Region * XorRectRegionND(
          struct Region    * Reg,
          struct Rectangle * Rect );

Function
~~~~~~~~
::

     Exclusive-OR the given rectangle to the given
     region


Inputs
~~~~~~
::

     region - pointer to a region structure
     rectangle - pointer to a rectangle structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory


Notes
~~~~~
::

     All relevant data is copied, you may throw away the
     given rectangle after calling this function



See also
~~~~~~~~

`AndRectRegion()`_ `OrRectRegion()`_ `ClearRectRegion()`_ 

----------

XorRegionRegion()
=================

Synopsis
~~~~~~~~
::

 BOOL XorRegionRegion(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     Exclusive-OR of one region with another region,
     leaving result in second region.


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     TRUE if the operation was successful,
     FALSE otherwise (out of memory)



See also
~~~~~~~~

`AndRegionRegion()`_ `OrRegionRegion()`_ 

----------

XorRegionRegionND()
===================

Synopsis
~~~~~~~~
::

 struct Region * XorRegionRegionND(
          struct Region * R1,
          struct Region * R2 );

Function
~~~~~~~~
::

     Exclusive-OR of one region with another region.


Inputs
~~~~~~
::

     region1 - pointer to a region structure
     region2 - pointer to a region structure


Result
~~~~~~
::

     The resulting region or NULL in case there's no enough free memory


Notes
~~~~~
::

     This function is not present in AmigaOS



See also
~~~~~~~~

`AndRegionRegion()`_ `OrRegionRegion()`_ 

