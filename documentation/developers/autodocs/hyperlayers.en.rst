===========
hyperlayers
===========

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`BeginUpdate()`_                        `BehindLayer()`_                        `ChangeLayerShape()`_                   `ChangeLayerVisibility()`_              
`CollectPixelsLayer()`_                 `CreateBehindHookLayer()`_              `CreateBehindLayer()`_                  `CreateBehindLayerTagList()`_           
`CreateUpfrontHookLayer()`_             `CreateUpfrontLayer()`_                 `CreateUpfrontLayerTagList()`_          `DeleteLayer()`_                        
`DisposeLayerInfo()`_                   `DoHookClipRects()`_                    `EndUpdate()`_                          `FattenLayerInfo()`_                    
`InitLayers()`_                         `InstallClipRegion()`_                  `InstallLayerHook()`_                   `InstallLayerInfoHook()`_               
`IsLayerHiddenBySibling()`_             `IsLayerVisible()`_                     `LockLayer()`_                          `LockLayerInfo()`_                      
`LockLayers()`_                         `MoveLayer()`_                          `MoveLayerInFrontOf()`_                 `MoveSizeLayer()`_                      
`NewLayerInfo()`_                       `ScaleLayer()`_                         `ScrollLayer()`_                        `SizeLayer()`_                          
`SortLayerCR()`_                        `SwapBitsRastPortClipRect()`_           `ThinLayerInfo()`_                      `UnlockLayer()`_                        
`UnlockLayerInfo()`_                    `UnlockLayers()`_                       `UpfrontLayer()`_                       `WhichLayer()`_                         

======================================= ======================================= ======================================= ======================================= 

-----------

BeginUpdate()
=============

Synopsis
~~~~~~~~
::

 LONG BeginUpdate(
          struct Layer * l );

Function
~~~~~~~~
::

     Converts the damage list to ClipRects and exchanges the
     two lists for faster redrawing. This routine allows a
     faster update of the display as it will only be rendered
     in the damaged areas.
     This routine will automatically lock the layer to prevent
     changes.


Inputs
~~~~~~
::

     l - pointer to layer


Result
~~~~~~
::

     TRUE  if damage list conversion was successful
     FALSE if list could not be converted.



See also
~~~~~~~~

`EndUpdate()`_ 

----------

BehindLayer()
=============

Synopsis
~~~~~~~~
::

 LONG BehindLayer(
          LONG dummy,
          struct Layer * l );

Function
~~~~~~~~
::

    If the layer is a backdrop layer it will be moved to the most
    behind position. If it is a non-backdrop layer it will be moved
    in front of the first backdrop layer.
    The areas of simple layers, that become visible by moving this
    layer, are added to the damagelist and the LAYERREFRESH flag
    is set.


Inputs
~~~~~~
::

    dummy - nothing
    L     - pointer to layer


Result
~~~~~~
::

    TRUE  - layer was successfully moved
    FALSE - layer could not be moved (probably out of memory)



----------

ChangeLayerShape()
==================

Synopsis
~~~~~~~~
::

 struct Region * ChangeLayerShape(
          struct Layer  * l,
          struct Region * newshape,
          struct Hook   * callback );

Function
~~~~~~~~
::

    Changes the shape of the layer on the fly.
    When the shape of a layer is changed the current pixel content
    is copied into its ClipRects so no information is lost.
    The user can provide a callback hook that will be
    called when the current layer's information is all backed up
    in ClipRects. The signature of the callback should look as follows:

        AROS_UFC3(BOOL, callback,
            AROS_UFCA(struct Hook   *       , hook       , A0),
            AROS_UFCA(struct Layer  *       , l          , A2),
            AROS_UFCA(struct ShapeHookMsg * , arg        , A1));



Inputs
~~~~~~
::

    L        - pointer to layer
    newshape - pointer to a region that comprises the new shape
               of the layer. May be NULL if callback is provided.
    callback - pointer to a callback hook. May be NULL if newshape
               is given.


