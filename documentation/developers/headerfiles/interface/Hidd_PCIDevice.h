#ifndef INTERFACE_Hidd_PCIDevice_H
#define INTERFACE_Hidd_PCIDevice_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/pci/pci.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_PCIDevice
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_PCIDevice                   "hidd.pci.device"

#if !defined(HiddPCIDeviceBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_PCIDevice_NOMETHODBASE__)
#define HiddPCIDeviceBase Hidd_PCIDevice_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_PCIDevice_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_PCIDevice_mid;
    if (!Hidd_PCIDevice_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_PCIDevice_mid = OOP_GetMethodID(IID_Hidd_PCIDevice, 0);
    }
    return Hidd_PCIDevice_mid;
}
#endif

#define HiddPCIDeviceAttrBase            __IHidd_PCIDevice

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_PCIDevice_NOATTRBASE__)
extern OOP_AttrBase HiddPCIDeviceAttrBase;
#endif

enum
{
    aoHidd_PCIDevice_Driver = 0,  /*  [I.G] Hardware PCI driver that handles this device */
    aoHidd_PCIDevice_Bus = 1,  /*  [I.G] Bus the device is on */
    aoHidd_PCIDevice_Dev = 2,  /*  [I.G] Device number */
    aoHidd_PCIDevice_Sub = 3,  /*  [I.G] Function number */
    aoHidd_PCIDevice_VendorID = 4,  /*  [..G] VendorID of device as defined in PCI specs */
    aoHidd_PCIDevice_ProductID = 5,  /*  [..G] ProductID */
    aoHidd_PCIDevice_RevisionID = 6,  /*  [..G] RevisionID */
    aoHidd_PCIDevice_Interface = 7,  /*  [..G] */
    aoHidd_PCIDevice_Class = 8,  /*  [..G] */
    aoHidd_PCIDevice_SubClass = 9,  /*  [..G] */
    aoHidd_PCIDevice_SubsystemVendorID = 10,  /*  [..G] */
    aoHidd_PCIDevice_SubsystemID = 11,  /*  [..G] */
    aoHidd_PCIDevice_INTLine = 12,  /*  [..G] */
    aoHidd_PCIDevice_IRQLine = 13,  /*  [..G] */
    aoHidd_PCIDevice_RomBase = 14,  /*  [.SG] Location of ROM on the PCI bus (if ROM exists) */
    aoHidd_PCIDevice_RomSize = 15,  /*  [..G] Size of ROM area */
    aoHidd_PCIDevice_Base0 = 16,  /*  [.SG] Location of Memory Area 0 */
    aoHidd_PCIDevice_Size0 = 17,  /*  [..G] Size of Memory Area 0 */
    aoHidd_PCIDevice_Type0 = 18,  /*  [..G] */
    aoHidd_PCIDevice_Base1 = 19,  /*  [.SG] */
    aoHidd_PCIDevice_Size1 = 20,  /*  [..G] */
    aoHidd_PCIDevice_Type1 = 21,  /*  [..G] */
    aoHidd_PCIDevice_Base2 = 22,  /*  [.SG] */
    aoHidd_PCIDevice_Size2 = 23,  /*  [..G] */
    aoHidd_PCIDevice_Type2 = 24,  /*  [..G] */
    aoHidd_PCIDevice_Base3 = 25,  /*  [.SG] */
    aoHidd_PCIDevice_Size3 = 26,  /*  [..G] */
    aoHidd_PCIDevice_Type3 = 27,  /*  [..G] */
    aoHidd_PCIDevice_Base4 = 28,  /*  [.SG] */
    aoHidd_PCIDevice_Size4 = 29,  /*  [..G] */
    aoHidd_PCIDevice_Type4 = 30,  /*  [..G] */
    aoHidd_PCIDevice_Base5 = 31,  /*  [.SG] */
    aoHidd_PCIDevice_Size5 = 32,  /*  [..G] */
    aoHidd_PCIDevice_Type5 = 33,  /*  [..G] */
    aoHidd_PCIDevice_isIO = 34,  /*  [.SG] Can device access IO space? */
    aoHidd_PCIDevice_isMEM = 35,  /*  [.SG] Can device access Mem space? */
    aoHidd_PCIDevice_isMaster = 36,  /*  [.SG] Can device work in BusMaster mode? */
    aoHidd_PCIDevice_paletteSnoop = 37,  /*  [.SG] Should VGA compatible card snoop the palette? */
    aoHidd_PCIDevice_is66MHz = 38,  /*  [..G] Is device 66MHz capable? */
    aoHidd_PCIDevice_ClassDesc = 39,  /*  [..G] String description of device Class */
    aoHidd_PCIDevice_SubClassDesc = 40,  /*  [..G] String description of device SubClass */
    aoHidd_PCIDevice_InterfaceDesc = 41,  /*  [..G] String description of device Interface */
    aoHidd_PCIDevice_isBridge = 42,  /*  [..G] Is the device a PCI-PCI bridge? */
    aoHidd_PCIDevice_SecBus = 43,  /*  [..G] Bus number managed by bridge */
    aoHidd_PCIDevice_MemoryBase = 44,  /*  [.SG] PCI bridge will forwart addresses from MemoryBase to */
    aoHidd_PCIDevice_MemoryLimit = 45,  /*  [.SG] MemoryLimit through  */
    aoHidd_PCIDevice_PrefetchableBase = 46,  /*  [.SG] like above, regarding the prefetchable memory */
    aoHidd_PCIDevice_PrefetchableLimit = 47,  /*  [.SG] */
    aoHidd_PCIDevice_IOBase = 48,  /*  [.SG] PCI bridge will forward IO accesses from IOBase to IOLimit */
    aoHidd_PCIDevice_IOLimit = 49,  /*  [.SG] */
    aoHidd_PCIDevice_ISAEnable = 50,  /*  [.SG] Enable ISA-specific IO forwarding */
    aoHidd_PCIDevice_VGAEnable = 51,  /*  [.SG] Enable VGA-specific IO/MEM forwarding regardless of limits */
    aoHidd_PCIDevice_IRQStatus = 52,  /*  [..G] Get current irq status (does device request irq?) */
    aoHidd_PCIDevice_CapabilitiesPresent = 53,  /*  [..G] Use this to check if PCI features extra capabilities (such as PM, MSI, PCI-X, PCI-E) */
    aoHidd_PCIDevice_CapabilityPowerManagement = 54,  /*  [..G] Get offset of Power Management capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityAGP = 55,  /*  [..G] Get offset of AGP capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityVitalProductData = 56,  /*  [..G] Get offset of Vital Product Data capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilitySlotID = 57,  /*  [..G] Get offset of Slot Indentification capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityMSI = 58,  /*  [..G] Get offset of Message Signalled Interrupts capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityCPCIHotSwap = 59,  /*  [..G] Get offset of CompactPCI HotSwap capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityPCIX = 60,  /*  [..G] Get offset of PCI-X capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityHyperTransport = 61,  /*  [..G] Get offset of Hyper Transport capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityVendorSpecific = 62,  /*  [..G] Get offset of Vendor Specific capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityDebugPort = 63,  /*  [..G] Get offset of Debug Port capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityCPCICRC = 64,  /*  [..G] Get offset of CompactPCI Central Resource Control capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityHotPlugController = 65,  /*  [..G] Get offset of PCI Standard Hot-Plug Controller capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilitySSVPID = 66,  /*  [..G] Get offset of Bridge Subsystem VendorID/ProductID capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityAGP3 = 67,  /*  [..G] Get offset of AGP3 capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityPCIE = 68,  /*  [..G] Get offset of PCI Express capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityMSIX = 69,  /*  [..G] Get offset of MSI-X capability area or 0 if not present */
    aoHidd_PCIDevice_CapabilityAdvancedFeatures = 70,  /*  [..G] Get offset of PCI Advanced Features capability area or 0 if not present */
    aoHidd_PCIDevice_Owner = 71,  /*  [..G] Get current owner */
    aoHidd_PCIDevice_ExtendedConfig = 72,
    aoHidd_PCIDevice_ExtendedCapabilityAER = 73,  /*  [..G] Get offset of PCIE Advanced Error Handling area or 0 if not present */
    aoHidd_PCIDevice_ExtendedCapabilityVC = 74,  /*  [..G] Get offset of PCIE Virtual Channel area or 0 if not present */
    aoHidd_PCIDevice_ExtendedCapabilitySerialNumber = 75,  /*  [..G] Get offset of PCIE Serial Number area or 0 if not present */
    aoHidd_PCIDevice_ExtendedCapabilityPowerBudgeting = 76,  /*  [..G] Get offset of PCIE Power Budgeting area or 0 if not present */
    aoHidd_PCIDevice_ConfigSize = 77,
    aoHidd_PCIDevice_MSICount = 78,  /*  [..G] Get number of configured MSI messages for the device */
    num_Hidd_PCIDevice_Attrs = 79,
};

