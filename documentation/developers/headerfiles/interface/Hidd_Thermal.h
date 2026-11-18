#ifndef INTERFACE_Hidd_Thermal_H
#define INTERFACE_Hidd_Thermal_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/telemetry/telemetry.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Thermal
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Thermal                     "hidd.telemetry.thermal"

#if !defined(HiddThermalBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Thermal_NOMETHODBASE__)
#define HiddThermalBase Hidd_Thermal_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Thermal_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Thermal_mid;
    if (!Hidd_Thermal_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Thermal_mid = OOP_GetMethodID(IID_Hidd_Thermal, 0);
    }
    return Hidd_Thermal_mid;
}
#endif

#define HiddThermalAB                    __IHidd_Thermal

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Thermal_NOATTRBASE__)
extern OOP_AttrBase HiddThermalAB;
#endif

enum
{
    aoHidd_Thermal_Points = 0,  /*  [I.G] vHidd_ThermalF() bits of the points the zone has */
    aoHidd_Thermal_Temperature = 1,  /*  [..G] The sensor's reading, thousandths of a degree Celsius */
    num_Hidd_Thermal_Attrs = 2,
};

#define aHidd_Thermal_Points                           (HiddThermalAB + aoHidd_Thermal_Points)
#define aHidd_Thermal_Temperature                      (HiddThermalAB + aoHidd_Thermal_Temperature)

#define Hidd_Thermal_Switch(attr, idx) \
if (((idx) = (attr) - HiddThermalAB) < num_Hidd_Thermal_Attrs) \
switch (idx)


enum {
    moHidd_Thermal_GetTemperature = 0,
    num_Hidd_Thermal_Methods = 1
};

struct pHidd_Thermal_GetTemperature
{
    OOP_MethodID mID;
    ULONG point;
    LONG *temperature;
};

#define HIDD_Thermal_GetTemperature(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Thermal_GetTemperature_(HiddThermalBase, __obj ,##args); })

static inline BOOL HIDD_Thermal_GetTemperature_(OOP_MethodID __HiddThermalBase, OOP_Object *__obj, ULONG point, LONG *temperature)
{
    struct pHidd_Thermal_GetTemperature p;
    p.mID = __HiddThermalBase + moHidd_Thermal_GetTemperature;
    p.point = point;
    p.temperature = temperature;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Thermal_H */
