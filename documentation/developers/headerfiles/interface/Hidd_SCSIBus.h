#ifndef INTERFACE_Hidd_SCSIBus_H
#define INTERFACE_Hidd_SCSIBus_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/scsi/scsi.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_SCSIBus
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_SCSIBus                     "hidd.scsi.bus"

#if !defined(HiddSCSIBusBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_SCSIBus_NOMETHODBASE__)
#define HiddSCSIBusBase Hidd_SCSIBus_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_SCSIBus_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_SCSIBus_mid;
    if (!Hidd_SCSIBus_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_SCSIBus_mid = OOP_GetMethodID(IID_Hidd_SCSIBus, 0);
    }
    return Hidd_SCSIBus_mid;
}
#endif

#define HiddSCSIBusAB                    __IHidd_SCSIBus

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_SCSIBus_NOATTRBASE__)
extern OOP_AttrBase HiddSCSIBusAB;
#endif

enum
{
    aoHidd_SCSIBus_Use80Wire = 0,  /*       [..G] Tells if this bus uses 80-conductor cable */
    aoHidd_SCSIBus_Use32Bit = 1,  /*        [..G] Tells if this bus is 32-bit capable */
    aoHidd_SCSIBus_UseDMA = 2,  /*          [..G] Tells if this bus is DMA-capable */
    aoHidd_SCSIBus_PIODataSize = 3,  /*     [I..] Size of PIO interface data structure */
    aoHidd_SCSIBus_DMADataSize = 4,  /*     [I..] Size of DMA interface data structure */
    aoHidd_SCSIBus_BusVectors = 5,  /*      [I..] PIO interface control function table */
    aoHidd_SCSIBus_PIOVectors = 6,  /*      [I..] PIO interface transfer function table */
    aoHidd_SCSIBus_DMAVectors = 7,  /*      [I..] DMA interface function table */
    aoHidd_SCSIBus_UseIOAlt = 8,  /*        [..G} Tells if this bus supports alternate register bank */
    aoHidd_SCSIBus_CanSetXferMode = 9,  /*  [..G} Tells if transfer mode change is supported */
    num_Hidd_SCSIBus_Attrs = 10,
};

#define aHidd_SCSIBus_Use80Wire                        (HiddSCSIBusAB + aoHidd_SCSIBus_Use80Wire)
#define aHidd_SCSIBus_Use32Bit                         (HiddSCSIBusAB + aoHidd_SCSIBus_Use32Bit)
#define aHidd_SCSIBus_UseDMA                           (HiddSCSIBusAB + aoHidd_SCSIBus_UseDMA)
#define aHidd_SCSIBus_PIODataSize                      (HiddSCSIBusAB + aoHidd_SCSIBus_PIODataSize)
#define aHidd_SCSIBus_DMADataSize                      (HiddSCSIBusAB + aoHidd_SCSIBus_DMADataSize)
#define aHidd_SCSIBus_BusVectors                       (HiddSCSIBusAB + aoHidd_SCSIBus_BusVectors)
#define aHidd_SCSIBus_PIOVectors                       (HiddSCSIBusAB + aoHidd_SCSIBus_PIOVectors)
#define aHidd_SCSIBus_DMAVectors                       (HiddSCSIBusAB + aoHidd_SCSIBus_DMAVectors)
#define aHidd_SCSIBus_UseIOAlt                         (HiddSCSIBusAB + aoHidd_SCSIBus_UseIOAlt)
#define aHidd_SCSIBus_CanSetXferMode                   (HiddSCSIBusAB + aoHidd_SCSIBus_CanSetXferMode)

#define Hidd_SCSIBus_Switch(attr, idx) \
if (((idx) = (attr) - HiddSCSIBusAB) < num_Hidd_SCSIBus_Attrs) \
switch (idx)


enum {
    moHidd_SCSIBus_GetPIOInterface = 0,
    moHidd_SCSIBus_GetDMAInterface = 1,
    moHidd_SCSIBus_SetXferMode = 2,
    moHidd_SCSIBus_Shutdown = 3,
    num_Hidd_SCSIBus_Methods = 4
};

struct pHidd_SCSIBus_GetPIOInterface
{
    OOP_MethodID mID;
};

#define HIDD_SCSIBus_GetPIOInterface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_SCSIBus_GetPIOInterface_(HiddSCSIBusBase, __obj ,##args); })

static inline APTR HIDD_SCSIBus_GetPIOInterface_(OOP_MethodID __HiddSCSIBusBase, OOP_Object *__obj)
{
    struct pHidd_SCSIBus_GetPIOInterface p;
    p.mID = __HiddSCSIBusBase + moHidd_SCSIBus_GetPIOInterface;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_SCSIBus_GetDMAInterface
{
    OOP_MethodID mID;
};

#define HIDD_SCSIBus_GetDMAInterface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_SCSIBus_GetDMAInterface_(HiddSCSIBusBase, __obj ,##args); })

static inline APTR HIDD_SCSIBus_GetDMAInterface_(OOP_MethodID __HiddSCSIBusBase, OOP_Object *__obj)
{
    struct pHidd_SCSIBus_GetDMAInterface p;
    p.mID = __HiddSCSIBusBase + moHidd_SCSIBus_GetDMAInterface;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_SCSIBus_SetXferMode
{
    OOP_MethodID mID;
    UBYTE unit;
    scsi_XferMode mode;
};

#define HIDD_SCSIBus_SetXferMode(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_SCSIBus_SetXferMode_(HiddSCSIBusBase, __obj ,##args); })

static inline BOOL HIDD_SCSIBus_SetXferMode_(OOP_MethodID __HiddSCSIBusBase, OOP_Object *__obj, UBYTE unit, scsi_XferMode mode)
{
    struct pHidd_SCSIBus_SetXferMode p;
    p.mID = __HiddSCSIBusBase + moHidd_SCSIBus_SetXferMode;
    p.unit = unit;
    p.mode = mode;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_SCSIBus_Shutdown
{
    OOP_MethodID mID;
};

#define HIDD_SCSIBus_Shutdown(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_SCSIBus_Shutdown_(HiddSCSIBusBase, __obj ,##args); })

static inline void HIDD_SCSIBus_Shutdown_(OOP_MethodID __HiddSCSIBusBase, OOP_Object *__obj)
{
    struct pHidd_SCSIBus_Shutdown p;
    p.mID = __HiddSCSIBusBase + moHidd_SCSIBus_Shutdown;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_SCSIBus_H */
