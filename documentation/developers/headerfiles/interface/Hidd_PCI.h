#ifndef INTERFACE_Hidd_PCI_H
#define INTERFACE_Hidd_PCI_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/pci/pci.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_PCI
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_PCI                         "hidd.pci"

#if !defined(HiddPCIBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_PCI_NOMETHODBASE__)
#define HiddPCIBase Hidd_PCI_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_PCI_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_PCI_mid;
    if (!Hidd_PCI_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_PCI_mid = OOP_GetMethodID(IID_Hidd_PCI, 0);
    }
    return Hidd_PCI_mid;
}
#endif


#define Hidd_PCI_Switch(attr, idx) \
if (((idx) = (attr) - HiddPCIAttrBase) < num_Hidd_PCI_Attrs) \
switch (idx)


enum {
    moHidd_PCI_AddHardwareDriver = 0,
    moHidd_PCI_RemHardwareDriver = 1,
    moHidd_PCI_EnumDevices = 2,
    num_Hidd_PCI_Methods = 3
};

struct pHidd_PCI_AddHardwareDriver
{
    OOP_MethodID mID;
    OOP_Class *driverClass;
    struct TagItem *instanceTags;
};

#define HIDD_PCI_AddHardwareDriver(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCI_AddHardwareDriver_(HiddPCIBase, __obj ,##args); })

static inline VOID HIDD_PCI_AddHardwareDriver_(OOP_MethodID __HiddPCIBase, OOP_Object *__obj, OOP_Class *driverClass, struct TagItem *instanceTags)
{
    struct pHidd_PCI_AddHardwareDriver p;
    p.mID = __HiddPCIBase + moHidd_PCI_AddHardwareDriver;
    p.driverClass = driverClass;
    p.instanceTags = instanceTags;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCI_RemHardwareDriver
{
    OOP_MethodID mID;
    OOP_Class *driverClass;
};

#define HIDD_PCI_RemHardwareDriver(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCI_RemHardwareDriver_(HiddPCIBase, __obj ,##args); })

static inline BOOL HIDD_PCI_RemHardwareDriver_(OOP_MethodID __HiddPCIBase, OOP_Object *__obj, OOP_Class *driverClass)
{
    struct pHidd_PCI_RemHardwareDriver p;
    p.mID = __HiddPCIBase + moHidd_PCI_RemHardwareDriver;
    p.driverClass = driverClass;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCI_EnumDevices
{
    OOP_MethodID mID;
    struct Hook *callback;
    const struct TagItem *requirements;
};

#define HIDD_PCI_EnumDevices(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCI_EnumDevices_(HiddPCIBase, __obj ,##args); })

static inline VOID HIDD_PCI_EnumDevices_(OOP_MethodID __HiddPCIBase, OOP_Object *__obj, struct Hook *callback, const struct TagItem *requirements)
{
    struct pHidd_PCI_EnumDevices p;
    p.mID = __HiddPCIBase + moHidd_PCI_EnumDevices;
    p.callback = callback;
    p.requirements = requirements;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_PCI_H */
