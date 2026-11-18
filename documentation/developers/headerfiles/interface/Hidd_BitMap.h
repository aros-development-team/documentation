#ifndef INTERFACE_Hidd_BitMap_H
#define INTERFACE_Hidd_BitMap_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_BitMap
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_BitMap                      "hidd.gfx.bitmap"

#if !defined(HiddBitMapBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_BitMap_NOMETHODBASE__)
#define HiddBitMapBase Hidd_BitMap_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_BitMap_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_BitMap_mid;
    if (!Hidd_BitMap_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_BitMap_mid = OOP_GetMethodID(IID_Hidd_BitMap, 0);
    }
    return Hidd_BitMap_mid;
}
#endif

#define HiddBitMapAttrBase               __IHidd_BitMap

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_BitMap_NOATTRBASE__)
extern OOP_AttrBase HiddBitMapAttrBase;
#endif

enum
{
    aoHidd_BitMap_Display = 0,  /*  [..G] Pointer to the display object this bitmap was created with */
    aoHidd_BitMap_LeftEdge = 1,  /*  [.SG] Left edge position of the bitmap */
    aoHidd_BitMap_TopEdge = 2,  /*  [.SG] Top edge position of the bitmap */
    aoHidd_BitMap_Width = 3,  /*  [ISG] Bitmap width */
    aoHidd_BitMap_Height = 4,  /*  [ISG] Bitmap height */
    aoHidd_BitMap_Align = 5,  /*  [I..] Number of pixels to align bitmap data width to */
    aoHidd_BitMap_Depth = 6,  /*  [..G] Bitmap depth */
    aoHidd_BitMap_IsLinearMem = 9,  /*  [..G] Is the bitmap memory contiguous */
    aoHidd_BitMap_BytesPerRow = 10,  /*  [..G] Number of bytes in a row  */
    aoHidd_BitMap_ColorMap = 11,  /*  [..G] Colormap of the bitmap */
    aoHidd_BitMap_BMStruct = 12,  /*  [I.G] BitMap object's associated struct BitMap */
    aoHidd_BitMap_Friend = 13,  /*  [I.G] Friend bitmap. */
    aoHidd_BitMap_StdPixFmt = 14,  /*  [I..] What stdpixel format the bitmap should have. */
    aoHidd_BitMap_PixFmt = 15,  /*  [..G] This is complete pixfmt of a bitmap */
    aoHidd_BitMap_SpritePixFmt = 16,  /*  [..G] Prefered pixel format attached sprites should have (for vHidd_SpriteType_DirectColor) */
    aoHidd_BitMap_ModeID = 17,  /*  [I.G] Must be passed on initialization of aHidd_BitMap_Displayable=TRUE bitmaps. */
    aoHidd_BitMap_Displayable = 18,  /*  [I.G] Bitmap is displayable (default: FALSE) */
    aoHidd_BitMap_Visible = 19,  /*  [..G] Check if a bitmap is visible */
    aoHidd_BitMap_Focus = 20,  /*  [.S.] * PRIVATE * When set, the monitor for the display bitmap has been activated. */
    aoHidd_BitMap_FrameBuffer = 21,  /*  [I..] Allocate framebuffer */
    aoHidd_BitMap_ModeChange = 22,  /*  [I..] Supports mode ID change */
    aoHidd_BitMap_Compositable = 23,  /*  [ISG] Can be Displayed via Compositor (Mutually exclusive with Displayable) */
    aoHidd_BitMap_Scanout = 24,  /*  [I.G] May be the source of a scan-out plane; base classes refuse it, driver classes allocate accordingly */
    aoHidd_BitMap_Buffers = 25,  /*  [I.G] Number of equally sized buffers of a scan-out bitmap (default 1) */
    aoHidd_BitMap_FrontBuffer = 26,  /*  [..G] Buffer currently scanned out */
    aoHidd_BitMap_BackBuffer = 27,  /*  [..G] Buffer to lock or render into next */
    aoHidd_BitMap_ColorSpace = 28,  /*  [ISG] vHidd_ColorSpace_* of a video bitmap */
    aoHidd_BitMap_BufferHandle = 29,  /*  [..G] Driver handle of the back buffer, 0 if none */
    aoHidd_BitMap_VideoFormat = 30,  /*  [I.G] vHidd_VideoFmt_*; 0 = an RGB or palette bitmap */
    aoHidd_BitMap_DecodeTarget = 31,  /*  [I.G] The buffers are written by the display's decoder (video bitmaps only) */
    aoHidd_BitMap_VideoLayout = 32,  /*  [I.G] vHidd_VideoLayout_* of the buffers in memory (default Linear) */
    aoHidd_BitMap_ColorRange = 33,  /*  [ISG] vHidd_ColorRange_* of a video bitmap */
    aoHidd_BitMap_ClassPtr = 36,  /*  [I..] Only used by subclasses of the gfx */
    aoHidd_BitMap_ClassID = 37,  /*  [I..] Only used by subclasses of the gfx */
    num_Hidd_BitMap_Attrs = 38,
};

