#ifndef INTERFACE_Hidd_PlanarBM_H
#define INTERFACE_Hidd_PlanarBM_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_PlanarBM
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_PlanarBM                    "hidd.gfx.bitmap.planarbm"

#if !defined(HiddPlanarBMBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_PlanarBM_NOMETHODBASE__)
#define HiddPlanarBMBase Hidd_PlanarBM_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_PlanarBM_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_PlanarBM_mid;
    if (!Hidd_PlanarBM_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_PlanarBM_mid = OOP_GetMethodID(IID_Hidd_PlanarBM, 0);
    }
    return Hidd_PlanarBM_mid;
}
#endif

#define HiddPlanarBMAttrBase             __IHidd_PlanarBM

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_PlanarBM_NOATTRBASE__)
extern OOP_AttrBase HiddPlanarBMAttrBase;
#endif

enum
{
    aoHidd_PlanarBM_AllocPlanes = 0,
    aoHidd_PlanarBM_BitMap = 1,
    aoHidd_PlanarBM_Interleaved = 2,
    num_Hidd_PlanarBM_Attrs = 3,
};

#define aHidd_PlanarBM_AllocPlanes                      (HiddPlanarBMAttrBase + aoHidd_PlanarBM_AllocPlanes)
#define aHidd_PlanarBM_BitMap                           (HiddPlanarBMAttrBase + aoHidd_PlanarBM_BitMap)
#define aHidd_PlanarBM_Interleaved                      (HiddPlanarBMAttrBase + aoHidd_PlanarBM_Interleaved)

#define Hidd_PlanarBM_Switch(attr, idx) \
if (((idx) = (attr) - HiddPlanarBMAttrBase) < num_Hidd_PlanarBM_Attrs) \
switch (idx)


enum {
    moHidd_PlanarBM_SetBitMap = 0,
    moHidd_PlanarBM_GetBitMap = 1,
    num_Hidd_PlanarBM_Methods = 2
};

struct pHidd_PlanarBM_SetBitMap
{
    OOP_MethodID mID;
    struct BitMap *bitMap;
};

#define HIDD_PlanarBM_SetBitMap(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PlanarBM_SetBitMap_(HiddPlanarBMBase, __obj ,##args); })

static inline BOOL HIDD_PlanarBM_SetBitMap_(OOP_MethodID __HiddPlanarBMBase, OOP_Object *__obj, struct BitMap *bitMap)
{
    struct pHidd_PlanarBM_SetBitMap p;
    p.mID = __HiddPlanarBMBase + moHidd_PlanarBM_SetBitMap;
    p.bitMap = bitMap;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PlanarBM_GetBitMap
{
    OOP_MethodID mID;
    struct BitMap *bitMap;
};

#define HIDD_PlanarBM_GetBitMap(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PlanarBM_GetBitMap_(HiddPlanarBMBase, __obj ,##args); })

static inline BOOL HIDD_PlanarBM_GetBitMap_(OOP_MethodID __HiddPlanarBMBase, OOP_Object *__obj, struct BitMap *bitMap)
{
    struct pHidd_PlanarBM_GetBitMap p;
    p.mID = __HiddPlanarBMBase + moHidd_PlanarBM_GetBitMap;
    p.bitMap = bitMap;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_PlanarBM_H */
