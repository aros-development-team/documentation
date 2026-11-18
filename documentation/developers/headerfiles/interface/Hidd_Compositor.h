#ifndef INTERFACE_Hidd_Compositor_H
#define INTERFACE_Hidd_Compositor_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Compositor
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Compositor                  "hidd.gfx.compositor"

#if !defined(HiddCompositorBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Compositor_NOMETHODBASE__)
#define HiddCompositorBase Hidd_Compositor_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Compositor_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Compositor_mid;
    if (!Hidd_Compositor_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Compositor_mid = OOP_GetMethodID(IID_Hidd_Compositor, 0);
    }
    return Hidd_Compositor_mid;
}
#endif

#define HiddCompositorAttrBase           __IHidd_Compositor

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Compositor_NOATTRBASE__)
extern OOP_AttrBase HiddCompositorAttrBase;
#endif

enum
{
    aoHidd_Compositor_DisplayHidd = 0,  /*      [I.G] The display object this compositor serves */
    aoHidd_Compositor_DisplayID = 1,  /*              [..G] Public display ID base (read from the display) */
    aoHidd_Compositor_Capabilities = 2,  /*           [..G] Composition types this implementation can honour (COMPF_*) */
    aoHidd_Compositor_State = 3,  /*                  [ISG] Composition types currently enabled */
    aoHidd_Compositor_BackFillHook = 4,  /*    [ISG] Rendering hook for void display area (NULL = default fill) */
    aoHidd_Compositor_FrameBuffer = 5,  /*      [..G] The display's framebuffer bitmap (read from the display) */
    aoHidd_Compositor_ModePolicy = 6,  /*             [ISG] vHidd_Compositor_ModePolicy_* */
    aoHidd_Compositor_Active = 7,  /*                  [..G] TRUE while composing (more than passthrough) */
    aoHidd_Compositor_ComposedBitMap = 8,  /*   [..G] The bitmap composition renders into, NULL in passthrough */
    aoHidd_Compositor_DisplayMode = 9,  /*            [..G] HIDDT_ModeID the display is driven in, fHidd_Display_Show_Scale's target */
    num_Hidd_Compositor_Attrs = 10,
};

#define aHidd_Compositor_DisplayHidd                      (HiddCompositorAttrBase + aoHidd_Compositor_DisplayHidd)
#define aHidd_Compositor_DisplayID                        (HiddCompositorAttrBase + aoHidd_Compositor_DisplayID)
#define aHidd_Compositor_Capabilities                     (HiddCompositorAttrBase + aoHidd_Compositor_Capabilities)
#define aHidd_Compositor_State                            (HiddCompositorAttrBase + aoHidd_Compositor_State)
#define aHidd_Compositor_BackFillHook                     (HiddCompositorAttrBase + aoHidd_Compositor_BackFillHook)
#define aHidd_Compositor_FrameBuffer                      (HiddCompositorAttrBase + aoHidd_Compositor_FrameBuffer)
#define aHidd_Compositor_ModePolicy                       (HiddCompositorAttrBase + aoHidd_Compositor_ModePolicy)
#define aHidd_Compositor_Active                           (HiddCompositorAttrBase + aoHidd_Compositor_Active)
#define aHidd_Compositor_ComposedBitMap                   (HiddCompositorAttrBase + aoHidd_Compositor_ComposedBitMap)
#define aHidd_Compositor_DisplayMode                      (HiddCompositorAttrBase + aoHidd_Compositor_DisplayMode)

#define Hidd_Compositor_Switch(attr, idx) \
if (((idx) = (attr) - HiddCompositorAttrBase) < num_Hidd_Compositor_Attrs) \
switch (idx)


enum {
    moHidd_Compositor_BitMapStackChanged = 0,
    moHidd_Compositor_BitMapRectChanged = 1,
    moHidd_Compositor_BitMapPositionChange = 2,
    moHidd_Compositor_DisplayRectChanged = 3,
    moHidd_Compositor_BitMapValidate = 4,
    moHidd_Compositor_BitMapEnable = 5,
    moHidd_Compositor_SurfaceStackChanged = 6,
    moHidd_Compositor_MapCoords = 7,
    moHidd_Compositor_AttachSurface = 8,
    moHidd_Compositor_UpdateSurface = 9,
    moHidd_Compositor_DetachSurface = 10,
    num_Hidd_Compositor_Methods = 11
};

struct pHidd_Compositor_BitMapStackChanged
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *data;
    BOOL *active;
};

#define HIDD_Compositor_BitMapStackChanged(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_BitMapStackChanged_(HiddCompositorBase, __obj ,##args); })

