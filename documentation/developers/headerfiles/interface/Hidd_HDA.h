#ifndef INTERFACE_Hidd_HDA_H
#define INTERFACE_Hidd_HDA_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/hidds/hdaudio/hda.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_HDA
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_HDA                         "hidd.audio.hda"

#if !defined(HiddHDABase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_HDA_NOMETHODBASE__)
#define HiddHDABase Hidd_HDA_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_HDA_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_HDA_mid;
    if (!Hidd_HDA_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_HDA_mid = OOP_GetMethodID(IID_Hidd_HDA, 0);
    }
    return Hidd_HDA_mid;
}
#endif

#define HiddHDAAttrBase                  __IHidd_HDA

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_HDA_NOATTRBASE__)
extern OOP_AttrBase HiddHDAAttrBase;
#endif

enum
{
    aoHidd_HDA_DeviceData = 0,  /*  [I.G] subclass-defined device handle (e.g. a PCI device object) */
    aoHidd_HDA_CodecMask = 1,  /*  [..G] present codecs, valid once set up */
    aoHidd_HDA_InputStreams = 2,  /*  [..G] */
    aoHidd_HDA_OutputStreams = 3,  /*  [..G] */
    num_Hidd_HDA_Attrs = 4,
};

#define aHidd_HDA_DeviceData                       (HiddHDAAttrBase + aoHidd_HDA_DeviceData)
#define aHidd_HDA_CodecMask                        (HiddHDAAttrBase + aoHidd_HDA_CodecMask)
#define aHidd_HDA_InputStreams                     (HiddHDAAttrBase + aoHidd_HDA_InputStreams)
#define aHidd_HDA_OutputStreams                    (HiddHDAAttrBase + aoHidd_HDA_OutputStreams)

#define Hidd_HDA_Switch(attr, idx) \
if (((idx) = (attr) - HiddHDAAttrBase) < num_Hidd_HDA_Attrs) \
switch (idx)


enum {
    moHidd_HDA_Setup = 0,
    moHidd_HDA_SendCommand = 1,
    moHidd_HDA_AllocStream = 2,
    moHidd_HDA_SetupStream = 3,
    moHidd_HDA_StartStream = 4,
    moHidd_HDA_StopStream = 5,
    moHidd_HDA_FreeStream = 6,
    moHidd_HDA_SyncStreamBuffer = 7,
    moHidd_HDA_GetStreamPosition = 8,
    moHidd_HDA_HWInit = 9,
    moHidd_HDA_HWExit = 10,
    num_Hidd_HDA_Methods = 11
};

struct pHidd_HDA_Setup
{
    OOP_MethodID mID;
};

#define HIDD_HDA_Setup(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_Setup_(HiddHDABase, __obj ,##args); })

