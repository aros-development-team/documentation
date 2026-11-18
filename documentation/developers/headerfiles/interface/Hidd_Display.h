#ifndef INTERFACE_Hidd_Display_H
#define INTERFACE_Hidd_Display_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Display
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Display                     "hidd.gfx.display"

#if !defined(HiddDisplayBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Display_NOMETHODBASE__)
#define HiddDisplayBase Hidd_Display_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Display_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Display_mid;
    if (!Hidd_Display_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Display_mid = OOP_GetMethodID(IID_Hidd_Display, 0);
    }
    return Hidd_Display_mid;
}
#endif

#define HiddDisplayAttrBase              __IHidd_Display

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Display_NOATTRBASE__)
extern OOP_AttrBase HiddDisplayAttrBase;
#endif

enum
{
    aoHidd_Display_Name = 0,  /*                  [..G] A name */
    aoHidd_Display_GfxHidd = 1,  /*          [..G] Pointer to the gfxhidd object this display belongs to */
    aoHidd_Display_Compositor = 2,  /*       [.SG] Pointer to the displays compositor object */
    aoHidd_Display_DMEnumerator = 3,  /*     [..G] Pointer to the display mode enumerator object */
    aoHidd_Display_FrameBuffer = 4,  /*      [.SG] Pointer to the displays framebuffer object */
    aoHidd_Display_SpriteTypes = 5,  /*            [..G] Supported types of hardware sprites */
    aoHidd_Display_SoftCursor = 6,  /*              [..G] Private */
    aoHidd_Display_ModeTags = 7,  /*    [I..] Display modes description */
    aoHidd_Display_DefaultGC = 8,  /*       [..G] Default GC for copy operations */
    aoHidd_Display_SupportsGamma = 9,  /*           [..G] Supports gamma correction table */
    aoHidd_Display_DPMSLevel = 10,  /*              [ISG] DPMS level */
    aoHidd_Display_DMEnumClass = 11,  /*       [I..] Class to use for the display mode enumerator (driver override; default base dmenum class) */
    aoHidd_Display_ConnectorType = 12,  /*          [I.G] Type of the connector driving this display (vHidd_ConnectorType_*; 0 = unknown) */
    aoHidd_Display_ConnectorID = 13,  /*            [I.G] Instance number of that connector (1-based, per type) */
    aoHidd_Display_CompositorClass = 14,  /*   [I..] Class to use for the compositor (driver override; default base compositor class) */
    aoHidd_Display_DisplayID = 15,  /*              [.SG] Public display ID base of this display (set by graphics.library when registered) */
    aoHidd_Display_CompositionCapabilities = 16,  /*  [..G] COMPF_* the display's compositor can honour */
    aoHidd_Display_CompositionState = 17,  /*       [.SG] COMPF_* currently enabled on the display's compositor */
    aoHidd_Display_PlaneCount = 18,  /*             [..G] Number of scan-out planes (base class: 1, the primary) */
    aoHidd_Display_VBlankCount = 19,  /*            [..G] Frames scanned out so far, 0 when the driver does not count */
    aoHidd_Display_ColorKey = 20,  /*               [..G] Destination colour key (0x00RRGGBB) used for PSF_COLORKEY planes */
    aoHidd_Display_DecodeVectors = 21,  /*  [I..] Driver display class's decode vector table (NULL = no decoder) */
    aoHidd_Display_DecodeDataSize = 22,  /*         [I..] Bytes of driver data in each decode interface instance */
    num_Hidd_Display_Attrs = 23,
};