#define aHidd_PCIDevice_Driver                           (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Driver)
#define aHidd_PCIDevice_Bus                              (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Bus)
#define aHidd_PCIDevice_Dev                              (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Dev)
#define aHidd_PCIDevice_Sub                              (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Sub)
#define aHidd_PCIDevice_VendorID                         (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_VendorID)
#define aHidd_PCIDevice_ProductID                        (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ProductID)
#define aHidd_PCIDevice_RevisionID                       (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_RevisionID)
#define aHidd_PCIDevice_Interface                        (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Interface)
#define aHidd_PCIDevice_Class                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Class)
#define aHidd_PCIDevice_SubClass                         (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_SubClass)
#define aHidd_PCIDevice_SubsystemVendorID                (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_SubsystemVendorID)
#define aHidd_PCIDevice_SubsystemID                      (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_SubsystemID)
#define aHidd_PCIDevice_INTLine                          (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_INTLine)
#define aHidd_PCIDevice_IRQLine                          (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_IRQLine)
#define aHidd_PCIDevice_RomBase                          (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_RomBase)
#define aHidd_PCIDevice_RomSize                          (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_RomSize)
#define aHidd_PCIDevice_Base0                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Base0)
#define aHidd_PCIDevice_Size0                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Size0)
#define aHidd_PCIDevice_Type0                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Type0)
#define aHidd_PCIDevice_Base1                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Base1)
#define aHidd_PCIDevice_Size1                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Size1)
#define aHidd_PCIDevice_Type1                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Type1)
#define aHidd_PCIDevice_Base2                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Base2)
#define aHidd_PCIDevice_Size2                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Size2)
#define aHidd_PCIDevice_Type2                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Type2)
#define aHidd_PCIDevice_Base3                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Base3)
#define aHidd_PCIDevice_Size3                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Size3)
#define aHidd_PCIDevice_Type3                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Type3)
#define aHidd_PCIDevice_Base4                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Base4)
#define aHidd_PCIDevice_Size4                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Size4)
#define aHidd_PCIDevice_Type4                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Type4)
#define aHidd_PCIDevice_Base5                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Base5)
#define aHidd_PCIDevice_Size5                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Size5)
#define aHidd_PCIDevice_Type5                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Type5)
#define aHidd_PCIDevice_isIO                             (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_isIO)
#define aHidd_PCIDevice_isMEM                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_isMEM)
#define aHidd_PCIDevice_isMaster                         (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_isMaster)
#define aHidd_PCIDevice_paletteSnoop                     (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_paletteSnoop)
#define aHidd_PCIDevice_is66MHz                          (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_is66MHz)
#define aHidd_PCIDevice_ClassDesc                        (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ClassDesc)
#define aHidd_PCIDevice_SubClassDesc                     (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_SubClassDesc)
#define aHidd_PCIDevice_InterfaceDesc                    (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_InterfaceDesc)
#define aHidd_PCIDevice_isBridge                         (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_isBridge)
#define aHidd_PCIDevice_SecBus                           (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_SecBus)
#define aHidd_PCIDevice_MemoryBase                       (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_MemoryBase)
#define aHidd_PCIDevice_MemoryLimit                      (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_MemoryLimit)
#define aHidd_PCIDevice_PrefetchableBase                 (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_PrefetchableBase)
#define aHidd_PCIDevice_PrefetchableLimit                (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_PrefetchableLimit)
#define aHidd_PCIDevice_IOBase                           (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_IOBase)
#define aHidd_PCIDevice_IOLimit                          (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_IOLimit)
#define aHidd_PCIDevice_ISAEnable                        (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ISAEnable)
#define aHidd_PCIDevice_VGAEnable                        (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_VGAEnable)
#define aHidd_PCIDevice_IRQStatus                        (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_IRQStatus)
#define aHidd_PCIDevice_CapabilitiesPresent              (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilitiesPresent)
#define aHidd_PCIDevice_CapabilityPowerManagement        (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityPowerManagement)
#define aHidd_PCIDevice_CapabilityAGP                    (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityAGP)
#define aHidd_PCIDevice_CapabilityVitalProductData       (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityVitalProductData)
#define aHidd_PCIDevice_CapabilitySlotID                 (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilitySlotID)
#define aHidd_PCIDevice_CapabilityMSI                    (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityMSI)
#define aHidd_PCIDevice_CapabilityCPCIHotSwap            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityCPCIHotSwap)
#define aHidd_PCIDevice_CapabilityPCIX                   (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityPCIX)
#define aHidd_PCIDevice_CapabilityHyperTransport         (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityHyperTransport)
#define aHidd_PCIDevice_CapabilityVendorSpecific         (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityVendorSpecific)
#define aHidd_PCIDevice_CapabilityDebugPort              (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityDebugPort)
#define aHidd_PCIDevice_CapabilityCPCICRC                (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityCPCICRC)
#define aHidd_PCIDevice_CapabilityHotPlugController      (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityHotPlugController)
#define aHidd_PCIDevice_CapabilitySSVPID                 (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilitySSVPID)
#define aHidd_PCIDevice_CapabilityAGP3                   (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityAGP3)
#define aHidd_PCIDevice_CapabilityPCIE                   (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityPCIE)
#define aHidd_PCIDevice_CapabilityMSIX                   (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityMSIX)
#define aHidd_PCIDevice_CapabilityAdvancedFeatures       (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_CapabilityAdvancedFeatures)
#define aHidd_PCIDevice_Owner                            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_Owner)
#define aHidd_PCIDevice_ExtendedConfig                   (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ExtendedConfig)
#define aHidd_PCIDevice_ExtendedCapabilityAER            (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ExtendedCapabilityAER)
#define aHidd_PCIDevice_ExtendedCapabilityVC             (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ExtendedCapabilityVC)
#define aHidd_PCIDevice_ExtendedCapabilitySerialNumber   (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ExtendedCapabilitySerialNumber)
#define aHidd_PCIDevice_ExtendedCapabilityPowerBudgeting (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ExtendedCapabilityPowerBudgeting)
#define aHidd_PCIDevice_ConfigSize                       (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_ConfigSize)
#define aHidd_PCIDevice_MSICount                         (HiddPCIDeviceAttrBase + aoHidd_PCIDevice_MSICount)

