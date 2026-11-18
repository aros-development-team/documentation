#ifndef INTERFACE_Hidd_StorageController_H
#define INTERFACE_Hidd_StorageController_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/storage/storage.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_StorageController
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_StorageController           "hidd.storage.controller"

#if !defined(HiddStorageControllerBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_StorageController_NOMETHODBASE__)
#define HiddStorageControllerBase Hidd_StorageController_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_StorageController_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_StorageController_mid;
    if (!Hidd_StorageController_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_StorageController_mid = OOP_GetMethodID(IID_Hidd_StorageController, 0);
    }
    return Hidd_StorageController_mid;
}
#endif


#define Hidd_StorageController_Switch(attr, idx) \
if (((idx) = (attr) - HiddStorageControllerAB) < num_Hidd_StorageController_Attrs) \
switch (idx)


enum {
    moHidd_StorageController_AddBus = 0,
    moHidd_StorageController_RemoveBus = 1,
    moHidd_StorageController_EnumBuses = 2,
    moHidd_StorageController_SetUpBus = 3,
    moHidd_StorageController_CleanUpBus = 4,
    num_Hidd_StorageController_Methods = 5
};

struct pHidd_StorageController_AddBus
{
    OOP_MethodID mID;
    OOP_Class *busClass;
    struct TagItem *tags;
};

#define HIDD_StorageController_AddBus(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_StorageController_AddBus_(HiddStorageControllerBase, __obj ,##args); })

static inline OOP_Object * HIDD_StorageController_AddBus_(OOP_MethodID __HiddStorageControllerBase, OOP_Object *__obj, OOP_Class *busClass, struct TagItem *tags)
{
    struct pHidd_StorageController_AddBus p;
    p.mID = __HiddStorageControllerBase + moHidd_StorageController_AddBus;
    p.busClass = busClass;
    p.tags = tags;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_StorageController_RemoveBus
{
    OOP_MethodID mID;
    OOP_Object *busObject;
};

#define HIDD_StorageController_RemoveBus(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_StorageController_RemoveBus_(HiddStorageControllerBase, __obj ,##args); })

static inline BOOL HIDD_StorageController_RemoveBus_(OOP_MethodID __HiddStorageControllerBase, OOP_Object *__obj, OOP_Object *busObject)
{
    struct pHidd_StorageController_RemoveBus p;
    p.mID = __HiddStorageControllerBase + moHidd_StorageController_RemoveBus;
    p.busObject = busObject;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_StorageController_EnumBuses
{
    OOP_MethodID mID;
    struct Hook *callback;
    APTR hookMsg;
};

#define HIDD_StorageController_EnumBuses(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_StorageController_EnumBuses_(HiddStorageControllerBase, __obj ,##args); })

static inline VOID HIDD_StorageController_EnumBuses_(OOP_MethodID __HiddStorageControllerBase, OOP_Object *__obj, struct Hook *callback, APTR hookMsg)
{
    struct pHidd_StorageController_EnumBuses p;
    p.mID = __HiddStorageControllerBase + moHidd_StorageController_EnumBuses;
    p.callback = callback;
    p.hookMsg = hookMsg;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_StorageController_SetUpBus
{
    OOP_MethodID mID;
    OOP_Object *busObject;
};

#define HIDD_StorageController_SetUpBus(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_StorageController_SetUpBus_(HiddStorageControllerBase, __obj ,##args); })

static inline BOOL HIDD_StorageController_SetUpBus_(OOP_MethodID __HiddStorageControllerBase, OOP_Object *__obj, OOP_Object *busObject)
{
    struct pHidd_StorageController_SetUpBus p;
    p.mID = __HiddStorageControllerBase + moHidd_StorageController_SetUpBus;
    p.busObject = busObject;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_StorageController_CleanUpBus
{
    OOP_MethodID mID;
    OOP_Object *busObject;
};

#define HIDD_StorageController_CleanUpBus(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_StorageController_CleanUpBus_(HiddStorageControllerBase, __obj ,##args); })

static inline void HIDD_StorageController_CleanUpBus_(OOP_MethodID __HiddStorageControllerBase, OOP_Object *__obj, OOP_Object *busObject)
{
    struct pHidd_StorageController_CleanUpBus p;
    p.mID = __HiddStorageControllerBase + moHidd_StorageController_CleanUpBus;
    p.busObject = busObject;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_StorageController_H */
