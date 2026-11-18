#ifndef INTERFACE_Hidd_IPMI_H
#define INTERFACE_Hidd_IPMI_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/ipmi/ipmi.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_IPMI
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_IPMI                        "hidd.ipmi"

#if !defined(HiddIPMIBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_IPMI_NOMETHODBASE__)
#define HiddIPMIBase Hidd_IPMI_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_IPMI_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_IPMI_mid;
    if (!Hidd_IPMI_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_IPMI_mid = OOP_GetMethodID(IID_Hidd_IPMI, 0);
    }
    return Hidd_IPMI_mid;
}
#endif

#define HiddIPMIAB                       __IHidd_IPMI

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_IPMI_NOATTRBASE__)
extern OOP_AttrBase HiddIPMIAB;
#endif

enum
{
    aoHidd_IPMI_InterfaceType = 0,  /*  [I.G] */
    aoHidd_IPMI_SpecVersionMajor = 1,  /*  [I.G] */
    aoHidd_IPMI_SpecVersionMinor = 2,  /*  [I.G] */
    aoHidd_IPMI_I2CSlaveAddress = 3,  /*  [I.G] */
    aoHidd_IPMI_NVStorageAddress = 4,  /*  [I.G] */
    aoHidd_IPMI_BaseAddress = 5,  /*  [I.G] */
    aoHidd_IPMI_BaseAddressModifier = 6,  /*  [I.G] */
    aoHidd_IPMI_AddressSpace = 7,  /*  [I.G] */
    aoHidd_IPMI_RegisterSpacing = 8,  /*  [I.G] */
    aoHidd_IPMI_InterruptNumber = 9,  /*  [I.G] */
    num_Hidd_IPMI_Attrs = 10,
};

#define aHidd_IPMI_InterfaceType                    (HiddIPMIAB + aoHidd_IPMI_InterfaceType)
#define aHidd_IPMI_SpecVersionMajor                 (HiddIPMIAB + aoHidd_IPMI_SpecVersionMajor)
#define aHidd_IPMI_SpecVersionMinor                 (HiddIPMIAB + aoHidd_IPMI_SpecVersionMinor)
#define aHidd_IPMI_I2CSlaveAddress                  (HiddIPMIAB + aoHidd_IPMI_I2CSlaveAddress)
#define aHidd_IPMI_NVStorageAddress                 (HiddIPMIAB + aoHidd_IPMI_NVStorageAddress)
#define aHidd_IPMI_BaseAddress                      (HiddIPMIAB + aoHidd_IPMI_BaseAddress)
#define aHidd_IPMI_BaseAddressModifier              (HiddIPMIAB + aoHidd_IPMI_BaseAddressModifier)
#define aHidd_IPMI_AddressSpace                     (HiddIPMIAB + aoHidd_IPMI_AddressSpace)
#define aHidd_IPMI_RegisterSpacing                  (HiddIPMIAB + aoHidd_IPMI_RegisterSpacing)
#define aHidd_IPMI_InterruptNumber                  (HiddIPMIAB + aoHidd_IPMI_InterruptNumber)

#define Hidd_IPMI_Switch(attr, idx) \
if (((idx) = (attr) - HiddIPMIAB) < num_Hidd_IPMI_Attrs) \
switch (idx)


enum {
    moHidd_IPMI_SendCommand = 0,
    num_Hidd_IPMI_Methods = 1
};

struct pHidd_IPMI_SendCommand
{
    OOP_MethodID mID;
    UBYTE netfn;
    UBYTE command;
    APTR request;
    ULONG requestLen;
    APTR response;
    ULONG *responseLen;
};

#define HIDD_IPMI_SendCommand(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_IPMI_SendCommand_(HiddIPMIBase, __obj ,##args); })

static inline BOOL HIDD_IPMI_SendCommand_(OOP_MethodID __HiddIPMIBase, OOP_Object *__obj, UBYTE netfn, UBYTE command, APTR request, ULONG requestLen, APTR response, ULONG *responseLen)
{
    struct pHidd_IPMI_SendCommand p;
    p.mID = __HiddIPMIBase + moHidd_IPMI_SendCommand;
    p.netfn = netfn;
    p.command = command;
    p.request = request;
    p.requestLen = requestLen;
    p.response = response;
    p.responseLen = responseLen;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_IPMI_H */
