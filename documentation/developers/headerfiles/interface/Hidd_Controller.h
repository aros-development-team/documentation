#ifndef INTERFACE_Hidd_Controller_H
#define INTERFACE_Hidd_Controller_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/hidds/controller/controller.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Controller
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Controller                  "hidd.input.controller"

#if !defined(HiddControllerBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Controller_NOMETHODBASE__)
#define HiddControllerBase Hidd_Controller_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Controller_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Controller_mid;
    if (!Hidd_Controller_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Controller_mid = OOP_GetMethodID(IID_Hidd_Controller, 0);
    }
    return Hidd_Controller_mid;
}
#endif

#define HiddControllerAB                 __IHidd_Controller

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Controller_NOATTRBASE__)
extern OOP_AttrBase HiddControllerAB;
#endif

enum
{
    aoHidd_Controller_DeviceID = 0,  /*  [..G] Instance id, never reused while the system runs */
    aoHidd_Controller_VendorID = 1,  /*  [I.G] USB/Bluetooth vendor id, 0 if unknown */
    aoHidd_Controller_ProductID = 2,  /*  [I.G] USB/Bluetooth product id */
    aoHidd_Controller_Version = 3,  /*  [I.G] Device/firmware version */
    aoHidd_Controller_Manufacturer = 4,  /*  [I.G] Vendor string */
    aoHidd_Controller_Serial = 5,  /*  [I.G] Serial number / Bluetooth address, may be NULL */
    aoHidd_Controller_Bus = 6,  /*  [I.G] vHidd_Controller_Bus_* */
    aoHidd_Controller_Path = 7,  /*  [I.G] Driver defined topology string */
    aoHidd_Controller_GUID = 8,  /*  [I.G] 16 byte device class identifier (computed from bus, name, ids if not supplied) */
    aoHidd_Controller_Type = 9,  /*  [I.G] vHidd_Controller_Type_* archetype hint */
    aoHidd_Controller_Family = 10,  /*  [I.G] vHidd_Controller_Family_* protocol family */
    aoHidd_Controller_Connection = 11,  /*  [I.G] vHidd_Controller_Conn_* */
    aoHidd_Controller_PlayerIndex = 12,  /*  [.SG] Player index, -1 none */
    aoHidd_Controller_LegacyPort = 13,  /*  [..G] lowlevel.library joyport 0..3, or -1 when not mapped */
    aoHidd_Controller_Connected = 14,  /*  [..G] FALSE between DeviceRemoved and disposal */
    aoHidd_Controller_ControlTable = 15,  /*  [I..] struct Hidd_Controller_ControlDesc array, Ctl_End terminated */
    aoHidd_Controller_OutputTable = 16,  /*  [I..] struct Hidd_Controller_OutputDesc array, Out_End terminated */
    aoHidd_Controller_BindingTable = 17,  /*  [I..] struct Hidd_Controller_Binding array giving the standard layout, Std_None terminated */
    aoHidd_Controller_ButtonCount = 18,  /*  [..G] */
    aoHidd_Controller_AxisCount = 19,  /*  [..G] */
    aoHidd_Controller_HatCount = 20,  /*  [..G] */
    aoHidd_Controller_TouchpadCount = 21,  /*  [..G] */
    aoHidd_Controller_SensorCount = 22,  /*  [..G] */
    aoHidd_Controller_OutputCount = 23,  /*  [..G] */
    aoHidd_Controller_Capabilities = 24,  /*  [..G] vHidd_Controller_Cap_* */
    aoHidd_Controller_Sequence = 25,  /*  [..G] Current reading sequence number */
    aoHidd_Controller_SensorsEnabled = 26,  /*  [.SG] */
    aoHidd_Controller_Device = 27,  /*  [I..] Consumer: bind to this device object */
    aoHidd_Controller_DeviceFilter = 28,  /*  [I..] Consumer: bind to this device id (0 = all) */
    aoHidd_Controller_EventMask = 29,  /*  [I..] Consumer: vHidd_Controller_EventMask() bits */
    aoHidd_Controller_NotifyTask = 30,  /*  [I..] Consumer: struct Task to Signal() */
    aoHidd_Controller_NotifySignal = 31,  /*  [I..] Consumer: signal bit number */
    aoHidd_Controller_NotifyPort = 32,  /*  [I..] Consumer: struct MsgPort receiving Hidd_Controller_EventMsg */
    aoHidd_Controller_QueueDepth = 33,  /*  [I..] Consumer: queue depth for signal/port modes */
    aoHidd_Controller_Coalesce = 34,  /*  [I..] Consumer: keep only latest motion event per control */
    num_Hidd_Controller_Attrs = 35,
};

