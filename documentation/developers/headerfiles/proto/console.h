#ifndef PROTO_CONSOLE_H
#define PROTO_CONSOLE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/console/console.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <exec/devices.h>
#include <aros/system.h>

#include <clib/console_protos.h>

#ifndef __CONSOLE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CONSOLE_NOLIBBASE__)
  #if !defined(ConsoleDevice)
   #ifdef __CONSOLE_STDLIBBASE__
    extern struct Library *ConsoleDevice;
   #else
    extern struct Device *ConsoleDevice;
   #endif
  #endif
  #ifndef __aros_getbase_ConsoleDevice
   #define __aros_getbase_ConsoleDevice() (ConsoleDevice)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CONSOLE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ConsoleDevice;
 #define AROS_RELLIB_OFFSET_CONSOLE __aros_rellib_offset_ConsoleDevice
 #define AROS_RELLIB_BASE_CONSOLE __aros_rellib_base_ConsoleDevice
 #ifndef __aros_getbase_ConsoleDevice
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ConsoleDevice() (*(struct Device **)(__aros_getoffsettable()+__aros_rellib_offset_ConsoleDevice))
 #endif
#endif

#ifndef __aros_getbase_ConsoleDevice
extern struct Device *__aros_getbase_ConsoleDevice(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CONSOLE_NOLIBINLINE) && !defined(__CONSOLE_RELLIBBASE__)
# include <inline/console.h>
#elif !defined(NOLIBDEFINES) && !defined(CONSOLE_NOLIBDEFINES)
# include <defines/console.h>
#endif

#endif /* PROTO_CONSOLE_H */
