#ifndef PROTO_KERNEL_H
#define PROTO_KERNEL_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/kernel/kernel.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/kernel_protos.h>

#ifndef __KERNEL_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__KERNEL_NOLIBBASE__)
  #if !defined(KernelBase)
   #ifdef __KERNEL_STDLIBBASE__
    extern struct Library *KernelBase;
   #else
    extern APTR KernelBase;
   #endif
  #endif
  #ifndef __aros_getbase_KernelBase
   #define __aros_getbase_KernelBase() (KernelBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __KERNEL_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_KernelBase;
 #define AROS_RELLIB_OFFSET_KERNEL __aros_rellib_offset_KernelBase
 #define AROS_RELLIB_BASE_KERNEL __aros_rellib_base_KernelBase
 #ifndef __aros_getbase_KernelBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_KernelBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_KernelBase))
 #endif
#endif

#ifndef __aros_getbase_KernelBase
extern APTR __aros_getbase_KernelBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(KERNEL_NOLIBINLINE) && !defined(__KERNEL_RELLIBBASE__)
# include <inline/kernel.h>
#elif !defined(NOLIBDEFINES) && !defined(KERNEL_NOLIBDEFINES)
# include <defines/kernel.h>
#endif

#endif /* PROTO_KERNEL_H */
