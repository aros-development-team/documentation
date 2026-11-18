#ifndef INTERFACE_Hidd_Fan_H
#define INTERFACE_Hidd_Fan_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/telemetry/telemetry.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Fan
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Fan                         "hidd.telemetry.fan"

#if !defined(HiddFanBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Fan_NOMETHODBASE__)
#define HiddFanBase Hidd_Fan_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Fan_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Fan_mid;
    if (!Hidd_Fan_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Fan_mid = OOP_GetMethodID(IID_Hidd_Fan, 0);
    }
    return Hidd_Fan_mid;
}
#endif

#define HiddFanAB                        __IHidd_Fan

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Fan_NOATTRBASE__)
extern OOP_AttrBase HiddFanAB;
#endif

enum
{
    aoHidd_Fan_Values = 0,  /*  [I.G] vHidd_FanF() bits of the values the fan reports */
    aoHidd_Fan_Writable = 1,  /*  [I.G] vHidd_FanF() bits of the values that can be set */
    num_Hidd_Fan_Attrs = 2,
};

#define aHidd_Fan_Values                           (HiddFanAB + aoHidd_Fan_Values)
#define aHidd_Fan_Writable                         (HiddFanAB + aoHidd_Fan_Writable)

#define Hidd_Fan_Switch(attr, idx) \
if (((idx) = (attr) - HiddFanAB) < num_Hidd_Fan_Attrs) \
switch (idx)


enum {
    moHidd_Fan_GetValue = 0,
    moHidd_Fan_SetValue = 1,
    num_Hidd_Fan_Methods = 2
};

struct pHidd_Fan_GetValue
{
    OOP_MethodID mID;
    ULONG which;
    LONG *value;
    LONG *min;
    LONG *max;
};

#define HIDD_Fan_GetValue(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Fan_GetValue_(HiddFanBase, __obj ,##args); })

static inline BOOL HIDD_Fan_GetValue_(OOP_MethodID __HiddFanBase, OOP_Object *__obj, ULONG which, LONG *value, LONG *min, LONG *max)
{
    struct pHidd_Fan_GetValue p;
    p.mID = __HiddFanBase + moHidd_Fan_GetValue;
    p.which = which;
    p.value = value;
    p.min = min;
    p.max = max;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Fan_SetValue
{
    OOP_MethodID mID;
    ULONG which;
    LONG value;
};

#define HIDD_Fan_SetValue(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Fan_SetValue_(HiddFanBase, __obj ,##args); })

static inline BOOL HIDD_Fan_SetValue_(OOP_MethodID __HiddFanBase, OOP_Object *__obj, ULONG which, LONG value)
{
    struct pHidd_Fan_SetValue p;
    p.mID = __HiddFanBase + moHidd_Fan_SetValue;
    p.which = which;
    p.value = value;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Fan_H */
