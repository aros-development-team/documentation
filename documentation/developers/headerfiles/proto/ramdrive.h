#ifndef PROTO_RAMDRIVE_H
#define PROTO_RAMDRIVE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/devs/ramdrive/ramdrive.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <exec/devices.h>
#include <aros/system.h>

#include <clib/ramdrive_protos.h>

#ifndef __RAMDRIVE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__RAMDRIVE_NOLIBBASE__)
  #if !defined(RamdriveBase)
   #ifdef __RAMDRIVE_STDLIBBASE__
    extern struct Library *RamdriveBase;
   #else
    extern struct Device *RamdriveBase;
   #endif
  #endif
  #ifndef __aros_getbase_RamdriveBase
   #define __aros_getbase_RamdriveBase() (RamdriveBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __RAMDRIVE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_RamdriveBase;
 #define AROS_RELLIB_OFFSET_RAMDRIVE __aros_rellib_offset_RamdriveBase
 #define AROS_RELLIB_BASE_RAMDRIVE __aros_rellib_base_RamdriveBase
 #ifndef __aros_getbase_RamdriveBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_RamdriveBase() (*(struct Device **)(__aros_getoffsettable()+__aros_rellib_offset_RamdriveBase))
 #endif
#endif

#ifndef __aros_getbase_RamdriveBase
extern struct Device *__aros_getbase_RamdriveBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(RAMDRIVE_NOLIBINLINE) && !defined(__RAMDRIVE_RELLIBBASE__)
# include <inline/ramdrive.h>
#elif !defined(NOLIBDEFINES) && !defined(RAMDRIVE_NOLIBDEFINES)
# include <defines/ramdrive.h>
#endif

#endif /* PROTO_RAMDRIVE_H */
