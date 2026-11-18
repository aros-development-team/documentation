#ifndef PROTO_PROCESSOR_H
#define PROTO_PROCESSOR_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/processor/processor.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/processor_protos.h>

#ifndef __PROCESSOR_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PROCESSOR_NOLIBBASE__)
  #if !defined(ProcessorBase)
   #ifdef __PROCESSOR_STDLIBBASE__
    extern struct Library *ProcessorBase;
   #else
    extern APTR ProcessorBase;
   #endif
  #endif
  #ifndef __aros_getbase_ProcessorBase
   #define __aros_getbase_ProcessorBase() (ProcessorBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PROCESSOR_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ProcessorBase;
 #define AROS_RELLIB_OFFSET_PROCESSOR __aros_rellib_offset_ProcessorBase
 #define AROS_RELLIB_BASE_PROCESSOR __aros_rellib_base_ProcessorBase
 #ifndef __aros_getbase_ProcessorBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ProcessorBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_ProcessorBase))
 #endif
#endif

#ifndef __aros_getbase_ProcessorBase
extern APTR __aros_getbase_ProcessorBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PROCESSOR_NOLIBINLINE) && !defined(__PROCESSOR_RELLIBBASE__)
# include <inline/processor.h>
#elif !defined(NOLIBDEFINES) && !defined(PROCESSOR_NOLIBDEFINES)
# include <defines/processor.h>
#endif

#endif /* PROTO_PROCESSOR_H */