Result
~~~~~~
::

    Pointer to the previously installed region.



----------

ChangeLayerVisibility()
=======================

Synopsis
~~~~~~~~
::

 LONG ChangeLayerVisibility(
          struct Layer * l,
          int visible );

Function
~~~~~~~~
::

    Makes the given layer visible or invisible.
    If it is a simple refresh layer it will loose all its
    cliprects and therefore rendering will go into the void.


Inputs
~~~~~~
::

    L       - pointer to layer
    visible - TRUE or FALSE


Result
~~~~~~
::

    TRUE  - layer was changed to new state
    FALSE - layer could not be changed to new state


Notes
~~~~~
::

     This is an AROS private function, providing support
     for showing/hiding windows in intuition.



----------

CollectPixelsLayer()
====================

Synopsis
~~~~~~~~
::

 void CollectPixelsLayer(
          struct Layer  * l,
          struct Region * r,
          struct Hook   * callback );

Function
~~~~~~~~
::

     This function collects all the pixel within region r
     and calls the provided callback hook for all areas
     that were found. You can do with the pixels whatever
     you want...


Inputs
~~~~~~
::

    l               - pointer to layer where to start out
    r               - region where to look for hidden or
                      visible pixels
    callback        - the callback will be invoked for the
                      found pixels along with information
                      about the size of the area that may
                      be copied.
    



----------

CreateBehindHookLayer()
=======================

Synopsis
~~~~~~~~
::

 struct Layer * CreateBehindHookLayer(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          struct Hook       * hook,
          struct BitMap     * bm2 );

Function
~~~~~~~~
::

     Create a new layer at the given position and with the
     given size. The new layer will be in front of all other
     layers. If it is a backdrop layer it will be created
     in front of all other backdrop layers and behind all
     non backdrop layers.
     Install the given hook as a backfill hook. This hook will
     be called whenever a part of the layer is supposed to be
     filled with a certain pattern. The backfill hook has to
     do that.
     If a super bitmap layer is wanted the flags LAYERSUPER and
     the flag LAYERSMART have to be set and a pointer to a
     bitmap must also be passed to this function.


Inputs
~~~~~~
::

     li    - pointer to LayerInfo structure
     bm    - pointer to common bitmap
     x0, y0- upper left corner of the layer
     x1, y1- lower right corner of the layer
     flags - choose the type of layer by setting some flags
     hook  - pointer to the backfill hook of this layer
             The backfill hook will be called with
                  object = (struct RastPort *) result->RastPort
             and message = [ (struct Layer *) layer,
                             (struct Rectangle) bounds,
                             (WORD) offsetx,
                             (WORD) offsety ]
     bm2   - pointer to optional super bitmap.
     

Result
~~~~~~
::

     Pointer to the newly created layer. NULL if layer could not be
     created (Probably out of memory).
     

Notes
~~~~~
::

     Does not allow to create layers that are partially outside
     the given bitmap (, yet).



----------

CreateBehindLayer()
===================

Synopsis
~~~~~~~~
::

 struct Layer * CreateBehindLayer(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          struct BitMap     * bm2 );


----------

CreateBehindLayerTagList()
==========================

Synopsis
~~~~~~~~
::

 struct Layer * CreateBehindLayerTagList(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          struct TagItem    * tagList );
 
 struct Layer * CreateBehindLayerTags(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          TAG tag, ... );

Function
~~~~~~~~
::

     Create a new layer according to the tags given.