#define aHidd_Controller_DeviceID                         (HiddControllerAB + aoHidd_Controller_DeviceID)
#define aHidd_Controller_VendorID                         (HiddControllerAB + aoHidd_Controller_VendorID)
#define aHidd_Controller_ProductID                        (HiddControllerAB + aoHidd_Controller_ProductID)
#define aHidd_Controller_Version                          (HiddControllerAB + aoHidd_Controller_Version)
#define aHidd_Controller_Manufacturer                     (HiddControllerAB + aoHidd_Controller_Manufacturer)
#define aHidd_Controller_Serial                           (HiddControllerAB + aoHidd_Controller_Serial)
#define aHidd_Controller_Bus                              (HiddControllerAB + aoHidd_Controller_Bus)
#define aHidd_Controller_Path                             (HiddControllerAB + aoHidd_Controller_Path)
#define aHidd_Controller_GUID                             (HiddControllerAB + aoHidd_Controller_GUID)
#define aHidd_Controller_Type                             (HiddControllerAB + aoHidd_Controller_Type)
#define aHidd_Controller_Family                           (HiddControllerAB + aoHidd_Controller_Family)
#define aHidd_Controller_Connection                       (HiddControllerAB + aoHidd_Controller_Connection)
#define aHidd_Controller_PlayerIndex                      (HiddControllerAB + aoHidd_Controller_PlayerIndex)
#define aHidd_Controller_LegacyPort                       (HiddControllerAB + aoHidd_Controller_LegacyPort)
#define aHidd_Controller_Connected                        (HiddControllerAB + aoHidd_Controller_Connected)
#define aHidd_Controller_ControlTable                     (HiddControllerAB + aoHidd_Controller_ControlTable)
#define aHidd_Controller_OutputTable                      (HiddControllerAB + aoHidd_Controller_OutputTable)
#define aHidd_Controller_BindingTable                     (HiddControllerAB + aoHidd_Controller_BindingTable)
#define aHidd_Controller_ButtonCount                      (HiddControllerAB + aoHidd_Controller_ButtonCount)
#define aHidd_Controller_AxisCount                        (HiddControllerAB + aoHidd_Controller_AxisCount)
#define aHidd_Controller_HatCount                         (HiddControllerAB + aoHidd_Controller_HatCount)
#define aHidd_Controller_TouchpadCount                    (HiddControllerAB + aoHidd_Controller_TouchpadCount)
#define aHidd_Controller_SensorCount                      (HiddControllerAB + aoHidd_Controller_SensorCount)
#define aHidd_Controller_OutputCount                      (HiddControllerAB + aoHidd_Controller_OutputCount)
#define aHidd_Controller_Capabilities                     (HiddControllerAB + aoHidd_Controller_Capabilities)
#define aHidd_Controller_Sequence                         (HiddControllerAB + aoHidd_Controller_Sequence)
#define aHidd_Controller_SensorsEnabled                   (HiddControllerAB + aoHidd_Controller_SensorsEnabled)
#define aHidd_Controller_Device                           (HiddControllerAB + aoHidd_Controller_Device)
#define aHidd_Controller_DeviceFilter                     (HiddControllerAB + aoHidd_Controller_DeviceFilter)
#define aHidd_Controller_EventMask                        (HiddControllerAB + aoHidd_Controller_EventMask)
#define aHidd_Controller_NotifyTask                       (HiddControllerAB + aoHidd_Controller_NotifyTask)
#define aHidd_Controller_NotifySignal                     (HiddControllerAB + aoHidd_Controller_NotifySignal)
#define aHidd_Controller_NotifyPort                       (HiddControllerAB + aoHidd_Controller_NotifyPort)
#define aHidd_Controller_QueueDepth                       (HiddControllerAB + aoHidd_Controller_QueueDepth)
#define aHidd_Controller_Coalesce                         (HiddControllerAB + aoHidd_Controller_Coalesce)

#define Hidd_Controller_Switch(attr, idx) \
if (((idx) = (attr) - HiddControllerAB) < num_Hidd_Controller_Attrs) \
switch (idx)


