#ifndef PROTO_NVDISK_H
#define PROTO_NVDISK_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/nonvolatile/nvdisk/nvdisk.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/nvdisk_protos.h>

#ifndef __NVDISK_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__NVDISK_NOLIBBASE__)
  #if !defined(nvdBase)
   extern struct Library *nvdBase;
  #endif
  #ifndef __aros_getbase_nvdBase
   #define __aros_getbase_nvdBase() (nvdBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __NVDISK_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_nvdBase;
 #define AROS_RELLIB_OFFSET_NVDISK __aros_rellib_offset_nvdBase
 #define AROS_RELLIB_BASE_NVDISK __aros_rellib_base_nvdBase
 #ifndef __aros_getbase_nvdBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_nvdBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_nvdBase))
 #endif
#endif

#ifndef __aros_getbase_nvdBase
extern struct Library *__aros_getbase_nvdBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(NVDISK_NOLIBINLINE) && !defined(__NVDISK_RELLIBBASE__)
# include <inline/nvdisk.h>
#elif !defined(NOLIBDEFINES) && !defined(NVDISK_NOLIBDEFINES)
# include <defines/nvdisk.h>
#endif

#endif /* PROTO_NVDISK_H */
