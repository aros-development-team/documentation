#ifndef INTERFACE_Hidd_StorageBus_H
#define INTERFACE_Hidd_StorageBus_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/storage/storage.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_StorageBus
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_StorageBus                  "hidd.storage.bus"

#if !defined(HiddStorageBusBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_StorageBus_NOMETHODBASE__)
#define HiddStorageBusBase Hidd_StorageBus_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_StorageBus_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_StorageBus_mid;
    if (!Hidd_StorageBus_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_StorageBus_mid = OOP_GetMethodID(IID_Hidd_StorageBus, 0);
    }
    return Hidd_StorageBus_mid;
}
#endif


#define Hidd_StorageBus_Switch(attr, idx) \
if (((idx) = (attr) - HiddStorageBusAB) < num_Hidd_StorageBus_Attrs) \
switch (idx)


enum {
    moHidd_StorageBus_EnumUnits = 0,
    num_Hidd_StorageBus_Methods = 1
};

struct pHidd_StorageBus_EnumUnits
{
    OOP_MethodID mID;
    struct Hook *callback;
    APTR hookMsg;
};

#define HIDD_StorageBus_EnumUnits(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_StorageBus_EnumUnits_(HiddStorageBusBase, __obj ,##args); })

static inline VOID HIDD_StorageBus_EnumUnits_(OOP_MethodID __HiddStorageBusBase, OOP_Object *__obj, struct Hook *callback, APTR hookMsg)
{
    struct pHidd_StorageBus_EnumUnits p;
    p.mID = __HiddStorageBusBase + moHidd_StorageBus_EnumUnits;
    p.callback = callback;
    p.hookMsg = hookMsg;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_StorageBus_H */
