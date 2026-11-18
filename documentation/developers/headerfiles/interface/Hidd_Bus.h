#ifndef INTERFACE_Hidd_Bus_H
#define INTERFACE_Hidd_Bus_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/bus/bus.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Bus
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Bus                         "hidd.bus"

#if !defined(HiddBusBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Bus_NOMETHODBASE__)
#define HiddBusBase Hidd_Bus_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Bus_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Bus_mid;
    if (!Hidd_Bus_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Bus_mid = OOP_GetMethodID(IID_Hidd_Bus, 0);
    }
    return Hidd_Bus_mid;
}
#endif

#define HiddBusAB                        __IHidd_Bus

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Bus_NOATTRBASE__)
extern OOP_AttrBase HiddBusAB;
#endif

enum
{
    aoHidd_Bus_MaxUnits = 0,  /*       [..G] number */
    aoHidd_Bus_IRQHandler = 1,  /*     [.S.] Pointer to IRQ handler function */
    aoHidd_Bus_IRQData = 2,  /*        [.S.] Caller-supplied data to pass to IRQ handler */
    aoHidd_Bus_KeepEmpty = 3,  /*      [I..] Tells if the empty bus should be kept */
    num_Hidd_Bus_Attrs = 4,
};

#define aHidd_Bus_MaxUnits                         (HiddBusAB + aoHidd_Bus_MaxUnits)
#define aHidd_Bus_IRQHandler                       (HiddBusAB + aoHidd_Bus_IRQHandler)
#define aHidd_Bus_IRQData                          (HiddBusAB + aoHidd_Bus_IRQData)
#define aHidd_Bus_KeepEmpty                        (HiddBusAB + aoHidd_Bus_KeepEmpty)

#define Hidd_Bus_Switch(attr, idx) \
if (((idx) = (attr) - HiddBusAB) < num_Hidd_Bus_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_Bus_H */
