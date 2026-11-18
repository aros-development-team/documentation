#ifndef INTERFACE_Hidd_ATAUnit_H
#define INTERFACE_Hidd_ATAUnit_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/ata/ata.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_ATAUnit
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_ATAUnit                     "hidd.ata.unit"

#if !defined(Hidd_ATAUnitBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_ATAUnit_NOMETHODBASE__)
#define Hidd_ATAUnitBase Hidd_ATAUnit_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_ATAUnit_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_ATAUnit_mid;
    if (!Hidd_ATAUnit_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_ATAUnit_mid = OOP_GetMethodID(IID_Hidd_ATAUnit, 0);
    }
    return Hidd_ATAUnit_mid;
}
#endif

#define HiddATAUnitAB                    __IHidd_ATAUnit

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_ATAUnit_NOATTRBASE__)
extern OOP_AttrBase HiddATAUnitAB;
#endif

enum
{
    aoHidd_ATAUnit_XferModes = 0,  /*        [..G] Supported transfer modes */
    aoHidd_ATAUnit_MultiSector = 1,  /*      [..G] Maximum amount of multisector transfer */
    aoHidd_ATAUnit_ConfiguredModes = 2,  /*  [..G] Configured transfer modes */
    num_Hidd_ATAUnit_Attrs = 3,
};

#define aHidd_ATAUnit_XferModes                        (HiddATAUnitAB + aoHidd_ATAUnit_XferModes)
#define aHidd_ATAUnit_MultiSector                      (HiddATAUnitAB + aoHidd_ATAUnit_MultiSector)
#define aHidd_ATAUnit_ConfiguredModes                  (HiddATAUnitAB + aoHidd_ATAUnit_ConfiguredModes)

#define Hidd_ATAUnit_Switch(attr, idx) \
if (((idx) = (attr) - HiddATAUnitAB) < num_Hidd_ATAUnit_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_ATAUnit_H */
