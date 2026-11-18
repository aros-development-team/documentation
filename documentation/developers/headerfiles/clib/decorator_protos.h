#ifndef CLIB_DECORATOR_PROTOS_H
#define CLIB_DECORATOR_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/decorator/decorator.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/decorator.h>
#include <intuition/classes.h>

__BEGIN_DECLS


#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP2(struct DecorImage *, DNewDecorImageContainer,
         AROS_LPA(UWORD, w, D0),
         AROS_LPA(UWORD, h, D1),
         LIBBASETYPEPTR, DecoratorBase, 6, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP3(struct DecorImage *, DScaleDecorImage,
         AROS_LPA(struct DecorImage *, di, A0),
         AROS_LPA(UWORD, neww, D0),
         AROS_LPA(UWORD, newh, D1),
         LIBBASETYPEPTR, DecoratorBase, 7, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP1(void, DDisposeImageContainer,
         AROS_LPA(struct DecorImage *, di, A0),
         LIBBASETYPEPTR, DecoratorBase, 8, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP4(struct DecorImage *, DGetImageFromFile,
         AROS_LPA(STRPTR, path, A0),
         AROS_LPA(STRPTR, name, A1),
         AROS_LPA(ULONG, expectedsubimagescols, D0),
         AROS_LPA(ULONG, expectedsubimagesrows, D1),
         LIBBASETYPEPTR, DecoratorBase, 9, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP3(struct DecorImage *, DCreateDecorImageContainerMatchingScreen,
         AROS_LPA(struct DecorImage *, in, A0),
         AROS_LPA(BOOL, truecolor, D0),
         AROS_LPA(struct Screen *, scr, A1),
         LIBBASETYPEPTR, DecoratorBase, 10, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP2(struct DecorImageLUT8 *, DNewLUT8ImageContainer,
         AROS_LPA(UWORD, w, D0),
         AROS_LPA(UWORD, h, D1),
         LIBBASETYPEPTR, DecoratorBase, 11, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP1(void, DDisposeLUT8ImageContainer,
         AROS_LPA(struct DecorImageLUT8 *, di, A0),
         LIBBASETYPEPTR, DecoratorBase, 12, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP3(struct Region *, DRegionFromLUT8Image,
         AROS_LPA(int, w, D0),
         AROS_LPA(int, h, D1),
         AROS_LPA(struct DecorImageLUT8 *, s, A0),
         LIBBASETYPEPTR, DecoratorBase, 13, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP6(ULONG *, DScaleBuffer,
         AROS_LPA(ULONG *, srcdata, A0),
         AROS_LPA(LONG, widthBuffer, D0),
         AROS_LPA(LONG, widthSrc, D1),
         AROS_LPA(LONG, heightSrc, D2),
         AROS_LPA(LONG, widthDest, D3),
         AROS_LPA(LONG, heightDest, D4),
         LIBBASETYPEPTR, DecoratorBase, 14, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP8(void, DDrawPartImageToRP,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(UWORD, x, D0),
         AROS_LPA(UWORD, y, D1),
         AROS_LPA(UWORD, sx, D2),
         AROS_LPA(UWORD, sy, D3),
         AROS_LPA(UWORD, sw, D4),
         AROS_LPA(UWORD, sh, D5),
         LIBBASETYPEPTR, DecoratorBase, 15, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP8(void, DDrawPartToImage,
         AROS_LPA(struct DecorImage *, src, A0),
         AROS_LPA(struct DecorImage *, dest, A1),
         AROS_LPA(UWORD, sx, D0),
         AROS_LPA(UWORD, sy, D1),
         AROS_LPA(UWORD, sw, D2),
         AROS_LPA(UWORD, sh, D3),
         AROS_LPA(UWORD, dx, D4),
         AROS_LPA(UWORD, dy, D5),
         LIBBASETYPEPTR, DecoratorBase, 16, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP5(void, DDrawStatefulGadgetImageToRP,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(ULONG, state, D0),
         AROS_LPA(UWORD, xp, D1),
         AROS_LPA(UWORD, yp, D2),
         LIBBASETYPEPTR, DecoratorBase, 17, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP7(void, DDrawScaledStatefulGadgetImageToRP,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(ULONG, state, D0),
         AROS_LPA(UWORD, xp, D1),
         AROS_LPA(UWORD, yp, D2),
         AROS_LPA(WORD, scaledwidth, D3),
         AROS_LPA(WORD, scaledheight, D4),
         LIBBASETYPEPTR, DecoratorBase, 18, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP9(void, DHorizVertRepeatDecorImage,
         AROS_LPA(struct DecorImage *, di, A0),
         AROS_LPA(ULONG, color, D0),
         AROS_LPA(UWORD, offx, D1),
         AROS_LPA(UWORD, offy, D2),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(UWORD, x, D3),
         AROS_LPA(UWORD, y, D4),
         AROS_LPA(WORD, w, D5),
         AROS_LPA(WORD, h, D6),
         LIBBASETYPEPTR, DecoratorBase, 19, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP9(void, DHorizRepeatBuffer,
         AROS_LPA(UBYTE *, buf, A0),
         AROS_LPA(LONG, offy, D0),
         AROS_LPA(LONG, pen, D1),
         AROS_LPA(BOOL, tc, D2),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(LONG, x, D3),
         AROS_LPA(LONG, y, D4),
         AROS_LPA(LONG, w, D5),
         AROS_LPA(LONG, h, D6),
         LIBBASETYPEPTR, DecoratorBase, 20, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP4(void, DFillPixelArrayGradient,
         AROS_LPA(LONG, pen, D0),
         AROS_LPA(BOOL, tc, D1),
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct GradientSpec *, spec, A1),
         LIBBASETYPEPTR, DecoratorBase, 21, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP4(void, DRenderMenuBackground,
         AROS_LPA(struct DecorImage *, pic, A0),
         AROS_LPA(struct DecorImage *, texture, A1),
         AROS_LPA(struct TileInfo *, textureti, A2),
         AROS_LPA(UWORD, ratio, D0),
         LIBBASETYPEPTR, DecoratorBase, 22, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP4(void, DRenderMenuBarBackground,
         AROS_LPA(struct DecorImage *, pic, A0),
         AROS_LPA(struct DecorImage *, texture, A1),
         AROS_LPA(struct TileInfo *, textureti, A2),
         AROS_LPA(UWORD, ratio, D0),
         LIBBASETYPEPTR, DecoratorBase, 23, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP9(void, DShadeLine,
         AROS_LPA(LONG, pen, D0),
         AROS_LPA(BOOL, tc, D1),
         AROS_LPA(BOOL, usegradients, D2),
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(ULONG, basecolor, D3),
         AROS_LPA(UWORD, fact, D4),
         AROS_LPA(UWORD, offy, D5),
         AROS_LPA(struct Rectangle *, bounds, A2),
         LIBBASETYPEPTR, DecoratorBase, 24, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP3(void, DSetImageTint,
         AROS_LPA(struct DecorImage *, dst, A0),
         AROS_LPA(UWORD, ratio, D0),
         AROS_LPA(ULONG, argb, D1),
         LIBBASETYPEPTR, DecoratorBase, 25, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP5(void, DTileMapToBitmap,
         AROS_LPA(struct DecorImage *, src, A0),
         AROS_LPA(struct TileInfo *, srcti, A1),
         AROS_LPA(struct BitMap *, map, A2),
         AROS_LPA(UWORD, dw, D0),
         AROS_LPA(UWORD, dh, D1),
         LIBBASETYPEPTR, DecoratorBase, 26, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP8(void, DWriteAlphaPixelArray,
         AROS_LPA(struct DecorImage *, src, A0),
         AROS_LPA(struct DecorImageLUT8 *, dst, A1),
         AROS_LPA(LONG, sx, D0),
         AROS_LPA(LONG, sy, D1),
         AROS_LPA(LONG, dx, D2),
         AROS_LPA(LONG, dy, D3),
         AROS_LPA(LONG, w, D4),
         AROS_LPA(LONG, h, D5),
         LIBBASETYPEPTR, DecoratorBase, 27, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP12(LONG, DWriteTiledImageTitle,
         AROS_LPA(BOOL, fill, D0),
         AROS_LPA(struct Window *, win, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(struct DecorImage *, di, A2),
         AROS_LPA(LONG, sx, D1),
         AROS_LPA(LONG, sy, D2),
         AROS_LPA(LONG, sw, D3),
         AROS_LPA(LONG, sh, D4),
         AROS_LPA(LONG, xp, D5),
         AROS_LPA(LONG, yp, D6),
         AROS_LPA(LONG, dw, D7),
         AROS_LPA(LONG, dh, A3),
         LIBBASETYPEPTR, DecoratorBase, 28, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP8(LONG, DWriteTiledImageVertical,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(ULONG, subimage, D0),
         AROS_LPA(LONG, sy, D1),
         AROS_LPA(LONG, sh, D2),
         AROS_LPA(LONG, xp, D3),
         AROS_LPA(LONG, yp, D4),
         AROS_LPA(LONG, dh, D5),
         LIBBASETYPEPTR, DecoratorBase, 29, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP8(LONG, DWriteTiledImageHorizontal,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(ULONG, subimage, D0),
         AROS_LPA(LONG, sx, D1),
         AROS_LPA(LONG, sw, D2),
         AROS_LPA(LONG, xp, D3),
         AROS_LPA(LONG, yp, D4),
         AROS_LPA(LONG, dw, D5),
         LIBBASETYPEPTR, DecoratorBase, 30, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP10(LONG, DWriteVerticalScaledTiledImageHorizontal,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(ULONG, subimage, D0),
         AROS_LPA(LONG, sx, D1),
         AROS_LPA(LONG, sw, D2),
         AROS_LPA(LONG, xp, D3),
         AROS_LPA(LONG, yp, D4),
         AROS_LPA(LONG, sh, D5),
         AROS_LPA(LONG, dw, D6),
         AROS_LPA(LONG, dh, D7),
         LIBBASETYPEPTR, DecoratorBase, 31, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP4(void, DPutImageToRP,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(struct DecorImage *, di, A1),
         AROS_LPA(UWORD, x, D0),
         AROS_LPA(UWORD, y, D1),
         LIBBASETYPEPTR, DecoratorBase, 32, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP5(struct DecorImage *, DGetImageFromRP,
         AROS_LPA(struct RastPort *, rp, A0),
         AROS_LPA(UWORD, x, D0),
         AROS_LPA(UWORD, y, D1),
         AROS_LPA(UWORD, w, D2),
         AROS_LPA(UWORD, h, D3),
         LIBBASETYPEPTR, DecoratorBase, 33, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP13(void, DFillMemoryBufferRGBGradient,
         AROS_LPA(UBYTE *, buf, A0),
         AROS_LPA(LONG, pen, D0),
         AROS_LPA(LONG, xt, D1),
         AROS_LPA(LONG, yt, D2),
         AROS_LPA(LONG, xb, D3),
         AROS_LPA(LONG, yb, D4),
         AROS_LPA(LONG, xp, D5),
         AROS_LPA(LONG, yp, D6),
         AROS_LPA(LONG, w, D7),
         AROS_LPA(LONG, h, A1),
         AROS_LPA(ULONG, start_rgb, A2),
         AROS_LPA(ULONG, end_rgb, A3),
         AROS_LPA(LONG, angle, A4),
         LIBBASETYPEPTR, DecoratorBase, 34, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP8(LONG, DRenderElement,
         AROS_LPA(struct DecoratorElement *, element, A0),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(ULONG, subimage, D0),
         AROS_LPA(LONG, xp, D1),
         AROS_LPA(LONG, yp, D2),
         AROS_LPA(LONG, dw, D3),
         AROS_LPA(LONG, dh, D4),
         AROS_LPA(LONG, clipw, D5),
         LIBBASETYPEPTR, DecoratorBase, 35, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

#if !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__)
AROS_LP9(LONG, DRenderElementChain,
         AROS_LPA(struct DecoratorElement **, elements, A0),
         AROS_LPA(ULONG, count, D0),
         AROS_LPA(BOOL, vertical, D1),
         AROS_LPA(struct RastPort *, rp, A1),
         AROS_LPA(ULONG, subimage, D2),
         AROS_LPA(LONG, xp, D3),
         AROS_LPA(LONG, yp, D4),
         AROS_LPA(LONG, dw, D5),
         AROS_LPA(LONG, dh, D6),
         LIBBASETYPEPTR, DecoratorBase, 36, Decorator
);

#endif /* !defined(__DECORATOR_LIBAPI__) || (2 <= __DECORATOR_LIBAPI__) */

__END_DECLS

#endif /* CLIB_DECORATOR_PROTOS_H */
