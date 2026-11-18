#ifndef INTERFACE_Hidd_SCSIUnit_H
#define INTERFACE_Hidd_SCSIUnit_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/scsi/scsi.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_SCSIUnit
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_SCSIUnit                    "hidd.scsi.unit"

#if !defined(Hidd_SCSIUnitBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_SCSIUnit_NOMETHODBASE__)
#define Hidd_SCSIUnitBase Hidd_SCSIUnit_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_SCSIUnit_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_SCSIUnit_mid;
    if (!Hidd_SCSIUnit_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_SCSIUnit_mid = OOP_GetMethodID(IID_Hidd_SCSIUnit, 0);
    }
    return Hidd_SCSIUnit_mid;
}
#endif

#define HiddSCSIUnitAB                   __IHidd_SCSIUnit

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_SCSIUnit_NOATTRBASE__)
extern OOP_AttrBase HiddSCSIUnitAB;
#endif

enum
{
    aoHidd_SCSIUnit_XferModes = 0,  /*        [..G] Supported transfer modes */
    aoHidd_SCSIUnit_MultiSector = 1,  /*      [..G] Maximum amount of multisector transfer */
    aoHidd_SCSIUnit_ConfiguredModes = 2,  /*  [..G] Configured transfer modes */
    num_Hidd_SCSIUnit_Attrs = 3,
};

#define aHidd_SCSIUnit_XferModes                        (HiddSCSIUnitAB + aoHidd_SCSIUnit_XferModes)
#define aHidd_SCSIUnit_MultiSector                      (HiddSCSIUnitAB + aoHidd_SCSIUnit_MultiSector)
#define aHidd_SCSIUnit_ConfiguredModes                  (HiddSCSIUnitAB + aoHidd_SCSIUnit_ConfiguredModes)

#define Hidd_SCSIUnit_Switch(attr, idx) \
if (((idx) = (attr) - HiddSCSIUnitAB) < num_Hidd_SCSIUnit_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_SCSIUnit_H */