#define Hidd_PCIDevice_Switch(attr, idx) \
if (((idx) = (attr) - HiddPCIDeviceAttrBase) < num_Hidd_PCIDevice_Attrs) \
switch (idx)


enum {
    moHidd_PCIDevice_ReadConfigByte = 0,
    moHidd_PCIDevice_ReadConfigWord = 1,
    moHidd_PCIDevice_ReadConfigLong = 2,
    moHidd_PCIDevice_WriteConfigByte = 3,
    moHidd_PCIDevice_WriteConfigWord = 4,
    moHidd_PCIDevice_WriteConfigLong = 5,
    moHidd_PCIDevice_AddInterrupt = 6,
    moHidd_PCIDevice_RemoveInterrupt = 7,
    moHidd_PCIDevice_Obtain = 8,
    moHidd_PCIDevice_Release = 9,
    moHidd_PCIDevice_HasExtendedConfig = 10,
    moHidd_PCIDevice_SetMSIEnabled = 11,
    moHidd_PCIDevice_ClearAndSetMSIXFlags = 12,
    moHidd_PCIDevice_GetVectorAttribs = 13,
    moHidd_PCIDevice_ObtainVectors = 14,
    moHidd_PCIDevice_ReleaseVectors = 15,
    moHidd_PCIDevice_ResizeBAR = 16,
    num_Hidd_PCIDevice_Methods = 17
};