Inputs
~~~~~~
::

     li    - pointer to LayerInfo structure
     bm    - pointer to common bitmap
     x0,y0 - upper left corner of the layer (in parent layer coords)
     x1,y1 - lower right corner of the layer (in parent layer coords)
     flags - choose the type of layer by setting some flags
             If it is to be a super bitmap layer then the tag
             LA_SUPERBITMAP must be provided along with a
             pointer to a valid super bitmap.
     tagList - a list of tags that specify the properties of the
               layer. The following tags are currently supported:
               LA_PRIORITY : priority class of the layer. The
                             higher the number the further the
                             layer will be in front of everything
                             else.
                             Default value is UPFRONTPRIORITY.
               LA_HOOK     : Backfill hook
               LA_SUPERBITMAP : pointer to a superbitmap. The flags
                               must also represent that this
                               layer is supposed to be a superbitmap
                               layer.
               LA_CHILDOF  : pointer to parent layer. If NULL then
                             this layer will be created as a old-style
                             layer.
               LA_INFRONTOF : pointer to a layer in front of which
                              this layer is to be created.
               LA_BEHIND : pointer to a layer behind which this layer
                          is to be created. Must not give both LA_INFRONTOF
                          and LA_BEHIND.
               LA_VISIBLE : FALSE if this layer is to be invisible.
                            Default value is TRUE
               LA_SHAPE : The region of the layer that comprises its shape.
                          This value is optional. The region must be relative to the layer.
               
     

Result
~~~~~~
::

     Pointer to the newly created layer. NULL if layer could not be
     created (Probably out of memory).
     If the layer is created successfully you must not free its shape.
     The shape is automatically freed when the layer is deleted.



----------

CreateUpfrontHookLayer()
========================

Synopsis
~~~~~~~~
::

 struct Layer * CreateUpfrontHookLayer(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          struct Hook       * hook,
          struct BitMap     * bm2 );

Function
~~~~~~~~
::

     Create a new layer at the given position and with the
     given size. The new layer will be in front of all other
     layers. If it is a backdrop layer it will be created
     in front of all other backdrop layers and behind all
     non backdrop layers.
     Install the given hook as a backfill hook. This hook will
     be called whenever a part of the layer is supposed to be
     filled with a certain pattern. The backfill hook has to
     do that.
     If a super bitmap layer is wanted the flags LAYERSUPER and
     the flag LAYERSMART have to be set and a pointer to a
     bitmap must also be passed to this function.


Inputs
~~~~~~
::

     li    - pointer to LayerInfo structure
     bm    - pointer to common bitmap
     x0, y0- upper left corner of the layer
     x1, y1- lower right corner of the layer
     flags - choose the type of layer by setting some flags
     hook  - pointer to the backfill hook of this layer
             The backfill hook will be called with
                  object = (struct RastPort *) result->RastPort
             and message = [ (struct Layer *) layer,
                             (struct Rectangle) bounds,
                             (WORD) offsetx,
                             (WORD) offsety ]
     bm2   - pointer to optional super bitmap.


Result
~~~~~~
::

     pointer to layer if successful, NULL otherwise


Notes
~~~~~
::

     Does not allow to create layers that are partially outside
     the given bitmap (, yet).



----------

CreateUpfrontLayer()
====================

Synopsis
~~~~~~~~
::

 struct Layer * CreateUpfrontLayer(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          struct BitMap     * bm2 );


----------

CreateUpfrontLayerTagList()
===========================

Synopsis
~~~~~~~~
::

 struct Layer * CreateUpfrontLayerTagList(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          struct TagItem    * tagList );
 
 struct Layer * CreateUpfrontLayerTags(
          struct Layer_Info * li,
          struct BitMap     * bm,
          LONG x0,
          LONG y0,
          LONG x1,
          LONG y1,
          LONG flags,
          TAG tag, ... );

Function
~~~~~~~~
::

     Create a new layer according to the tags given.


