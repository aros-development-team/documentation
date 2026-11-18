#ifndef INTERFACE_Hidd_AHCIBus_H
#define INTERFACE_Hidd_AHCIBus_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/ahci/ahci.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_AHCIBus
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_AHCIBus                     "hidd.ahci.bus"

#if !defined(HiddAHCIBusBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_AHCIBus_NOMETHODBASE__)
#define HiddAHCIBusBase Hidd_AHCIBus_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_AHCIBus_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_AHCIBus_mid;
    if (!Hidd_AHCIBus_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_AHCIBus_mid = OOP_GetMethodID(IID_Hidd_AHCIBus, 0);
    }
    return Hidd_AHCIBus_mid;
}
#endif


#define Hidd_AHCIBus_Switch(attr, idx) \
if (((idx) = (attr) - HiddAHCIBusAB) < num_Hidd_AHCIBus_Attrs) \
switch (idx)


enum {
    moHidd_AHCIBus_Shutdown = 0,
    num_Hidd_AHCIBus_Methods = 1
};

struct pHidd_AHCIBus_Shutdown
{
    OOP_MethodID mID;
};

#define HIDD_AHCIBus_Shutdown(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_AHCIBus_Shutdown_(HiddAHCIBusBase, __obj ,##args); })

static inline void HIDD_AHCIBus_Shutdown_(OOP_MethodID __HiddAHCIBusBase, OOP_Object *__obj)
{
    struct pHidd_AHCIBus_Shutdown p;
    p.mID = __HiddAHCIBusBase + moHidd_AHCIBus_Shutdown;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_AHCIBus_H */
