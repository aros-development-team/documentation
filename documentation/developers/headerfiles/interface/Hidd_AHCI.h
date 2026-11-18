#ifndef INTERFACE_Hidd_AHCI_H
#define INTERFACE_Hidd_AHCI_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/ahci/ahci.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_AHCI
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_AHCI                        "hw.ahci"

#if !defined(HiddAHCIBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_AHCI_NOMETHODBASE__)
#define HiddAHCIBase Hidd_AHCI_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_AHCI_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_AHCI_mid;
    if (!Hidd_AHCI_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_AHCI_mid = OOP_GetMethodID(IID_Hidd_AHCI, 0);
    }
    return Hidd_AHCI_mid;
}
#endif

#define HiddAHCIAttrBase                 __IHidd_AHCI

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_AHCI_NOATTRBASE__)
extern OOP_AttrBase HiddAHCIAttrBase;
#endif

enum
{
    aoHidd_AHCI_Revision = 0,  /*             [..G] AHCI Revision */
    aoHidd_AHCI_Generation = 1,  /*             [..G] AHCI Gen */
    aoHidd_AHCI_Capabilities = 2,  /*  */
    num_Hidd_AHCI_Attrs = 3,
};

#define aHidd_AHCI_Revision                         (HiddAHCIAttrBase + aoHidd_AHCI_Revision)
#define aHidd_AHCI_Generation                       (HiddAHCIAttrBase + aoHidd_AHCI_Generation)
#define aHidd_AHCI_Capabilities                     (HiddAHCIAttrBase + aoHidd_AHCI_Capabilities)

#define Hidd_AHCI_Switch(attr, idx) \
if (((idx) = (attr) - HiddAHCIAttrBase) < num_Hidd_AHCI_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_AHCI_H */