Inputs
~~~~~~
::

     li    - pointer to LayerInfo structure
     bm    - pointer to common bitmap
     x0,y0 - upper left corner of the layer (in parent layer coords)
     x1,y1 - lower right corner of the layer (in parent layer coords)
     flags - choose the type of layer by setting some flags
             If it is to be a super bitmap layer then the tag
             LA_SUPERBITMAP must be provided along with a
             pointer to a valid super bitmap.
     tagList - a list of tags that specify the properties of the
               layer. The following tags are currently supported:
               LA_PRIORITY : priority class of the layer. The
                             higher the number the further the
                             layer will be in front of everything
                             else.
                             Default value is UPFRONTPRIORITY.
               LA_HOOK     : Backfill hook
               LA_SUPERBITMAP : pointer to a superbitmap. The flags
                               must also represent that this
                               layer is supposed to be a superbitmap
                               layer.
               LA_CHILDOF  : pointer to parent layer. If NULL then
                             this layer will be created as a old-style
                             layer.
               LA_INFRONTOF : pointer to a layer in front of which
                              this layer is to be created.
               LA_BEHIND : pointer to a layer behind which this layer
                          is to be created. Must not give both LA_INFRONTOF
                          and LA_BEHIND.
               LA_VISIBLE : FALSE if this layer is to be invisible.
                            Default value is TRUE
               LA_SHAPE : The region of the layer that comprises its shape.
                          This value is optional. The region must be relative to the layer.
               
     

Result
~~~~~~
::

     Pointer to the newly created layer. NULL if layer could not be
     created (Probably out of memory).
     If the layer is created successfully you must not free its shape.
     The shape is automatically freed when the layer is deleted.



----------

DeleteLayer()
=============

Synopsis
~~~~~~~~
::

 LONG DeleteLayer(
          LONG dummy,
          struct Layer * l );

Function
~~~~~~~~
::

     Deletes the layer. Other layers that were hidden (partially)
     will become visible. If parts of a simple layer become
     visible those parts are added to the damagelist of the
     layer and the LAYERREFRESH flags is set.


Inputs
~~~~~~
::

     dummy - nothing special
     LD    - layer to be deleted


Result
~~~~~~
::

     TRUE  - layer was successfully deleted
     FALSE - layer could not be delete (out of memory)



----------

DisposeLayerInfo()
==================

Synopsis
~~~~~~~~
::

 void DisposeLayerInfo(
          struct Layer_Info * li );


----------

DoHookClipRects()
=================

Synopsis
~~~~~~~~
::

 void DoHookClipRects(
          struct Hook      * hook,
          struct RastPort  * rport,
          struct Rectangle * rect );

Inputs
~~~~~~
::

     hook  - pointer to the hook to be called for the cliprects of
             the given layer
            
     rport - pointer to the rastport where the layers upon which the
             hook is to be called
     
     rect  - no operation is allowed outside this rectangle. If a layer
             is bigger than this rectangle only operations in the
             common area are allowed.



----------

EndUpdate()
===========

Synopsis
~~~~~~~~
::

 void EndUpdate(
          struct Layer * l,
          UWORD flag );

Function
~~~~~~~~
::

     After the damaged areas are updated, this routine should be
     called so the regular cliprects of the layer can be installed.


Inputs
~~~~~~
::

     l    -  pointer to layer
     flag -  TRUE if the update was complete. The damage list is disposed.
             FALSE it the update was partial. The damage list is kept.


Bugs
~~~~
::

   not tested



See also
~~~~~~~~

`BeginUpdate()`_ 

----------

FattenLayerInfo()
=================

Synopsis
~~~~~~~~
::

 LONG FattenLayerInfo(
          struct Layer_Info * li );


----------

InitLayers()
============

Synopsis
~~~~~~~~
::

 void InitLayers(
          struct Layer_Info * li );

Function
~~~~~~~~
::

     Initializes the supplied Layer_Info, so it's ready for use.
     Leaves the Layer_Info in an unlocked state.


Inputs
~~~~~~
::

     li -- pointer to Layer_Info structure


Notes
~~~~~
::

     This function is obsolete. Use NewLayerInfo() instead.



See also
~~~~~~~~

`NewLayerInfo()`_ 

----------

InstallClipRegion()
===================

Synopsis
~~~~~~~~
::

 struct Region * InstallClipRegion(
          struct Layer  * l,
          struct Region * region );