#define aHidd_BitMap_Display                          (HiddBitMapAttrBase + aoHidd_BitMap_Display)
#define aHidd_BitMap_LeftEdge                         (HiddBitMapAttrBase + aoHidd_BitMap_LeftEdge)
#define aHidd_BitMap_TopEdge                          (HiddBitMapAttrBase + aoHidd_BitMap_TopEdge)
#define aHidd_BitMap_Width                            (HiddBitMapAttrBase + aoHidd_BitMap_Width)
#define aHidd_BitMap_Height                           (HiddBitMapAttrBase + aoHidd_BitMap_Height)
#define aHidd_BitMap_Align                            (HiddBitMapAttrBase + aoHidd_BitMap_Align)
#define aHidd_BitMap_Depth                            (HiddBitMapAttrBase + aoHidd_BitMap_Depth)
#define aHidd_BitMap_IsLinearMem                      (HiddBitMapAttrBase + aoHidd_BitMap_IsLinearMem)
#define aHidd_BitMap_BytesPerRow                      (HiddBitMapAttrBase + aoHidd_BitMap_BytesPerRow)
#define aHidd_BitMap_ColorMap                         (HiddBitMapAttrBase + aoHidd_BitMap_ColorMap)
#define aHidd_BitMap_BMStruct                         (HiddBitMapAttrBase + aoHidd_BitMap_BMStruct)
#define aHidd_BitMap_Friend                           (HiddBitMapAttrBase + aoHidd_BitMap_Friend)
#define aHidd_BitMap_StdPixFmt                        (HiddBitMapAttrBase + aoHidd_BitMap_StdPixFmt)
#define aHidd_BitMap_PixFmt                           (HiddBitMapAttrBase + aoHidd_BitMap_PixFmt)
#define aHidd_BitMap_SpritePixFmt                     (HiddBitMapAttrBase + aoHidd_BitMap_SpritePixFmt)
#define aHidd_BitMap_ModeID                           (HiddBitMapAttrBase + aoHidd_BitMap_ModeID)
#define aHidd_BitMap_Displayable                      (HiddBitMapAttrBase + aoHidd_BitMap_Displayable)
#define aHidd_BitMap_Visible                          (HiddBitMapAttrBase + aoHidd_BitMap_Visible)
#define aHidd_BitMap_Focus                            (HiddBitMapAttrBase + aoHidd_BitMap_Focus)
#define aHidd_BitMap_FrameBuffer                      (HiddBitMapAttrBase + aoHidd_BitMap_FrameBuffer)
#define aHidd_BitMap_ModeChange                       (HiddBitMapAttrBase + aoHidd_BitMap_ModeChange)
#define aHidd_BitMap_Compositable                     (HiddBitMapAttrBase + aoHidd_BitMap_Compositable)
#define aHidd_BitMap_Scanout                          (HiddBitMapAttrBase + aoHidd_BitMap_Scanout)
#define aHidd_BitMap_Buffers                          (HiddBitMapAttrBase + aoHidd_BitMap_Buffers)
#define aHidd_BitMap_FrontBuffer                      (HiddBitMapAttrBase + aoHidd_BitMap_FrontBuffer)
#define aHidd_BitMap_BackBuffer                       (HiddBitMapAttrBase + aoHidd_BitMap_BackBuffer)
#define aHidd_BitMap_ColorSpace                       (HiddBitMapAttrBase + aoHidd_BitMap_ColorSpace)
#define aHidd_BitMap_BufferHandle                     (HiddBitMapAttrBase + aoHidd_BitMap_BufferHandle)
#define aHidd_BitMap_VideoFormat                      (HiddBitMapAttrBase + aoHidd_BitMap_VideoFormat)
#define aHidd_BitMap_DecodeTarget                     (HiddBitMapAttrBase + aoHidd_BitMap_DecodeTarget)
#define aHidd_BitMap_VideoLayout                      (HiddBitMapAttrBase + aoHidd_BitMap_VideoLayout)
#define aHidd_BitMap_ColorRange                       (HiddBitMapAttrBase + aoHidd_BitMap_ColorRange)
#define aHidd_BitMap_ClassPtr                         (HiddBitMapAttrBase + aoHidd_BitMap_ClassPtr)
#define aHidd_BitMap_ClassID                          (HiddBitMapAttrBase + aoHidd_BitMap_ClassID)

#define Hidd_BitMap_Switch(attr, idx) \
if (((idx) = (attr) - HiddBitMapAttrBase) < num_Hidd_BitMap_Attrs) \
switch (idx)


enum {
    moHidd_BitMap_SetColors = 0,
    moHidd_BitMap_PutPixel = 1,
    moHidd_BitMap_DrawPixel = 2,
    moHidd_BitMap_PutImage = 3,
    moHidd_BitMap_PutAlphaImage = 4,
    moHidd_BitMap_PutTemplate = 5,
    moHidd_BitMap_PutAlphaTemplate = 6,
    moHidd_BitMap_PutPattern = 7,
    moHidd_BitMap_GetImage = 8,
    moHidd_BitMap_GetPixel = 9,
    moHidd_BitMap_DrawLine = 10,
    moHidd_BitMap_DrawRect = 11,
    moHidd_BitMap_FillRect = 12,
    moHidd_BitMap_DrawEllipse = 13,
    moHidd_BitMap_FillEllipse = 14,
    moHidd_BitMap_DrawPolygon = 15,
    moHidd_BitMap_FillPolygon = 16,
    moHidd_BitMap_DrawText = 17,
    moHidd_BitMap_FillText = 18,
    moHidd_BitMap_FillSpan = 19,
    moHidd_BitMap_Clear = 20,
    moHidd_BitMap_BlitColorExpansion = 21,
    moHidd_BitMap_MapColor = 22,
    moHidd_BitMap_UnmapPixel = 23,
    moHidd_BitMap_PutImageLUT = 24,
    moHidd_BitMap_PutTranspImageLUT = 25,
    moHidd_BitMap_GetImageLUT = 26,
    moHidd_BitMap_BytesPerLine = 27,
    moHidd_BitMap_ConvertPixels = 28,
    moHidd_BitMap_FillMemRect8 = 29,
    moHidd_BitMap_FillMemRect16 = 30,
    moHidd_BitMap_FillMemRect24 = 31,
    moHidd_BitMap_FillMemRect32 = 32,
    moHidd_BitMap_InvertMemRect = 33,
    moHidd_BitMap_CopyMemBox8 = 34,
    moHidd_BitMap_CopyMemBox16 = 35,
    moHidd_BitMap_CopyMemBox24 = 36,
    moHidd_BitMap_CopyMemBox32 = 37,
    moHidd_BitMap_CopyLUTMemBox16 = 38,
    moHidd_BitMap_CopyLUTMemBox24 = 39,
    moHidd_BitMap_CopyLUTMemBox32 = 40,
    moHidd_BitMap_PutMem32Image8 = 41,
    moHidd_BitMap_PutMem32Image16 = 42,
    moHidd_BitMap_PutMem32Image24 = 43,
    moHidd_BitMap_GetMem32Image8 = 44,
    moHidd_BitMap_GetMem32Image16 = 45,
    moHidd_BitMap_GetMem32Image24 = 46,
    moHidd_BitMap_PutMemTemplate8 = 47,
    moHidd_BitMap_PutMemTemplate16 = 48,
    moHidd_BitMap_PutMemTemplate24 = 49,
    moHidd_BitMap_PutMemTemplate32 = 50,
    moHidd_BitMap_PutMemPattern8 = 51,
    moHidd_BitMap_PutMemPattern16 = 52,
    moHidd_BitMap_PutMemPattern24 = 53,
    moHidd_BitMap_PutMemPattern32 = 54,
    moHidd_BitMap_SetColorMap = 55,
    moHidd_BitMap_ObtainDirectAccess = 56,
    moHidd_BitMap_ReleaseDirectAccess = 57,
    moHidd_BitMap_BitMapScale = 58,
    moHidd_BitMap_PrivateSet = 59,
    moHidd_BitMap_SetRGBConversionFunction = 60,
    moHidd_BitMap_UpdateRect = 61,
    moHidd_BitMap_LockBuffer = 62,
    moHidd_BitMap_UnlockBuffer = 63,
    moHidd_BitMap_SwapBuffers = 64,
    moHidd_BitMap_GetBufferHandle = 65,
    num_Hidd_BitMap_Methods = 66
};

