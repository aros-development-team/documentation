#ifndef INTERFACE_HW_Controller_H
#define INTERFACE_HW_Controller_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/hidds/controller/controller.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for HW_Controller
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_HW_Controller                    "hw.input.controller"

#if !defined(HWControllerBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__HW_Controller_NOMETHODBASE__)
#define HWControllerBase HW_Controller_GetMethodBase(__obj)

static inline OOP_MethodID HW_Controller_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID HW_Controller_mid;
    if (!HW_Controller_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        HW_Controller_mid = OOP_GetMethodID(IID_HW_Controller, 0);
    }
    return HW_Controller_mid;
}
#endif

#define HWControllerAB                   __IHW_Controller

#if !defined(__OOP_NOATTRBASES__) && !defined(__HW_Controller_NOATTRBASE__)
extern OOP_AttrBase HWControllerAB;
#endif

enum
{
    aoHW_Controller_DeviceCount = 0,  /*  [..G] Number of connected devices */
    aoHW_Controller_ClockFrequency = 1,  /*  [..G] EClock ticks per second used for timestamps */
    aoHW_Controller_SlotPolicy = 2,  /*  [.SG] vHidd_Controller_SlotPolicy_* */
    aoHW_Controller_Version = 3,  /*  [..G] HIDD_CONTROLLER_API_VERSION */
    num_HW_Controller_Attrs = 4,
};

#define aHW_Controller_DeviceCount                      (HWControllerAB + aoHW_Controller_DeviceCount)
#define aHW_Controller_ClockFrequency                   (HWControllerAB + aoHW_Controller_ClockFrequency)
#define aHW_Controller_SlotPolicy                       (HWControllerAB + aoHW_Controller_SlotPolicy)
#define aHW_Controller_Version                          (HWControllerAB + aoHW_Controller_Version)

#define HW_Controller_Switch(attr, idx) \
if (((idx) = (attr) - HWControllerAB) < num_HW_Controller_Attrs) \
switch (idx)


enum {
    moHW_Controller_FindDevice = 0,
    moHW_Controller_GetDeviceIDs = 1,
    moHW_Controller_AddMapping = 2,
    moHW_Controller_RemoveMapping = 3,
    moHW_Controller_Configure = 4,
    moHW_Controller_AssignSlot = 5,
    moHW_Controller_GetSlotDevice = 6,
    moHW_Controller_ReadJoyPort = 7,
    moHW_Controller_SetJoyPortAttrs = 8,
    num_HW_Controller_Methods = 9
};

struct pHW_Controller_FindDevice
{
    OOP_MethodID mID;
    UWORD deviceid;
};

#define HW_Controller_FindDevice(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_FindDevice_(HWControllerBase, __obj ,##args); })

static inline OOP_Object * HW_Controller_FindDevice_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, UWORD deviceid)
{
    struct pHW_Controller_FindDevice p;
    p.mID = __HWControllerBase + moHW_Controller_FindDevice;
    p.deviceid = deviceid;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_GetDeviceIDs
{
    OOP_MethodID mID;
    UWORD *buffer;
    ULONG max;
};

#define HW_Controller_GetDeviceIDs(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_GetDeviceIDs_(HWControllerBase, __obj ,##args); })

static inline ULONG HW_Controller_GetDeviceIDs_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, UWORD *buffer, ULONG max)
{
    struct pHW_Controller_GetDeviceIDs p;
    p.mID = __HWControllerBase + moHW_Controller_GetDeviceIDs;
    p.buffer = buffer;
    p.max = max;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_AddMapping
{
    OOP_MethodID mID;
    struct Hidd_Controller_MappingDesc *mapping;
    UBYTE source;
};

#define HW_Controller_AddMapping(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_AddMapping_(HWControllerBase, __obj ,##args); })

static inline BOOL HW_Controller_AddMapping_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, struct Hidd_Controller_MappingDesc *mapping, UBYTE source)
{
    struct pHW_Controller_AddMapping p;
    p.mID = __HWControllerBase + moHW_Controller_AddMapping;
    p.mapping = mapping;
    p.source = source;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_RemoveMapping
{
    OOP_MethodID mID;
    APTR guid;
    UBYTE source;
};

#define HW_Controller_RemoveMapping(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_RemoveMapping_(HWControllerBase, __obj ,##args); })

static inline BOOL HW_Controller_RemoveMapping_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, APTR guid, UBYTE source)
{
    struct pHW_Controller_RemoveMapping p;
    p.mID = __HWControllerBase + moHW_Controller_RemoveMapping;
    p.guid = guid;
    p.source = source;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_Configure
{
    OOP_MethodID mID;
    struct TagItem *tags;
};

#define HW_Controller_Configure(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_Configure_(HWControllerBase, __obj ,##args); })

static inline BOOL HW_Controller_Configure_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, struct TagItem *tags)
{
    struct pHW_Controller_Configure p;
    p.mID = __HWControllerBase + moHW_Controller_Configure;
    p.tags = tags;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_AssignSlot
{
    OOP_MethodID mID;
    UBYTE slot;
    UWORD deviceid;
};

#define HW_Controller_AssignSlot(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_AssignSlot_(HWControllerBase, __obj ,##args); })

static inline BOOL HW_Controller_AssignSlot_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, UBYTE slot, UWORD deviceid)
{
    struct pHW_Controller_AssignSlot p;
    p.mID = __HWControllerBase + moHW_Controller_AssignSlot;
    p.slot = slot;
    p.deviceid = deviceid;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_GetSlotDevice
{
    OOP_MethodID mID;
    UBYTE slot;
};

#define HW_Controller_GetSlotDevice(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_GetSlotDevice_(HWControllerBase, __obj ,##args); })

static inline UWORD HW_Controller_GetSlotDevice_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, UBYTE slot)
{
    struct pHW_Controller_GetSlotDevice p;
    p.mID = __HWControllerBase + moHW_Controller_GetSlotDevice;
    p.slot = slot;
    return (UWORD)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_ReadJoyPort
{
    OOP_MethodID mID;
    ULONG port;
};

#define HW_Controller_ReadJoyPort(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_ReadJoyPort_(HWControllerBase, __obj ,##args); })

static inline ULONG HW_Controller_ReadJoyPort_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, ULONG port)
{
    struct pHW_Controller_ReadJoyPort p;
    p.mID = __HWControllerBase + moHW_Controller_ReadJoyPort;
    p.port = port;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHW_Controller_SetJoyPortAttrs
{
    OOP_MethodID mID;
    ULONG port;
    struct TagItem *tags;
};

#define HW_Controller_SetJoyPortAttrs(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Controller_SetJoyPortAttrs_(HWControllerBase, __obj ,##args); })

static inline BOOL HW_Controller_SetJoyPortAttrs_(OOP_MethodID __HWControllerBase, OOP_Object *__obj, ULONG port, struct TagItem *tags)
{
    struct pHW_Controller_SetJoyPortAttrs p;
    p.mID = __HWControllerBase + moHW_Controller_SetJoyPortAttrs;
    p.port = port;
    p.tags = tags;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_HW_Controller_H */
