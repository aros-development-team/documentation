#ifndef PROTO_VHI_H
#define PROTO_VHI_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/vhi/vhi.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/vhi_protos.h>

#ifndef __VHI_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__VHI_NOLIBBASE__)
  #if !defined(VHIBase)
   extern struct Library *VHIBase;
  #endif
  #ifndef __aros_getbase_VHIBase
   #define __aros_getbase_VHIBase() (VHIBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __VHI_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_VHIBase;
 #define AROS_RELLIB_OFFSET_VHI __aros_rellib_offset_VHIBase
 #define AROS_RELLIB_BASE_VHI __aros_rellib_base_VHIBase
 #ifndef __aros_getbase_VHIBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_VHIBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_VHIBase))
 #endif
#endif

#ifndef __aros_getbase_VHIBase
extern struct Library *__aros_getbase_VHIBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(VHI_NOLIBINLINE) && !defined(__VHI_RELLIBBASE__)
# include <inline/vhi.h>
#elif !defined(NOLIBDEFINES) && !defined(VHI_NOLIBDEFINES)
# include <defines/vhi.h>
#endif

#endif /* PROTO_VHI_H */