static inline OOP_Object * HIDD_Compositor_BitMapStackChanged_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, struct HIDD_ViewPortData *data, BOOL *active)
{
    struct pHidd_Compositor_BitMapStackChanged p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_BitMapStackChanged;
    p.data = data;
    p.active = active;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_BitMapRectChanged
{
    OOP_MethodID mID;
    OOP_Object *bm;
    WORD x;
    WORD y;
    WORD width;
    WORD height;
};

#define HIDD_Compositor_BitMapRectChanged(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_BitMapRectChanged_(HiddCompositorBase, __obj ,##args); })

static inline VOID HIDD_Compositor_BitMapRectChanged_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, OOP_Object *bm, WORD x, WORD y, WORD width, WORD height)
{
    struct pHidd_Compositor_BitMapRectChanged p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_BitMapRectChanged;
    p.bm = bm;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_BitMapPositionChange
{
    OOP_MethodID mID;
    OOP_Object *bm;
    SIPTR *newxoffset;
    SIPTR *newyoffset;
};

#define HIDD_Compositor_BitMapPositionChange(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_BitMapPositionChange_(HiddCompositorBase, __obj ,##args); })

static inline BOOL HIDD_Compositor_BitMapPositionChange_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, OOP_Object *bm, SIPTR *newxoffset, SIPTR *newyoffset)
{
    struct pHidd_Compositor_BitMapPositionChange p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_BitMapPositionChange;
    p.bm = bm;
    p.newxoffset = newxoffset;
    p.newyoffset = newyoffset;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_DisplayRectChanged
{
    OOP_MethodID mID;
    struct Rectangle *rect;
};

#define HIDD_Compositor_DisplayRectChanged(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_DisplayRectChanged_(HiddCompositorBase, __obj ,##args); })

static inline VOID HIDD_Compositor_DisplayRectChanged_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, struct Rectangle *rect)
{
    struct pHidd_Compositor_DisplayRectChanged p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_DisplayRectChanged;
    p.rect = rect;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_BitMapValidate
{
    OOP_MethodID mID;
    struct BitMap *bm;
};

#define HIDD_Compositor_BitMapValidate(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_BitMapValidate_(HiddCompositorBase, __obj ,##args); })

static inline BOOL HIDD_Compositor_BitMapValidate_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, struct BitMap *bm)
{
    struct pHidd_Compositor_BitMapValidate p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_BitMapValidate;
    p.bm = bm;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_BitMapEnable
{
    OOP_MethodID mID;
    struct BitMap *bm;
};

#define HIDD_Compositor_BitMapEnable(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_BitMapEnable_(HiddCompositorBase, __obj ,##args); })

static inline BOOL HIDD_Compositor_BitMapEnable_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, struct BitMap *bm)
{
    struct pHidd_Compositor_BitMapEnable p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_BitMapEnable;
    p.bm = bm;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_SurfaceStackChanged
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *data;
};

#define HIDD_Compositor_SurfaceStackChanged(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_SurfaceStackChanged_(HiddCompositorBase, __obj ,##args); })

static inline VOID HIDD_Compositor_SurfaceStackChanged_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, struct HIDD_ViewPortData *data)
{
    struct pHidd_Compositor_SurfaceStackChanged p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_SurfaceStackChanged;
    p.data = data;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_MapCoords
{
    OOP_MethodID mID;
    OOP_Object *bm;
    BOOL toDisplay;
    LONG *x;
    LONG *y;
};

#define HIDD_Compositor_MapCoords(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_MapCoords_(HiddCompositorBase, __obj ,##args); })

static inline VOID HIDD_Compositor_MapCoords_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, OOP_Object *bm, BOOL toDisplay, LONG *x, LONG *y)
{
    struct pHidd_Compositor_MapCoords p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_MapCoords;
    p.bm = bm;
    p.toDisplay = toDisplay;
    p.x = x;
    p.y = y;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_AttachSurface
{
    OOP_MethodID mID;
    OOP_Object *screenBitMap;
    struct HIDD_CompositeRequest *request;
    struct Hook *hook;
};

#define HIDD_Compositor_AttachSurface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_AttachSurface_(HiddCompositorBase, __obj ,##args); })

static inline BOOL HIDD_Compositor_AttachSurface_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, OOP_Object *screenBitMap, struct HIDD_CompositeRequest *request, struct Hook *hook)
{
    struct pHidd_Compositor_AttachSurface p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_AttachSurface;
    p.screenBitMap = screenBitMap;
    p.request = request;
    p.hook = hook;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_UpdateSurface
{
    OOP_MethodID mID;
    struct HIDD_CompositeRequest *request;
};

#define HIDD_Compositor_UpdateSurface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_UpdateSurface_(HiddCompositorBase, __obj ,##args); })

static inline VOID HIDD_Compositor_UpdateSurface_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, struct HIDD_CompositeRequest *request)
{
    struct pHidd_Compositor_UpdateSurface p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_UpdateSurface;
    p.request = request;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Compositor_DetachSurface
{
    OOP_MethodID mID;
    struct HIDD_CompositeRequest *request;
};

#define HIDD_Compositor_DetachSurface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Compositor_DetachSurface_(HiddCompositorBase, __obj ,##args); })

static inline VOID HIDD_Compositor_DetachSurface_(OOP_MethodID __HiddCompositorBase, OOP_Object *__obj, struct HIDD_CompositeRequest *request)
{
    struct pHidd_Compositor_DetachSurface p;
    p.mID = __HiddCompositorBase + moHidd_Compositor_DetachSurface;
    p.request = request;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Compositor_H */
