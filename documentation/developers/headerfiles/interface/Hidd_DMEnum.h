#ifndef INTERFACE_Hidd_DMEnum_H
#define INTERFACE_Hidd_DMEnum_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_DMEnum
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_DMEnum                      "hidd.gfx.dmenum"

#if !defined(HiddDMEnumBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_DMEnum_NOMETHODBASE__)
#define HiddDMEnumBase Hidd_DMEnum_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_DMEnum_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_DMEnum_mid;
    if (!Hidd_DMEnum_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_DMEnum_mid = OOP_GetMethodID(IID_Hidd_DMEnum, 0);
    }
    return Hidd_DMEnum_mid;
}
#endif

#define HiddDMEnumAttrBase               __IHidd_DMEnum

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_DMEnum_NOATTRBASE__)
extern OOP_AttrBase HiddDMEnumAttrBase;
#endif

enum
{
    aoHidd_DMEnum_PixFmtTags = 0,  /*  [I..] */
    aoHidd_DMEnum_SyncTags = 1,  /*    [I..] */
    aoHidd_DMEnum_NumSyncs = 2,  /*               [..G] The number of different syncs the display can do */
    aoHidd_DMEnum_Display = 3,  /*          [..G] Pointer to the display object this dmenum belongs to */
    aoHidd_DMEnum_Priority = 4,  /*                [I.G] Mode enumeration priority of this display (higher is preferred, default 0) */
    num_Hidd_DMEnum_Attrs = 5,
};

#define aHidd_DMEnum_PixFmtTags                       (HiddDMEnumAttrBase + aoHidd_DMEnum_PixFmtTags)
#define aHidd_DMEnum_SyncTags                         (HiddDMEnumAttrBase + aoHidd_DMEnum_SyncTags)
#define aHidd_DMEnum_NumSyncs                         (HiddDMEnumAttrBase + aoHidd_DMEnum_NumSyncs)
#define aHidd_DMEnum_Display                          (HiddDMEnumAttrBase + aoHidd_DMEnum_Display)
#define aHidd_DMEnum_Priority                         (HiddDMEnumAttrBase + aoHidd_DMEnum_Priority)

#define Hidd_DMEnum_Switch(attr, idx) \
if (((idx) = (attr) - HiddDMEnumAttrBase) < num_Hidd_DMEnum_Attrs) \
switch (idx)


enum {
    moHidd_DMEnum_QueryModeIDs = 0,
    moHidd_DMEnum_ReleaseModeIDs = 1,
    moHidd_DMEnum_NextModeID = 2,
    moHidd_DMEnum_GetMode = 3,
    moHidd_DMEnum_CheckMode = 4,
    moHidd_DMEnum_SetMode = 5,
    moHidd_DMEnum_GetSync = 6,
    moHidd_DMEnum_GetPixFmt = 7,
    num_Hidd_DMEnum_Methods = 8
};

struct pHidd_DMEnum_QueryModeIDs
{
    OOP_MethodID mID;
    struct TagItem *queryTags;
};

#define HIDD_DMEnum_QueryModeIDs(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_QueryModeIDs_(HiddDMEnumBase, __obj ,##args); })

static inline HIDDT_ModeID * HIDD_DMEnum_QueryModeIDs_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, struct TagItem *queryTags)
{
    struct pHidd_DMEnum_QueryModeIDs p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_QueryModeIDs;
    p.queryTags = queryTags;
    return (HIDDT_ModeID *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_DMEnum_ReleaseModeIDs
{
    OOP_MethodID mID;
    HIDDT_ModeID *modeIDs;
};

#define HIDD_DMEnum_ReleaseModeIDs(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_ReleaseModeIDs_(HiddDMEnumBase, __obj ,##args); })

static inline VOID HIDD_DMEnum_ReleaseModeIDs_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, HIDDT_ModeID *modeIDs)
{
    struct pHidd_DMEnum_ReleaseModeIDs p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_ReleaseModeIDs;
    p.modeIDs = modeIDs;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_DMEnum_NextModeID
{
    OOP_MethodID mID;
    HIDDT_ModeID modeID;
    OOP_Object **syncPtr;
    OOP_Object **pixFmtPtr;
};

#define HIDD_DMEnum_NextModeID(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_NextModeID_(HiddDMEnumBase, __obj ,##args); })

static inline HIDDT_ModeID HIDD_DMEnum_NextModeID_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, HIDDT_ModeID modeID, OOP_Object **syncPtr, OOP_Object **pixFmtPtr)
{
    struct pHidd_DMEnum_NextModeID p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_NextModeID;
    p.modeID = modeID;
    p.syncPtr = syncPtr;
    p.pixFmtPtr = pixFmtPtr;
    return (HIDDT_ModeID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_DMEnum_GetMode
{
    OOP_MethodID mID;
    HIDDT_ModeID modeID;
    OOP_Object **syncPtr;
    OOP_Object **pixFmtPtr;
};

#define HIDD_DMEnum_GetMode(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_GetMode_(HiddDMEnumBase, __obj ,##args); })

static inline BOOL HIDD_DMEnum_GetMode_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, HIDDT_ModeID modeID, OOP_Object **syncPtr, OOP_Object **pixFmtPtr)
{
    struct pHidd_DMEnum_GetMode p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_GetMode;
    p.modeID = modeID;
    p.syncPtr = syncPtr;
    p.pixFmtPtr = pixFmtPtr;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_DMEnum_CheckMode
{
    OOP_MethodID mID;
    HIDDT_ModeID modeID;
    OOP_Object *sync;
    OOP_Object *pixFmt;
};

#define HIDD_DMEnum_CheckMode(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_CheckMode_(HiddDMEnumBase, __obj ,##args); })

static inline BOOL HIDD_DMEnum_CheckMode_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, HIDDT_ModeID modeID, OOP_Object *sync, OOP_Object *pixFmt)
{
    struct pHidd_DMEnum_CheckMode p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_CheckMode;
    p.modeID = modeID;
    p.sync = sync;
    p.pixFmt = pixFmt;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_DMEnum_SetMode
{
    OOP_MethodID mID;
    OOP_Object *sync;
};

#define HIDD_DMEnum_SetMode(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_SetMode_(HiddDMEnumBase, __obj ,##args); })

static inline BOOL HIDD_DMEnum_SetMode_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, OOP_Object *sync)
{
    struct pHidd_DMEnum_SetMode p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_SetMode;
    p.sync = sync;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_DMEnum_GetSync
{
    OOP_MethodID mID;
    ULONG num;
};

#define HIDD_DMEnum_GetSync(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_GetSync_(HiddDMEnumBase, __obj ,##args); })

static inline OOP_Object * HIDD_DMEnum_GetSync_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, ULONG num)
{
    struct pHidd_DMEnum_GetSync p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_GetSync;
    p.num = num;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_DMEnum_GetPixFmt
{
    OOP_MethodID mID;
    HIDDT_StdPixFmt stdPixFmt;
};

#define HIDD_DMEnum_GetPixFmt(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_DMEnum_GetPixFmt_(HiddDMEnumBase, __obj ,##args); })

static inline OOP_Object * HIDD_DMEnum_GetPixFmt_(OOP_MethodID __HiddDMEnumBase, OOP_Object *__obj, HIDDT_StdPixFmt stdPixFmt)
{
    struct pHidd_DMEnum_GetPixFmt p;
    p.mID = __HiddDMEnumBase + moHidd_DMEnum_GetPixFmt;
    p.stdPixFmt = stdPixFmt;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_DMEnum_H */
