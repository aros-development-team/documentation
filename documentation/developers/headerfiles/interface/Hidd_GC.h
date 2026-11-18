#ifndef INTERFACE_Hidd_GC_H
#define INTERFACE_Hidd_GC_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_GC
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_GC                          "hidd.gfx.gc"

#if !defined(HiddGCBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_GC_NOMETHODBASE__)
#define HiddGCBase Hidd_GC_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_GC_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_GC_mid;
    if (!Hidd_GC_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_GC_mid = OOP_GetMethodID(IID_Hidd_GC, 0);
    }
    return Hidd_GC_mid;
}
#endif

#define HiddGCAttrBase                   __IHidd_GC

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_GC_NOATTRBASE__)
extern OOP_AttrBase HiddGCAttrBase;
#endif

enum
{
    aoHidd_GC_Foreground = 2,  /*  [.SG] Foreground color */
    aoHidd_GC_Background = 3,  /*  [.SG] Background color */
    aoHidd_GC_DrawMode = 4,  /*  [.SG] Draw mode  */
    aoHidd_GC_ColorMask = 6,  /*  [.SG] Prevents some color bits from changing */
    aoHidd_GC_LinePattern = 7,  /*  [.SG] Pattern for line drawing */
    aoHidd_GC_LinePatternCnt = 8,  /*  [.SG] Pattern start bit for line drawing */
    aoHidd_GC_ColorExpansionMode = 10,  /*  [.SG] Mode for color expansion  */
    num_Hidd_GC_Attrs = 11,
};

#define aHidd_GC_Foreground                       (HiddGCAttrBase + aoHidd_GC_Foreground)
#define aHidd_GC_Background                       (HiddGCAttrBase + aoHidd_GC_Background)
#define aHidd_GC_DrawMode                         (HiddGCAttrBase + aoHidd_GC_DrawMode)
#define aHidd_GC_ColorMask                        (HiddGCAttrBase + aoHidd_GC_ColorMask)
#define aHidd_GC_LinePattern                      (HiddGCAttrBase + aoHidd_GC_LinePattern)
#define aHidd_GC_LinePatternCnt                   (HiddGCAttrBase + aoHidd_GC_LinePatternCnt)
#define aHidd_GC_ColorExpansionMode               (HiddGCAttrBase + aoHidd_GC_ColorExpansionMode)

#define Hidd_GC_Switch(attr, idx) \
if (((idx) = (attr) - HiddGCAttrBase) < num_Hidd_GC_Attrs) \
switch (idx)


enum {
    moHidd_GC_SetClipRect = 0,
    moHidd_GC_UnsetClipRect = 1,
    num_Hidd_GC_Methods = 2
};

struct pHidd_GC_SetClipRect
{
    OOP_MethodID mID;
    WORD x1;
    WORD y1;
    WORD x2;
    WORD y2;
};

#define HIDD_GC_SetClipRect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_GC_SetClipRect_(HiddGCBase, __obj ,##args); })

static inline VOID HIDD_GC_SetClipRect_(OOP_MethodID __HiddGCBase, OOP_Object *__obj, WORD x1, WORD y1, WORD x2, WORD y2)
{
    struct pHidd_GC_SetClipRect p;
    p.mID = __HiddGCBase + moHidd_GC_SetClipRect;
    p.x1 = x1;
    p.y1 = y1;
    p.x2 = x2;
    p.y2 = y2;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_GC_UnsetClipRect
{
    OOP_MethodID mID;
};

#define HIDD_GC_UnsetClipRect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_GC_UnsetClipRect_(HiddGCBase, __obj ,##args); })

static inline VOID HIDD_GC_UnsetClipRect_(OOP_MethodID __HiddGCBase, OOP_Object *__obj)
{
    struct pHidd_GC_UnsetClipRect p;
    p.mID = __HiddGCBase + moHidd_GC_UnsetClipRect;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_GC_H */
