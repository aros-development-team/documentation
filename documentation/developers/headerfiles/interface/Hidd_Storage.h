#ifndef INTERFACE_Hidd_Storage_H
#define INTERFACE_Hidd_Storage_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/storage/storage.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Storage
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Storage                     "hidd.storage"

#if !defined(HiddStorageBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Storage_NOMETHODBASE__)
#define HiddStorageBase Hidd_Storage_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Storage_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Storage_mid;
    if (!Hidd_Storage_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Storage_mid = OOP_GetMethodID(IID_Hidd_Storage, 0);
    }
    return Hidd_Storage_mid;
}
#endif


#define Hidd_Storage_Switch(attr, idx) \
if (((idx) = (attr) - HiddStorageAB) < num_Hidd_Storage_Attrs) \
switch (idx)


enum {
    moHidd_Storage_AllocateID = 0,
    moHidd_Storage_ReleaseID = 1,
    num_Hidd_Storage_Methods = 2
};

struct pHidd_Storage_AllocateID
{
    OOP_MethodID mID;
    struct TagItem *IDTags;
};

#define HIDD_Storage_AllocateID(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Storage_AllocateID_(HiddStorageBase, __obj ,##args); })

static inline APTR HIDD_Storage_AllocateID_(OOP_MethodID __HiddStorageBase, OOP_Object *__obj, struct TagItem *IDTags)
{
    struct pHidd_Storage_AllocateID p;
    p.mID = __HiddStorageBase + moHidd_Storage_AllocateID;
    p.IDTags = IDTags;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Storage_ReleaseID
{
    OOP_MethodID mID;
    APTR IDHandle;
};

#define HIDD_Storage_ReleaseID(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Storage_ReleaseID_(HiddStorageBase, __obj ,##args); })

static inline void HIDD_Storage_ReleaseID_(OOP_MethodID __HiddStorageBase, OOP_Object *__obj, APTR IDHandle)
{
    struct pHidd_Storage_ReleaseID p;
    p.mID = __HiddStorageBase + moHidd_Storage_ReleaseID;
    p.IDHandle = IDHandle;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Storage_H */
