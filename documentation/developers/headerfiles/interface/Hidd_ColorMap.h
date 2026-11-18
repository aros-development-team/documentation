#ifndef INTERFACE_Hidd_ColorMap_H
#define INTERFACE_Hidd_ColorMap_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_ColorMap
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_ColorMap                    "hidd.gfx.colormap"

#if !defined(HiddColorMapBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_ColorMap_NOMETHODBASE__)
#define HiddColorMapBase Hidd_ColorMap_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_ColorMap_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_ColorMap_mid;
    if (!Hidd_ColorMap_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_ColorMap_mid = OOP_GetMethodID(IID_Hidd_ColorMap, 0);
    }
    return Hidd_ColorMap_mid;
}
#endif

#define HiddColorMapAttrBase             __IHidd_ColorMap

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_ColorMap_NOATTRBASE__)
extern OOP_AttrBase HiddColorMapAttrBase;
#endif

enum
{
    aoHidd_ColorMap_NumEntries = 0,  /*  [I.G] Number of colors in the colormap */
    num_Hidd_ColorMap_Attrs = 1,
};

#define aHidd_ColorMap_NumEntries                       (HiddColorMapAttrBase + aoHidd_ColorMap_NumEntries)

#define Hidd_ColorMap_Switch(attr, idx) \
if (((idx) = (attr) - HiddColorMapAttrBase) < num_Hidd_ColorMap_Attrs) \
switch (idx)


enum {
    moHidd_ColorMap_SetColors = 0,
    moHidd_ColorMap_GetPixel = 1,
    moHidd_ColorMap_GetColor = 2,
    num_Hidd_ColorMap_Methods = 3
};

struct pHidd_ColorMap_SetColors
{
    OOP_MethodID mID;
    HIDDT_Color *colors;
    UWORD firstColor;
    UWORD numColors;
    OOP_Object *pixFmt;
};

#define HIDD_CM_SetColors(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_CM_SetColors_(HiddColorMapBase, __obj ,##args); })

static inline BOOL HIDD_CM_SetColors_(OOP_MethodID __HiddColorMapBase, OOP_Object *__obj, HIDDT_Color *colors, UWORD firstColor, UWORD numColors, OOP_Object *pixFmt)
{
    struct pHidd_ColorMap_SetColors p;
    p.mID = __HiddColorMapBase + moHidd_ColorMap_SetColors;
    p.colors = colors;
    p.firstColor = firstColor;
    p.numColors = numColors;
    p.pixFmt = pixFmt;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_ColorMap_GetPixel
{
    OOP_MethodID mID;
    ULONG pixelNo;
};

#define HIDD_CM_GetPixel(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_CM_GetPixel_(HiddColorMapBase, __obj ,##args); })

static inline HIDDT_Pixel HIDD_CM_GetPixel_(OOP_MethodID __HiddColorMapBase, OOP_Object *__obj, ULONG pixelNo)
{
    struct pHidd_ColorMap_GetPixel p;
    p.mID = __HiddColorMapBase + moHidd_ColorMap_GetPixel;
    p.pixelNo = pixelNo;
    return (HIDDT_Pixel)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_ColorMap_GetColor
{
    OOP_MethodID mID;
    ULONG colorNo;
    HIDDT_Color *colorReturn;
};

#define HIDD_CM_GetColor(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_CM_GetColor_(HiddColorMapBase, __obj ,##args); })

static inline BOOL HIDD_CM_GetColor_(OOP_MethodID __HiddColorMapBase, OOP_Object *__obj, ULONG colorNo, HIDDT_Color *colorReturn)
{
    struct pHidd_ColorMap_GetColor p;
    p.mID = __HiddColorMapBase + moHidd_ColorMap_GetColor;
    p.colorNo = colorNo;
    p.colorReturn = colorReturn;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_ColorMap_H */
