#ifndef INTERFACE_Hidd_Power_H
#define INTERFACE_Hidd_Power_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/power/power.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Power
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Power                       "hidd.power"

#if !defined(HiddPowerBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Power_NOMETHODBASE__)
#define HiddPowerBase Hidd_Power_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Power_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Power_mid;
    if (!Hidd_Power_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Power_mid = OOP_GetMethodID(IID_Hidd_Power, 0);
    }
    return Hidd_Power_mid;
}
#endif

#define HiddPowerAB                      __IHidd_Power

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Power_NOATTRBASE__)
extern OOP_AttrBase HiddPowerAB;
#endif

enum
{
    aoHidd_Power_Type = 0,  /*  [..G] */
    aoHidd_Power_State = 1,  /*  [..G] */
    aoHidd_Power_Flags = 2,  /*  [..G] */
    aoHidd_Power_Units = 3,  /*  [..G] */
    num_Hidd_Power_Attrs = 4,
};

#define aHidd_Power_Type                             (HiddPowerAB + aoHidd_Power_Type)
#define aHidd_Power_State                            (HiddPowerAB + aoHidd_Power_State)
#define aHidd_Power_Flags                            (HiddPowerAB + aoHidd_Power_Flags)
#define aHidd_Power_Units                            (HiddPowerAB + aoHidd_Power_Units)

#define Hidd_Power_Switch(attr, idx) \
if (((idx) = (attr) - HiddPowerAB) < num_Hidd_Power_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_Power_H */