Function
~~~~~~~~
::

    Install a transparent Clip region in the layer. All subsequent
    graphics call to the rastport of the layer will be clipped to
    that region.
    None of the system functions will free the ClipRegion for you,
    so you will have to call InstallClipRegion(l, NULL) before
    closing a window or deleting a layer.


Inputs
~~~~~~
::

    l      - pointer to layer
    region - pointer to region to be clipped against.



----------

InstallLayerHook()
==================

Synopsis
~~~~~~~~
::

 struct Hook * InstallLayerHook(
          struct Layer * layer,
          struct Hook  * hook );

Function
~~~~~~~~
::

     Safely install a new backfill hook. Return the old hook.
     If hook is NULL, then the default backfill hook will be installed.


Inputs
~~~~~~
::

     layer - layer that will get the new backfill hook
     hook  - pointer to backfill hook to be installed



----------

InstallLayerInfoHook()
======================

Synopsis
~~~~~~~~
::

 struct Hook * InstallLayerInfoHook(
          struct Layer_Info * li,
          struct Hook       * hook );

Function
~~~~~~~~
::

     Install a backfill hook into the LayerInfo structure. This
     backfill hook will be called to clear the areas where there
     is no layer. It will be used for every layer.


Inputs
~~~~~~
::

     li - pointer to layer info


Result
~~~~~~
::

     If there was a backfill hook installed before it will be
     returned. LAYERS_BACKFILL will be returned if the default
     backfill hook was installed, LAYERS_NOBACKFILL if there
     was nothing to be called for clearing an area.


Notes
~~~~~
::

     The hook is not called immediately. It will be called for
     those areas that have to be cleared when layers move away
     from those areas.



----------

IsLayerHiddenBySibling()
========================

Synopsis
~~~~~~~~
::

 BOOL IsLayerHiddenBySibling(
          struct Layer * l,
          BOOL check_invisible );

Function
~~~~~~~~
::

    Checks whether this layer is hidden by any siblings
    that are in front of it. All these siblings must have
    the same priority as that layer.
    It can be specified whether invisible siblings are to be
    considered in the comparison.


Inputs
~~~~~~
::

    L               - pointer to layer
    check_invisible - whether invisible siblings are to be considered


Result
~~~~~~
::

    TRUE  - layer is hidden by one or more siblings
    FALSE - layer is fully visible



----------

IsLayerVisible()
================

Synopsis
~~~~~~~~
::

 LONG IsLayerVisible(
          struct Layer * l );

Function
~~~~~~~~
::

    Checks whether the layer is visible or not.


Inputs
~~~~~~
::

    L       - pointer to layer


Result
~~~~~~
::

    TRUE  - layer is visible
    FALSE - layer is invisible



----------

LockLayer()
===========

Synopsis
~~~~~~~~
::

 void LockLayer(
          LONG dummy,
          struct Layer * layer );

Function
~~~~~~~~
::

     Locks a layer for exclusive access by this task.
     A layer can be locked multiple times but has to be unlocked
     as many times as it has been locked so that other tasks
     can access it.


Inputs
~~~~~~
::

     dummy - unused.
     layer - pointer to layer to be locked



----------

LockLayerInfo()
===============

Synopsis
~~~~~~~~
::

 void LockLayerInfo(
          struct Layer_Info * li );


----------

LockLayers()
============

Synopsis
~~~~~~~~
::

 void LockLayers(
          struct Layer_Info * li );

Function
~~~~~~~~
::


     First locks the Layer_Info then all the layers that are
     found in the list of layers.


Inputs
~~~~~~
::

     li - pointer to a Layer_Info structure



----------

MoveLayer()
===========

Synopsis
~~~~~~~~
::

 LONG MoveLayer(
          LONG dummy,
          struct Layer * l,
          LONG dx,
          LONG dy );

Function
~~~~~~~~
::

     Move the layer to a specified position in the bitmap.
     Parts of simple layers that become visible are added to
     the damage list and a refresh is triggered.


