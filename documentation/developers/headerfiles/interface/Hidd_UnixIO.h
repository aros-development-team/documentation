#ifndef INTERFACE_Hidd_UnixIO_H
#define INTERFACE_Hidd_UnixIO_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/all-unix/hidd/unixio/unixio.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_UnixIO
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_UnixIO                      "hidd.unixio"

#if !defined(HiddUnixIOBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_UnixIO_NOMETHODBASE__)
#define HiddUnixIOBase Hidd_UnixIO_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_UnixIO_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_UnixIO_mid;
    if (!Hidd_UnixIO_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_UnixIO_mid = OOP_GetMethodID(IID_Hidd_UnixIO, 0);
    }
    return Hidd_UnixIO_mid;
}
#endif

#define HiddUnixIOAttrBase               __IHidd_UnixIO

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_UnixIO_NOATTRBASE__)
extern OOP_AttrBase HiddUnixIOAttrBase;
#endif

enum
{
    aoHidd_UnixIO_Opener = 0,  /*  [I..] Opener name */
    aoHidd_UnixIO_Architecture = 1,  /*  [I..] Opener's architecture name */
    num_Hidd_UnixIO_Attrs = 2,
};

#define aHidd_UnixIO_Opener                           (HiddUnixIOAttrBase + aoHidd_UnixIO_Opener)
#define aHidd_UnixIO_Architecture                     (HiddUnixIOAttrBase + aoHidd_UnixIO_Architecture)

#define Hidd_UnixIO_Switch(attr, idx) \
if (((idx) = (attr) - HiddUnixIOAttrBase) < num_Hidd_UnixIO_Attrs) \
switch (idx)


enum {
    moHidd_UnixIO_Wait = 0,
    moHidd_UnixIO_OpenFile = 2,
    moHidd_UnixIO_CloseFile = 3,
    moHidd_UnixIO_WriteFile = 4,
    moHidd_UnixIO_ReadFile = 5,
    moHidd_UnixIO_IOControlFile = 6,
    moHidd_UnixIO_AddInterrupt = 7,
    moHidd_UnixIO_RemInterrupt = 8,
    moHidd_UnixIO_Poll = 9,
    moHidd_UnixIO_MemoryMap = 10,
    moHidd_UnixIO_MemoryUnMap = 11,
    moHidd_UnixIO_OpenPacket = 12,
    moHidd_UnixIO_ClosePacket = 13,
    moHidd_UnixIO_SendPacket = 14,
    moHidd_UnixIO_RecvPacket = 15,
    moHidd_UnixIO_PacketGetFileDescriptor = 16,
    moHidd_UnixIO_PacketGetMACAddress = 17,
    num_Hidd_UnixIO_Methods = 18
};

struct pHidd_UnixIO_Wait
{
    OOP_MethodID mID;
    int FD;
    ULONG Mode;
};

#define Hidd_UnixIO_Wait(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_Wait_(HiddUnixIOBase, __obj ,##args); })

