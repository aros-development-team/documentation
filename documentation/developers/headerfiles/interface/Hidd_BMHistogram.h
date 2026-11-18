#ifndef INTERFACE_Hidd_BMHistogram_H
#define INTERFACE_Hidd_BMHistogram_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_BMHistogram
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_BMHistogram                 "hidd.gfx.bmhistogram"

#if !defined(HiddBMHistogramBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_BMHistogram_NOMETHODBASE__)
#define HiddBMHistogramBase Hidd_BMHistogram_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_BMHistogram_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_BMHistogram_mid;
    if (!Hidd_BMHistogram_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_BMHistogram_mid = OOP_GetMethodID(IID_Hidd_BMHistogram, 0);
    }
    return Hidd_BMHistogram_mid;
}
#endif

#define HiddBMHistogramAttrBase          __IHidd_BMHistogram

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_BMHistogram_NOATTRBASE__)
extern OOP_AttrBase HiddBMHistogramAttrBase;
#endif

enum
{
    aoHidd_BMHistogram_BitMap = 0,  /*  [I..] BitMap object the histogram represents */
    aoHidd_BMHistogram_NumEntries = 1,  /*  [..G] no. of entries in the histogram.. */
    num_Hidd_BMHistogram_Attrs = 2,
};

#define aHidd_BMHistogram_BitMap                           (HiddBMHistogramAttrBase + aoHidd_BMHistogram_BitMap)
#define aHidd_BMHistogram_NumEntries                       (HiddBMHistogramAttrBase + aoHidd_BMHistogram_NumEntries)

#define Hidd_BMHistogram_Switch(attr, idx) \
if (((idx) = (attr) - HiddBMHistogramAttrBase) < num_Hidd_BMHistogram_Attrs) \
switch (idx)


enum {
    moHidd_BMHistogram_AddColorEntry = 0,
    moHidd_BMHistogram_FindColorEntry = 1,
    moHidd_BMHistogram_GetEntryColor = 2,
    moHidd_BMHistogram_GetEntryUseCount = 3,
    moHidd_BMHistogram_Sort = 4,
    num_Hidd_BMHistogram_Methods = 5
};

struct pHidd_BMHistogram_AddColorEntry
{
    OOP_MethodID mID;
    HIDDT_Color *color;
    ULONG count;
};

#define HIDD_BMHISTOGRAM_AddColorEntry(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BMHISTOGRAM_AddColorEntry_(HiddBMHistogramBase, __obj ,##args); })

static inline APTR HIDD_BMHISTOGRAM_AddColorEntry_(OOP_MethodID __HiddBMHistogramBase, OOP_Object *__obj, HIDDT_Color *color, ULONG count)
{
    struct pHidd_BMHistogram_AddColorEntry p;
    p.mID = __HiddBMHistogramBase + moHidd_BMHistogram_AddColorEntry;
    p.color = color;
    p.count = count;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BMHistogram_FindColorEntry
{
    OOP_MethodID mID;
    HIDDT_Color *color;
    APTR *colentry;
};

#define HIDD_BMHISTOGRAM_FindColorEntry(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BMHISTOGRAM_FindColorEntry_(HiddBMHistogramBase, __obj ,##args); })

static inline IPTR HIDD_BMHISTOGRAM_FindColorEntry_(OOP_MethodID __HiddBMHistogramBase, OOP_Object *__obj, HIDDT_Color *color, APTR *colentry)
{
    struct pHidd_BMHistogram_FindColorEntry p;
    p.mID = __HiddBMHistogramBase + moHidd_BMHistogram_FindColorEntry;
    p.color = color;
    p.colentry = colentry;
    return (IPTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BMHistogram_GetEntryColor
{
    OOP_MethodID mID;
    APTR colentry;
    HIDDT_Color *color;
};

#define HIDD_BMHISTOGRAM_GetEntryColor(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BMHISTOGRAM_GetEntryColor_(HiddBMHistogramBase, __obj ,##args); })

static inline IPTR HIDD_BMHISTOGRAM_GetEntryColor_(OOP_MethodID __HiddBMHistogramBase, OOP_Object *__obj, APTR colentry, HIDDT_Color *color)
{
    struct pHidd_BMHistogram_GetEntryColor p;
    p.mID = __HiddBMHistogramBase + moHidd_BMHistogram_GetEntryColor;
    p.colentry = colentry;
    p.color = color;
    return (IPTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BMHistogram_GetEntryUseCount
{
    OOP_MethodID mID;
    APTR colentry;
};

#define HIDD_BMHISTOGRAM_GetEntryUseCount(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BMHISTOGRAM_GetEntryUseCount_(HiddBMHistogramBase, __obj ,##args); })

static inline ULONG HIDD_BMHISTOGRAM_GetEntryUseCount_(OOP_MethodID __HiddBMHistogramBase, OOP_Object *__obj, APTR colentry)
{
    struct pHidd_BMHistogram_GetEntryUseCount p;
    p.mID = __HiddBMHistogramBase + moHidd_BMHistogram_GetEntryUseCount;
    p.colentry = colentry;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_BMHistogram_Sort
{
    OOP_MethodID mID;
    struct TagItem *sorttags;
};

#define HIDD_BMHISTOGRAM_Sort(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_BMHISTOGRAM_Sort_(HiddBMHistogramBase, __obj ,##args); })

static inline VOID HIDD_BMHISTOGRAM_Sort_(OOP_MethodID __HiddBMHistogramBase, OOP_Object *__obj, struct TagItem *sorttags)
{
    struct pHidd_BMHistogram_Sort p;
    p.mID = __HiddBMHistogramBase + moHidd_BMHistogram_Sort;
    p.sorttags = sorttags;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_BMHistogram_H */
