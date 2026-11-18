#ifndef CLIB_GRAPHICS_PROTOS_H
#define CLIB_GRAPHICS_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/graphics/graphics.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <graphics/gfx.h>
#include <graphics/displayinfo.h>
#include <graphics/gels.h>
#include <graphics/rastport.h>
#include <graphics/view.h>
#include <graphics/copper.h>
#include <graphics/clip.h>
#include <graphics/regions.h>
#include <graphics/sprite.h>
#include <graphics/text.h>
#include <graphics/scale.h>
#include <hardware/blit.h>

#include <utility/tagitem.h>

/* <hidd/gfx.h>: surface list of the private LayerSurfacesChanged() */
struct HIDD_CompositeRequest;

__BEGIN_DECLS

ULONG BestModeID(Tag, ...);

__END_DECLS


__BEGIN_DECLS


#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP11(LONG, BltBitMap,
         AROS_LPA(struct BitMap *, srcBitMap, A0),
         AROS_LPA(WORD, xSrc, D0),
         AROS_LPA(WORD, ySrc, D1),
         AROS_LPA(struct BitMap *, destBitMap, A1),
         AROS_LPA(WORD, xDest, D2),
         AROS_LPA(WORD, yDest, D3),
         AROS_LPA(WORD, xSize, D4),
         AROS_LPA(WORD, ySize, D5),
         AROS_LPA(UBYTE, minterm, D6),
         AROS_LPA(UBYTE, mask, D7),
         AROS_LPA(PLANEPTR, tempA, A2),
         LIBBASETYPEPTR, GfxBase, 5, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP8(void, BltTemplate,
         AROS_LPA(PLANEPTR, source, A0),
         AROS_LPA(WORD, xSrc, D0),
         AROS_LPA(WORD, srcMod, D1),
         AROS_LPA(struct RastPort *, destRP, A1),
         AROS_LPA(WORD, xDest, D2),
         AROS_LPA(WORD, yDest, D3),
         AROS_LPA(WORD, xSize, D4),
         AROS_LPA(WORD, ySize, D5),
         LIBBASETYPEPTR, GfxBase, 6, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, ClearEOL,
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 7, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, ClearScreen,
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 8, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(WORD, TextLength,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(CONST_STRPTR, string, A0),
         AROS_LPA(WORD, count, D0),
         LIBBASETYPEPTR, GfxBase, 9, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, Text,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(CONST_STRPTR, string, A0),
         AROS_LPA(WORD, count, D0),
         LIBBASETYPEPTR, GfxBase, 10, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetFont,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(struct TextFont *, textFont, A0),
         LIBBASETYPEPTR, GfxBase, 11, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(struct TextFont *, OpenFont,
         AROS_LPA(const struct TextAttr *, textAttr, A0),
         LIBBASETYPEPTR, GfxBase, 12, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, CloseFont,
         AROS_LPA(struct TextFont *, textFont, A1),
         LIBBASETYPEPTR, GfxBase, 13, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, AskSoftStyle,
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 14, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(ULONG, SetSoftStyle,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(ULONG, style, D0),
         AROS_LPA(ULONG, enable, D1),
         LIBBASETYPEPTR, GfxBase, 15, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, AddBob,
         AROS_LPA(struct Bob *, bob, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 16, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, AddVSprite,
         AROS_LPA(struct VSprite *, vs, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 17, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, DoCollision,
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 18, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, DrawGList,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(struct ViewPort *, vp, A0),
         LIBBASETYPEPTR, GfxBase, 19, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, InitGels,
         AROS_LPA(struct VSprite *, head, A0),
         AROS_LPA(struct VSprite *, tail, A1),
         AROS_LPA(struct GelsInfo *, GInfo, A2),
         LIBBASETYPEPTR, GfxBase, 20, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, InitMasks,
         AROS_LPA(struct VSprite *, vs, A0),
         LIBBASETYPEPTR, GfxBase, 21, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, RemIBob,
         AROS_LPA(struct Bob *, bob, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(struct ViewPort *, vp, A2),
         LIBBASETYPEPTR, GfxBase, 22, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, RemVSprite,
         AROS_LPA(struct VSprite *, vs, A0),
         LIBBASETYPEPTR, GfxBase, 23, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, SetCollision,
         AROS_LPA(ULONG, num, D0),
         AROS_LPA(VOID_FUNC, routine, A0),
         AROS_LPA(struct GelsInfo *, GInfo, A1),
         LIBBASETYPEPTR, GfxBase, 24, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, SortGList,
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 25, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, AddAnimOb,
         AROS_LPA(struct AnimOb *, anOb, A0),
         AROS_LPA(struct AnimOb **, anKey, A1),
         AROS_LPA(struct RastPort *, rp, A2),
         LIBBASETYPEPTR, GfxBase, 26, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, Animate,
         AROS_LPA(struct AnimOb **, anKey, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 27, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(BOOL, GetGBuffers,
         AROS_LPA(struct AnimOb *, anOb, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(BOOL, db, D0),
         LIBBASETYPEPTR, GfxBase, 28, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, InitGMasks,
         AROS_LPA(struct AnimOb *, anOb, A0),
         LIBBASETYPEPTR, GfxBase, 29, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, DrawEllipse,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, xCenter, D0),
         AROS_LPA(WORD, yCenter, D1),
         AROS_LPA(WORD, a, D2),
         AROS_LPA(WORD, b, D3),
         LIBBASETYPEPTR, GfxBase, 30, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP5(ULONG, AreaEllipse,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, cx, D0),
         AROS_LPA(WORD, cy, D1),
         AROS_LPA(WORD, a, D2),
         AROS_LPA(WORD, b, D3),
         LIBBASETYPEPTR, GfxBase, 31, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, LoadRGB4,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(UWORD *, colors, A1),
         AROS_LPA(WORD, count, D0),
         LIBBASETYPEPTR, GfxBase, 32, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, InitRastPort,
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 33, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, InitVPort,
         AROS_LPA(struct ViewPort *, vp, A0),
         LIBBASETYPEPTR, GfxBase, 34, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, MrgCop,
         AROS_LPA(struct View *, view, A1),
         LIBBASETYPEPTR, GfxBase, 35, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(ULONG, MakeVPort,
         AROS_LPA(struct View *, view, A0),
         AROS_LPA(struct ViewPort *, viewport, A1),
         LIBBASETYPEPTR, GfxBase, 36, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, LoadView,
         AROS_LPA(struct View *, view, A1),
         LIBBASETYPEPTR, GfxBase, 37, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP0(void, WaitBlit,
         LIBBASETYPEPTR, GfxBase, 38, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetRast,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(UBYTE, pen, D0),
         LIBBASETYPEPTR, GfxBase, 39, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, Move,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 40, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, Draw,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 41, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(ULONG, AreaMove,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 42, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(ULONG, AreaDraw,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 43, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(LONG, AreaEnd,
         AROS_LPA(struct RastPort *, rp, A1),
         LIBBASETYPEPTR, GfxBase, 44, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP0(void, WaitTOF,
         LIBBASETYPEPTR, GfxBase, 45, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, QBlit,
         AROS_LPA(struct bltnode *, bn, A1),
         LIBBASETYPEPTR, GfxBase, 46, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, InitArea,
         AROS_LPA(struct AreaInfo *, areainfo, A0),
         AROS_LPA(void *, buffer, A1),
         AROS_LPA(WORD, maxvectors, D0),
         LIBBASETYPEPTR, GfxBase, 47, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, SetRGB4,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(WORD, n, D0),
         AROS_LPA(UBYTE, r, D1),
         AROS_LPA(UBYTE, g, D2),
         AROS_LPA(UBYTE, b, D3),
         LIBBASETYPEPTR, GfxBase, 48, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, QBSBlit,
         AROS_LPA(struct bltnode *, bn, A1),
         LIBBASETYPEPTR, GfxBase, 49, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, BltClear,
         AROS_LPA(void *, memBlock, A1),
         AROS_LPA(ULONG, bytecount, D0),
         AROS_LPA(ULONG, flags, D1),
         LIBBASETYPEPTR, GfxBase, 50, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, RectFill,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, xMin, D0),
         AROS_LPA(WORD, yMin, D1),
         AROS_LPA(WORD, xMax, D2),
         AROS_LPA(WORD, yMax, D3),
         LIBBASETYPEPTR, GfxBase, 51, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP7(void, BltPattern,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(PLANEPTR, mask, A0),
         AROS_LPA(WORD, xMin, D0),
         AROS_LPA(WORD, yMin, D1),
         AROS_LPA(WORD, xMax, D2),
         AROS_LPA(WORD, yMax, D3),
         AROS_LPA(WORD, byteCnt, D4),
         LIBBASETYPEPTR, GfxBase, 52, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(LONG, ReadPixel,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 53, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(LONG, WritePixel,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 54, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP4(BOOL, Flood,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(ULONG, mode, D2),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 55, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, PolyDraw,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, count, D0),
         AROS_LPA(WORD *, polyTable, A0),
         LIBBASETYPEPTR, GfxBase, 56, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetAPen,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(UBYTE, pen, D0),
         LIBBASETYPEPTR, GfxBase, 57, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetBPen,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(UBYTE, pen, D0),
         LIBBASETYPEPTR, GfxBase, 58, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetDrMd,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(UBYTE, drawMode, D0),
         LIBBASETYPEPTR, GfxBase, 59, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, InitView,
         AROS_LPA(struct View *, view, A1),
         LIBBASETYPEPTR, GfxBase, 60, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, CBump,
         AROS_LPA(struct UCopList *, ucl, A1),
         LIBBASETYPEPTR, GfxBase, 61, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, CMove,
         AROS_LPA(struct UCopList *, ucl, A1),
         AROS_LPA(void *, reg, D0),
         AROS_LPA(WORD, value, D1),
         LIBBASETYPEPTR, GfxBase, 62, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, CWait,
         AROS_LPA(struct UCopList *, ucl, A1),
         AROS_LPA(WORD, v, D0),
         AROS_LPA(WORD, h, D1),
         LIBBASETYPEPTR, GfxBase, 63, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP0(LONG, VBeamPos,
         LIBBASETYPEPTR, GfxBase, 64, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP4(void, InitBitMap,
         AROS_LPA(struct BitMap *, bm, A0),
         AROS_LPA(BYTE, depth, D0),
         AROS_LPA(UWORD, width, D1),
         AROS_LPA(UWORD, height, D2),
         LIBBASETYPEPTR, GfxBase, 65, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP7(void, ScrollRaster,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, dx, D0),
         AROS_LPA(WORD, dy, D1),
         AROS_LPA(WORD, xMin, D2),
         AROS_LPA(WORD, yMin, D3),
         AROS_LPA(WORD, xMax, D4),
         AROS_LPA(WORD, yMax, D5),
         LIBBASETYPEPTR, GfxBase, 66, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, WaitBOVP,
         AROS_LPA(struct ViewPort *, vp, A0),
         LIBBASETYPEPTR, GfxBase, 67, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(WORD, GetSprite,
         AROS_LPA(struct SimpleSprite *, sprite, A0),
         AROS_LPA(WORD, pick, D0),
         LIBBASETYPEPTR, GfxBase, 68, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeSprite,
         AROS_LPA(WORD, pick, D0),
         LIBBASETYPEPTR, GfxBase, 69, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, ChangeSprite,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(struct SimpleSprite *, s, A1),
         AROS_LPA(void *, newdata, A2),
         LIBBASETYPEPTR, GfxBase, 70, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP4(void, MoveSprite,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(struct SimpleSprite *, sprite, A1),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 71, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, LockLayerRom,
         AROS_LPA(struct Layer *, l, A5),
         LIBBASETYPEPTR, GfxBase, 72, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, UnlockLayerRom,
         AROS_LPA(struct Layer *, l, A5),
         LIBBASETYPEPTR, GfxBase, 73, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, SyncSBitMap,
         AROS_LPA(struct Layer *, l, A0),
         LIBBASETYPEPTR, GfxBase, 74, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, CopySBitMap,
         AROS_LPA(struct Layer *, l, A0),
         LIBBASETYPEPTR, GfxBase, 75, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP0(void, OwnBlitter,
         LIBBASETYPEPTR, GfxBase, 76, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP0(void, DisownBlitter,
         LIBBASETYPEPTR, GfxBase, 77, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(struct TmpRas *, InitTmpRas,
         AROS_LPA(struct TmpRas *, tmpras, A0),
         AROS_LPA(void *, buffer, A1),
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, GfxBase, 78, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, AskFont,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(struct TextAttr *, textAttr, A0),
         LIBBASETYPEPTR, GfxBase, 79, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, AddFont,
         AROS_LPA(struct TextFont *, textFont, A1),
         LIBBASETYPEPTR, GfxBase, 80, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, RemFont,
         AROS_LPA(struct TextFont *, textFont, A1),
         LIBBASETYPEPTR, GfxBase, 81, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(PLANEPTR, AllocRaster,
         AROS_LPA(ULONG, width, D0),
         AROS_LPA(ULONG, height, D1),
         LIBBASETYPEPTR, GfxBase, 82, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, FreeRaster,
         AROS_LPA(PLANEPTR, p, A0),
         AROS_LPA(UWORD, width, D0),
         AROS_LPA(UWORD, height, D1),
         LIBBASETYPEPTR, GfxBase, 83, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, AndRectRegion,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 84, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, OrRectRegion,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 85, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP0(struct Region *, NewRegion,
         LIBBASETYPEPTR, GfxBase, 86, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, ClearRectRegion,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 87, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, ClearRegion,
         AROS_LPA(struct Region *, region, A0),
         LIBBASETYPEPTR, GfxBase, 88, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, DisposeRegion,
         AROS_LPA(struct Region *, region, A0),
         LIBBASETYPEPTR, GfxBase, 89, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeVPortCopLists,
         AROS_LPA(struct ViewPort *, vp, A0),
         LIBBASETYPEPTR, GfxBase, 90, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeCopList,
         AROS_LPA(struct CopList *, coplist, A0),
         LIBBASETYPEPTR, GfxBase, 91, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP9(void, ClipBlit,
         AROS_LPA(struct RastPort *, srcRP, A0),
         AROS_LPA(WORD, xSrc, D0),
         AROS_LPA(WORD, ySrc, D1),
         AROS_LPA(struct RastPort *, destRP, A1),
         AROS_LPA(WORD, xDest, D2),
         AROS_LPA(WORD, yDest, D3),
         AROS_LPA(WORD, xSize, D4),
         AROS_LPA(WORD, ySize, D5),
         AROS_LPA(UBYTE, minterm, D6),
         LIBBASETYPEPTR, GfxBase, 92, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, XorRectRegion,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 93, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeCprList,
         AROS_LPA(struct cprlist *, cprList, A0),
         LIBBASETYPEPTR, GfxBase, 94, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(struct ColorMap *, GetColorMap,
         AROS_LPA(ULONG, entries, D0),
         LIBBASETYPEPTR, GfxBase, 95, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeColorMap,
         AROS_LPA(struct ColorMap *, colormap, A0),
         LIBBASETYPEPTR, GfxBase, 96, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(ULONG, GetRGB4,
         AROS_LPA(struct ColorMap *, colormap, A0),
         AROS_LPA(LONG, entry, D0),
         LIBBASETYPEPTR, GfxBase, 97, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, ScrollVPort,
         AROS_LPA(struct ViewPort *, vp, A0),
         LIBBASETYPEPTR, GfxBase, 98, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct CopList *, UCopperListInit,
         AROS_LPA(struct UCopList *, ucl, A0),
         AROS_LPA(WORD, n, D0),
         LIBBASETYPEPTR, GfxBase, 99, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, FreeGBuffers,
         AROS_LPA(struct AnimOb *, anOb, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(BOOL, db, D0),
         LIBBASETYPEPTR, GfxBase, 100, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP9(void, BltBitMapRastPort,
         AROS_LPA(struct BitMap *, srcBitMap, A0),
         AROS_LPA(WORD, xSrc, D0),
         AROS_LPA(WORD, ySrc, D1),
         AROS_LPA(struct RastPort *, destRP, A1),
         AROS_LPA(WORD, xDest, D2),
         AROS_LPA(WORD, yDest, D3),
         AROS_LPA(WORD, xSize, D4),
         AROS_LPA(WORD, ySize, D5),
         AROS_LPA(UBYTE, minterm, D6),
         LIBBASETYPEPTR, GfxBase, 101, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, OrRegionRegion,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 102, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, XorRegionRegion,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 103, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, AndRegionRegion,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 104, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, SetRGB4CM,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(WORD, n, D0),
         AROS_LPA(UBYTE, r, D1),
         AROS_LPA(UBYTE, g, D2),
         AROS_LPA(UBYTE, b, D3),
         LIBBASETYPEPTR, GfxBase, 105, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP10(void, BltMaskBitMapRastPort,
         AROS_LPA(struct BitMap *, srcBitMap, A0),
         AROS_LPA(WORD, xSrc, D0),
         AROS_LPA(WORD, ySrc, D1),
         AROS_LPA(struct RastPort *, destRP, A1),
         AROS_LPA(WORD, xDest, D2),
         AROS_LPA(WORD, yDest, D3),
         AROS_LPA(WORD, xSize, D4),
         AROS_LPA(WORD, ySize, D5),
         AROS_LPA(UBYTE, minterm, D6),
         AROS_LPA(PLANEPTR, bltMask, A2),
         LIBBASETYPEPTR, GfxBase, 106, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP3(LONG, AddDisplayDriverA,
         AROS_LPA(APTR, gfxhidd, A0),
         AROS_LPA(const struct TagItem *, attrs, A1),
         AROS_LPA(const struct TagItem *, tags, A2),
         LIBBASETYPEPTR, GfxBase, 107, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetDisplayDriverCallback,
         AROS_LPA(APTR, callback, A0),
         AROS_LPA(APTR, userdata, A1),
         LIBBASETYPEPTR, GfxBase, 108, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__)
AROS_LP1(BOOL, AttemptLockLayerRom,
         AROS_LPA(struct Layer *, l, A5),
         LIBBASETYPEPTR, GfxBase, 109, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (0 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(struct ExtendedNode *, GfxNew,
         AROS_LPA(ULONG, node_type, D0),
         LIBBASETYPEPTR, GfxBase, 110, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, GfxFree,
         AROS_LPA(struct ExtendedNode *, node, A0),
         LIBBASETYPEPTR, GfxBase, 111, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, GfxAssociate,
         AROS_LPA(void *, pointer, A0),
         AROS_LPA(struct ExtendedNode *, node, A1),
         LIBBASETYPEPTR, GfxBase, 112, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, BitMapScale,
         AROS_LPA(struct BitScaleArgs *, bitScaleArgs, A0),
         LIBBASETYPEPTR, GfxBase, 113, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP3(UWORD, ScalerDiv,
         AROS_LPA(UWORD, factor, D0),
         AROS_LPA(UWORD, numerator, D1),
         AROS_LPA(UWORD, denominator, D2),
         LIBBASETYPEPTR, GfxBase, 114, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP4(void, TextExtent,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(CONST_STRPTR, string, A0),
         AROS_LPA(WORD, count, D0),
         AROS_LPA(struct TextExtent *, textExtent, A2),
         LIBBASETYPEPTR, GfxBase, 115, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP8(ULONG, TextFit,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(CONST_STRPTR, string, A0),
         AROS_LPA(UWORD, strLen, D0),
         AROS_LPA(struct TextExtent *, textExtent, A2),
         AROS_LPA(struct TextExtent *, constrainingExtent, A3),
         AROS_LPA(WORD, strDirection, D1),
         AROS_LPA(UWORD, constrainingBitWidth, D2),
         AROS_LPA(UWORD, constrainingBitHeight, D3),
         LIBBASETYPEPTR, GfxBase, 116, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(struct ExtendedNode *, GfxLookUp,
         AROS_LPA(void *, pointer, A0),
         LIBBASETYPEPTR, GfxBase, 117, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP2(ULONG, VideoControl,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, GfxBase, 118, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct MonitorSpec *, OpenMonitor,
         AROS_LPA(STRPTR, monitor_name, A1),
         AROS_LPA(ULONG, display_id, D0),
         LIBBASETYPEPTR, GfxBase, 119, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(LONG, CloseMonitor,
         AROS_LPA(struct MonitorSpec *, monitor_spec, A0),
         LIBBASETYPEPTR, GfxBase, 120, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(DisplayInfoHandle, FindDisplayInfo,
         AROS_LPA(ULONG, ID, D0),
         LIBBASETYPEPTR, GfxBase, 121, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, NextDisplayInfo,
         AROS_LPA(ULONG, last_ID, D0),
         LIBBASETYPEPTR, GfxBase, 122, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP5(ULONG, GetDisplayInfoData,
         AROS_LPA(DisplayInfoHandle, handle, A0),
         AROS_LPA(UBYTE *, buf, A1),
         AROS_LPA(ULONG, size, D0),
         AROS_LPA(ULONG, tagID, D1),
         AROS_LPA(ULONG, ID, D2),
         LIBBASETYPEPTR, GfxBase, 126, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, FontExtent,
         AROS_LPA(struct TextFont *, font, A0),
         AROS_LPA(struct TextExtent *, fontExtent, A1),
         LIBBASETYPEPTR, GfxBase, 127, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP6(LONG, ReadPixelLine8,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(WORD, xstart, D0),
         AROS_LPA(WORD, ystart, D1),
         AROS_LPA(WORD, width, D2),
         AROS_LPA(UBYTE *, array, A2),
         AROS_LPA(struct RastPort *, tempRP, A1),
         LIBBASETYPEPTR, GfxBase, 128, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP6(LONG, WritePixelLine8,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(WORD, xstart, D0),
         AROS_LPA(WORD, ystart, D1),
         AROS_LPA(WORD, width, D2),
         AROS_LPA(UBYTE *, array, A2),
         AROS_LPA(struct RastPort *, tempRP, A1),
         LIBBASETYPEPTR, GfxBase, 129, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP7(WORD, ReadPixelArray8,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(WORD, xstart, D0),
         AROS_LPA(WORD, ystart, D1),
         AROS_LPA(WORD, xstop, D2),
         AROS_LPA(WORD, ystop, D3),
         AROS_LPA(UBYTE *, array, A2),
         AROS_LPA(struct RastPort *, temprp, A1),
         LIBBASETYPEPTR, GfxBase, 130, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP7(LONG, WritePixelArray8,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(WORD, xstart, D0),
         AROS_LPA(WORD, ystart, D1),
         AROS_LPA(WORD, xstop, D2),
         AROS_LPA(WORD, ystop, D3),
         AROS_LPA(UBYTE *, array, A2),
         AROS_LPA(struct RastPort *, temprp, A1),
         LIBBASETYPEPTR, GfxBase, 131, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, GetVPModeID,
         AROS_LPA(struct ViewPort *, vp, A0),
         LIBBASETYPEPTR, GfxBase, 132, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, ModeNotAvailable,
         AROS_LPA(ULONG, modeID, D0),
         LIBBASETYPEPTR, GfxBase, 133, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP3(WORD, WeighTAMatch,
         AROS_LPA(const struct TextAttr *, reqTextAttr, A0),
         AROS_LPA(const struct TextAttr *, targetTextAttr, A1),
         AROS_LPA(struct TagItem *, targetTags, A2),
         LIBBASETYPEPTR, GfxBase, 134, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, EraseRect,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, xMin, D0),
         AROS_LPA(WORD, yMin, D1),
         AROS_LPA(WORD, xMax, D2),
         AROS_LPA(WORD, yMax, D3),
         LIBBASETYPEPTR, GfxBase, 135, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP2(ULONG, ExtendFont,
         AROS_LPA(struct TextFont *, font, A0),
         AROS_LPA(struct TagItem *, fontTags, A1),
         LIBBASETYPEPTR, GfxBase, 136, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, StripFont,
         AROS_LPA(struct TextFont *, font, A0),
         LIBBASETYPEPTR, GfxBase, 137, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (36 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(UWORD, CalcIVG,
         AROS_LPA(struct View *, View, A0),
         AROS_LPA(struct ViewPort *, ViewPort, A1),
         LIBBASETYPEPTR, GfxBase, 138, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(LONG, AttachPalExtra,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(struct ViewPort *, vp, A1),
         LIBBASETYPEPTR, GfxBase, 139, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP5(LONG, ObtainBestPenA,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(ULONG, r, D1),
         AROS_LPA(ULONG, g, D2),
         AROS_LPA(ULONG, b, D3),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, GfxBase, 140, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, SetRGB32,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(ULONG, n, D0),
         AROS_LPA(ULONG, r, D1),
         AROS_LPA(ULONG, g, D2),
         AROS_LPA(ULONG, b, D3),
         LIBBASETYPEPTR, GfxBase, 142, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, GetAPen,
         AROS_LPA(struct RastPort *, rp, A0),
         LIBBASETYPEPTR, GfxBase, 143, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, GetBPen,
         AROS_LPA(struct RastPort *, rp, A0),
         LIBBASETYPEPTR, GfxBase, 144, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, GetDrMd,
         AROS_LPA(struct RastPort *, rp, A0),
         LIBBASETYPEPTR, GfxBase, 145, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, GetOutlinePen,
         AROS_LPA(struct RastPort *, rp, A0),
         LIBBASETYPEPTR, GfxBase, 146, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, LoadRGB32,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(const ULONG *, table, A1),
         LIBBASETYPEPTR, GfxBase, 147, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, SetChipRev,
         AROS_LPA(ULONG, ChipRev, D0),
         LIBBASETYPEPTR, GfxBase, 148, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP4(void, SetABPenDrMd,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(ULONG, apen, D0),
         AROS_LPA(ULONG, bpen, D1),
         AROS_LPA(ULONG, drawMode, D2),
         LIBBASETYPEPTR, GfxBase, 149, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP4(void, GetRGB32,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(ULONG, firstcolor, D0),
         AROS_LPA(ULONG, ncolors, D1),
         AROS_LPA(ULONG *, table, A1),
         LIBBASETYPEPTR, GfxBase, 150, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP5(struct BitMap *, AllocBitMap,
         AROS_LPA(ULONG, sizex, D0),
         AROS_LPA(ULONG, sizey, D1),
         AROS_LPA(ULONG, depth, D2),
         AROS_LPA(ULONG, flags, D3),
         AROS_LPA(struct BitMap *, friend_bitmap, A0),
         LIBBASETYPEPTR, GfxBase, 153, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeBitMap,
         AROS_LPA(struct BitMap *, bm, A0),
         LIBBASETYPEPTR, GfxBase, 154, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(LONG, GetExtSpriteA,
         AROS_LPA(struct ExtSprite *, sprite, A2),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, GfxBase, 155, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP3(ULONG, CoerceMode,
         AROS_LPA(struct ViewPort *, RealViewPort, A0),
         AROS_LPA(ULONG, MonitorID, D0),
         AROS_LPA(ULONG, Flags, D1),
         LIBBASETYPEPTR, GfxBase, 156, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP3(void, ChangeVPBitMap,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(struct BitMap *, bm, A1),
         AROS_LPA(struct DBufInfo *, db, A2),
         LIBBASETYPEPTR, GfxBase, 157, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, ReleasePen,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(ULONG, n, D0),
         LIBBASETYPEPTR, GfxBase, 158, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP6(LONG, ObtainPen,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(ULONG, n, D0),
         AROS_LPA(ULONG, r, D1),
         AROS_LPA(ULONG, g, D2),
         AROS_LPA(ULONG, b, D3),
         AROS_LPA(ULONG, flags, D4),
         LIBBASETYPEPTR, GfxBase, 159, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(IPTR, GetBitMapAttr,
         AROS_LPA(struct BitMap *, bitmap, A0),
         AROS_LPA(ULONG, attribute, D1),
         LIBBASETYPEPTR, GfxBase, 160, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(struct DBufInfo *, AllocDBufInfo,
         AROS_LPA(struct ViewPort *, vp, A0),
         LIBBASETYPEPTR, GfxBase, 161, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeDBufInfo,
         AROS_LPA(struct DBufInfo *, db, A1),
         LIBBASETYPEPTR, GfxBase, 162, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(ULONG, SetOutlinePen,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(ULONG, pen, D0),
         LIBBASETYPEPTR, GfxBase, 163, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(ULONG, SetWriteMask,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(ULONG, mask, D0),
         LIBBASETYPEPTR, GfxBase, 164, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetMaxPen,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(ULONG, maxpen, D0),
         LIBBASETYPEPTR, GfxBase, 165, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, SetRGB32CM,
         AROS_LPA(struct ColorMap *, cm, A0),
         AROS_LPA(ULONG, n, D0),
         AROS_LPA(ULONG, r, D1),
         AROS_LPA(ULONG, g, D2),
         AROS_LPA(ULONG, b, D3),
         LIBBASETYPEPTR, GfxBase, 166, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP7(void, ScrollRasterBF,
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(WORD, dx, D0),
         AROS_LPA(WORD, dy, D1),
         AROS_LPA(WORD, xMin, D2),
         AROS_LPA(WORD, yMin, D3),
         AROS_LPA(WORD, xMax, D4),
         AROS_LPA(WORD, yMax, D5),
         LIBBASETYPEPTR, GfxBase, 167, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP5(ULONG, FindColor,
         AROS_LPA(struct ColorMap *, cm, A3),
         AROS_LPA(ULONG, r, D1),
         AROS_LPA(ULONG, g, D2),
         AROS_LPA(ULONG, b, D3),
         AROS_LPA(LONG, maxpen, D4),
         LIBBASETYPEPTR, GfxBase, 168, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct ExtSprite *, AllocSpriteDataA,
         AROS_LPA(struct BitMap *, bitmap, A2),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, GfxBase, 170, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP4(LONG, ChangeExtSpriteA,
         AROS_LPA(struct ViewPort *, vp, A0),
         AROS_LPA(struct ExtSprite *, oldsprite, A1),
         AROS_LPA(struct ExtSprite *, newsprite, A2),
         AROS_LPA(struct TagItem *, tags, A3),
         LIBBASETYPEPTR, GfxBase, 171, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(void, FreeSpriteData,
         AROS_LPA(struct ExtSprite *, extsp, A2),
         LIBBASETYPEPTR, GfxBase, 172, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, SetRPAttrsA,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, GfxBase, 173, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, GetRPAttrsA,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, GfxBase, 174, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__)
AROS_LP1(ULONG, BestModeIDA,
         AROS_LPA(struct TagItem *, TagItems, A0),
         LIBBASETYPEPTR, GfxBase, 175, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (39 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP7(void, WriteChunkyPixels,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(LONG, xstart, D0),
         AROS_LPA(LONG, ystart, D1),
         AROS_LPA(LONG, xstop, D2),
         AROS_LPA(LONG, ystop, D3),
         AROS_LPA(UBYTE *, array, A2),
         AROS_LPA(LONG, bytesperrow, D4),
         LIBBASETYPEPTR, GfxBase, 176, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, SetRegion,
         AROS_LPA(struct Region *, src, A0),
         AROS_LPA(struct Region *, dest, A1),
         LIBBASETYPEPTR, GfxBase, 181, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, ClearRegionRegion,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 182, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, AreRegionsEqual,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 183, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP3(BOOL, IsPointInRegion,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         LIBBASETYPEPTR, GfxBase, 184, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP4(BOOL, ScrollRegion,
         AROS_LPA(struct Region *, region, A0),
         AROS_LPA(struct Rectangle *, rect, A1),
         AROS_LPA(WORD, dx, D0),
         AROS_LPA(WORD, dy, D1),
         LIBBASETYPEPTR, GfxBase, 185, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, AndRectRegionND,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 186, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, AndRegionRegionND,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 187, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, OrRectRegionND,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 188, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, OrRegionRegionND,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 189, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, XorRectRegionND,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 190, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, XorRegionRegionND,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 191, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, ClearRectRegionND,
         AROS_LPA(struct Region *, Reg, A0),
         AROS_LPA(struct Rectangle *, Rect, A1),
         LIBBASETYPEPTR, GfxBase, 192, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(struct Region *, ClearRegionRegionND,
         AROS_LPA(struct Region *, R1, A0),
         AROS_LPA(struct Region *, R2, A1),
         LIBBASETYPEPTR, GfxBase, 193, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP9(LONG, WritePixels8,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(UBYTE *, array, A1),
         AROS_LPA(ULONG, modulo, D0),
         AROS_LPA(WORD, xstart, D1),
         AROS_LPA(WORD, ystart, D2),
         AROS_LPA(WORD, xstop, D3),
         AROS_LPA(WORD, ystop, D4),
         AROS_LPA(APTR, pixlut, A2),
         AROS_LPA(BOOL, do_update, D5),
         LIBBASETYPEPTR, GfxBase, 197, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP8(LONG, FillRectPenDrMd,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(WORD, x1, D0),
         AROS_LPA(WORD, y1, D1),
         AROS_LPA(WORD, x2, D2),
         AROS_LPA(WORD, y2, D3),
         AROS_LPA(ULONG, pix, D4),
         AROS_LPA(IPTR, drmd, D5),
         AROS_LPA(BOOL, do_update, D6),
         LIBBASETYPEPTR, GfxBase, 198, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP6(LONG, DoRenderFunc,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(Point *, src, A1),
         AROS_LPA(struct Rectangle *, rr, A2),
         AROS_LPA(APTR, render_func, A3),
         AROS_LPA(APTR, funcdata, A4),
         AROS_LPA(BOOL, do_update, D0),
         LIBBASETYPEPTR, GfxBase, 199, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP6(LONG, DoPixelFunc,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(WORD, x, D0),
         AROS_LPA(WORD, y, D1),
         AROS_LPA(APTR, render_func, A1),
         AROS_LPA(APTR, funcdata, A2),
         AROS_LPA(BOOL, do_update, D2),
         LIBBASETYPEPTR, GfxBase, 200, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP5(void, UpdateBitMap,
         AROS_LPA(struct BitMap *, bitmap, A0),
         AROS_LPA(UWORD, x, D0),
         AROS_LPA(UWORD, y, D1),
         AROS_LPA(UWORD, width, D2),
         AROS_LPA(UWORD, height, D3),
         LIBBASETYPEPTR, GfxBase, 201, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(BOOL, CompositeLayersSupported,
         AROS_LPA(struct BitMap *, screenbm, A0),
         AROS_LPA(ULONG *, alphaformat, A1),
         LIBBASETYPEPTR, GfxBase, 202, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP2(void, LayerSurfacesChanged,
         AROS_LPA(struct BitMap *, screenbm, A0),
         AROS_LPA(struct HIDD_CompositeRequest *, surfaces, A1),
         LIBBASETYPEPTR, GfxBase, 203, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP3(ULONG, LayerSurfaceAlpha,
         AROS_LPA(struct BitMap *, surface, A0),
         AROS_LPA(LONG, x, D0),
         AROS_LPA(LONG, y, D1),
         LIBBASETYPEPTR, GfxBase, 204, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

#if !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__)
AROS_LP9(void, BltBitMapAlpha,
         AROS_LPA(struct BitMap *, srcBitMap, A0),
         AROS_LPA(LONG, xSrc, D0),
         AROS_LPA(LONG, ySrc, D1),
         AROS_LPA(struct BitMap *, destBitMap, A1),
         AROS_LPA(LONG, xDest, D2),
         AROS_LPA(LONG, yDest, D3),
         AROS_LPA(LONG, xSize, D4),
         AROS_LPA(LONG, ySize, D5),
         AROS_LPA(ULONG, opacity, D6),
         LIBBASETYPEPTR, GfxBase, 205, Graphics
);

#endif /* !defined(__GRAPHICS_LIBAPI__) || (40 <= __GRAPHICS_LIBAPI__) */

__END_DECLS

#endif /* CLIB_GRAPHICS_PROTOS_H */