Inputs
~~~~~~
::

     dummy - unused
     l     - pointer to layer to be moved
     dx    - delta to add to current x position
     dy    - delta to add to current y position


Result
~~~~~~
::

     result - TRUE everyting went alright
              FALSE an error occurred (out of memory)



----------

MoveLayerInFrontOf()
====================

Synopsis
~~~~~~~~
::

 LONG MoveLayerInFrontOf(
          struct Layer * layer_to_move,
          struct Layer * other_layer );

Function
~~~~~~~~
::

     Moves layer directly in front of another layer. Other layers
     might become visible. You cannot move a backdrop layer in front
     of a non-backdrop layer. You can also not move a layer in front
     of a layer with different relationship to the root layer. Boot
     have to be children of grandchildren or grandgrandchildren etc.
     of the root layer. The root layer is not visible to you and
     should never be accessed.
     If parts of a simple layer become visible these areas are added
     to the damage list.


Inputs
~~~~~~
::

     layer_to_move - pointer to layer that is to be moved
     other_layer   - pointer to other layer that will be behind the
                     layer_to_move.


Result
~~~~~~
::

     TRUE  - layer was moved
     FALSE - layer could not be moved. (probably out of memory)



----------

MoveSizeLayer()
===============

Synopsis
~~~~~~~~
::

 LONG MoveSizeLayer(
          struct Layer * l,
          LONG dx,
          LONG dy,
          LONG dw,
          LONG dh );

Function
~~~~~~~~
::

     Moves and resizes the layer in one step. Collects damage lists
     for those layers that become visible and are simple layers.
     If the layer to be moved is becoming larger the additional
     areas are added to a damagelist if it is a non-superbitmap
     layer. Refresh is also triggered for this layer.


Inputs
~~~~~~
::

     l     - pointer to layer to be moved
     dx    - delta to add to current x position
     dy    - delta to add to current y position
     dw    - delta to add to current width
     dw    - delta to add to current height


Result
~~~~~~
::

     result - TRUE if everything went right
              FALSE if an error occurred (out of memory)



----------

NewLayerInfo()
==============

Synopsis
~~~~~~~~
::

 struct Layer_Info * NewLayerInfo();


----------

ScaleLayer()
============

Synopsis
~~~~~~~~
::

 ULONG ScaleLayer(
          struct Layer   * l,
          struct TagItem * taglist );
 
 ULONG ScaleLayerTags(
          struct Layer   * l,
          TAG tag, ... );

Function
~~~~~~~~
::

     Scale the given layer. This function will use the
     current shape of the layer and resize it according to
     the given newwidth/newheight.


Inputs
~~~~~~
::

    L           - pointer to layer
    newwidth    - new width of the layer
    newheight   - new height of the layer


Result
~~~~~~
::

    TRUE if everything went alright, FALSE otherwise



----------

ScrollLayer()
=============

Synopsis
~~~~~~~~
::

 void ScrollLayer(
          LONG dummy,
          struct Layer * l,
          LONG dx,
          LONG dy );

Function
~~~~~~~~
::

     For superbitmapped layers this function work like this:.
     It updates the contents of the superbitmap with what is
     visible on the display, repositions the superbitmap
     and redraws the display.
     For non-superbitmapped layers, all subsequent (x,y) pairs
     are adjusted by the scroll(x,y) value in the layer. If
     ScrollLayer(-10,-3) was called and (0,0) is drawn it will
     finally end up at coordinates (10, 3) in the superbitmap.


Inputs
~~~~~~
::

     l  - pointer to layer
     dx - delta x to add to current x scroll value
     dy - delta y to add to current y scroll value


Bugs
~~~~
::

   not tested



----------

SizeLayer()
===========

Synopsis
~~~~~~~~
::

 LONG SizeLayer(
          LONG dummy,
          struct Layer * l,
          LONG dw,
          LONG dh );

