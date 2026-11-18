#ifndef INTERFACE_Hidd_Gfx_H
#define INTERFACE_Hidd_Gfx_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Gfx
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Gfx                         "hidd.gfx.driver"

#if !defined(HiddGfxBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Gfx_NOMETHODBASE__)
#define HiddGfxBase Hidd_Gfx_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Gfx_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Gfx_mid;
    if (!Hidd_Gfx_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Gfx_mid = OOP_GetMethodID(IID_Hidd_Gfx, 0);
    }
    return Hidd_Gfx_mid;
}
#endif

#define HiddGfxAttrBase                  __IHidd_Gfx

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Gfx_NOATTRBASE__)
extern OOP_AttrBase HiddGfxAttrBase;
#endif

enum
{
    aoHidd_Gfx_MemoryAttribs = 0,  /*    [..G] query information about the gfx devices memory. */
    aoHidd_Gfx_DisplayList = 1,  /*         [..G] Returns a list of Display objects (if supported) */
    aoHidd_Gfx_DisplayDefault = 2,  /*       [..G] Find the primary Display. If DisplayList == NULL, DisplayDefault = the only available display. */
    aoHidd_Gfx_IsWindowed = 3,  /*                  [..G] Whether the HIDD is using host's window system */
    aoHidd_Gfx_SupportsHWCursor = 4,  /*            [..G] SupportsHWCursor (obsolete) */
    aoHidd_Gfx_NoFrameBuffer = 5,  /*               [..G] if the hidd does not need a framebuffer */
    aoHidd_Gfx_DriverName = 6,  /*                [..G] A name of driver for CyberGraphX */
    aoHidd_Gfx_ActiveCallBack = 7,  /*              [.S.] Display activation callback function */
    aoHidd_Gfx_ActiveCallBackData = 8,  /*          [.S.] User data for activation callback */
    aoHidd_Gfx_DisplayChangeCallBack = 9,  /*       [.S.] Display paramater change callback function */
    aoHidd_Gfx_DisplayChangeCallBackData = 10,  /*   [.S.] User data for display change callback */
    aoHidd_Gfx_FrameBufferType = 11,  /*            [I.G] Framebuffer type */
    aoHidd_Gfx_SupportsDisplayChange = 12,  /*       [..G] Supports the display change callback */
    num_Hidd_Gfx_Attrs = 13,
};

#define aHidd_Gfx_MemoryAttribs                    (HiddGfxAttrBase + aoHidd_Gfx_MemoryAttribs)
#define aHidd_Gfx_DisplayList                      (HiddGfxAttrBase + aoHidd_Gfx_DisplayList)
#define aHidd_Gfx_DisplayDefault                   (HiddGfxAttrBase + aoHidd_Gfx_DisplayDefault)
#define aHidd_Gfx_IsWindowed                       (HiddGfxAttrBase + aoHidd_Gfx_IsWindowed)
#define aHidd_Gfx_SupportsHWCursor                 (HiddGfxAttrBase + aoHidd_Gfx_SupportsHWCursor)
#define aHidd_Gfx_NoFrameBuffer                    (HiddGfxAttrBase + aoHidd_Gfx_NoFrameBuffer)
#define aHidd_Gfx_DriverName                       (HiddGfxAttrBase + aoHidd_Gfx_DriverName)
#define aHidd_Gfx_ActiveCallBack                   (HiddGfxAttrBase + aoHidd_Gfx_ActiveCallBack)
#define aHidd_Gfx_ActiveCallBackData               (HiddGfxAttrBase + aoHidd_Gfx_ActiveCallBackData)
#define aHidd_Gfx_DisplayChangeCallBack            (HiddGfxAttrBase + aoHidd_Gfx_DisplayChangeCallBack)
#define aHidd_Gfx_DisplayChangeCallBackData        (HiddGfxAttrBase + aoHidd_Gfx_DisplayChangeCallBackData)
#define aHidd_Gfx_FrameBufferType                  (HiddGfxAttrBase + aoHidd_Gfx_FrameBufferType)
#define aHidd_Gfx_SupportsDisplayChange            (HiddGfxAttrBase + aoHidd_Gfx_SupportsDisplayChange)

