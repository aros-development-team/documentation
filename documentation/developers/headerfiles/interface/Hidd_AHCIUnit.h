#ifndef INTERFACE_Hidd_AHCIUnit_H
#define INTERFACE_Hidd_AHCIUnit_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/ahci/ahci.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_AHCIUnit
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_AHCIUnit                    "hidd.ahci.unit"

#if !defined(HiddAHCIUnitBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_AHCIUnit_NOMETHODBASE__)
#define HiddAHCIUnitBase Hidd_AHCIUnit_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_AHCIUnit_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_AHCIUnit_mid;
    if (!Hidd_AHCIUnit_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_AHCIUnit_mid = OOP_GetMethodID(IID_Hidd_AHCIUnit, 0);
    }
    return Hidd_AHCIUnit_mid;
}
#endif

#define HiddAHCIUnitAB                   __IHidd_AHCIUnit

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_AHCIUnit_NOATTRBASE__)
extern OOP_AttrBase HiddAHCIUnitAB;
#endif

enum
{
    aoHidd_AHCIUnit_Features = 0,  /*  */
    num_Hidd_AHCIUnit_Attrs = 1,
};

#define aHidd_AHCIUnit_Features                         (HiddAHCIUnitAB + aoHidd_AHCIUnit_Features)

#define Hidd_AHCIUnit_Switch(attr, idx) \
if (((idx) = (attr) - HiddAHCIUnitAB) < num_Hidd_AHCIUnit_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_AHCIUnit_H */
