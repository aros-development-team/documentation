#ifndef CLIB_LAYERS_PROTOS_H
#define CLIB_LAYERS_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hyperlayers/layers.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <graphics/layers.h>
#include <graphics/gfx.h>
#include <graphics/clip.h>

__BEGIN_DECLS


#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, InitLayers,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 5, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP8(struct Layer *, CreateUpfrontLayer,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(struct BitMap *, bm, A1),
         AROS_LPA(LONG, x0, D0),
         AROS_LPA(LONG, y0, D1),
         AROS_LPA(LONG, x1, D2),
         AROS_LPA(LONG, y1, D3),
         AROS_LPA(LONG, flags, D4),
         AROS_LPA(struct BitMap *, bm2, A2),
         LIBBASETYPEPTR, LayersBase, 6, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP8(struct Layer *, CreateBehindLayer,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(struct BitMap *, bm, A1),
         AROS_LPA(LONG, x0, D0),
         AROS_LPA(LONG, y0, D1),
         AROS_LPA(LONG, x1, D2),
         AROS_LPA(LONG, y1, D3),
         AROS_LPA(LONG, flags, D4),
         AROS_LPA(struct BitMap *, bm2, A2),
         LIBBASETYPEPTR, LayersBase, 7, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(LONG, UpfrontLayer,
         AROS_LPA(LONG, dummy, A0),
         AROS_LPA(struct Layer *, l, A1),
         LIBBASETYPEPTR, LayersBase, 8, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(LONG, BehindLayer,
         AROS_LPA(LONG, dummy, A0),
         AROS_LPA(struct Layer *, l, A1),
         LIBBASETYPEPTR, LayersBase, 9, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP4(LONG, MoveLayer,
         AROS_LPA(LONG, dummy, A0),
         AROS_LPA(struct Layer *, l, A1),
         AROS_LPA(LONG, dx, D0),
         AROS_LPA(LONG, dy, D1),
         LIBBASETYPEPTR, LayersBase, 10, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP4(LONG, SizeLayer,
         AROS_LPA(LONG, dummy, A0),
         AROS_LPA(struct Layer *, l, A1),
         AROS_LPA(LONG, dw, D0),
         AROS_LPA(LONG, dh, D1),
         LIBBASETYPEPTR, LayersBase, 11, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP4(void, ScrollLayer,
         AROS_LPA(LONG, dummy, A0),
         AROS_LPA(struct Layer *, l, A1),
         AROS_LPA(LONG, dx, D0),
         AROS_LPA(LONG, dy, D1),
         LIBBASETYPEPTR, LayersBase, 12, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(LONG, BeginUpdate,
         AROS_LPA(struct Layer *, l, A0),
         LIBBASETYPEPTR, LayersBase, 13, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(void, EndUpdate,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(UWORD, flag, D0),
         LIBBASETYPEPTR, LayersBase, 14, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(LONG, DeleteLayer,
         AROS_LPA(LONG, dummy, A0),
         AROS_LPA(struct Layer *, l, A1),
         LIBBASETYPEPTR, LayersBase, 15, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(void, LockLayer,
         AROS_LPA(LONG, dummy, A0),
         AROS_LPA(struct Layer *, layer, A1),
         LIBBASETYPEPTR, LayersBase, 16, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, UnlockLayer,
         AROS_LPA(struct Layer *, layer, A0),
         LIBBASETYPEPTR, LayersBase, 17, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, LockLayers,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 18, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, UnlockLayers,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 19, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, LockLayerInfo,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 20, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(void, SwapBitsRastPortClipRect,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct ClipRect *, cr, A1),
         LIBBASETYPEPTR, LayersBase, 21, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP3(struct Layer *, WhichLayer,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(LONG, x, D0),
         AROS_LPA(LONG, y, D1),
         LIBBASETYPEPTR, LayersBase, 22, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, UnlockLayerInfo,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 23, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP0(struct Layer_Info *, NewLayerInfo,
         LIBBASETYPEPTR, LayersBase, 24, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, DisposeLayerInfo,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 25, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(LONG, FattenLayerInfo,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 26, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP1(void, ThinLayerInfo,
         AROS_LPA(struct Layer_Info *, li, A0),
         LIBBASETYPEPTR, LayersBase, 27, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(LONG, MoveLayerInFrontOf,
         AROS_LPA(struct Layer *, layer_to_move, A0),
         AROS_LPA(struct Layer *, other_layer, A1),
         LIBBASETYPEPTR, LayersBase, 28, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(struct Region *, InstallClipRegion,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(struct Region *, region, A1),
         LIBBASETYPEPTR, LayersBase, 29, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP5(LONG, MoveSizeLayer,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(LONG, dx, D0),
         AROS_LPA(LONG, dy, D1),
         AROS_LPA(LONG, dw, D2),
         AROS_LPA(LONG, dh, D3),
         LIBBASETYPEPTR, LayersBase, 30, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP9(struct Layer *, CreateUpfrontHookLayer,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(struct BitMap *, bm, A1),
         AROS_LPA(LONG, x0, D0),
         AROS_LPA(LONG, y0, D1),
         AROS_LPA(LONG, x1, D2),
         AROS_LPA(LONG, y1, D3),
         AROS_LPA(LONG, flags, D4),
         AROS_LPA(struct Hook *, hook, A3),
         AROS_LPA(struct BitMap *, bm2, A2),
         LIBBASETYPEPTR, LayersBase, 31, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP9(struct Layer *, CreateBehindHookLayer,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(struct BitMap *, bm, A1),
         AROS_LPA(LONG, x0, D0),
         AROS_LPA(LONG, y0, D1),
         AROS_LPA(LONG, x1, D2),
         AROS_LPA(LONG, y1, D3),
         AROS_LPA(LONG, flags, D4),
         AROS_LPA(struct Hook *, hook, A3),
         AROS_LPA(struct BitMap *, bm2, A2),
         LIBBASETYPEPTR, LayersBase, 32, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__)
AROS_LP2(struct Hook *, InstallLayerHook,
         AROS_LPA(struct Layer *, layer, A0),
         AROS_LPA(struct Hook *, hook, A1),
         LIBBASETYPEPTR, LayersBase, 33, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (0 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (39 <= __LAYERS_LIBAPI__)
AROS_LP2(struct Hook *, InstallLayerInfoHook,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(struct Hook *, hook, A1),
         LIBBASETYPEPTR, LayersBase, 34, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (39 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (39 <= __LAYERS_LIBAPI__)
AROS_LP3(void, SortLayerCR,
         AROS_LPA(struct Layer *, layer, A0),
         AROS_LPA(LONG, dx, D0),
         AROS_LPA(LONG, dy, D1),
         LIBBASETYPEPTR, LayersBase, 35, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (39 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (39 <= __LAYERS_LIBAPI__)
AROS_LP3(void, DoHookClipRects,
         AROS_LPA(struct Hook *, hook, A0),
         AROS_LPA(struct RastPort *, rport, A1),
         AROS_LPA(struct Rectangle *, rect, A2),
         LIBBASETYPEPTR, LayersBase, 36, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (39 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (45 <= __LAYERS_LIBAPI__)
AROS_LP3(struct Region *, ChangeLayerShape,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(struct Region *, newshape, A1),
         AROS_LPA(struct Hook *, callback, A2),
         LIBBASETYPEPTR, LayersBase, 37, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (45 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (45 <= __LAYERS_LIBAPI__)
AROS_LP2(ULONG, ScaleLayer,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, LayersBase, 38, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (45 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP8(struct Layer *, CreateUpfrontLayerTagList,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(struct BitMap *, bm, A1),
         AROS_LPA(LONG, x0, D0),
         AROS_LPA(LONG, y0, D1),
         AROS_LPA(LONG, x1, D2),
         AROS_LPA(LONG, y1, D3),
         AROS_LPA(LONG, flags, D4),
         AROS_LPA(struct TagItem *, tagList, A2),
         LIBBASETYPEPTR, LayersBase, 39, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP8(struct Layer *, CreateBehindLayerTagList,
         AROS_LPA(struct Layer_Info *, li, A0),
         AROS_LPA(struct BitMap *, bm, A1),
         AROS_LPA(LONG, x0, D0),
         AROS_LPA(LONG, y0, D1),
         AROS_LPA(LONG, x1, D2),
         AROS_LPA(LONG, y1, D3),
         AROS_LPA(LONG, flags, D4),
         AROS_LPA(struct TagItem *, tagList, A2),
         LIBBASETYPEPTR, LayersBase, 40, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP2(LONG, ChangeLayerVisibility,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(int, visible, D0),
         LIBBASETYPEPTR, LayersBase, 41, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP1(LONG, IsLayerVisible,
         AROS_LPA(struct Layer *, l, A0),
         LIBBASETYPEPTR, LayersBase, 43, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP2(BOOL, IsLayerHiddenBySibling,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(BOOL, check_invisible, D0),
         LIBBASETYPEPTR, LayersBase, 44, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP3(void, CollectPixelsLayer,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(struct Region *, r, A1),
         AROS_LPA(struct Hook *, callback, A2),
         LIBBASETYPEPTR, LayersBase, 45, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP3(BOOL, IsLayerHitAt,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(LONG, x, D0),
         AROS_LPA(LONG, y, D1),
         LIBBASETYPEPTR, LayersBase, 52, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

#if !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__)
AROS_LP2(BOOL, ChangeLayerInputShape,
         AROS_LPA(struct Layer *, l, A0),
         AROS_LPA(struct Region *, region, A1),
         LIBBASETYPEPTR, LayersBase, 53, Layers
);

#endif /* !defined(__LAYERS_LIBAPI__) || (50 <= __LAYERS_LIBAPI__) */

__END_DECLS

#endif /* CLIB_LAYERS_PROTOS_H */
