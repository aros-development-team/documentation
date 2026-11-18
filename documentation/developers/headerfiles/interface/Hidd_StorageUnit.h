#ifndef INTERFACE_Hidd_StorageUnit_H
#define INTERFACE_Hidd_StorageUnit_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/base/storage/storage.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_StorageUnit
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_StorageUnit                 "hidd.storage.unit"

#if !defined(HiddStorageUnitBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_StorageUnit_NOMETHODBASE__)
#define HiddStorageUnitBase Hidd_StorageUnit_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_StorageUnit_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_StorageUnit_mid;
    if (!Hidd_StorageUnit_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_StorageUnit_mid = OOP_GetMethodID(IID_Hidd_StorageUnit, 0);
    }
    return Hidd_StorageUnit_mid;
}
#endif

#define HiddStorageUnitAB                __IHidd_StorageUnit

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_StorageUnit_NOATTRBASE__)
extern OOP_AttrBase HiddStorageUnitAB;
#endif

enum
{
    aoHidd_StorageUnit_Device = 0,  /*    [..G] Corresponding Exec device string */
    aoHidd_StorageUnit_Number = 1,  /*           [..G] Corresponding Exec device unit number */
    aoHidd_StorageUnit_Type = 2,  /*             [..G] Units Type */
    aoHidd_StorageUnit_Capacity = 3,  /*         [..G] Units Capacity */
    aoHidd_StorageUnit_Model = 4,  /*     [..G] Unit model ID string */
    aoHidd_StorageUnit_Revision = 5,  /*  [..G] Unit revision ID string */
    aoHidd_StorageUnit_Serial = 6,  /*    [..G] Unit serial number string */
    aoHidd_StorageUnit_Removable = 7,  /*         [..G] Unit is removable */
    num_Hidd_StorageUnit_Attrs = 8,
};

#define aHidd_StorageUnit_Device                           (HiddStorageUnitAB + aoHidd_StorageUnit_Device)
#define aHidd_StorageUnit_Number                           (HiddStorageUnitAB + aoHidd_StorageUnit_Number)
#define aHidd_StorageUnit_Type                             (HiddStorageUnitAB + aoHidd_StorageUnit_Type)
#define aHidd_StorageUnit_Capacity                         (HiddStorageUnitAB + aoHidd_StorageUnit_Capacity)
#define aHidd_StorageUnit_Model                            (HiddStorageUnitAB + aoHidd_StorageUnit_Model)
#define aHidd_StorageUnit_Revision                         (HiddStorageUnitAB + aoHidd_StorageUnit_Revision)
#define aHidd_StorageUnit_Serial                           (HiddStorageUnitAB + aoHidd_StorageUnit_Serial)
#define aHidd_StorageUnit_Removable                        (HiddStorageUnitAB + aoHidd_StorageUnit_Removable)

#define Hidd_StorageUnit_Switch(attr, idx) \
if (((idx) = (attr) - HiddStorageUnitAB) < num_Hidd_StorageUnit_Attrs) \
switch (idx)


enum {
    moHidd_StorageUnit_GetCapacity = 0,
    num_Hidd_StorageUnit_Methods = 1
};

struct pHidd_StorageUnit_GetCapacity
{
    OOP_MethodID mID;
    UQUAD *blockCount;
    ULONG *blockSize;
};

#define HIDD_StorageUnit_GetCapacity(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_StorageUnit_GetCapacity_(HiddStorageUnitBase, __obj ,##args); })

static inline BOOL HIDD_StorageUnit_GetCapacity_(OOP_MethodID __HiddStorageUnitBase, OOP_Object *__obj, UQUAD *blockCount, ULONG *blockSize)
{
    struct pHidd_StorageUnit_GetCapacity p;
    p.mID = __HiddStorageUnitBase + moHidd_StorageUnit_GetCapacity;
    p.blockCount = blockCount;
    p.blockSize = blockSize;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_StorageUnit_H */
