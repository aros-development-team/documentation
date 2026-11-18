#ifndef PROTO_USBCLASS_H
#define PROTO_USBCLASS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/usb/classes/usbclass.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/usbclass_protos.h>

#ifndef __USBCLASS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__USBCLASS_NOLIBBASE__)
  #if !defined(UsbClsBase)
   extern struct Library *UsbClsBase;
  #endif
  #ifndef __aros_getbase_UsbClsBase
   #define __aros_getbase_UsbClsBase() (UsbClsBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __USBCLASS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_UsbClsBase;
 #define AROS_RELLIB_OFFSET_USBCLASS __aros_rellib_offset_UsbClsBase
 #define AROS_RELLIB_BASE_USBCLASS __aros_rellib_base_UsbClsBase
 #ifndef __aros_getbase_UsbClsBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_UsbClsBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_UsbClsBase))
 #endif
#endif

#ifndef __aros_getbase_UsbClsBase
extern struct Library *__aros_getbase_UsbClsBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(USBCLASS_NOLIBINLINE) && !defined(__USBCLASS_RELLIBBASE__)
# include <inline/usbclass.h>
#elif !defined(NOLIBDEFINES) && !defined(USBCLASS_NOLIBDEFINES)
# include <defines/usbclass.h>
#endif

#endif /* PROTO_USBCLASS_H */