#define Hidd_Gfx_Switch(attr, idx) \
if (((idx) = (attr) - HiddGfxAttrBase) < num_Hidd_Gfx_Attrs) \
switch (idx)


enum {
    moHidd_Gfx_CopyBox = 0,
    moHidd_Gfx_CopyBoxMasked = 1,
    moHidd_Gfx_CopyBoxAlpha = 2,
    num_Hidd_Gfx_Methods = 3
};

struct pHidd_Gfx_CopyBox
{
    OOP_MethodID mID;
    OOP_Object *src;
    WORD srcX;
    WORD srcY;
    OOP_Object *dest;
    WORD destX;
    WORD destY;
    UWORD width;
    UWORD height;
    OOP_Object *gc;
};

#define HIDD_Gfx_CopyBox(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Gfx_CopyBox_(HiddGfxBase, __obj ,##args); })

static inline VOID HIDD_Gfx_CopyBox_(OOP_MethodID __HiddGfxBase, OOP_Object *__obj, OOP_Object *src, WORD srcX, WORD srcY, OOP_Object *dest, WORD destX, WORD destY, UWORD width, UWORD height, OOP_Object *gc)
{
    struct pHidd_Gfx_CopyBox p;
    p.mID = __HiddGfxBase + moHidd_Gfx_CopyBox;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dest = dest;
    p.destX = destX;
    p.destY = destY;
    p.width = width;
    p.height = height;
    p.gc = gc;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Gfx_CopyBoxMasked
{
    OOP_MethodID mID;
    OOP_Object *src;
    WORD srcX;
    WORD srcY;
    OOP_Object *dest;
    WORD destX;
    WORD destY;
    UWORD width;
    UWORD height;
    PLANEPTR mask;
    OOP_Object *gc;
};

#define HIDD_Gfx_CopyBoxMasked(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Gfx_CopyBoxMasked_(HiddGfxBase, __obj ,##args); })

static inline BOOL HIDD_Gfx_CopyBoxMasked_(OOP_MethodID __HiddGfxBase, OOP_Object *__obj, OOP_Object *src, WORD srcX, WORD srcY, OOP_Object *dest, WORD destX, WORD destY, UWORD width, UWORD height, PLANEPTR mask, OOP_Object *gc)
{
    struct pHidd_Gfx_CopyBoxMasked p;
    p.mID = __HiddGfxBase + moHidd_Gfx_CopyBoxMasked;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dest = dest;
    p.destX = destX;
    p.destY = destY;
    p.width = width;
    p.height = height;
    p.mask = mask;
    p.gc = gc;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Gfx_CopyBoxAlpha
{
    OOP_MethodID mID;
    OOP_Object *src;
    WORD srcX;
    WORD srcY;
    OOP_Object *dest;
    WORD destX;
    WORD destY;
    UWORD width;
    UWORD height;
    UBYTE opacity;
    OOP_Object *gc;
};

#define HIDD_Gfx_CopyBoxAlpha(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Gfx_CopyBoxAlpha_(HiddGfxBase, __obj ,##args); })

static inline VOID HIDD_Gfx_CopyBoxAlpha_(OOP_MethodID __HiddGfxBase, OOP_Object *__obj, OOP_Object *src, WORD srcX, WORD srcY, OOP_Object *dest, WORD destX, WORD destY, UWORD width, UWORD height, UBYTE opacity, OOP_Object *gc)
{
    struct pHidd_Gfx_CopyBoxAlpha p;
    p.mID = __HiddGfxBase + moHidd_Gfx_CopyBoxAlpha;
    p.src = src;
    p.srcX = srcX;
    p.srcY = srcY;
    p.dest = dest;
    p.destX = destX;
    p.destY = destY;
    p.width = width;
    p.height = height;
    p.opacity = opacity;
    p.gc = gc;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Gfx_H */
