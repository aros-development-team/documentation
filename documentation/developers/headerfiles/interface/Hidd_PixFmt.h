#ifndef INTERFACE_Hidd_PixFmt_H
#define INTERFACE_Hidd_PixFmt_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_PixFmt
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_PixFmt                      "hidd.gfx.pixfmt"

#if !defined(HiddPixFmtBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_PixFmt_NOMETHODBASE__)
#define HiddPixFmtBase Hidd_PixFmt_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_PixFmt_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_PixFmt_mid;
    if (!Hidd_PixFmt_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_PixFmt_mid = OOP_GetMethodID(IID_Hidd_PixFmt, 0);
    }
    return Hidd_PixFmt_mid;
}
#endif

#define HiddPixFmtAttrBase               __IHidd_PixFmt

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_PixFmt_NOATTRBASE__)
extern OOP_AttrBase HiddPixFmtAttrBase;
#endif

enum
{
    aoHidd_PixFmt_ColorModel = 0,
    aoHidd_PixFmt_RedShift = 1,
    aoHidd_PixFmt_GreenShift = 2,
    aoHidd_PixFmt_BlueShift = 3,
    aoHidd_PixFmt_AlphaShift = 4,
    aoHidd_PixFmt_RedMask = 5,
    aoHidd_PixFmt_GreenMask = 6,
    aoHidd_PixFmt_BlueMask = 7,
    aoHidd_PixFmt_AlphaMask = 8,
    aoHidd_PixFmt_Depth = 9,
    aoHidd_PixFmt_BitsPerPixel = 10,
    aoHidd_PixFmt_BytesPerPixel = 11,
    aoHidd_PixFmt_StdPixFmt = 12,
    aoHidd_PixFmt_CLUTMask = 13,
    aoHidd_PixFmt_CLUTShift = 14,
    aoHidd_PixFmt_BitMapType = 15,
    aoHidd_PixFmt_SwapPixelBytes = 16,
    aoHidd_PixFmt_CgxPixFmt = 17,
    num_Hidd_PixFmt_Attrs = 18,
};

#define aHidd_PixFmt_ColorModel                       (HiddPixFmtAttrBase + aoHidd_PixFmt_ColorModel)
#define aHidd_PixFmt_RedShift                         (HiddPixFmtAttrBase + aoHidd_PixFmt_RedShift)
#define aHidd_PixFmt_GreenShift                       (HiddPixFmtAttrBase + aoHidd_PixFmt_GreenShift)
#define aHidd_PixFmt_BlueShift                        (HiddPixFmtAttrBase + aoHidd_PixFmt_BlueShift)
#define aHidd_PixFmt_AlphaShift                       (HiddPixFmtAttrBase + aoHidd_PixFmt_AlphaShift)
#define aHidd_PixFmt_RedMask                          (HiddPixFmtAttrBase + aoHidd_PixFmt_RedMask)
#define aHidd_PixFmt_GreenMask                        (HiddPixFmtAttrBase + aoHidd_PixFmt_GreenMask)
#define aHidd_PixFmt_BlueMask                         (HiddPixFmtAttrBase + aoHidd_PixFmt_BlueMask)
#define aHidd_PixFmt_AlphaMask                        (HiddPixFmtAttrBase + aoHidd_PixFmt_AlphaMask)
#define aHidd_PixFmt_Depth                            (HiddPixFmtAttrBase + aoHidd_PixFmt_Depth)
#define aHidd_PixFmt_BitsPerPixel                     (HiddPixFmtAttrBase + aoHidd_PixFmt_BitsPerPixel)
#define aHidd_PixFmt_BytesPerPixel                    (HiddPixFmtAttrBase + aoHidd_PixFmt_BytesPerPixel)
#define aHidd_PixFmt_StdPixFmt                        (HiddPixFmtAttrBase + aoHidd_PixFmt_StdPixFmt)
#define aHidd_PixFmt_CLUTMask                         (HiddPixFmtAttrBase + aoHidd_PixFmt_CLUTMask)
#define aHidd_PixFmt_CLUTShift                        (HiddPixFmtAttrBase + aoHidd_PixFmt_CLUTShift)
#define aHidd_PixFmt_BitMapType                       (HiddPixFmtAttrBase + aoHidd_PixFmt_BitMapType)
#define aHidd_PixFmt_SwapPixelBytes                   (HiddPixFmtAttrBase + aoHidd_PixFmt_SwapPixelBytes)
#define aHidd_PixFmt_CgxPixFmt                        (HiddPixFmtAttrBase + aoHidd_PixFmt_CgxPixFmt)

#define Hidd_PixFmt_Switch(attr, idx) \
if (((idx) = (attr) - HiddPixFmtAttrBase) < num_Hidd_PixFmt_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_PixFmt_H */
