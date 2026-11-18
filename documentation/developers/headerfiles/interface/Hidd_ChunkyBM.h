#ifndef INTERFACE_Hidd_ChunkyBM_H
#define INTERFACE_Hidd_ChunkyBM_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_ChunkyBM
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_ChunkyBM                    "hidd.gfx.bitmap.chunkybm"

#if !defined(HiddChunkyBMBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_ChunkyBM_NOMETHODBASE__)
#define HiddChunkyBMBase Hidd_ChunkyBM_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_ChunkyBM_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_ChunkyBM_mid;
    if (!Hidd_ChunkyBM_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_ChunkyBM_mid = OOP_GetMethodID(IID_Hidd_ChunkyBM, 0);
    }
    return Hidd_ChunkyBM_mid;
}
#endif

#define HiddChunkyBMAttrBase             __IHidd_ChunkyBM

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_ChunkyBM_NOATTRBASE__)
extern OOP_AttrBase HiddChunkyBMAttrBase;
#endif

enum
{
    aoHidd_ChunkyBM_Buffer = 0,
    num_Hidd_ChunkyBM_Attrs = 1,
};

#define aHidd_ChunkyBM_Buffer                           (HiddChunkyBMAttrBase + aoHidd_ChunkyBM_Buffer)

#define Hidd_ChunkyBM_Switch(attr, idx) \
if (((idx) = (attr) - HiddChunkyBMAttrBase) < num_Hidd_ChunkyBM_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_ChunkyBM_H */