enum {
    moHidd_Controller_GetReading = 0,
    moHidd_Controller_GetControlInfo = 1,
    moHidd_Controller_GetOutputInfo = 2,
    moHidd_Controller_GetBinding = 3,
    moHidd_Controller_GetLabel = 4,
    moHidd_Controller_GetPowerInfo = 5,
    moHidd_Controller_GetSensorData = 6,
    moHidd_Controller_GetTouchpadFinger = 7,
    moHidd_Controller_GetEvent = 8,
    moHidd_Controller_GetBindings = 9,
    moHidd_Controller_SetRumble = 10,
    moHidd_Controller_SetLED = 11,
    moHidd_Controller_SetPlayerIndex = 12,
    moHidd_Controller_SendEffect = 13,
    moHidd_Controller_SetSensorsEnabled = 14,
    moHidd_Controller_UploadEffect = 15,
    moHidd_Controller_UpdateEffect = 16,
    moHidd_Controller_PlayEffect = 17,
    moHidd_Controller_StopEffect = 18,
    moHidd_Controller_RemoveEffect = 19,
    moHidd_Controller_SetGain = 20,
    moHidd_Controller_SetAutocenter = 21,
    moHidd_Controller_PushValue = 22,
    moHidd_Controller_PushReport = 23,
    moHidd_Controller_PushTouch = 24,
    moHidd_Controller_PushSensor = 25,
    moHidd_Controller_PushPower = 26,
    moHidd_Controller_SetConnected = 27,
    num_Hidd_Controller_Methods = 28
};

struct pHidd_Controller_GetReading
{
    OOP_MethodID mID;
    struct pHidd_Controller_Reading *dst;
};

#define HIDD_Controller_GetReading(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetReading_(HiddControllerBase, __obj ,##args); })

