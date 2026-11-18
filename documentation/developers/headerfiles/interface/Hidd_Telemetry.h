#ifndef INTERFACE_Hidd_Telemetry_H
#define INTERFACE_Hidd_Telemetry_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/telemetry/telemetry.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Telemetry
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Telemetry                   "hidd.telemetry"

#if !defined(HiddTelemetryBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Telemetry_NOMETHODBASE__)
#define HiddTelemetryBase Hidd_Telemetry_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Telemetry_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Telemetry_mid;
    if (!Hidd_Telemetry_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Telemetry_mid = OOP_GetMethodID(IID_Hidd_Telemetry, 0);
    }
    return Hidd_Telemetry_mid;
}
#endif

#define HiddTelemetryAB                  __IHidd_Telemetry

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Telemetry_NOATTRBASE__)
extern OOP_AttrBase HiddTelemetryAB;
#endif

enum
{
    aoHidd_Telemetry_EntryCount = 0,  /*  [..G] */
    num_Hidd_Telemetry_Attrs = 1,
};

#define aHidd_Telemetry_EntryCount                       (HiddTelemetryAB + aoHidd_Telemetry_EntryCount)

#define Hidd_Telemetry_Switch(attr, idx) \
if (((idx) = (attr) - HiddTelemetryAB) < num_Hidd_Telemetry_Attrs) \
switch (idx)


enum {
    moHidd_Telemetry_GetEntryAttribs = 0,
    moHidd_Telemetry_SetEntryValue = 1,
    num_Hidd_Telemetry_Methods = 2
};

struct pHidd_Telemetry_GetEntryAttribs
{
    OOP_MethodID mID;
    ULONG index;
    struct TagItem *tags;
};

#define HIDD_Telemetry_GetEntryAttribs(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Telemetry_GetEntryAttribs_(HiddTelemetryBase, __obj ,##args); })

static inline BOOL HIDD_Telemetry_GetEntryAttribs_(OOP_MethodID __HiddTelemetryBase, OOP_Object *__obj, ULONG index, struct TagItem *tags)
{
    struct pHidd_Telemetry_GetEntryAttribs p;
    p.mID = __HiddTelemetryBase + moHidd_Telemetry_GetEntryAttribs;
    p.index = index;
    p.tags = tags;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Telemetry_SetEntryValue
{
    OOP_MethodID mID;
    ULONG index;
    LONG value;
};

#define HIDD_Telemetry_SetEntryValue(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Telemetry_SetEntryValue_(HiddTelemetryBase, __obj ,##args); })

static inline BOOL HIDD_Telemetry_SetEntryValue_(OOP_MethodID __HiddTelemetryBase, OOP_Object *__obj, ULONG index, LONG value)
{
    struct pHidd_Telemetry_SetEntryValue p;
    p.mID = __HiddTelemetryBase + moHidd_Telemetry_SetEntryValue;
    p.index = index;
    p.value = value;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Telemetry_H */