struct pHidd_BitMap_SetColors
{
    OOP_MethodID mID;
    HIDDT_Color *colors;
    UWORD firstColor;
    UWORD numColors;
};

#define HIDD_BM_SetColors(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_SetColors_(HiddBitMapBase, __obj ,##args); })

static inline BOOL HIDD_BM_SetColors_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, HIDDT_Color *colors, UWORD firstColor, UWORD numColors)
{
    struct pHidd_BitMap_SetColors p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_SetColors;
    p.colors = colors;
    p.firstColor = firstColor;
    p.numColors = numColors;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutPixel
{
    OOP_MethodID mID;
    WORD x;
    WORD y;
    HIDDT_Pixel pixel;
};

#define HIDD_BM_PutPixel(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutPixel_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutPixel_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, WORD x, WORD y, HIDDT_Pixel pixel)
{
    struct pHidd_BitMap_PutPixel p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutPixel;
    p.x = x;
    p.y = y;
    p.pixel = pixel;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_DrawPixel
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD x;
    WORD y;
};

#define HIDD_BM_DrawPixel(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_DrawPixel_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_DrawPixel_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD x, WORD y)
{
    struct pHidd_BitMap_DrawPixel p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_DrawPixel;
    p.gc = gc;
    p.x = x;
    p.y = y;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutImage
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pixels;
    ULONG modulo;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    HIDDT_StdPixFmt pixFmt;
};

#define HIDD_BM_PutImage(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutImage_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutImage_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pixels, ULONG modulo, WORD x, WORD y, WORD width, WORD height, HIDDT_StdPixFmt pixFmt)
{
    struct pHidd_BitMap_PutImage p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutImage;
    p.gc = gc;
    p.pixels = pixels;
    p.modulo = modulo;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.pixFmt = pixFmt;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutAlphaImage
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pixels;
    ULONG modulo;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_BM_PutAlphaImage(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutAlphaImage_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutAlphaImage_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pixels, ULONG modulo, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_BitMap_PutAlphaImage p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutAlphaImage;
    p.gc = gc;
    p.pixels = pixels;
    p.modulo = modulo;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutTemplate
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *masktemplate;
    ULONG modulo;
    WORD srcx;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    BOOL inverttemplate;
};

#define HIDD_BM_PutTemplate(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutTemplate_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutTemplate_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *masktemplate, ULONG modulo, WORD srcx, WORD x, WORD y, WORD width, WORD height, BOOL inverttemplate)
{
    struct pHidd_BitMap_PutTemplate p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutTemplate;
    p.gc = gc;
    p.masktemplate = masktemplate;
    p.modulo = modulo;
    p.srcx = srcx;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.inverttemplate = inverttemplate;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutAlphaTemplate
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *alpha;
    ULONG modulo;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    BOOL invertalpha;
};

#define HIDD_BM_PutAlphaTemplate(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutAlphaTemplate_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutAlphaTemplate_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *alpha, ULONG modulo, WORD x, WORD y, WORD width, WORD height, BOOL invertalpha)
{
    struct pHidd_BitMap_PutAlphaTemplate p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutAlphaTemplate;
    p.gc = gc;
    p.alpha = alpha;
    p.modulo = modulo;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.invertalpha = invertalpha;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutPattern
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pattern;
    WORD patternsrcx;
    WORD patternsrcy;
    WORD patternheight;
    WORD patterndepth;
    HIDDT_PixelLUT *patternlut;
    BOOL invertpattern;
    UBYTE *mask;
    ULONG maskmodulo;
    WORD masksrcx;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_BM_PutPattern(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutPattern_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutPattern_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pattern, WORD patternsrcx, WORD patternsrcy, WORD patternheight, WORD patterndepth, HIDDT_PixelLUT *patternlut, BOOL invertpattern, UBYTE *mask, ULONG maskmodulo, WORD masksrcx, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_BitMap_PutPattern p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutPattern;
    p.gc = gc;
    p.pattern = pattern;
    p.patternsrcx = patternsrcx;
    p.patternsrcy = patternsrcy;
    p.patternheight = patternheight;
    p.patterndepth = patterndepth;
    p.patternlut = patternlut;
    p.invertpattern = invertpattern;
    p.mask = mask;
    p.maskmodulo = maskmodulo;
    p.masksrcx = masksrcx;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_GetImage
{
    OOP_MethodID mID;
    UBYTE *pixels;
    ULONG modulo;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    HIDDT_StdPixFmt pixFmt;
};

#define HIDD_BM_GetImage(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_GetImage_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_GetImage_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, UBYTE *pixels, ULONG modulo, WORD x, WORD y, WORD width, WORD height, HIDDT_StdPixFmt pixFmt)
{
    struct pHidd_BitMap_GetImage p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_GetImage;
    p.pixels = pixels;
    p.modulo = modulo;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.pixFmt = pixFmt;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_GetPixel
{
    OOP_MethodID mID;
    WORD x;
    WORD y;
};

#define HIDD_BM_GetPixel(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_GetPixel_(HiddBitMapBase, __obj ,##args); })

static inline HIDDT_Pixel HIDD_BM_GetPixel_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, WORD x, WORD y)
{
    struct pHidd_BitMap_GetPixel p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_GetPixel;
    p.x = x;
    p.y = y;
    return (HIDDT_Pixel)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_DrawLine
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD x1;
    WORD y1;
    WORD x2;
    WORD y2;
};

#define HIDD_BM_DrawLine(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_DrawLine_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_DrawLine_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD x1, WORD y1, WORD x2, WORD y2)
{
    struct pHidd_BitMap_DrawLine p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_DrawLine;
    p.gc = gc;
    p.x1 = x1;
    p.y1 = y1;
    p.x2 = x2;
    p.y2 = y2;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_DrawRect
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD minX;
    WORD minY;
    WORD maxX;
    WORD maxY;
};

#define HIDD_BM_DrawRect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_DrawRect_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_DrawRect_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD minX, WORD minY, WORD maxX, WORD maxY)
{
    struct pHidd_BitMap_DrawRect p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_DrawRect;
    p.gc = gc;
    p.minX = minX;
    p.minY = minY;
    p.maxX = maxX;
    p.maxY = maxY;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillRect
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD minX;
    WORD minY;
    WORD maxX;
    WORD maxY;
};

#define HIDD_BM_FillRect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillRect_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillRect_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD minX, WORD minY, WORD maxX, WORD maxY)
{
    struct pHidd_BitMap_FillRect p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillRect;
    p.gc = gc;
    p.minX = minX;
    p.minY = minY;
    p.maxX = maxX;
    p.maxY = maxY;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_DrawEllipse
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD x;
    WORD y;
    WORD rx;
    WORD ry;
};

#define HIDD_BM_DrawEllipse(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_DrawEllipse_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_DrawEllipse_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD x, WORD y, WORD rx, WORD ry)
{
    struct pHidd_BitMap_DrawEllipse p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_DrawEllipse;
    p.gc = gc;
    p.x = x;
    p.y = y;
    p.rx = rx;
    p.ry = ry;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillEllipse
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD x;
    WORD y;
    WORD ry;
    WORD rx;
};

#define HIDD_BM_FillEllipse(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillEllipse_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillEllipse_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD x, WORD y, WORD ry, WORD rx)
{
    struct pHidd_BitMap_FillEllipse p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillEllipse;
    p.gc = gc;
    p.x = x;
    p.y = y;
    p.ry = ry;
    p.rx = rx;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_DrawPolygon
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UWORD n;
    WORD *coords;
};

#define HIDD_BM_DrawPolygon(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_DrawPolygon_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_DrawPolygon_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UWORD n, WORD *coords)
{
    struct pHidd_BitMap_DrawPolygon p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_DrawPolygon;
    p.gc = gc;
    p.n = n;
    p.coords = coords;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillPolygon
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UWORD n;
    WORD *coords;
};

#define HIDD_BM_FillPolygon(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillPolygon_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillPolygon_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UWORD n, WORD *coords)
{
    struct pHidd_BitMap_FillPolygon p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillPolygon;
    p.gc = gc;
    p.n = n;
    p.coords = coords;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_DrawText
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD x;
    WORD y;
    STRPTR text;
    UWORD length;
};

#define HIDD_BM_DrawText(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_DrawText_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_DrawText_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD x, WORD y, STRPTR text, UWORD length)
{
    struct pHidd_BitMap_DrawText p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_DrawText;
    p.gc = gc;
    p.x = x;
    p.y = y;
    p.text = text;
    p.length = length;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillText
{
    OOP_MethodID mID;
    OOP_Object *gc;
    WORD x;
    WORD y;
    STRPTR text;
    UWORD length;
};

#define HIDD_BM_FillText(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillText_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillText_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, WORD x, WORD y, STRPTR text, UWORD length)
{
    struct pHidd_BitMap_FillText p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillText;
    p.gc = gc;
    p.x = x;
    p.y = y;
    p.text = text;
    p.length = length;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillSpan
{
    OOP_MethodID mID;
};

/*  Obsolete */
#define HIDD_BM_FillSpan(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillSpan_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillSpan_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj)
{
    struct pHidd_BitMap_FillSpan p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillSpan;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_Clear
{
    OOP_MethodID mID;
    OOP_Object *gc;
};

#define HIDD_BM_Clear(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_Clear_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_Clear_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc)
{
    struct pHidd_BitMap_Clear p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_Clear;
    p.gc = gc;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_BlitColorExpansion
{
    OOP_MethodID mID;
    OOP_Object *gc;
    OOP_Object *srcBitMap;
    WORD srcX;
    WORD srcY;
    WORD destX;
    WORD destY;
    UWORD width;
    UWORD height;
};

#define HIDD_BM_BlitColorExpansion(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_BlitColorExpansion_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_BlitColorExpansion_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, OOP_Object *srcBitMap, WORD srcX, WORD srcY, WORD destX, WORD destY, UWORD width, UWORD height)
{
    struct pHidd_BitMap_BlitColorExpansion p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_BlitColorExpansion;
    p.gc = gc;
    p.srcBitMap = srcBitMap;
    p.srcX = srcX;
    p.srcY = srcY;
    p.destX = destX;
    p.destY = destY;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_MapColor
{
    OOP_MethodID mID;
    HIDDT_Color *color;
};

#define HIDD_BM_MapColor(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_MapColor_(HiddBitMapBase, __obj ,##args); })

static inline HIDDT_Pixel HIDD_BM_MapColor_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, HIDDT_Color *color)
{
    struct pHidd_BitMap_MapColor p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_MapColor;
    p.color = color;
    return (HIDDT_Pixel)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_UnmapPixel
{
    OOP_MethodID mID;
    HIDDT_Pixel pixel;
    HIDDT_Color *color;
};

#define HIDD_BM_UnmapPixel(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_UnmapPixel_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_UnmapPixel_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, HIDDT_Pixel pixel, HIDDT_Color *color)
{
    struct pHidd_BitMap_UnmapPixel p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_UnmapPixel;
    p.pixel = pixel;
    p.color = color;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutImageLUT
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pixels;
    ULONG modulo;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    HIDDT_PixelLUT *pixlut;
};

#define HIDD_BM_PutImageLUT(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutImageLUT_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutImageLUT_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pixels, ULONG modulo, WORD x, WORD y, WORD width, WORD height, HIDDT_PixelLUT *pixlut)
{
    struct pHidd_BitMap_PutImageLUT p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutImageLUT;
    p.gc = gc;
    p.pixels = pixels;
    p.modulo = modulo;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.pixlut = pixlut;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutTranspImageLUT
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pixels;
    ULONG modulo;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    HIDDT_PixelLUT *pixlut;
    UBYTE transparent;
};

#define HIDD_BM_PutTranspImageLUT(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutTranspImageLUT_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutTranspImageLUT_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pixels, ULONG modulo, WORD x, WORD y, WORD width, WORD height, HIDDT_PixelLUT *pixlut, UBYTE transparent)
{
    struct pHidd_BitMap_PutTranspImageLUT p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutTranspImageLUT;
    p.gc = gc;
    p.pixels = pixels;
    p.modulo = modulo;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.pixlut = pixlut;
    p.transparent = transparent;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_GetImageLUT
{
    OOP_MethodID mID;
    UBYTE *pixels;
    ULONG modulo;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    HIDDT_PixelLUT *pixlut;
};

#define HIDD_BM_GetImageLUT(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_GetImageLUT_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_GetImageLUT_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, UBYTE *pixels, ULONG modulo, WORD x, WORD y, WORD width, WORD height, HIDDT_PixelLUT *pixlut)
{
    struct pHidd_BitMap_GetImageLUT p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_GetImageLUT;
    p.pixels = pixels;
    p.modulo = modulo;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.pixlut = pixlut;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_BytesPerLine
{
    OOP_MethodID mID;
    HIDDT_StdPixFmt pixFmt;
    UWORD width;
};

#define HIDD_BM_BytesPerLine(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_BytesPerLine_(HiddBitMapBase, __obj ,##args); })

static inline ULONG HIDD_BM_BytesPerLine_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, HIDDT_StdPixFmt pixFmt, UWORD width)
{
    struct pHidd_BitMap_BytesPerLine p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_BytesPerLine;
    p.pixFmt = pixFmt;
    p.width = width;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_ConvertPixels
{
    OOP_MethodID mID;
    APTR *srcPixels;
    HIDDT_PixelFormat *srcPixFmt;
    ULONG srcMod;
    APTR *dstBuf;
    HIDDT_PixelFormat *dstPixFmt;
    ULONG dstMod;
    UWORD width;
    UWORD height;
    HIDDT_PixelLUT *pixlut;
};

#define HIDD_BM_ConvertPixels(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_ConvertPixels_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_ConvertPixels_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR *srcPixels, HIDDT_PixelFormat *srcPixFmt, ULONG srcMod, APTR *dstBuf, HIDDT_PixelFormat *dstPixFmt, ULONG dstMod, UWORD width, UWORD height, HIDDT_PixelLUT *pixlut)
{
    struct pHidd_BitMap_ConvertPixels p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_ConvertPixels;
    p.srcPixels = srcPixels;
    p.srcPixFmt = srcPixFmt;
    p.srcMod = srcMod;
    p.dstBuf = dstBuf;
    p.dstPixFmt = dstPixFmt;
    p.dstMod = dstMod;
    p.width = width;
    p.height = height;
    p.pixlut = pixlut;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillMemRect8
{
    OOP_MethodID mID;
    APTR dstBuf;
    WORD minX;
    WORD minY;
    WORD maxX;
    WORD maxY;
    ULONG dstMod;
    UBYTE fill;
};

#define HIDD_BM_FillMemRect8(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillMemRect8_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillMemRect8_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR dstBuf, WORD minX, WORD minY, WORD maxX, WORD maxY, ULONG dstMod, UBYTE fill)
{
    struct pHidd_BitMap_FillMemRect8 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillMemRect8;
    p.dstBuf = dstBuf;
    p.minX = minX;
    p.minY = minY;
    p.maxX = maxX;
    p.maxY = maxY;
    p.dstMod = dstMod;
    p.fill = fill;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillMemRect16
{
    OOP_MethodID mID;
    APTR dstBuf;
    WORD minX;
    WORD minY;
    WORD maxX;
    WORD maxY;
    ULONG dstMod;
    UWORD fill;
};

#define HIDD_BM_FillMemRect16(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillMemRect16_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillMemRect16_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR dstBuf, WORD minX, WORD minY, WORD maxX, WORD maxY, ULONG dstMod, UWORD fill)
{
    struct pHidd_BitMap_FillMemRect16 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillMemRect16;
    p.dstBuf = dstBuf;
    p.minX = minX;
    p.minY = minY;
    p.maxX = maxX;
    p.maxY = maxY;
    p.dstMod = dstMod;
    p.fill = fill;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillMemRect24
{
    OOP_MethodID mID;
    APTR dstBuf;
    WORD minX;
    WORD minY;
    WORD maxX;
    WORD maxY;
    ULONG dstMod;
    ULONG fill;
};

#define HIDD_BM_FillMemRect24(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillMemRect24_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillMemRect24_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR dstBuf, WORD minX, WORD minY, WORD maxX, WORD maxY, ULONG dstMod, ULONG fill)
{
    struct pHidd_BitMap_FillMemRect24 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillMemRect24;
    p.dstBuf = dstBuf;
    p.minX = minX;
    p.minY = minY;
    p.maxX = maxX;
    p.maxY = maxY;
    p.dstMod = dstMod;
    p.fill = fill;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_FillMemRect32
{
    OOP_MethodID mID;
    APTR dstBuf;
    WORD minX;
    WORD minY;
    WORD maxX;
    WORD maxY;
    ULONG dstMod;
    ULONG fill;
};

#define HIDD_BM_FillMemRect32(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_FillMemRect32_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_FillMemRect32_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR dstBuf, WORD minX, WORD minY, WORD maxX, WORD maxY, ULONG dstMod, ULONG fill)
{
    struct pHidd_BitMap_FillMemRect32 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_FillMemRect32;
    p.dstBuf = dstBuf;
    p.minX = minX;
    p.minY = minY;
    p.maxX = maxX;
    p.maxY = maxY;
    p.dstMod = dstMod;
    p.fill = fill;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_InvertMemRect
{
    OOP_MethodID mID;
    APTR dstBuf;
    WORD minX;
    WORD minY;
    WORD maxX;
    WORD maxY;
    ULONG dstMod;
};

#define HIDD_BM_InvertMemRect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_InvertMemRect_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_InvertMemRect_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR dstBuf, WORD minX, WORD minY, WORD maxX, WORD maxY, ULONG dstMod)
{
    struct pHidd_BitMap_InvertMemRect p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_InvertMemRect;
    p.dstBuf = dstBuf;
    p.minX = minX;
    p.minY = minY;
    p.maxX = maxX;
    p.maxY = maxY;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_CopyMemBox8
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_CopyMemBox8(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_CopyMemBox8_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_CopyMemBox8_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_CopyMemBox8 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_CopyMemBox8;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_CopyMemBox16
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_CopyMemBox16(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_CopyMemBox16_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_CopyMemBox16_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_CopyMemBox16 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_CopyMemBox16;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_CopyMemBox24
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_CopyMemBox24(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_CopyMemBox24_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_CopyMemBox24_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_CopyMemBox24 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_CopyMemBox24;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_CopyMemBox32
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_CopyMemBox32(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_CopyMemBox32_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_CopyMemBox32_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_CopyMemBox32 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_CopyMemBox32;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_CopyLUTMemBox16
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
    HIDDT_PixelLUT *pixlut;
};

#define HIDD_BM_CopyLUTMemBox16(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_CopyLUTMemBox16_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_CopyLUTMemBox16_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod, HIDDT_PixelLUT *pixlut)
{
    struct pHidd_BitMap_CopyLUTMemBox16 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_CopyLUTMemBox16;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    p.pixlut = pixlut;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_CopyLUTMemBox24
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
    HIDDT_PixelLUT *pixlut;
};

#define HIDD_BM_CopyLUTMemBox24(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_CopyLUTMemBox24_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_CopyLUTMemBox24_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod, HIDDT_PixelLUT *pixlut)
{
    struct pHidd_BitMap_CopyLUTMemBox24 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_CopyLUTMemBox24;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    p.pixlut = pixlut;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_CopyLUTMemBox32
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
    HIDDT_PixelLUT *pixlut;
};

#define HIDD_BM_CopyLUTMemBox32(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_CopyLUTMemBox32_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_CopyLUTMemBox32_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod, HIDDT_PixelLUT *pixlut)
{
    struct pHidd_BitMap_CopyLUTMemBox32 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_CopyLUTMemBox32;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    p.pixlut = pixlut;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMem32Image8
{
    OOP_MethodID mID;
    APTR src;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_PutMem32Image8(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMem32Image8_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMem32Image8_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_PutMem32Image8 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMem32Image8;
    p.src = src;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMem32Image16
{
    OOP_MethodID mID;
    APTR src;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_PutMem32Image16(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMem32Image16_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMem32Image16_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_PutMem32Image16 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMem32Image16;
    p.src = src;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMem32Image24
{
    OOP_MethodID mID;
    APTR src;
    APTR dst;
    WORD dstX;
    WORD dstY;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_PutMem32Image24(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMem32Image24_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMem32Image24_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, APTR dst, WORD dstX, WORD dstY, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_PutMem32Image24 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMem32Image24;
    p.src = src;
    p.dst = dst;
    p.dstX = dstX;
    p.dstY = dstY;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_GetMem32Image8
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_GetMem32Image8(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_GetMem32Image8_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_GetMem32Image8_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_GetMem32Image8 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_GetMem32Image8;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_GetMem32Image16
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_GetMem32Image16(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_GetMem32Image16_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_GetMem32Image16_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_GetMem32Image16 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_GetMem32Image16;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_GetMem32Image24
{
    OOP_MethodID mID;
    APTR src;
    WORD srcX;
    WORD srcY;
    APTR dst;
    UWORD width;
    UWORD height;
    ULONG srcMod;
    ULONG dstMod;
};

#define HIDD_BM_GetMem32Image24(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_GetMem32Image24_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_GetMem32Image24_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, APTR src, WORD srcX, WORD srcY, APTR dst, UWORD width, UWORD height, ULONG srcMod, ULONG dstMod)
{
    struct pHidd_BitMap_GetMem32Image24 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_GetMem32Image24;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dst = dst;
    p.width = width;
    p.height = height;
    p.srcMod = srcMod;
    p.dstMod = dstMod;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemTemplate8
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *masktemplate;
    ULONG modulo;
    WORD srcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    BOOL inverttemplate;
};

#define HIDD_BM_PutMemTemplate8(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemTemplate8_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemTemplate8_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *masktemplate, ULONG modulo, WORD srcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height, BOOL inverttemplate)
{
    struct pHidd_BitMap_PutMemTemplate8 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemTemplate8;
    p.gc = gc;
    p.masktemplate = masktemplate;
    p.modulo = modulo;
    p.srcx = srcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.inverttemplate = inverttemplate;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemTemplate16
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *masktemplate;
    ULONG modulo;
    WORD srcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    BOOL inverttemplate;
};

#define HIDD_BM_PutMemTemplate16(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemTemplate16_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemTemplate16_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *masktemplate, ULONG modulo, WORD srcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height, BOOL inverttemplate)
{
    struct pHidd_BitMap_PutMemTemplate16 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemTemplate16;
    p.gc = gc;
    p.masktemplate = masktemplate;
    p.modulo = modulo;
    p.srcx = srcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.inverttemplate = inverttemplate;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemTemplate24
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *masktemplate;
    ULONG modulo;
    WORD srcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    BOOL inverttemplate;
};

#define HIDD_BM_PutMemTemplate24(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemTemplate24_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemTemplate24_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *masktemplate, ULONG modulo, WORD srcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height, BOOL inverttemplate)
{
    struct pHidd_BitMap_PutMemTemplate24 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemTemplate24;
    p.gc = gc;
    p.masktemplate = masktemplate;
    p.modulo = modulo;
    p.srcx = srcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.inverttemplate = inverttemplate;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemTemplate32
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *masktemplate;
    ULONG modulo;
    WORD srcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
    BOOL inverttemplate;
};

#define HIDD_BM_PutMemTemplate32(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemTemplate32_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemTemplate32_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *masktemplate, ULONG modulo, WORD srcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height, BOOL inverttemplate)
{
    struct pHidd_BitMap_PutMemTemplate32 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemTemplate32;
    p.gc = gc;
    p.masktemplate = masktemplate;
    p.modulo = modulo;
    p.srcx = srcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    p.inverttemplate = inverttemplate;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemPattern8
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pattern;
    WORD patternsrcx;
    WORD patternsrcy;
    WORD patternheight;
    WORD patterndepth;
    HIDDT_PixelLUT *patternlut;
    BOOL invertpattern;
    UBYTE *mask;
    ULONG maskmodulo;
    WORD masksrcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_BM_PutMemPattern8(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemPattern8_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemPattern8_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pattern, WORD patternsrcx, WORD patternsrcy, WORD patternheight, WORD patterndepth, HIDDT_PixelLUT *patternlut, BOOL invertpattern, UBYTE *mask, ULONG maskmodulo, WORD masksrcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_BitMap_PutMemPattern8 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemPattern8;
    p.gc = gc;
    p.pattern = pattern;
    p.patternsrcx = patternsrcx;
    p.patternsrcy = patternsrcy;
    p.patternheight = patternheight;
    p.patterndepth = patterndepth;
    p.patternlut = patternlut;
    p.invertpattern = invertpattern;
    p.mask = mask;
    p.maskmodulo = maskmodulo;
    p.masksrcx = masksrcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemPattern16
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pattern;
    WORD patternsrcx;
    WORD patternsrcy;
    WORD patternheight;
    WORD patterndepth;
    HIDDT_PixelLUT *patternlut;
    BOOL invertpattern;
    UBYTE *mask;
    ULONG maskmodulo;
    WORD masksrcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_BM_PutMemPattern16(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemPattern16_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemPattern16_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pattern, WORD patternsrcx, WORD patternsrcy, WORD patternheight, WORD patterndepth, HIDDT_PixelLUT *patternlut, BOOL invertpattern, UBYTE *mask, ULONG maskmodulo, WORD masksrcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_BitMap_PutMemPattern16 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemPattern16;
    p.gc = gc;
    p.pattern = pattern;
    p.patternsrcx = patternsrcx;
    p.patternsrcy = patternsrcy;
    p.patternheight = patternheight;
    p.patterndepth = patterndepth;
    p.patternlut = patternlut;
    p.invertpattern = invertpattern;
    p.mask = mask;
    p.maskmodulo = maskmodulo;
    p.masksrcx = masksrcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemPattern24
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pattern;
    WORD patternsrcx;
    WORD patternsrcy;
    WORD patternheight;
    WORD patterndepth;
    HIDDT_PixelLUT *patternlut;
    BOOL invertpattern;
    UBYTE *mask;
    ULONG maskmodulo;
    WORD masksrcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_BM_PutMemPattern24(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemPattern24_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemPattern24_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pattern, WORD patternsrcx, WORD patternsrcy, WORD patternheight, WORD patterndepth, HIDDT_PixelLUT *patternlut, BOOL invertpattern, UBYTE *mask, ULONG maskmodulo, WORD masksrcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_BitMap_PutMemPattern24 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemPattern24;
    p.gc = gc;
    p.pattern = pattern;
    p.patternsrcx = patternsrcx;
    p.patternsrcy = patternsrcy;
    p.patternheight = patternheight;
    p.patterndepth = patterndepth;
    p.patternlut = patternlut;
    p.invertpattern = invertpattern;
    p.mask = mask;
    p.maskmodulo = maskmodulo;
    p.masksrcx = masksrcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PutMemPattern32
{
    OOP_MethodID mID;
    OOP_Object *gc;
    UBYTE *pattern;
    WORD patternsrcx;
    WORD patternsrcy;
    WORD patternheight;
    WORD patterndepth;
    HIDDT_PixelLUT *patternlut;
    BOOL invertpattern;
    UBYTE *mask;
    ULONG maskmodulo;
    WORD masksrcx;
    APTR dst;
    ULONG dstMod;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_BM_PutMemPattern32(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PutMemPattern32_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PutMemPattern32_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *gc, UBYTE *pattern, WORD patternsrcx, WORD patternsrcy, WORD patternheight, WORD patterndepth, HIDDT_PixelLUT *patternlut, BOOL invertpattern, UBYTE *mask, ULONG maskmodulo, WORD masksrcx, APTR dst, ULONG dstMod, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_BitMap_PutMemPattern32 p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PutMemPattern32;
    p.gc = gc;
    p.pattern = pattern;
    p.patternsrcx = patternsrcx;
    p.patternsrcy = patternsrcy;
    p.patternheight = patternheight;
    p.patterndepth = patterndepth;
    p.patternlut = patternlut;
    p.invertpattern = invertpattern;
    p.mask = mask;
    p.maskmodulo = maskmodulo;
    p.masksrcx = masksrcx;
    p.dst = dst;
    p.dstMod = dstMod;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_SetColorMap
{
    OOP_MethodID mID;
    OOP_Object *colorMap;
};

#define HIDD_BM_SetColorMap(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_SetColorMap_(HiddBitMapBase, __obj ,##args); })

static inline OOP_Object * HIDD_BM_SetColorMap_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *colorMap)
{
    struct pHidd_BitMap_SetColorMap p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_SetColorMap;
    p.colorMap = colorMap;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_ObtainDirectAccess
{
    OOP_MethodID mID;
    UBYTE **addressReturn;
    ULONG *widthReturn;
    ULONG *heightReturn;
    ULONG *bankSizeReturn;
    ULONG *memSizeReturn;
};

#define HIDD_BM_ObtainDirectAccess(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_ObtainDirectAccess_(HiddBitMapBase, __obj ,##args); })

static inline BOOL HIDD_BM_ObtainDirectAccess_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, UBYTE **addressReturn, ULONG *widthReturn, ULONG *heightReturn, ULONG *bankSizeReturn, ULONG *memSizeReturn)
{
    struct pHidd_BitMap_ObtainDirectAccess p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_ObtainDirectAccess;
    p.addressReturn = addressReturn;
    p.widthReturn = widthReturn;
    p.heightReturn = heightReturn;
    p.bankSizeReturn = bankSizeReturn;
    p.memSizeReturn = memSizeReturn;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_ReleaseDirectAccess
{
    OOP_MethodID mID;
};

#define HIDD_BM_ReleaseDirectAccess(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_ReleaseDirectAccess_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_ReleaseDirectAccess_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj)
{
    struct pHidd_BitMap_ReleaseDirectAccess p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_ReleaseDirectAccess;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_BitMapScale
{
    OOP_MethodID mID;
    OOP_Object *src;
    OOP_Object *dst;
    struct BitScaleArgs * bsa;
    OOP_Object *gc;
};

#define HIDD_BM_BitMapScale(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_BitMapScale_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_BitMapScale_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, OOP_Object *src, OOP_Object *dst, struct BitScaleArgs * bsa, OOP_Object *gc)
{
    struct pHidd_BitMap_BitMapScale p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_BitMapScale;
    p.src = src;
    p.dst = dst;
    p.bsa = bsa;
    p.gc = gc;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_PrivateSet
{
    OOP_MethodID mID;
};

/*  Obsolete */
#define HIDD_BM_PrivateSet(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_PrivateSet_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_PrivateSet_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj)
{
    struct pHidd_BitMap_PrivateSet p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_PrivateSet;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_SetRGBConversionFunction
{
    OOP_MethodID mID;
    HIDDT_StdPixFmt srcPixFmt;
    HIDDT_StdPixFmt dstPixFmt;
    HIDDT_RGBConversionFunction function;
};

#define HIDD_BM_SetRGBConversionFunction(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_SetRGBConversionFunction_(HiddBitMapBase, __obj ,##args); })

static inline HIDDT_RGBConversionFunction HIDD_BM_SetRGBConversionFunction_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, HIDDT_StdPixFmt srcPixFmt, HIDDT_StdPixFmt dstPixFmt, HIDDT_RGBConversionFunction function)
{
    struct pHidd_BitMap_SetRGBConversionFunction p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_SetRGBConversionFunction;
    p.srcPixFmt = srcPixFmt;
    p.dstPixFmt = dstPixFmt;
    p.function = function;
    return (HIDDT_RGBConversionFunction)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_UpdateRect
{
    OOP_MethodID mID;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_BM_UpdateRect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_UpdateRect_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_UpdateRect_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_BitMap_UpdateRect p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_UpdateRect;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_LockBuffer
{
    OOP_MethodID mID;
    ULONG buffer;
    UBYTE **addressReturn;
    ULONG *pitchReturn;
    ULONG *planeOffsets;
};

#define HIDD_BM_LockBuffer(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_LockBuffer_(HiddBitMapBase, __obj ,##args); })

static inline BOOL HIDD_BM_LockBuffer_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, ULONG buffer, UBYTE **addressReturn, ULONG *pitchReturn, ULONG *planeOffsets)
{
    struct pHidd_BitMap_LockBuffer p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_LockBuffer;
    p.buffer = buffer;
    p.addressReturn = addressReturn;
    p.pitchReturn = pitchReturn;
    p.planeOffsets = planeOffsets;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_UnlockBuffer
{
    OOP_MethodID mID;
    ULONG buffer;
    struct Rectangle *dirty;
};

#define HIDD_BM_UnlockBuffer(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_UnlockBuffer_(HiddBitMapBase, __obj ,##args); })

static inline VOID HIDD_BM_UnlockBuffer_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, ULONG buffer, struct Rectangle *dirty)
{
    struct pHidd_BitMap_UnlockBuffer p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_UnlockBuffer;
    p.buffer = buffer;
    p.dirty = dirty;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_SwapBuffers
{
    OOP_MethodID mID;
    ULONG newFront;
    ULONG flags;
};

#define HIDD_BM_SwapBuffers(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_SwapBuffers_(HiddBitMapBase, __obj ,##args); })

static inline BOOL HIDD_BM_SwapBuffers_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, ULONG newFront, ULONG flags)
{
    struct pHidd_BitMap_SwapBuffers p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_SwapBuffers;
    p.newFront = newFront;
    p.flags = flags;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BitMap_GetBufferHandle
{
    OOP_MethodID mID;
    ULONG buffer;
};

#define HIDD_BM_GetBufferHandle(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BM_GetBufferHandle_(HiddBitMapBase, __obj ,##args); })

static inline IPTR HIDD_BM_GetBufferHandle_(OOP_MethodID __HiddBitMapBase, OOP_Object *__obj, ULONG buffer)
{
    struct pHidd_BitMap_GetBufferHandle p;
    p.mID = __HiddBitMapBase + moHidd_BitMap_GetBufferHandle;
    p.buffer = buffer;
    return (IPTR)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_BitMap_H */
