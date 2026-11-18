#ifndef PROTO_BOOTLOADER_H
#define PROTO_BOOTLOADER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/bootloader/bootloader.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bootloader_protos.h>

#ifndef __BOOTLOADER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BOOTLOADER_NOLIBBASE__)
  #if !defined(BootLoaderBase)
   #ifdef __BOOTLOADER_STDLIBBASE__
    extern struct Library *BootLoaderBase;
   #else
    extern APTR BootLoaderBase;
   #endif
  #endif
  #ifndef __aros_getbase_BootLoaderBase
   #define __aros_getbase_BootLoaderBase() (BootLoaderBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BOOTLOADER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BootLoaderBase;
 #define AROS_RELLIB_OFFSET_BOOTLOADER __aros_rellib_offset_BootLoaderBase
 #define AROS_RELLIB_BASE_BOOTLOADER __aros_rellib_base_BootLoaderBase
 #ifndef __aros_getbase_BootLoaderBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BootLoaderBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_BootLoaderBase))
 #endif
#endif

#ifndef __aros_getbase_BootLoaderBase
extern APTR __aros_getbase_BootLoaderBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BOOTLOADER_NOLIBINLINE) && !defined(__BOOTLOADER_RELLIBBASE__)
# include <inline/bootloader.h>
#elif !defined(NOLIBDEFINES) && !defined(BOOTLOADER_NOLIBDEFINES)
# include <defines/bootloader.h>
#endif

#endif /* PROTO_BOOTLOADER_H */
