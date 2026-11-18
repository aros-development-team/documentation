#ifndef PROTO_DISKIMAGE_H
#define PROTO_DISKIMAGE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/devs/diskimage/device/diskimage.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <exec/devices.h>
#include <aros/system.h>

#include <clib/diskimage_protos.h>

#ifndef __DISKIMAGE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DISKIMAGE_NOLIBBASE__)
  #if !defined(DiskImageBase)
   #ifdef __DISKIMAGE_STDLIBBASE__
    extern struct Library *DiskImageBase;
   #else
    extern struct Device *DiskImageBase;
   #endif
  #endif
  #ifndef __aros_getbase_DiskImageBase
   #define __aros_getbase_DiskImageBase() (DiskImageBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DISKIMAGE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DiskImageBase;
 #define AROS_RELLIB_OFFSET_DISKIMAGE __aros_rellib_offset_DiskImageBase
 #define AROS_RELLIB_BASE_DISKIMAGE __aros_rellib_base_DiskImageBase
 #ifndef __aros_getbase_DiskImageBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DiskImageBase() (*(struct Device **)(__aros_getoffsettable()+__aros_rellib_offset_DiskImageBase))
 #endif
#endif

#ifndef __aros_getbase_DiskImageBase
extern struct Device *__aros_getbase_DiskImageBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DISKIMAGE_NOLIBINLINE) && !defined(__DISKIMAGE_RELLIBBASE__)
# include <inline/diskimage.h>
#elif !defined(NOLIBDEFINES) && !defined(DISKIMAGE_NOLIBDEFINES)
# include <defines/diskimage.h>
#endif

#endif /* PROTO_DISKIMAGE_H */
