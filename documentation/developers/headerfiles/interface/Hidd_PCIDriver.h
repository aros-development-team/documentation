#ifndef INTERFACE_Hidd_PCIDriver_H
#define INTERFACE_Hidd_PCIDriver_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/pci/pci.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_PCIDriver
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_PCIDriver                   "hidd.pci.driver"

#if !defined(HiddPCIDriverBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_PCIDriver_NOMETHODBASE__)
#define HiddPCIDriverBase Hidd_PCIDriver_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_PCIDriver_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_PCIDriver_mid;
    if (!Hidd_PCIDriver_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_PCIDriver_mid = OOP_GetMethodID(IID_Hidd_PCIDriver, 0);
    }
    return Hidd_PCIDriver_mid;
}
#endif

#define HiddPCIDriverAttrBase            __IHidd_PCIDriver

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_PCIDriver_NOATTRBASE__)
extern OOP_AttrBase HiddPCIDriverAttrBase;
#endif

enum
{
    aoHidd_PCIDriver_DirectBus = 0,  /*  [..G] DirectBus shows whether CPUtoPCI and PCItoCPU methods are usable */
    aoHidd_PCIDriver_IOBase = 1,  /*  [..G] Offset to host IO space */
    aoHidd_PCIDriver_IRQRoutingTable = 2,  /*  [..G] Get IRQ routing table for that driver, if available */
    aoHidd_PCIDriver_DeviceClass = 3,  /*  [..G] The OOP_Class of devices attached to this driver. */
    num_Hidd_PCIDriver_Attrs = 4,
};

#define aHidd_PCIDriver_DirectBus                        (HiddPCIDriverAttrBase + aoHidd_PCIDriver_DirectBus)
#define aHidd_PCIDriver_IOBase                           (HiddPCIDriverAttrBase + aoHidd_PCIDriver_IOBase)
#define aHidd_PCIDriver_IRQRoutingTable                  (HiddPCIDriverAttrBase + aoHidd_PCIDriver_IRQRoutingTable)
#define aHidd_PCIDriver_DeviceClass                      (HiddPCIDriverAttrBase + aoHidd_PCIDriver_DeviceClass)

#define Hidd_PCIDriver_Switch(attr, idx) \
if (((idx) = (attr) - HiddPCIDriverAttrBase) < num_Hidd_PCIDriver_Attrs) \
switch (idx)


enum {
    moHidd_PCIDriver_ReadConfigByte = 0,
    moHidd_PCIDriver_ReadConfigWord = 1,
    moHidd_PCIDriver_ReadConfigLong = 2,
    moHidd_PCIDriver_WriteConfigByte = 3,
    moHidd_PCIDriver_WriteConfigWord = 4,
    moHidd_PCIDriver_WriteConfigLong = 5,
    moHidd_PCIDriver_CPUtoPCI = 6,
    moHidd_PCIDriver_PCItoCPU = 7,
    moHidd_PCIDriver_MapPCI = 8,
    moHidd_PCIDriver_UnmapPCI = 9,
    moHidd_PCIDriver_AllocPCIMem = 10,
    moHidd_PCIDriver_FreePCIMem = 11,
    moHidd_PCIDriver_AddInterrupt = 12,
    moHidd_PCIDriver_RemoveInterrupt = 13,
    moHidd_PCIDriver_ResizeBAR = 14,
    num_Hidd_PCIDriver_Methods = 15
};

struct pHidd_PCIDriver_ReadConfigByte
{
    OOP_MethodID mID;
    OOP_Object *device;
    UBYTE bus;
    UBYTE dev;
    UBYTE sub;
    UWORD reg;
};

#define HIDD_PCIDriver_ReadConfigByte(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_ReadConfigByte_(HiddPCIDriverBase, __obj ,##args); })

