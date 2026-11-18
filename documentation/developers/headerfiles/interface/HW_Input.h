#ifndef INTERFACE_HW_Input_H
#define INTERFACE_HW_Input_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hidds/input/inputclass.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

/*
    Desc: interface inlines for HW_Input
*/

#include <exec/types.h>
#include <proto/oop.h>

#define IID_HW_Input                         "I_hw_input"

#if !defined(HWInputBase) && !defined(__OOP_NOMETHODBASES__) && !defined(__HW_Input_NOMETHODBASE__)
#define HWInputBase HW_Input_GetMethodBase(__obj)

static inline OOP_MethodID HW_Input_GetMethodBase(OOP_Object *obj)
{
    static OOP_MethodID HW_Input_mid;
    if (!HW_Input_mid) {
        struct Library *OOPBase = (struct Library *)OOP_OCLASS(obj)->OOPBasePtr;
        HW_Input_mid = OOP_GetMethodID(IID_HW_Input, 0);
    }
    return HW_Input_mid;
}
#endif


#define HW_Input_Switch(attr, idx) \
if (((idx) = (attr) - HWInputAB) < num_HW_Input_Attrs) \
switch (idx)


enum {
    moHW_Input_PushEvent = 0,
    num_HW_Input_Methods = 1
};

struct pHW_Input_PushEvent
{
    OOP_MethodID mID;
    OOP_Object *driver;
    InputIrqData_t iedata;
};

#define HW_Input_PushEvent(obj, args...) \
    ({OOP_Object *__obj = obj;\
      HW_Input_PushEvent_(HWInputBase, __obj ,##args); })

static inline void HW_Input_PushEvent_(OOP_MethodID __HWInputBase, OOP_Object *__obj, OOP_Object *driver, InputIrqData_t iedata)
{
    struct pHW_Input_PushEvent p;
    p.mID = __HWInputBase + moHW_Input_PushEvent;
    p.driver = driver;
    p.iedata = iedata;
    (void)OOP_DoMethod(__obj, &p.mID);
}

#endif /* INTERFACE_HW_Input_H */