#define aHidd_Display_Name                             (HiddDisplayAttrBase + aoHidd_Display_Name)
#define aHidd_Display_GfxHidd                          (HiddDisplayAttrBase + aoHidd_Display_GfxHidd)
#define aHidd_Display_Compositor                       (HiddDisplayAttrBase + aoHidd_Display_Compositor)
#define aHidd_Display_DMEnumerator                     (HiddDisplayAttrBase + aoHidd_Display_DMEnumerator)
#define aHidd_Display_FrameBuffer                      (HiddDisplayAttrBase + aoHidd_Display_FrameBuffer)
#define aHidd_Display_SpriteTypes                      (HiddDisplayAttrBase + aoHidd_Display_SpriteTypes)
#define aHidd_Display_SoftCursor                       (HiddDisplayAttrBase + aoHidd_Display_SoftCursor)
#define aHidd_Display_ModeTags                         (HiddDisplayAttrBase + aoHidd_Display_ModeTags)
#define aHidd_Display_DefaultGC                        (HiddDisplayAttrBase + aoHidd_Display_DefaultGC)
#define aHidd_Display_SupportsGamma                    (HiddDisplayAttrBase + aoHidd_Display_SupportsGamma)
#define aHidd_Display_DPMSLevel                        (HiddDisplayAttrBase + aoHidd_Display_DPMSLevel)
#define aHidd_Display_DMEnumClass                      (HiddDisplayAttrBase + aoHidd_Display_DMEnumClass)
#define aHidd_Display_ConnectorType                    (HiddDisplayAttrBase + aoHidd_Display_ConnectorType)
#define aHidd_Display_ConnectorID                      (HiddDisplayAttrBase + aoHidd_Display_ConnectorID)
#define aHidd_Display_CompositorClass                  (HiddDisplayAttrBase + aoHidd_Display_CompositorClass)
#define aHidd_Display_DisplayID                        (HiddDisplayAttrBase + aoHidd_Display_DisplayID)
#define aHidd_Display_CompositionCapabilities          (HiddDisplayAttrBase + aoHidd_Display_CompositionCapabilities)
#define aHidd_Display_CompositionState                 (HiddDisplayAttrBase + aoHidd_Display_CompositionState)
#define aHidd_Display_PlaneCount                       (HiddDisplayAttrBase + aoHidd_Display_PlaneCount)
#define aHidd_Display_VBlankCount                      (HiddDisplayAttrBase + aoHidd_Display_VBlankCount)
#define aHidd_Display_ColorKey                         (HiddDisplayAttrBase + aoHidd_Display_ColorKey)
#define aHidd_Display_DecodeVectors                    (HiddDisplayAttrBase + aoHidd_Display_DecodeVectors)
#define aHidd_Display_DecodeDataSize                   (HiddDisplayAttrBase + aoHidd_Display_DecodeDataSize)

#define Hidd_Display_Switch(attr, idx) \
if (((idx) = (attr) - HiddDisplayAttrBase) < num_Hidd_Display_Attrs) \
switch (idx)


enum {
    moHidd_Display_CreateObject = 0,
    moHidd_Display_NominalDimensions = 1,
    moHidd_Display_SetCursorShape = 2,
    moHidd_Display_SetCursorPos = 3,
    moHidd_Display_SetCursorVisible = 4,
    moHidd_Display_Show = 5,
    moHidd_Display_ShowViewPorts = 6,
    moHidd_Display_MakeViewPort = 7,
    moHidd_Display_InitViewPorts = 8,
    moHidd_Display_DeinitViewPort = 9,
    moHidd_Display_ModeProperties = 10,
    moHidd_Display_GetGamma = 11,
    moHidd_Display_SetGamma = 12,
    moHidd_Display_GetMaxSpriteSize = 13,
    moHidd_Display_DisplayToBMCoords = 14,
    moHidd_Display_BMToDisplayCoords = 15,
    moHidd_Display_ComposeViewPorts = 16,
    moHidd_Display_ViewPortPositionChange = 17,
    moHidd_Display_UpdateRect = 18,
    moHidd_Display_SurfaceStackChanged = 19,
    moHidd_Display_GetPlaneInfo = 20,
    moHidd_Display_CommitPlanes = 21,
    moHidd_Display_WaitLatch = 22,
    moHidd_Display_QueryScanout = 23,
    moHidd_Display_AttachSurface = 24,
    moHidd_Display_UpdateSurface = 25,
    moHidd_Display_DetachSurface = 26,
    moHidd_Display_QueryDecode = 27,
    moHidd_Display_GetDecodeInterface = 28,
    moHidd_Display_FreeDecodeInterface = 29,
    num_Hidd_Display_Methods = 30
};