static inline BOOL HIDD_HDA_Setup_(OOP_MethodID __HiddHDABase, OOP_Object *__obj)
{
    struct pHidd_HDA_Setup p;
    p.mID = __HiddHDABase + moHidd_HDA_Setup;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_SendCommand
{
    OOP_MethodID mID;
    ULONG command;
};

#define HIDD_HDA_SendCommand(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_SendCommand_(HiddHDABase, __obj ,##args); })

static inline ULONG HIDD_HDA_SendCommand_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, ULONG command)
{
    struct pHidd_HDA_SendCommand p;
    p.mID = __HiddHDABase + moHidd_HDA_SendCommand;
    p.command = command;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_AllocStream
{
    OOP_MethodID mID;
    ULONG direction;
    struct Interrupt *streamInt;
};

#define HIDD_HDA_AllocStream(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_AllocStream_(HiddHDABase, __obj ,##args); })

static inline APTR HIDD_HDA_AllocStream_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, ULONG direction, struct Interrupt *streamInt)
{
    struct pHidd_HDA_AllocStream p;
    p.mID = __HiddHDABase + moHidd_HDA_AllocStream;
    p.direction = direction;
    p.streamInt = streamInt;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_SetupStream
{
    OOP_MethodID mID;
    APTR stream;
    UWORD format;
    ULONG bufferSize;
    ULONG bufferCount;
    struct HDA_StreamInfo *info;
};

#define HIDD_HDA_SetupStream(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_SetupStream_(HiddHDABase, __obj ,##args); })

static inline BOOL HIDD_HDA_SetupStream_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, APTR stream, UWORD format, ULONG bufferSize, ULONG bufferCount, struct HDA_StreamInfo *info)
{
    struct pHidd_HDA_SetupStream p;
    p.mID = __HiddHDABase + moHidd_HDA_SetupStream;
    p.stream = stream;
    p.format = format;
    p.bufferSize = bufferSize;
    p.bufferCount = bufferCount;
    p.info = info;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_StartStream
{
    OOP_MethodID mID;
    APTR stream;
};

#define HIDD_HDA_StartStream(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_StartStream_(HiddHDABase, __obj ,##args); })

static inline VOID HIDD_HDA_StartStream_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, APTR stream)
{
    struct pHidd_HDA_StartStream p;
    p.mID = __HiddHDABase + moHidd_HDA_StartStream;
    p.stream = stream;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_StopStream
{
    OOP_MethodID mID;
    APTR stream;
};

#define HIDD_HDA_StopStream(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_StopStream_(HiddHDABase, __obj ,##args); })

static inline VOID HIDD_HDA_StopStream_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, APTR stream)
{
    struct pHidd_HDA_StopStream p;
    p.mID = __HiddHDABase + moHidd_HDA_StopStream;
    p.stream = stream;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_FreeStream
{
    OOP_MethodID mID;
    APTR stream;
};

#define HIDD_HDA_FreeStream(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_FreeStream_(HiddHDABase, __obj ,##args); })

static inline VOID HIDD_HDA_FreeStream_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, APTR stream)
{
    struct pHidd_HDA_FreeStream p;
    p.mID = __HiddHDABase + moHidd_HDA_FreeStream;
    p.stream = stream;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_SyncStreamBuffer
{
    OOP_MethodID mID;
    APTR stream;
    ULONG index;
};

#define HIDD_HDA_SyncStreamBuffer(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_SyncStreamBuffer_(HiddHDABase, __obj ,##args); })

static inline VOID HIDD_HDA_SyncStreamBuffer_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, APTR stream, ULONG index)
{
    struct pHidd_HDA_SyncStreamBuffer p;
    p.mID = __HiddHDABase + moHidd_HDA_SyncStreamBuffer;
    p.stream = stream;
    p.index = index;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_GetStreamPosition
{
    OOP_MethodID mID;
    APTR stream;
};

#define HIDD_HDA_GetStreamPosition(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_GetStreamPosition_(HiddHDABase, __obj ,##args); })

static inline ULONG HIDD_HDA_GetStreamPosition_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, APTR stream)
{
    struct pHidd_HDA_GetStreamPosition p;
    p.mID = __HiddHDABase + moHidd_HDA_GetStreamPosition;
    p.stream = stream;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_HWInit
{
    OOP_MethodID mID;
    struct Interrupt *controllerInt;
};

#define HIDD_HDA_HWInit(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_HWInit_(HiddHDABase, __obj ,##args); })

static inline APTR HIDD_HDA_HWInit_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, struct Interrupt *controllerInt)
{
    struct pHidd_HDA_HWInit p;
    p.mID = __HiddHDABase + moHidd_HDA_HWInit;
    p.controllerInt = controllerInt;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_HDA_HWExit
{
    OOP_MethodID mID;
    struct Interrupt *controllerInt;
};

#define HIDD_HDA_HWExit(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_HDA_HWExit_(HiddHDABase, __obj ,##args); })

static inline VOID HIDD_HDA_HWExit_(OOP_MethodID __HiddHDABase, OOP_Object *__obj, struct Interrupt *controllerInt)
{
    struct pHidd_HDA_HWExit p;
    p.mID = __HiddHDABase + moHidd_HDA_HWExit;
    p.controllerInt = controllerInt;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_HDA_H */