static inline UBYTE HIDD_PCIDriver_ReadConfigByte_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, UBYTE bus, UBYTE dev, UBYTE sub, UWORD reg)
{
    struct pHidd_PCIDriver_ReadConfigByte p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_ReadConfigByte;
    p.device = device;
    p.bus = bus;
    p.dev = dev;
    p.sub = sub;
    p.reg = reg;
    return (UBYTE)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_ReadConfigWord
{
    OOP_MethodID mID;
    OOP_Object *device;
    UBYTE bus;
    UBYTE dev;
    UBYTE sub;
    UWORD reg;
};

#define HIDD_PCIDriver_ReadConfigWord(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_ReadConfigWord_(HiddPCIDriverBase, __obj ,##args); })

static inline UWORD HIDD_PCIDriver_ReadConfigWord_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, UBYTE bus, UBYTE dev, UBYTE sub, UWORD reg)
{
    struct pHidd_PCIDriver_ReadConfigWord p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_ReadConfigWord;
    p.device = device;
    p.bus = bus;
    p.dev = dev;
    p.sub = sub;
    p.reg = reg;
    return (UWORD)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_ReadConfigLong
{
    OOP_MethodID mID;
    OOP_Object *device;
    UBYTE bus;
    UBYTE dev;
    UBYTE sub;
    UWORD reg;
};

#define HIDD_PCIDriver_ReadConfigLong(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_ReadConfigLong_(HiddPCIDriverBase, __obj ,##args); })

static inline ULONG HIDD_PCIDriver_ReadConfigLong_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, UBYTE bus, UBYTE dev, UBYTE sub, UWORD reg)
{
    struct pHidd_PCIDriver_ReadConfigLong p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_ReadConfigLong;
    p.device = device;
    p.bus = bus;
    p.dev = dev;
    p.sub = sub;
    p.reg = reg;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_WriteConfigByte
{
    OOP_MethodID mID;
    OOP_Object *device;
    UBYTE bus;
    UBYTE dev;
    UBYTE sub;
    UWORD reg;
    UBYTE val;
};

#define HIDD_PCIDriver_WriteConfigByte(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_WriteConfigByte_(HiddPCIDriverBase, __obj ,##args); })

static inline VOID HIDD_PCIDriver_WriteConfigByte_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, UBYTE bus, UBYTE dev, UBYTE sub, UWORD reg, UBYTE val)
{
    struct pHidd_PCIDriver_WriteConfigByte p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_WriteConfigByte;
    p.device = device;
    p.bus = bus;
    p.dev = dev;
    p.sub = sub;
    p.reg = reg;
    p.val = val;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_WriteConfigWord
{
    OOP_MethodID mID;
    OOP_Object *device;
    UBYTE bus;
    UBYTE dev;
    UBYTE sub;
    UWORD reg;
    UWORD val;
};

#define HIDD_PCIDriver_WriteConfigWord(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_WriteConfigWord_(HiddPCIDriverBase, __obj ,##args); })

static inline VOID HIDD_PCIDriver_WriteConfigWord_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, UBYTE bus, UBYTE dev, UBYTE sub, UWORD reg, UWORD val)
{
    struct pHidd_PCIDriver_WriteConfigWord p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_WriteConfigWord;
    p.device = device;
    p.bus = bus;
    p.dev = dev;
    p.sub = sub;
    p.reg = reg;
    p.val = val;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_WriteConfigLong
{
    OOP_MethodID mID;
    OOP_Object *device;
    UBYTE bus;
    UBYTE dev;
    UBYTE sub;
    UWORD reg;
    ULONG val;
};

#define HIDD_PCIDriver_WriteConfigLong(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_WriteConfigLong_(HiddPCIDriverBase, __obj ,##args); })

static inline VOID HIDD_PCIDriver_WriteConfigLong_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, UBYTE bus, UBYTE dev, UBYTE sub, UWORD reg, ULONG val)
{
    struct pHidd_PCIDriver_WriteConfigLong p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_WriteConfigLong;
    p.device = device;
    p.bus = bus;
    p.dev = dev;
    p.sub = sub;
    p.reg = reg;
    p.val = val;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_CPUtoPCI
{
    OOP_MethodID mID;
    APTR address;
};

#define HIDD_PCIDriver_CPUtoPCI(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_CPUtoPCI_(HiddPCIDriverBase, __obj ,##args); })

static inline APTR HIDD_PCIDriver_CPUtoPCI_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, APTR address)
{
    struct pHidd_PCIDriver_CPUtoPCI p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_CPUtoPCI;
    p.address = address;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_PCItoCPU
{
    OOP_MethodID mID;
    APTR address;
};

#define HIDD_PCIDriver_PCItoCPU(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_PCItoCPU_(HiddPCIDriverBase, __obj ,##args); })

static inline APTR HIDD_PCIDriver_PCItoCPU_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, APTR address)
{
    struct pHidd_PCIDriver_PCItoCPU p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_PCItoCPU;
    p.address = address;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_MapPCI
{
    OOP_MethodID mID;
    APTR PCIAddress;
    ULONG Length;
};

#define HIDD_PCIDriver_MapPCI(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_MapPCI_(HiddPCIDriverBase, __obj ,##args); })

static inline APTR HIDD_PCIDriver_MapPCI_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, APTR PCIAddress, ULONG Length)
{
    struct pHidd_PCIDriver_MapPCI p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_MapPCI;
    p.PCIAddress = PCIAddress;
    p.Length = Length;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_UnmapPCI
{
    OOP_MethodID mID;
    APTR CPUAddress;
    ULONG Length;
};

#define HIDD_PCIDriver_UnmapPCI(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_UnmapPCI_(HiddPCIDriverBase, __obj ,##args); })

static inline VOID HIDD_PCIDriver_UnmapPCI_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, APTR CPUAddress, ULONG Length)
{
    struct pHidd_PCIDriver_UnmapPCI p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_UnmapPCI;
    p.CPUAddress = CPUAddress;
    p.Length = Length;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_AllocPCIMem
{
    OOP_MethodID mID;
    ULONG Size;
};

#define HIDD_PCIDriver_AllocPCIMem(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_AllocPCIMem_(HiddPCIDriverBase, __obj ,##args); })

static inline APTR HIDD_PCIDriver_AllocPCIMem_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, ULONG Size)
{
    struct pHidd_PCIDriver_AllocPCIMem p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_AllocPCIMem;
    p.Size = Size;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_FreePCIMem
{
    OOP_MethodID mID;
    APTR Address;
};

#define HIDD_PCIDriver_FreePCIMem(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_FreePCIMem_(HiddPCIDriverBase, __obj ,##args); })

static inline VOID HIDD_PCIDriver_FreePCIMem_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, APTR Address)
{
    struct pHidd_PCIDriver_FreePCIMem p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_FreePCIMem;
    p.Address = Address;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_AddInterrupt
{
    OOP_MethodID mID;
    OOP_Object *device;
    struct Interrupt *interrupt;
};

#define HIDD_PCIDriver_AddInterrupt(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_AddInterrupt_(HiddPCIDriverBase, __obj ,##args); })

static inline BOOL HIDD_PCIDriver_AddInterrupt_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, struct Interrupt *interrupt)
{
    struct pHidd_PCIDriver_AddInterrupt p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_AddInterrupt;
    p.device = device;
    p.interrupt = interrupt;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_RemoveInterrupt
{
    OOP_MethodID mID;
    OOP_Object *device;
    struct Interrupt *interrupt;
};

#define HIDD_PCIDriver_RemoveInterrupt(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_RemoveInterrupt_(HiddPCIDriverBase, __obj ,##args); })

static inline VOID HIDD_PCIDriver_RemoveInterrupt_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, struct Interrupt *interrupt)
{
    struct pHidd_PCIDriver_RemoveInterrupt p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_RemoveInterrupt;
    p.device = device;
    p.interrupt = interrupt;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDriver_ResizeBAR
{
    OOP_MethodID mID;
    OOP_Object *device;
    UBYTE bar;
    IPTR size;
};

#define HIDD_PCIDriver_ResizeBAR(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDriver_ResizeBAR_(HiddPCIDriverBase, __obj ,##args); })

static inline BOOL HIDD_PCIDriver_ResizeBAR_(OOP_MethodID __HiddPCIDriverBase, OOP_Object *__obj, OOP_Object *device, UBYTE bar, IPTR size)
{
    struct pHidd_PCIDriver_ResizeBAR p;
    p.mID = __HiddPCIDriverBase + moHidd_PCIDriver_ResizeBAR;
    p.device = device;
    p.bar = bar;
    p.size = size;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_PCIDriver_H */
