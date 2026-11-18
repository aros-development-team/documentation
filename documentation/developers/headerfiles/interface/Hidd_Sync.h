#ifndef INTERFACE_Hidd_Sync_H
#define INTERFACE_Hidd_Sync_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/gfx/gfx.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for Hidd_Sync
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_Hidd_Sync                        "hidd.gfx.sync"

#if !defined(HiddSyncBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__Hidd_Sync_NOMETHODBASE__)
#define HiddSyncBase Hidd_Sync_GetMethodBase(__obj)

static inline OOP_MethodID Hidd_Sync_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID Hidd_Sync_mid;
    if (!Hidd_Sync_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        Hidd_Sync_mid = OOP_GetMethodID(IID_Hidd_Sync, 0);
    }
    return Hidd_Sync_mid;
}
#endif

#define HiddSyncAttrBase                 __IHidd_Sync

#if !defined(__OOP_NOATTRBASES__) && !defined(__Hidd_Sync_NOATTRBASE__)
extern OOP_AttrBase HiddSyncAttrBase;
#endif

enum
{
    aoHidd_Sync_PixelTime = 0,  /*  [ISG] (obsolete) pixel clock in picoseconds (1E-12 second)  */
    aoHidd_Sync_LeftMargin = 1,  /*  [ISG] (obsolete) */
    aoHidd_Sync_RightMargin = 2,  /*  [ISG] (obsolete) */
    aoHidd_Sync_HSyncLength = 3,  /*  [ISG] (obsolete) */
    aoHidd_Sync_UpperMargin = 4,  /*  [ISG] (obsolete) */
    aoHidd_Sync_LowerMargin = 5,  /*  [ISG] (obsolete) */
    aoHidd_Sync_VSyncLength = 6,  /*  [ISG] (obsolete) */
    aoHidd_Sync_PixelClock = 7,  /*  [ISG] Pixel clock in Hz */
    aoHidd_Sync_HDisp = 8,  /*  [I.G] displayed pixels per row */
    aoHidd_Sync_HSyncStart = 9,  /*  [ISG] time to the start of the horizontal sync */
    aoHidd_Sync_HSyncEnd = 10,  /*  [ISG] time to the end of the horizontal sync */
    aoHidd_Sync_HTotal = 11,  /*  [ISG] total time to draw one row + the hsync time */
    aoHidd_Sync_VDisp = 12,  /*  [I.G] displayed rows */
    aoHidd_Sync_VSyncStart = 13,  /*  [ISG] rows to the start of the horizontal sync */
    aoHidd_Sync_VSyncEnd = 14,  /*  [ISG] rows to the end of the horizontal sync */
    aoHidd_Sync_VTotal = 15,  /*  [ISG] number of rows in the screen including vsync */
    aoHidd_Sync_Description = 16,  /*  [I.G] description */
    aoHidd_Sync_HMin = 17,  /*  [ISG] minimum acceptable bitmap width */
    aoHidd_Sync_HMax = 18,  /*  [ISG] maximum acceptable bitmap width */
    aoHidd_Sync_VMin = 19,  /*  [ISG] minimum acceptable bitmap height */
    aoHidd_Sync_VMax = 20,  /*  [ISG] maximum acceptable bitmap height */
    aoHidd_Sync_Flags = 21,  /*  [I.G] mode tags */
    aoHidd_Sync_Variable = 22,  /*  [I.G] data can be modified */
    aoHidd_Sync_MonitorSpec = 23,  /*  [I.G] MonitorSpec structure */
    aoHidd_Sync_DMEnumerator = 24,  /*  [I.G] DMEnum to which the object belongs */
    aoHidd_Sync_BoardNumber = 25,  /*  [I..] Number of board (for '%b' in description) */
    aoHidd_Sync_HDispMax = 26,  /*  [I.G] maximum displayable pixels on a row */
    aoHidd_Sync_VDispMax = 27,  /*  [I.G] maximum displayable rows */
    num_Hidd_Sync_Attrs = 28,
};

#define aHidd_Sync_PixelTime                        (HiddSyncAttrBase + aoHidd_Sync_PixelTime)
#define aHidd_Sync_LeftMargin                       (HiddSyncAttrBase + aoHidd_Sync_LeftMargin)
#define aHidd_Sync_RightMargin                      (HiddSyncAttrBase + aoHidd_Sync_RightMargin)
#define aHidd_Sync_HSyncLength                      (HiddSyncAttrBase + aoHidd_Sync_HSyncLength)
#define aHidd_Sync_UpperMargin                      (HiddSyncAttrBase + aoHidd_Sync_UpperMargin)
#define aHidd_Sync_LowerMargin                      (HiddSyncAttrBase + aoHidd_Sync_LowerMargin)
#define aHidd_Sync_VSyncLength                      (HiddSyncAttrBase + aoHidd_Sync_VSyncLength)
#define aHidd_Sync_PixelClock                       (HiddSyncAttrBase + aoHidd_Sync_PixelClock)
#define aHidd_Sync_HDisp                            (HiddSyncAttrBase + aoHidd_Sync_HDisp)
#define aHidd_Sync_HSyncStart                       (HiddSyncAttrBase + aoHidd_Sync_HSyncStart)
#define aHidd_Sync_HSyncEnd                         (HiddSyncAttrBase + aoHidd_Sync_HSyncEnd)
#define aHidd_Sync_HTotal                           (HiddSyncAttrBase + aoHidd_Sync_HTotal)
#define aHidd_Sync_VDisp                            (HiddSyncAttrBase + aoHidd_Sync_VDisp)
#define aHidd_Sync_VSyncStart                       (HiddSyncAttrBase + aoHidd_Sync_VSyncStart)
#define aHidd_Sync_VSyncEnd                         (HiddSyncAttrBase + aoHidd_Sync_VSyncEnd)
#define aHidd_Sync_VTotal                           (HiddSyncAttrBase + aoHidd_Sync_VTotal)
#define aHidd_Sync_Description                      (HiddSyncAttrBase + aoHidd_Sync_Description)
#define aHidd_Sync_HMin                             (HiddSyncAttrBase + aoHidd_Sync_HMin)
#define aHidd_Sync_HMax                             (HiddSyncAttrBase + aoHidd_Sync_HMax)
#define aHidd_Sync_VMin                             (HiddSyncAttrBase + aoHidd_Sync_VMin)
#define aHidd_Sync_VMax                             (HiddSyncAttrBase + aoHidd_Sync_VMax)
#define aHidd_Sync_Flags                            (HiddSyncAttrBase + aoHidd_Sync_Flags)
#define aHidd_Sync_Variable                         (HiddSyncAttrBase + aoHidd_Sync_Variable)
#define aHidd_Sync_MonitorSpec                      (HiddSyncAttrBase + aoHidd_Sync_MonitorSpec)
#define aHidd_Sync_DMEnumerator                     (HiddSyncAttrBase + aoHidd_Sync_DMEnumerator)
#define aHidd_Sync_BoardNumber                      (HiddSyncAttrBase + aoHidd_Sync_BoardNumber)
#define aHidd_Sync_HDispMax                         (HiddSyncAttrBase + aoHidd_Sync_HDispMax)
#define aHidd_Sync_VDispMax                         (HiddSyncAttrBase + aoHidd_Sync_VDispMax)

#define Hidd_Sync_Switch(attr, idx) \
if (((idx) = (attr) - HiddSyncAttrBase) < num_Hidd_Sync_Attrs) \
switch (idx)

#endif /* INTERFACE_Hidd_Sync_H */
