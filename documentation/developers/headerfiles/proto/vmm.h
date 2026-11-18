#ifndef PROTO_VMM_H
#define PROTO_VMM_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/system/VMM/vmm.lib/vmm.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/vmm_protos.h>

#ifndef __VMM_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__VMM_NOLIBBASE__)
  #if !defined(VMMBase)
   extern struct Library *VMMBase;
  #endif
  #ifndef __aros_getbase_VMMBase
   #define __aros_getbase_VMMBase() (VMMBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __VMM_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_VMMBase;
 #define AROS_RELLIB_OFFSET_VMM __aros_rellib_offset_VMMBase
 #define AROS_RELLIB_BASE_VMM __aros_rellib_base_VMMBase
 #ifndef __aros_getbase_VMMBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_VMMBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_VMMBase))
 #endif
#endif

#ifndef __aros_getbase_VMMBase
extern struct Library *__aros_getbase_VMMBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(VMM_NOLIBINLINE) && !defined(__VMM_RELLIBBASE__)
# include <inline/vmm.h>
#elif !defined(NOLIBDEFINES) && !defined(VMM_NOLIBDEFINES)
# include <defines/vmm.h>
#endif

#endif /* PROTO_VMM_H */