struct pHidd_PCIDevice_ReadConfigByte
{
    OOP_MethodID mID;
    UWORD reg;
};

#define HIDD_PCIDevice_ReadConfigByte(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_ReadConfigByte_(HiddPCIDeviceBase, __obj ,##args); })

static inline UBYTE HIDD_PCIDevice_ReadConfigByte_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UWORD reg)
{
    struct pHidd_PCIDevice_ReadConfigByte p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_ReadConfigByte;
    p.reg = reg;
    return (UBYTE)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_ReadConfigWord
{
    OOP_MethodID mID;
    UWORD reg;
};

#define HIDD_PCIDevice_ReadConfigWord(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_ReadConfigWord_(HiddPCIDeviceBase, __obj ,##args); })

static inline UWORD HIDD_PCIDevice_ReadConfigWord_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UWORD reg)
{
    struct pHidd_PCIDevice_ReadConfigWord p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_ReadConfigWord;
    p.reg = reg;
    return (UWORD)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_ReadConfigLong
{
    OOP_MethodID mID;
    UWORD reg;
};

#define HIDD_PCIDevice_ReadConfigLong(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_ReadConfigLong_(HiddPCIDeviceBase, __obj ,##args); })

static inline ULONG HIDD_PCIDevice_ReadConfigLong_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UWORD reg)
{
    struct pHidd_PCIDevice_ReadConfigLong p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_ReadConfigLong;
    p.reg = reg;
    return (ULONG)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_WriteConfigByte
{
    OOP_MethodID mID;
    UWORD reg;
    UBYTE val;
};

#define HIDD_PCIDevice_WriteConfigByte(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_WriteConfigByte_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_WriteConfigByte_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UWORD reg, UBYTE val)
{
    struct pHidd_PCIDevice_WriteConfigByte p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_WriteConfigByte;
    p.reg = reg;
    p.val = val;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_WriteConfigWord
{
    OOP_MethodID mID;
    UWORD reg;
    UWORD val;
};

#define HIDD_PCIDevice_WriteConfigWord(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_WriteConfigWord_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_WriteConfigWord_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UWORD reg, UWORD val)
{
    struct pHidd_PCIDevice_WriteConfigWord p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_WriteConfigWord;
    p.reg = reg;
    p.val = val;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_WriteConfigLong
{
    OOP_MethodID mID;
    UWORD reg;
    ULONG val;
};

#define HIDD_PCIDevice_WriteConfigLong(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_WriteConfigLong_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_WriteConfigLong_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UWORD reg, ULONG val)
{
    struct pHidd_PCIDevice_WriteConfigLong p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_WriteConfigLong;
    p.reg = reg;
    p.val = val;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_AddInterrupt
{
    OOP_MethodID mID;
    struct Interrupt *interrupt;
};

#define HIDD_PCIDevice_AddInterrupt(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_AddInterrupt_(HiddPCIDeviceBase, __obj ,##args); })

static inline BOOL HIDD_PCIDevice_AddInterrupt_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, struct Interrupt *interrupt)
{
    struct pHidd_PCIDevice_AddInterrupt p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_AddInterrupt;
    p.interrupt = interrupt;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_RemoveInterrupt
{
    OOP_MethodID mID;
    struct Interrupt *interrupt;
};

#define HIDD_PCIDevice_RemoveInterrupt(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_RemoveInterrupt_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_RemoveInterrupt_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, struct Interrupt *interrupt)
{
    struct pHidd_PCIDevice_RemoveInterrupt p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_RemoveInterrupt;
    p.interrupt = interrupt;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_Obtain
{
    OOP_MethodID mID;
    CONST_STRPTR owner;
};

#define HIDD_PCIDevice_Obtain(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_Obtain_(HiddPCIDeviceBase, __obj ,##args); })

static inline CONST_STRPTR HIDD_PCIDevice_Obtain_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, CONST_STRPTR owner)
{
    struct pHidd_PCIDevice_Obtain p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_Obtain;
    p.owner = owner;
    return (CONST_STRPTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_Release
{
    OOP_MethodID mID;
};

#define HIDD_PCIDevice_Release(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_Release_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_Release_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj)
{
    struct pHidd_PCIDevice_Release p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_Release;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_HasExtendedConfig
{
    OOP_MethodID mID;
};

#define HIDD_PCIDevice_HasExtendedConfig(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_HasExtendedConfig_(HiddPCIDeviceBase, __obj ,##args); })

static inline IPTR HIDD_PCIDevice_HasExtendedConfig_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj)
{
    struct pHidd_PCIDevice_HasExtendedConfig p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_HasExtendedConfig;
    return (IPTR)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_SetMSIEnabled
{
    OOP_MethodID mID;
    UBYTE val;
};

#define HIDD_PCIDevice_SetMSIEnabled(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_SetMSIEnabled_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_SetMSIEnabled_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UBYTE val)
{
    struct pHidd_PCIDevice_SetMSIEnabled p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_SetMSIEnabled;
    p.val = val;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_ClearAndSetMSIXFlags
{
    OOP_MethodID mID;
    UWORD clear;
    UWORD set;
};

#define HIDD_PCIDevice_ClearAndSetMSIXFlags(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_ClearAndSetMSIXFlags_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_ClearAndSetMSIXFlags_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UWORD clear, UWORD set)
{
    struct pHidd_PCIDevice_ClearAndSetMSIXFlags p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_ClearAndSetMSIXFlags;
    p.clear = clear;
    p.set = set;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_GetVectorAttribs
{
    OOP_MethodID mID;
    ULONG vectorno;
    struct TagItem *attribs;
};

#define HIDD_PCIDevice_GetVectorAttribs(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_GetVectorAttribs_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_GetVectorAttribs_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, ULONG vectorno, struct TagItem *attribs)
{
    struct pHidd_PCIDevice_GetVectorAttribs p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_GetVectorAttribs;
    p.vectorno = vectorno;
    p.attribs = attribs;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_ObtainVectors
{
    OOP_MethodID mID;
    const struct TagItem *requirements;
};

#define HIDD_PCIDevice_ObtainVectors(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_ObtainVectors_(HiddPCIDeviceBase, __obj ,##args); })

static inline BOOL HIDD_PCIDevice_ObtainVectors_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, const struct TagItem *requirements)
{
    struct pHidd_PCIDevice_ObtainVectors p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_ObtainVectors;
    p.requirements = requirements;
    return (BOOL)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_ReleaseVectors
{
    OOP_MethodID mID;
};

#define HIDD_PCIDevice_ReleaseVectors(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_ReleaseVectors_(HiddPCIDeviceBase, __obj ,##args); })

static inline VOID HIDD_PCIDevice_ReleaseVectors_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj)
{
    struct pHidd_PCIDevice_ReleaseVectors p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_ReleaseVectors;
    (VOID)OOP_DoMethod(__obj, &p.mID);
}

struct pHidd_PCIDevice_ResizeBAR
{
    OOP_MethodID mID;
    UBYTE bar;
    IPTR size;
};

#define HIDD_PCIDevice_ResizeBAR(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HIDD_PCIDevice_ResizeBAR_(HiddPCIDeviceBase, __obj ,##args); })

static inline IPTR HIDD_PCIDevice_ResizeBAR_(OOP_MethodID __HiddPCIDeviceBase, OOP_Object *__obj, UBYTE bar, IPTR size)
{
    struct pHidd_PCIDevice_ResizeBAR p;
    p.mID = __HiddPCIDeviceBase + moHidd_PCIDevice_ResizeBAR;
    p.bar = bar;
    p.size = size;
    return (IPTR)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_Hidd_PCIDevice_H */