static inline ULONG HIDD_Controller_GetReading_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct pHidd_Controller_Reading *dst)
{
    struct pHidd_Controller_GetReading p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetReading;
    p.dst = dst;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetControlInfo
{
    OOP_MethodID mID;
    UBYTE kind;
    UBYTE index;
    struct Hidd_Controller_ControlDesc *dst;
};

#define HIDD_Controller_GetControlInfo(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetControlInfo_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_GetControlInfo_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE kind, UBYTE index, struct Hidd_Controller_ControlDesc *dst)
{
    struct pHidd_Controller_GetControlInfo p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetControlInfo;
    p.kind = kind;
    p.index = index;
    p.dst = dst;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetOutputInfo
{
    OOP_MethodID mID;
    UBYTE index;
    struct Hidd_Controller_OutputDesc *dst;
};

#define HIDD_Controller_GetOutputInfo(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetOutputInfo_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_GetOutputInfo_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE index, struct Hidd_Controller_OutputDesc *dst)
{
    struct pHidd_Controller_GetOutputInfo p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetOutputInfo;
    p.index = index;
    p.dst = dst;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetBinding
{
    OOP_MethodID mID;
    UWORD stdid;
    struct Hidd_Controller_Binding *dst;
};

#define HIDD_Controller_GetBinding(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetBinding_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_GetBinding_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UWORD stdid, struct Hidd_Controller_Binding *dst)
{
    struct pHidd_Controller_GetBinding p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetBinding;
    p.stdid = stdid;
    p.dst = dst;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetLabel
{
    OOP_MethodID mID;
    UWORD stdid;
};

#define HIDD_Controller_GetLabel(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetLabel_(HiddControllerBase, __obj ,##args); })

static inline UWORD HIDD_Controller_GetLabel_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UWORD stdid)
{
    struct pHidd_Controller_GetLabel p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetLabel;
    p.stdid = stdid;
    return (UWORD)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetPowerInfo
{
    OOP_MethodID mID;
    struct pHidd_Controller_PowerInfo *dst;
};

#define HIDD_Controller_GetPowerInfo(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetPowerInfo_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_GetPowerInfo_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct pHidd_Controller_PowerInfo *dst)
{
    struct pHidd_Controller_GetPowerInfo p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetPowerInfo;
    p.dst = dst;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetSensorData
{
    OOP_MethodID mID;
    UBYTE sensor;
    struct pHidd_Controller_SensorSample *dst;
    ULONG max;
};

#define HIDD_Controller_GetSensorData(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetSensorData_(HiddControllerBase, __obj ,##args); })

static inline ULONG HIDD_Controller_GetSensorData_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE sensor, struct pHidd_Controller_SensorSample *dst, ULONG max)
{
    struct pHidd_Controller_GetSensorData p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetSensorData;
    p.sensor = sensor;
    p.dst = dst;
    p.max = max;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetTouchpadFinger
{
    OOP_MethodID mID;
    UBYTE pad;
    UBYTE finger;
    struct pHidd_Controller_Finger *dst;
};

#define HIDD_Controller_GetTouchpadFinger(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetTouchpadFinger_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_GetTouchpadFinger_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE pad, UBYTE finger, struct pHidd_Controller_Finger *dst)
{
    struct pHidd_Controller_GetTouchpadFinger p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetTouchpadFinger;
    p.pad = pad;
    p.finger = finger;
    p.dst = dst;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetEvent
{
    OOP_MethodID mID;
    struct pHidd_Controller_Event *dst;
};

#define HIDD_Controller_GetEvent(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetEvent_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_GetEvent_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct pHidd_Controller_Event *dst)
{
    struct pHidd_Controller_GetEvent p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetEvent;
    p.dst = dst;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_GetBindings
{
    OOP_MethodID mID;
    struct Hidd_Controller_Binding *buffer;
    ULONG max;
};

#define HIDD_Controller_GetBindings(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_GetBindings_(HiddControllerBase, __obj ,##args); })

static inline ULONG HIDD_Controller_GetBindings_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct Hidd_Controller_Binding *buffer, ULONG max)
{
    struct pHidd_Controller_GetBindings p;
    p.mID = __HiddControllerBase + moHidd_Controller_GetBindings;
    p.buffer = buffer;
    p.max = max;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SetRumble
{
    OOP_MethodID mID;
    struct pHidd_Controller_Rumble *params;
};

#define HIDD_Controller_SetRumble(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SetRumble_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_SetRumble_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct pHidd_Controller_Rumble *params)
{
    struct pHidd_Controller_SetRumble p;
    p.mID = __HiddControllerBase + moHidd_Controller_SetRumble;
    p.params = params;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SetLED
{
    OOP_MethodID mID;
    UBYTE red;
    UBYTE green;
    UBYTE blue;
};

#define HIDD_Controller_SetLED(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SetLED_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_SetLED_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE red, UBYTE green, UBYTE blue)
{
    struct pHidd_Controller_SetLED p;
    p.mID = __HiddControllerBase + moHidd_Controller_SetLED;
    p.red = red;
    p.green = green;
    p.blue = blue;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SetPlayerIndex
{
    OOP_MethodID mID;
    WORD index;
};

#define HIDD_Controller_SetPlayerIndex(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SetPlayerIndex_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_SetPlayerIndex_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, WORD index)
{
    struct pHidd_Controller_SetPlayerIndex p;
    p.mID = __HiddControllerBase + moHidd_Controller_SetPlayerIndex;
    p.index = index;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SendEffect
{
    OOP_MethodID mID;
    APTR data;
    ULONG size;
};

#define HIDD_Controller_SendEffect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SendEffect_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_SendEffect_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, APTR data, ULONG size)
{
    struct pHidd_Controller_SendEffect p;
    p.mID = __HiddControllerBase + moHidd_Controller_SendEffect;
    p.data = data;
    p.size = size;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SetSensorsEnabled
{
    OOP_MethodID mID;
    BOOL enable;
};

#define HIDD_Controller_SetSensorsEnabled(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SetSensorsEnabled_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_SetSensorsEnabled_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, BOOL enable)
{
    struct pHidd_Controller_SetSensorsEnabled p;
    p.mID = __HiddControllerBase + moHidd_Controller_SetSensorsEnabled;
    p.enable = enable;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_UploadEffect
{
    OOP_MethodID mID;
    struct pHidd_Controller_Effect *effect;
};

#define HIDD_Controller_UploadEffect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_UploadEffect_(HiddControllerBase, __obj ,##args); })

static inline LONG HIDD_Controller_UploadEffect_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct pHidd_Controller_Effect *effect)
{
    struct pHidd_Controller_UploadEffect p;
    p.mID = __HiddControllerBase + moHidd_Controller_UploadEffect;
    p.effect = effect;
    return (LONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_UpdateEffect
{
    OOP_MethodID mID;
    LONG id;
    struct pHidd_Controller_Effect *effect;
};

#define HIDD_Controller_UpdateEffect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_UpdateEffect_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_UpdateEffect_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, LONG id, struct pHidd_Controller_Effect *effect)
{
    struct pHidd_Controller_UpdateEffect p;
    p.mID = __HiddControllerBase + moHidd_Controller_UpdateEffect;
    p.id = id;
    p.effect = effect;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_PlayEffect
{
    OOP_MethodID mID;
    LONG id;
    ULONG loops;
};

#define HIDD_Controller_PlayEffect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_PlayEffect_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_PlayEffect_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, LONG id, ULONG loops)
{
    struct pHidd_Controller_PlayEffect p;
    p.mID = __HiddControllerBase + moHidd_Controller_PlayEffect;
    p.id = id;
    p.loops = loops;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_StopEffect
{
    OOP_MethodID mID;
    LONG id;
};

#define HIDD_Controller_StopEffect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_StopEffect_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_StopEffect_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, LONG id)
{
    struct pHidd_Controller_StopEffect p;
    p.mID = __HiddControllerBase + moHidd_Controller_StopEffect;
    p.id = id;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_RemoveEffect
{
    OOP_MethodID mID;
    LONG id;
};

#define HIDD_Controller_RemoveEffect(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_RemoveEffect_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_RemoveEffect_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, LONG id)
{
    struct pHidd_Controller_RemoveEffect p;
    p.mID = __HiddControllerBase + moHidd_Controller_RemoveEffect;
    p.id = id;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SetGain
{
    OOP_MethodID mID;
    UWORD gain;
};

#define HIDD_Controller_SetGain(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SetGain_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_SetGain_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UWORD gain)
{
    struct pHidd_Controller_SetGain p;
    p.mID = __HiddControllerBase + moHidd_Controller_SetGain;
    p.gain = gain;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SetAutocenter
{
    OOP_MethodID mID;
    UWORD strength;
};

#define HIDD_Controller_SetAutocenter(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SetAutocenter_(HiddControllerBase, __obj ,##args); })

static inline BOOL HIDD_Controller_SetAutocenter_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UWORD strength)
{
    struct pHidd_Controller_SetAutocenter p;
    p.mID = __HiddControllerBase + moHidd_Controller_SetAutocenter;
    p.strength = strength;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_PushValue
{
    OOP_MethodID mID;
    UBYTE kind;
    UBYTE index;
    LONG value;
    UQUAD timestamp;
};

#define HIDD_Controller_PushValue(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_PushValue_(HiddControllerBase, __obj ,##args); })

static inline void HIDD_Controller_PushValue_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE kind, UBYTE index, LONG value, UQUAD timestamp)
{
    struct pHidd_Controller_PushValue p;
    p.mID = __HiddControllerBase + moHidd_Controller_PushValue;
    p.kind = kind;
    p.index = index;
    p.value = value;
    p.timestamp = timestamp;
    (void)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_PushReport
{
    OOP_MethodID mID;
    struct pHidd_Controller_RawReport *report;
};

#define HIDD_Controller_PushReport(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_PushReport_(HiddControllerBase, __obj ,##args); })

static inline void HIDD_Controller_PushReport_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct pHidd_Controller_RawReport *report)
{
    struct pHidd_Controller_PushReport p;
    p.mID = __HiddControllerBase + moHidd_Controller_PushReport;
    p.report = report;
    (void)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_PushTouch
{
    OOP_MethodID mID;
    UBYTE pad;
    UBYTE finger;
    struct pHidd_Controller_Finger *state;
};

#define HIDD_Controller_PushTouch(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_PushTouch_(HiddControllerBase, __obj ,##args); })

static inline void HIDD_Controller_PushTouch_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE pad, UBYTE finger, struct pHidd_Controller_Finger *state)
{
    struct pHidd_Controller_PushTouch p;
    p.mID = __HiddControllerBase + moHidd_Controller_PushTouch;
    p.pad = pad;
    p.finger = finger;
    p.state = state;
    (void)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_PushSensor
{
    OOP_MethodID mID;
    UBYTE sensor;
    struct pHidd_Controller_SensorSample *samples;
    ULONG count;
};

#define HIDD_Controller_PushSensor(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_PushSensor_(HiddControllerBase, __obj ,##args); })

static inline void HIDD_Controller_PushSensor_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, UBYTE sensor, struct pHidd_Controller_SensorSample *samples, ULONG count)
{
    struct pHidd_Controller_PushSensor p;
    p.mID = __HiddControllerBase + moHidd_Controller_PushSensor;
    p.sensor = sensor;
    p.samples = samples;
    p.count = count;
    (void)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_PushPower
{
    OOP_MethodID mID;
    struct pHidd_Controller_PowerInfo *power;
};

#define HIDD_Controller_PushPower(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_PushPower_(HiddControllerBase, __obj ,##args); })

static inline void HIDD_Controller_PushPower_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, struct pHidd_Controller_PowerInfo *power)
{
    struct pHidd_Controller_PushPower p;
    p.mID = __HiddControllerBase + moHidd_Controller_PushPower;
    p.power = power;
    (void)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_Controller_SetConnected
{
    OOP_MethodID mID;
    BOOL connected;
};

#define HIDD_Controller_SetConnected(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_Controller_SetConnected_(HiddControllerBase, __obj ,##args); })

static inline void HIDD_Controller_SetConnected_(OOP_MethodID __HiddControllerBase, OOP_Object *__obj, BOOL connected)
{
    struct pHidd_Controller_SetConnected p;
    p.mID = __HiddControllerBase + moHidd_Controller_SetConnected;
    p.connected = connected;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_Controller_H */
