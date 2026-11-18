#ifndef INTERFACE_Hidd_H
#define INTERFACE_Hidd_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/hidd/hiddclass.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd                             "I_Hidd"

#if !defined(HiddBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_NOMETHODBASE__)
#define HiddBase Hidd_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_mid;
    if (!Hidd_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_mid = OOP_GetMethodID(IID_Hidd, 0);
    }
    return Hidd_mid;
}
#endif

#define HiddAttrBase                     __IHidd

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_NOATTRBASE__)
extern OOP_AttrBase HiddAttrBase;
#endif

enum
{
    aoHidd_Type = 0,  /*  [..G] Major type of HIDD */
    aoHidd_SubType = 1,  /*  [..G] Sub-type of HIDD */
    aoHidd_Producer = 2,  /*  [I.G] Hardware manufacturer ID */
    aoHidd_Name = 3,  /*  [I.G] Name of HIDD */
    aoHidd_HardwareName = 4,  /*  [I.G] Hardware description */
    aoHidd_Active = 5,  /*  [ISG] Current active status */
    aoHidd_Status = 6,  /*  [..G] Status change */
    aoHidd_ErrorCode = 7,  /*  [..G] Error code */
    aoHidd_Locking = 8,  /*  [..G] Type of locking supported */
    aoHidd_Product = 9,  /*  [I.G] Hardware product ID */
    aoHidd_ProducerName = 10,  /*  [I.G] Hardware manufacturer name */
    aoHidd_DriverData = 11,  /*  [I..] Driver-specific data */
    aoHidd_DevicePath = 12,  /*  [I.G] Canonical identity of the hardware the object represents */
    aoHidd_Parent = 13,  /*  [I.G] The object this one belongs to */
    num_Hidd_Attrs = 14,
};

#define aHidd_Type                             (HiddAttrBase + aoHidd_Type)
#define aHidd_SubType                          (HiddAttrBase + aoHidd_SubType)
#define aHidd_Producer                         (HiddAttrBase + aoHidd_Producer)
#define aHidd_Name                             (HiddAttrBase + aoHidd_Name)
#define aHidd_HardwareName                     (HiddAttrBase + aoHidd_HardwareName)
#define aHidd_Active                           (HiddAttrBase + aoHidd_Active)
#define aHidd_Status                           (HiddAttrBase + aoHidd_Status)
#define aHidd_ErrorCode                        (HiddAttrBase + aoHidd_ErrorCode)
#define aHidd_Locking                          (HiddAttrBase + aoHidd_Locking)
#define aHidd_Product                          (HiddAttrBase + aoHidd_Product)
#define aHidd_ProducerName                     (HiddAttrBase + aoHidd_ProducerName)
#define aHidd_DriverData                       (HiddAttrBase + aoHidd_DriverData)
#define aHidd_DevicePath                       (HiddAttrBase + aoHidd_DevicePath)
#define aHidd_Parent                           (HiddAttrBase + aoHidd_Parent)

#define Hidd_Switch(attr, idx) \
if (((idx) = (attr) - HiddAttrBase) < num_Hidd_Attrs) \
switch (idx)


enum {
    moHidd_AddRelation = 0,
    moHidd_RemoveRelation = 1,
    moHidd_EnumRelations = 2,
    moHidd_FindRelated = 3,
    moHidd_FindDevicePath = 4,
    num_Hidd_Methods = 5
};

struct pHidd_AddRelation
{
    OOP_MethodID mID;
    ULONG type;
    OOP_Object *target;
    struct TagItem *tags;
};

#define HIDD_AddRelation(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_AddRelation_(HiddBase, __obj ,##args); })

static inline BOOL HIDD_AddRelation_(OOP_MethodID __HiddBase, OOP_Object *__obj, ULONG type, OOP_Object *target, struct TagItem *tags)
{
    struct pHidd_AddRelation p;
    p.mID = __HiddBase + moHidd_AddRelation;
    p.type = type;
    p.target = target;
    p.tags = tags;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_RemoveRelation
{
    OOP_MethodID mID;
    ULONG type;
    OOP_Object *target;
    CONST_STRPTR path;
};

#define HIDD_RemoveRelation(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_RemoveRelation_(HiddBase, __obj ,##args); })

static inline BOOL HIDD_RemoveRelation_(OOP_MethodID __HiddBase, OOP_Object *__obj, ULONG type, OOP_Object *target, CONST_STRPTR path)
{
    struct pHidd_RemoveRelation p;
    p.mID = __HiddBase + moHidd_RemoveRelation;
    p.type = type;
    p.target = target;
    p.path = path;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_EnumRelations
{
    OOP_MethodID mID;
    ULONG type;
    struct Hook *callback;
    APTR hookMsg;
};

#define HIDD_EnumRelations(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_EnumRelations_(HiddBase, __obj ,##args); })

static inline VOID HIDD_EnumRelations_(OOP_MethodID __HiddBase, OOP_Object *__obj, ULONG type, struct Hook *callback, APTR hookMsg)
{
    struct pHidd_EnumRelations p;
    p.mID = __HiddBase + moHidd_EnumRelations;
    p.type = type;
    p.callback = callback;
    p.hookMsg = hookMsg;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_FindRelated
{
    OOP_MethodID mID;
    ULONG type;
    CONST_STRPTR classID;
};

#define HIDD_FindRelated(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_FindRelated_(HiddBase, __obj ,##args); })

static inline OOP_Object * HIDD_FindRelated_(OOP_MethodID __HiddBase, OOP_Object *__obj, ULONG type, CONST_STRPTR classID)
{
    struct pHidd_FindRelated p;
    p.mID = __HiddBase + moHidd_FindRelated;
    p.type = type;
    p.classID = classID;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_FindDevicePath
{
    OOP_MethodID mID;
    CONST_STRPTR path;
};

#define HIDD_FindDevicePath(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_FindDevicePath_(HiddBase, __obj ,##args); })

static inline OOP_Object * HIDD_FindDevicePath_(OOP_MethodID __HiddBase, OOP_Object *__obj, CONST_STRPTR path)
{
    struct pHidd_FindDevicePath p;
    p.mID = __HiddBase + moHidd_FindDevicePath;
    p.path = path;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_H */
