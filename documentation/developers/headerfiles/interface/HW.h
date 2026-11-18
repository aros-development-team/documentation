#ifndef INTERFACE_HW_H
#define INTERFACE_HW_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/hidd/hiddclass.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for HW
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_HW                               "I_Hw"

#if !defined(HWBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__HW_NOMETHODBASE__)
#define HWBase HW_GetMethodBase(__obj)

static inline OOP_MethodID HW_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID HW_mid;
    if (!HW_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        HW_mid = OOP_GetMethodID(IID_HW, 0);
    }
    return HW_mid;
}
#endif

#define HWAttrBase                       __IHW

#if !defined(__OOP_NOATTRBASES__) && !defined(__HW_NOATTRBASE__)
extern OOP_AttrBase HWAttrBase;
#endif

enum
{
    aoHW_InUse = 0,  /*  [..G] Subsystem in use or not */
    aoHW_ClassName = 1,  /*  [I.G] Human-readable description of hardware type */
    aoHW_Device = 2,  /*  [I.G] The Hardware Device Object (e.g. PCIDevice) the driver uses. */
    num_HW_Attrs = 3,
};

#define aHW_InUse                            (HWAttrBase + aoHW_InUse)
#define aHW_ClassName                        (HWAttrBase + aoHW_ClassName)
#define aHW_Device                           (HWAttrBase + aoHW_Device)

#define HW_Switch(attr, idx) \
if (((idx) = (attr) - HWAttrBase) < num_HW_Attrs) \
switch (idx)


enum {
    moHW_AddDriver = 0,
    moHW_RemoveDriver = 1,
    moHW_EnumDrivers = 2,
    moHW_SetUpDriver = 3,
    moHW_CleanUpDriver = 4,
    num_HW_Methods = 5
};

struct pHW_AddDriver
{
    OOP_MethodID mID;
    OOP_Class *driverClass;
    struct TagItem *tags;
};

#define HW_AddDriver(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_AddDriver_(HWBase, __obj ,##args); })

static inline OOP_Object * HW_AddDriver_(OOP_MethodID __HWBase, OOP_Object *__obj, OOP_Class *driverClass, struct TagItem *tags)
{
    struct pHW_AddDriver p;
    p.mID = __HWBase + moHW_AddDriver;
    p.driverClass = driverClass;
    p.tags = tags;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_RemoveDriver
{
    OOP_MethodID mID;
    OOP_Object *driverObject;
};

#define HW_RemoveDriver(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_RemoveDriver_(HWBase, __obj ,##args); })

static inline BOOL HW_RemoveDriver_(OOP_MethodID __HWBase, OOP_Object *__obj, OOP_Object *driverObject)
{
    struct pHW_RemoveDriver p;
    p.mID = __HWBase + moHW_RemoveDriver;
    p.driverObject = driverObject;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_EnumDrivers
{
    OOP_MethodID mID;
    struct Hook *callback;
    APTR hookMsg;
};

#define HW_EnumDrivers(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_EnumDrivers_(HWBase, __obj ,##args); })

static inline VOID HW_EnumDrivers_(OOP_MethodID __HWBase, OOP_Object *__obj, struct Hook *callback, APTR hookMsg)
{
    struct pHW_EnumDrivers p;
    p.mID = __HWBase + moHW_EnumDrivers;
    p.callback = callback;
    p.hookMsg = hookMsg;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_SetUpDriver
{
    OOP_MethodID mID;
    OOP_Object *driverObject;
};

#define HW_SetUpDriver(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_SetUpDriver_(HWBase, __obj ,##args); })

static inline BOOL HW_SetUpDriver_(OOP_MethodID __HWBase, OOP_Object *__obj, OOP_Object *driverObject)
{
    struct pHW_SetUpDriver p;
    p.mID = __HWBase + moHW_SetUpDriver;
    p.driverObject = driverObject;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_CleanUpDriver
{
    OOP_MethodID mID;
    OOP_Object *driverObject;
};

#define HW_CleanUpDriver(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_CleanUpDriver_(HWBase, __obj ,##args); })

static inline void HW_CleanUpDriver_(OOP_MethodID __HWBase, OOP_Object *__obj, OOP_Object *driverObject)
{
    struct pHW_CleanUpDriver p;
    p.mID = __HWBase + moHW_CleanUpDriver;
    p.driverObject = driverObject;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_HW_H */