Function
~~~~~~~~
::

     Resizes the given layer by adding dw to its width and dh
     to its height.
     If parts of simple layers become visible those parts are
     added to the damage list and a refresh is triggered for
     those layers.
     If the new layer is bigger than before the additional parts
     are added to a damage list if the layer is a non-super-
     bitmap layer. Refresh is also triggered for this layer.


Inputs
~~~~~~
::

     l    - pointer to layer to be resized
     dw   - delta to be added to the width
     dh   - delta to be added to the height


Result
~~~~~~
::

     TRUE  - layer could be resized
     FALSE - error occurred (out of memory)



----------

SortLayerCR()
=============

Synopsis
~~~~~~~~
::

 void SortLayerCR(
          struct Layer * layer,
          LONG dx,
          LONG dy );

Function
~~~~~~~~
::

     Sorts the list of ClipRects associated with the given layer.
     The direction of the sort is indicated by dx and dy.


Inputs
~~~~~~
::

     layer -- the layer with the ClipRect list to sort
     dx -- the left/right ordering
     dy -- the up/down ordering


Result
~~~~~~
::

     The layer->ClipRect pointer now points to a sorted list of ClipRects.



----------

SwapBitsRastPortClipRect()
==========================

Synopsis
~~~~~~~~
::

 void SwapBitsRastPortClipRect(
          struct RastPort * rp,
          struct ClipRect * cr );


----------

ThinLayerInfo()
===============

Synopsis
~~~~~~~~
::

 void ThinLayerInfo(
          struct Layer_Info * li );


----------

UnlockLayer()
=============

Synopsis
~~~~~~~~
::

 void UnlockLayer(
          struct Layer * layer );

Function
~~~~~~~~
::

     Unlocks a layer for access by other tasks. A layer has
     to be unlocked as many times as it has been locked until
     another task can access it.


Inputs
~~~~~~
::

     layer - pointer to layer to be unlocked



----------

UnlockLayerInfo()
=================

Synopsis
~~~~~~~~
::

 void UnlockLayerInfo(
          struct Layer_Info * li );


----------

UnlockLayers()
==============

Synopsis
~~~~~~~~
::

 void UnlockLayers(
          struct Layer_Info * li );

Function
~~~~~~~~
::

     First unlocks all layers found in the list, then
     unlocks the Layer_Info itself.


Inputs
~~~~~~
::

     li - pointer to a Layer_Info structure



----------

UpfrontLayer()
==============

Synopsis
~~~~~~~~
::

 LONG UpfrontLayer(
          LONG dummy,
          struct Layer * l );

Function
~~~~~~~~
::

     Brings a layer to the front. If this layer is a backdrop layer
     it is brought in front of all backdrop layers and behind the
     last non-backdrop layer. By clearing the BACKDROP flag of a layer
     a backdrop layer can be brought in front of all other layers.
     Parts of a simple layer that become visible are added to the
     damage list and the REFRESH flag is set.


Inputs
~~~~~~
::

     dummy - unused
     L     - pointer to layer


Result
~~~~~~
::

     TRUE  - layer was moved
     FALSE - layer could not be moved (probably out of memory)



See also
~~~~~~~~

`CreateUpfrontLayer()`_ `CreateUpfrontHookLayer()`_ `BehindLayer()`_ `CreateBehindLayer()`_ `CreateBehindHookLayer()`_ 

----------

WhichLayer()
============

Synopsis
~~~~~~~~
::

 struct Layer * WhichLayer(
          struct Layer_Info * li,
          LONG x,
          LONG y );

Function
~~~~~~~~
::

     Determines in which layer the point (x,y) is to be found.
     Starts with the frontmost layer.


Inputs
~~~~~~
::

     li - pointer to Layers_Info structure
     x  - x-coordinate
     y  - y-coordinate


Notes
~~~~~
::

     The function does not lock Layer_Info structure. It is
     the responsibility of the caller to issue the lock via
     LockLayerInfo()/UnlockLayerInfo()