struct pHidd_Display_CreateObject
{
    OOP_MethodID mID;
    OOP_Class *cl;
    struct TagItem *attrList;
};

#define HIDD_Display_CreateObject(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_CreateObject_(HiddDisplayBase, __obj ,##args); })

static inline OOP_Object * HIDD_Display_CreateObject_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Class *cl, struct TagItem *attrList)
{
    struct pHidd_Display_CreateObject p;
    p.mID = __HiddDisplayBase + moHidd_Display_CreateObject;
    p.cl = cl;
    p.attrList = attrList;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_NominalDimensions
{
    OOP_MethodID mID;
    UWORD *width;
    UWORD *height;
    UBYTE *depth;
};

#define HIDD_Display_NominalDimensions(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_NominalDimensions_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_NominalDimensions_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, UWORD *width, UWORD *height, UBYTE *depth)
{
    struct pHidd_Display_NominalDimensions p;
    p.mID = __HiddDisplayBase + moHidd_Display_NominalDimensions;
    p.width = width;
    p.height = height;
    p.depth = depth;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_SetCursorShape
{
    OOP_MethodID mID;
    OOP_Object *shape;
    WORD xoffset;
    WORD yoffset;
};

#define HIDD_Display_SetCursorShape(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_SetCursorShape_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_SetCursorShape_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Object *shape, WORD xoffset, WORD yoffset)
{
    struct pHidd_Display_SetCursorShape p;
    p.mID = __HiddDisplayBase + moHidd_Display_SetCursorShape;
    p.shape = shape;
    p.xoffset = xoffset;
    p.yoffset = yoffset;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_SetCursorPos
{
    OOP_MethodID mID;
    WORD x;
    WORD y;
};

#define HIDD_Display_SetCursorPos(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_SetCursorPos_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_SetCursorPos_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, WORD x, WORD y)
{
    struct pHidd_Display_SetCursorPos p;
    p.mID = __HiddDisplayBase + moHidd_Display_SetCursorPos;
    p.x = x;
    p.y = y;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_SetCursorVisible
{
    OOP_MethodID mID;
    BOOL visible;
};

#define HIDD_Display_SetCursorVisible(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_SetCursorVisible_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_SetCursorVisible_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, BOOL visible)
{
    struct pHidd_Display_SetCursorVisible p;
    p.mID = __HiddDisplayBase + moHidd_Display_SetCursorVisible;
    p.visible = visible;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_Show
{
    OOP_MethodID mID;
    OOP_Object *bitMap;
    ULONG flags;
};

#define HIDD_Display_Show(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_Show_(HiddDisplayBase, __obj ,##args); })

static inline OOP_Object * HIDD_Display_Show_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Object *bitMap, ULONG flags)
{
    struct pHidd_Display_Show p;
    p.mID = __HiddDisplayBase + moHidd_Display_Show;
    p.bitMap = bitMap;
    p.flags = flags;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_ShowViewPorts
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *Data;
};

#define HIDD_Display_ShowViewPorts(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_ShowViewPorts_(HiddDisplayBase, __obj ,##args); })

static inline ULONG HIDD_Display_ShowViewPorts_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_ViewPortData *Data)
{
    struct pHidd_Display_ShowViewPorts p;
    p.mID = __HiddDisplayBase + moHidd_Display_ShowViewPorts;
    p.Data = Data;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_MakeViewPort
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *Data;
    struct View *view;
};

#define HIDD_Display_MakeViewPort(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_MakeViewPort_(HiddDisplayBase, __obj ,##args); })

static inline ULONG HIDD_Display_MakeViewPort_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_ViewPortData *Data, struct View *view)
{
    struct pHidd_Display_MakeViewPort p;
    p.mID = __HiddDisplayBase + moHidd_Display_MakeViewPort;
    p.Data = Data;
    p.view = view;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_InitViewPorts
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *Data;
    struct View *view;
};

#define HIDD_Display_InitViewPorts(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_InitViewPorts_(HiddDisplayBase, __obj ,##args); })

static inline ULONG HIDD_Display_InitViewPorts_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_ViewPortData *Data, struct View *view)
{
    struct pHidd_Display_InitViewPorts p;
    p.mID = __HiddDisplayBase + moHidd_Display_InitViewPorts;
    p.Data = Data;
    p.view = view;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_DeinitViewPort
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *Data;
};

#define HIDD_Display_DeinitViewPort(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_DeinitViewPort_(HiddDisplayBase, __obj ,##args); })

static inline void HIDD_Display_DeinitViewPort_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_ViewPortData *Data)
{
    struct pHidd_Display_DeinitViewPort p;
    p.mID = __HiddDisplayBase + moHidd_Display_DeinitViewPort;
    p.Data = Data;
    (void)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_ModeProperties
{
    OOP_MethodID mID;
    HIDDT_ModeID modeID;
    struct HIDD_ModeProperties *props;
    ULONG propsLen;
};

#define HIDD_Display_ModeProperties(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_ModeProperties_(HiddDisplayBase, __obj ,##args); })

static inline ULONG HIDD_Display_ModeProperties_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, HIDDT_ModeID modeID, struct HIDD_ModeProperties *props, ULONG propsLen)
{
    struct pHidd_Display_ModeProperties p;
    p.mID = __HiddDisplayBase + moHidd_Display_ModeProperties;
    p.modeID = modeID;
    p.props = props;
    p.propsLen = propsLen;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_GetGamma
{
    OOP_MethodID mID;
    UBYTE *Red;
    UBYTE *Green;
    UBYTE *Blue;
};

#define HIDD_Display_GetGamma(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_GetGamma_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_GetGamma_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, UBYTE *Red, UBYTE *Green, UBYTE *Blue)
{
    struct pHidd_Display_GetGamma p;
    p.mID = __HiddDisplayBase + moHidd_Display_GetGamma;
    p.Red = Red;
    p.Green = Green;
    p.Blue = Blue;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_SetGamma
{
    OOP_MethodID mID;
    UBYTE *Red;
    UBYTE *Green;
    UBYTE *Blue;
};

#define HIDD_Display_SetGamma(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_SetGamma_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_SetGamma_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, UBYTE *Red, UBYTE *Green, UBYTE *Blue)
{
    struct pHidd_Display_SetGamma p;
    p.mID = __HiddDisplayBase + moHidd_Display_SetGamma;
    p.Red = Red;
    p.Green = Green;
    p.Blue = Blue;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_GetMaxSpriteSize
{
    OOP_MethodID mID;
    ULONG Type;
    ULONG *Width;
    ULONG *Height;
};

#define HIDD_Display_GetMaxSpriteSize(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_GetMaxSpriteSize_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_GetMaxSpriteSize_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, ULONG Type, ULONG *Width, ULONG *Height)
{
    struct pHidd_Display_GetMaxSpriteSize p;
    p.mID = __HiddDisplayBase + moHidd_Display_GetMaxSpriteSize;
    p.Type = Type;
    p.Width = Width;
    p.Height = Height;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_DisplayToBMCoords
{
    OOP_MethodID mID;
    OOP_Object *Target;
    UWORD DispX;
    UWORD DispY;
    UWORD *TargetX;
    UWORD *TargetY;
};

#define HIDD_Display_DisplayToBMCoords(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_DisplayToBMCoords_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_DisplayToBMCoords_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Object *Target, UWORD DispX, UWORD DispY, UWORD *TargetX, UWORD *TargetY)
{
    struct pHidd_Display_DisplayToBMCoords p;
    p.mID = __HiddDisplayBase + moHidd_Display_DisplayToBMCoords;
    p.Target = Target;
    p.DispX = DispX;
    p.DispY = DispY;
    p.TargetX = TargetX;
    p.TargetY = TargetY;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_BMToDisplayCoords
{
    OOP_MethodID mID;
    OOP_Object *Target;
    UWORD TargetX;
    UWORD TargetY;
    UWORD *DispX;
    UWORD *DispY;
};

#define HIDD_Display_BMToDisplayCoords(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_BMToDisplayCoords_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_BMToDisplayCoords_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Object *Target, UWORD TargetX, UWORD TargetY, UWORD *DispX, UWORD *DispY)
{
    struct pHidd_Display_BMToDisplayCoords p;
    p.mID = __HiddDisplayBase + moHidd_Display_BMToDisplayCoords;
    p.Target = Target;
    p.TargetX = TargetX;
    p.TargetY = TargetY;
    p.DispX = DispX;
    p.DispY = DispY;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_ComposeViewPorts
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *Data;
    BOOL *composing;
};

#define HIDD_Display_ComposeViewPorts(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_ComposeViewPorts_(HiddDisplayBase, __obj ,##args); })

static inline OOP_Object * HIDD_Display_ComposeViewPorts_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_ViewPortData *Data, BOOL *composing)
{
    struct pHidd_Display_ComposeViewPorts p;
    p.mID = __HiddDisplayBase + moHidd_Display_ComposeViewPorts;
    p.Data = Data;
    p.composing = composing;
    return (OOP_Object *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_ViewPortPositionChange
{
    OOP_MethodID mID;
    OOP_Object *bitMap;
    SIPTR *x;
    SIPTR *y;
};

#define HIDD_Display_ViewPortPositionChange(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_ViewPortPositionChange_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_ViewPortPositionChange_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Object *bitMap, SIPTR *x, SIPTR *y)
{
    struct pHidd_Display_ViewPortPositionChange p;
    p.mID = __HiddDisplayBase + moHidd_Display_ViewPortPositionChange;
    p.bitMap = bitMap;
    p.x = x;
    p.y = y;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_UpdateRect
{
    OOP_MethodID mID;
    OOP_Object *bitMap;
    WORD x;
    WORD y;
    UWORD width;
    UWORD height;
};

#define HIDD_Display_UpdateRect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_UpdateRect_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_UpdateRect_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Object *bitMap, WORD x, WORD y, UWORD width, UWORD height)
{
    struct pHidd_Display_UpdateRect p;
    p.mID = __HiddDisplayBase + moHidd_Display_UpdateRect;
    p.bitMap = bitMap;
    p.x = x;
    p.y = y;
    p.width = width;
    p.height = height;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_SurfaceStackChanged
{
    OOP_MethodID mID;
    struct HIDD_ViewPortData *Data;
};

#define HIDD_Display_SurfaceStackChanged(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_SurfaceStackChanged_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_SurfaceStackChanged_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_ViewPortData *Data)
{
    struct pHidd_Display_SurfaceStackChanged p;
    p.mID = __HiddDisplayBase + moHidd_Display_SurfaceStackChanged;
    p.Data = Data;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_GetPlaneInfo
{
    OOP_MethodID mID;
    ULONG index;
    struct HIDD_PlaneInfo *info;
    ULONG infoLen;
};

#define HIDD_Display_GetPlaneInfo(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_GetPlaneInfo_(HiddDisplayBase, __obj ,##args); })

static inline ULONG HIDD_Display_GetPlaneInfo_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, ULONG index, struct HIDD_PlaneInfo *info, ULONG infoLen)
{
    struct pHidd_Display_GetPlaneInfo p;
    p.mID = __HiddDisplayBase + moHidd_Display_GetPlaneInfo;
    p.index = index;
    p.info = info;
    p.infoLen = infoLen;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_CommitPlanes
{
    OOP_MethodID mID;
    struct HIDD_PlaneState *states;
    ULONG count;
    ULONG flags;
};

#define HIDD_Display_CommitPlanes(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_CommitPlanes_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_CommitPlanes_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_PlaneState *states, ULONG count, ULONG flags)
{
    struct pHidd_Display_CommitPlanes p;
    p.mID = __HiddDisplayBase + moHidd_Display_CommitPlanes;
    p.states = states;
    p.count = count;
    p.flags = flags;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_WaitLatch
{
    OOP_MethodID mID;
};

#define HIDD_Display_WaitLatch(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_WaitLatch_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_WaitLatch_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj)
{
    struct pHidd_Display_WaitLatch p;
    p.mID = __HiddDisplayBase + moHidd_Display_WaitLatch;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_QueryScanout
{
    OOP_MethodID mID;
    HIDDT_StdPixFmt pixFmt;
    ULONG videoFmt;
    ULONG width;
    ULONG height;
    struct HIDD_ScanoutCaps *caps;
};

#define HIDD_Display_QueryScanout(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_QueryScanout_(HiddDisplayBase, __obj ,##args); })

static inline ULONG HIDD_Display_QueryScanout_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, HIDDT_StdPixFmt pixFmt, ULONG videoFmt, ULONG width, ULONG height, struct HIDD_ScanoutCaps *caps)
{
    struct pHidd_Display_QueryScanout p;
    p.mID = __HiddDisplayBase + moHidd_Display_QueryScanout;
    p.pixFmt = pixFmt;
    p.videoFmt = videoFmt;
    p.width = width;
    p.height = height;
    p.caps = caps;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_AttachSurface
{
    OOP_MethodID mID;
    OOP_Object *screenBitMap;
    struct HIDD_CompositeRequest *request;
    struct Hook *hook;
};

#define HIDD_Display_AttachSurface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_AttachSurface_(HiddDisplayBase, __obj ,##args); })

static inline BOOL HIDD_Display_AttachSurface_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, OOP_Object *screenBitMap, struct HIDD_CompositeRequest *request, struct Hook *hook)
{
    struct pHidd_Display_AttachSurface p;
    p.mID = __HiddDisplayBase + moHidd_Display_AttachSurface;
    p.screenBitMap = screenBitMap;
    p.request = request;
    p.hook = hook;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_UpdateSurface
{
    OOP_MethodID mID;
    struct HIDD_CompositeRequest *request;
};

#define HIDD_Display_UpdateSurface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_UpdateSurface_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_UpdateSurface_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_CompositeRequest *request)
{
    struct pHidd_Display_UpdateSurface p;
    p.mID = __HiddDisplayBase + moHidd_Display_UpdateSurface;
    p.request = request;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_DetachSurface
{
    OOP_MethodID mID;
    struct HIDD_CompositeRequest *request;
};

#define HIDD_Display_DetachSurface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_DetachSurface_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_DetachSurface_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, struct HIDD_CompositeRequest *request)
{
    struct pHidd_Display_DetachSurface p;
    p.mID = __HiddDisplayBase + moHidd_Display_DetachSurface;
    p.request = request;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_QueryDecode
{
    OOP_MethodID mID;
    LONG profile;
    ULONG width;
    ULONG height;
    struct HIDD_DecodeCaps *caps;
};

#define HIDD_Display_QueryDecode(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_QueryDecode_(HiddDisplayBase, __obj ,##args); })

static inline ULONG HIDD_Display_QueryDecode_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, LONG profile, ULONG width, ULONG height, struct HIDD_DecodeCaps *caps)
{
    struct pHidd_Display_QueryDecode p;
    p.mID = __HiddDisplayBase + moHidd_Display_QueryDecode;
    p.profile = profile;
    p.width = width;
    p.height = height;
    p.caps = caps;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_GetDecodeInterface
{
    OOP_MethodID mID;
    LONG profile;
    ULONG width;
    ULONG height;
    struct Hook *resolve;
    ULONG flags;
};

#define HIDD_Display_GetDecodeInterface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_GetDecodeInterface_(HiddDisplayBase, __obj ,##args); })

static inline APTR HIDD_Display_GetDecodeInterface_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, LONG profile, ULONG width, ULONG height, struct Hook *resolve, ULONG flags)
{
    struct pHidd_Display_GetDecodeInterface p;
    p.mID = __HiddDisplayBase + moHidd_Display_GetDecodeInterface;
    p.profile = profile;
    p.width = width;
    p.height = height;
    p.resolve = resolve;
    p.flags = flags;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Display_FreeDecodeInterface
{
    OOP_MethodID mID;
    APTR iface;
};

#define HIDD_Display_FreeDecodeInterface(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Display_FreeDecodeInterface_(HiddDisplayBase, __obj ,##args); })

static inline VOID HIDD_Display_FreeDecodeInterface_(OOP_MethodID __HiddDisplayBase, OOP_Object *__obj, APTR iface)
{
    struct pHidd_Display_FreeDecodeInterface p;
    p.mID = __HiddDisplayBase + moHidd_Display_FreeDecodeInterface;
    p.iface = iface;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Display_H */