static inline IPTR Hidd_UnixIO_Wait_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, int FD, ULONG Mode)
{
    struct pHidd_UnixIO_Wait p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_Wait;
    p.FD = FD;
    p.Mode = Mode;
    return (IPTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_OpenFile
{
    OOP_MethodID mID;
    const char *FileName;
    int Flags;
    int Mode;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_OpenFile(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_OpenFile_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_OpenFile_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, const char *FileName, int Flags, int Mode, int *ErrNoPtr)
{
    struct pHidd_UnixIO_OpenFile p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_OpenFile;
    p.FileName = FileName;
    p.Flags = Flags;
    p.Mode = Mode;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_CloseFile
{
    OOP_MethodID mID;
    int FD;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_CloseFile(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_CloseFile_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_CloseFile_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, int FD, int *ErrNoPtr)
{
    struct pHidd_UnixIO_CloseFile p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_CloseFile;
    p.FD = FD;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_WriteFile
{
    OOP_MethodID mID;
    int FD;
    const void *Buffer;
    int Count;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_WriteFile(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_WriteFile_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_WriteFile_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, int FD, const void *Buffer, int Count, int *ErrNoPtr)
{
    struct pHidd_UnixIO_WriteFile p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_WriteFile;
    p.FD = FD;
    p.Buffer = Buffer;
    p.Count = Count;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_ReadFile
{
    OOP_MethodID mID;
    int FD;
    void *Buffer;
    int Count;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_ReadFile(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_ReadFile_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_ReadFile_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, int FD, void *Buffer, int Count, int *ErrNoPtr)
{
    struct pHidd_UnixIO_ReadFile p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_ReadFile;
    p.FD = FD;
    p.Buffer = Buffer;
    p.Count = Count;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_IOControlFile
{
    OOP_MethodID mID;
    int FD;
    int Request;
    void *Param;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_IOControlFile(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_IOControlFile_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_IOControlFile_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, int FD, int Request, void *Param, int *ErrNoPtr)
{
    struct pHidd_UnixIO_IOControlFile p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_IOControlFile;
    p.FD = FD;
    p.Request = Request;
    p.Param = Param;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_AddInterrupt
{
    OOP_MethodID mID;
    struct uioInterrupt *Int;
};

#define Hidd_UnixIO_AddInterrupt(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_AddInterrupt_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_AddInterrupt_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, struct uioInterrupt *Int)
{
    struct pHidd_UnixIO_AddInterrupt p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_AddInterrupt;
    p.Int = Int;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_RemInterrupt
{
    OOP_MethodID mID;
    struct uioInterrupt *Int;
};

#define Hidd_UnixIO_RemInterrupt(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_RemInterrupt_(HiddUnixIOBase, __obj ,##args); })

static inline void Hidd_UnixIO_RemInterrupt_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, struct uioInterrupt *Int)
{
    struct pHidd_UnixIO_RemInterrupt p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_RemInterrupt;
    p.Int = Int;
    (void)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_Poll
{
    OOP_MethodID mID;
    int FD;
    int Mode;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_Poll(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_Poll_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_Poll_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, int FD, int Mode, int *ErrNoPtr)
{
    struct pHidd_UnixIO_Poll p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_Poll;
    p.FD = FD;
    p.Mode = Mode;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_MemoryMap
{
    OOP_MethodID mID;
    void *Address;
    int Length;
    int Prot;
    int Flags;
    int FD;
    int Offset;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_MemoryMap(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_MemoryMap_(HiddUnixIOBase, __obj ,##args); })

static inline void * Hidd_UnixIO_MemoryMap_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, void *Address, int Length, int Prot, int Flags, int FD, int Offset, int *ErrNoPtr)
{
    struct pHidd_UnixIO_MemoryMap p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_MemoryMap;
    p.Address = Address;
    p.Length = Length;
    p.Prot = Prot;
    p.Flags = Flags;
    p.FD = FD;
    p.Offset = Offset;
    p.ErrNoPtr = ErrNoPtr;
    return (void *)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_MemoryUnMap
{
    OOP_MethodID mID;
    void *Address;
    int Length;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_MemoryUnMap(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_MemoryUnMap_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_MemoryUnMap_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, void *Address, int Length, int *ErrNoPtr)
{
    struct pHidd_UnixIO_MemoryUnMap p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_MemoryUnMap;
    p.Address = Address;
    p.Length = Length;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_OpenPacket
{
    OOP_MethodID mID;
    const char *Interface;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_OpenPacket(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_OpenPacket_(HiddUnixIOBase, __obj ,##args); })

static inline APTR Hidd_UnixIO_OpenPacket_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, const char *Interface, int *ErrNoPtr)
{
    struct pHidd_UnixIO_OpenPacket p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_OpenPacket;
    p.Interface = Interface;
    p.ErrNoPtr = ErrNoPtr;
    return (APTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_ClosePacket
{
    OOP_MethodID mID;
    APTR PD;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_ClosePacket(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_ClosePacket_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_ClosePacket_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, APTR PD, int *ErrNoPtr)
{
    struct pHidd_UnixIO_ClosePacket p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_ClosePacket;
    p.PD = PD;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_SendPacket
{
    OOP_MethodID mID;
    APTR PD;
    const void *Buffer;
    int Length;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_SendPacket(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_SendPacket_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_SendPacket_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, APTR PD, const void *Buffer, int Length, int *ErrNoPtr)
{
    struct pHidd_UnixIO_SendPacket p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_SendPacket;
    p.PD = PD;
    p.Buffer = Buffer;
    p.Length = Length;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_RecvPacket
{
    OOP_MethodID mID;
    APTR PD;
    void *Buffer;
    int Length;
    int *ErrNoPtr;
};

#define Hidd_UnixIO_RecvPacket(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_RecvPacket_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_RecvPacket_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, APTR PD, void *Buffer, int Length, int *ErrNoPtr)
{
    struct pHidd_UnixIO_RecvPacket p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_RecvPacket;
    p.PD = PD;
    p.Buffer = Buffer;
    p.Length = Length;
    p.ErrNoPtr = ErrNoPtr;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_PacketGetFileDescriptor
{
    OOP_MethodID mID;
    APTR PD;
};

#define Hidd_UnixIO_PacketGetFileDescriptor(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_PacketGetFileDescriptor_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_PacketGetFileDescriptor_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, APTR PD)
{
    struct pHidd_UnixIO_PacketGetFileDescriptor p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_PacketGetFileDescriptor;
    p.PD = PD;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_UnixIO_PacketGetMACAddress
{
    OOP_MethodID mID;
    APTR PD;
    unsigned char *MACAddress;
};

#define Hidd_UnixIO_PacketGetMACAddress(obj, args...) \
    ({OOP_Object *__obj = obj;\
      Hidd_UnixIO_PacketGetMACAddress_(HiddUnixIOBase, __obj ,##args); })

static inline int Hidd_UnixIO_PacketGetMACAddress_(OOP_MethodID __HiddUnixIOBase, OOP_Object *__obj, APTR PD, unsigned char *MACAddress)
{
    struct pHidd_UnixIO_PacketGetMACAddress p;
    p.mID = __HiddUnixIOBase + moHidd_UnixIO_PacketGetMACAddress;
    p.PD = PD;
    p.MACAddress = MACAddress;
    return (int)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_UnixIO_H */
