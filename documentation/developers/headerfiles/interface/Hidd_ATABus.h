#ifndef INTERFACE_Hidd_ATABus_H
#define INTERFACE_Hidd_ATABus_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/ata/ata.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_ATABus
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_ATABus                      "hidd.ata.bus"

#if !defined(HiddATABusBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_ATABus_NOMETHODBASE__)
#define HiddATABusBase Hidd_ATABus_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_ATABus_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_ATABus_mid;
    if (!Hidd_ATABus_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_ATABus_mid = OOP_GetMethodID(IID_Hidd_ATABus, 0);
    }
    return Hidd_ATABus_mid;
}
#endif

#define HiddATABusAB                     __IHidd_ATABus

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_ATABus_NOATTRBASE__)
extern OOP_AttrBase HiddATABusAB;
#endif

enum
{
    aoHidd_ATABus_Use80Wire = 0,  /*       [..G] Tells if this bus uses 80-conductor cable */
    aoHidd_ATABus_Use32Bit = 1,  /*        [..G] Tells if this bus is 32-bit capable */
    aoHidd_ATABus_UseDMA = 2,  /*          [..G] Tells if this bus is DMA-capable */
    aoHidd_ATABus_PIODataSize = 3,  /*     [I..] Size of PIO interface data structure */
    aoHidd_ATABus_DMADataSize = 4,  /*     [I..] Size of DMA interface data structure */
    aoHidd_ATABus_BusVectors = 5,  /*      [I..] PIO interface control function table */
    aoHidd_ATABus_PIOVectors = 6,  /*      [I..] PIO interface transfer function table */
    aoHidd_ATABus_DMAVectors = 7,  /*      [I..] DMA interface function table */
    aoHidd_ATABus_UseIOAlt = 8,  /*        [..G] Tells if this bus supports alternate register bank */
    aoHidd_ATABus_CanSetXferMode = 9,  /*  [..G] Tells if transfer mode change is supported */
    aoHidd_ATABus_Controller = 10,  /*      [.SG] (private) set/get the bus controller. */
    num_Hidd_ATABus_Attrs = 11,
};

#define aHidd_ATABus_Use80Wire                        (HiddATABusAB + aoHidd_ATABus_Use80Wire)
#define aHidd_ATABus_Use32Bit                         (HiddATABusAB + aoHidd_ATABus_Use32Bit)
#define aHidd_ATABus_UseDMA                           (HiddATABusAB + aoHidd_ATABus_UseDMA)
#define aHidd_ATABus_PIODataSize                      (HiddATABusAB + aoHidd_ATABus_PIODataSize)
#define aHidd_ATABus_DMADataSize                      (HiddATABusAB + aoHidd_ATABus_DMADataSize)
#define aHidd_ATABus_BusVectors                       (HiddATABusAB + aoHidd_ATABus_BusVectors)
#define aHidd_ATABus_PIOVectors                       (HiddATABusAB + aoHidd_ATABus_PIOVectors)
#define aHidd_ATABus_DMAVectors                       (HiddATABusAB + aoHidd_ATABus_DMAVectors)
#define aHidd_ATABus_UseIOAlt                         (HiddATABusAB + aoHidd_ATABus_UseIOAlt)
#define aHidd_ATABus_CanSetXferMode                   (HiddATABusAB + aoHidd_ATABus_CanSetXferMode)
#define aHidd_ATABus_Controller                       (HiddATABusAB + aoHidd_ATABus_Controller)

#define Hidd_ATABus_Switch(attr, idx) \
if (((idx) = (attr) - HiddATABusAB) < num_Hidd_ATABus_Attrs) \
switch (idx)


enum {
    moHidd_ATABus_GetPIOInterface = 0,
    moHidd_ATABus_GetDMAInterface = 1,
    moHidd_ATABus_SetXferMode = 2,
    moHidd_ATABus_Shutdown = 3,
    num_Hidd_ATABus_Methods = 4
};

struct pHidd_ATABus_GetPIOInterface
{
    OOP_MethodID mID;
};

#define HIDD_ATABus_GetPIOInterface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_ATABus_GetPIOInterface_(HiddATABusBase, __obj ,##args); })

static inline APTR HIDD_ATABus_GetPIOInterface_(OOP_MethodID __HiddATABusBase, OOP_Object *__obj)
{
    struct pHidd_ATABus_GetPIOInterface p;
    p.mID = __HiddATABusBase + moHidd_ATABus_GetPIOInterface;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_ATABus_GetDMAInterface
{
    OOP_MethodID mID;
};

#define HIDD_ATABus_GetDMAInterface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_ATABus_GetDMAInterface_(HiddATABusBase, __obj ,##args); })

static inline APTR HIDD_ATABus_GetDMAInterface_(OOP_MethodID __HiddATABusBase, OOP_Object *__obj)
{
    struct pHidd_ATABus_GetDMAInterface p;
    p.mID = __HiddATABusBase + moHidd_ATABus_GetDMAInterface;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_ATABus_SetXferMode
{
    OOP_MethodID mID;
    UBYTE unit;
    ata_XferMode mode;
};

#define HIDD_ATABus_SetXferMode(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_ATABus_SetXferMode_(HiddATABusBase, __obj ,##args); })

static inline BOOL HIDD_ATABus_SetXferMode_(OOP_MethodID __HiddATABusBase, OOP_Object *__obj, UBYTE unit, ata_XferMode mode)
{
    struct pHidd_ATABus_SetXferMode p;
    p.mID = __HiddATABusBase + moHidd_ATABus_SetXferMode;
    p.unit = unit;
    p.mode = mode;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_ATABus_Shutdown
{
    OOP_MethodID mID;
};

#define HIDD_ATABus_Shutdown(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_ATABus_Shutdown_(HiddATABusBase, __obj ,##args); })

static inline void HIDD_ATABus_Shutdown_(OOP_MethodID __HiddATABusBase, OOP_Object *__obj)
{
    struct pHidd_ATABus_Shutdown p;
    p.mID = __HiddATABusBase + moHidd_ATABus_Shutdown;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_ATABus_H */
