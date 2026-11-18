#ifndef PROTO_INTUITION_H
#define PROTO_INTUITION_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/intuition/intuition.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/intuition_protos.h>

#ifndef __INTUITION_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__INTUITION_NOLIBBASE__)
  #if !defined(IntuitionBase)
   #ifdef __INTUITION_STDLIBBASE__
    extern struct Library *IntuitionBase;
   #else
    extern struct IntuitionBase *IntuitionBase;
   #endif
  #endif
  #ifndef __aros_getbase_IntuitionBase
   #define __aros_getbase_IntuitionBase() (IntuitionBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __INTUITION_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_IntuitionBase;
 #define AROS_RELLIB_OFFSET_INTUITION __aros_rellib_offset_IntuitionBase
 #define AROS_RELLIB_BASE_INTUITION __aros_rellib_base_IntuitionBase
 #ifndef __aros_getbase_IntuitionBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_IntuitionBase() (*(struct IntuitionBase **)(__aros_getoffsettable()+__aros_rellib_offset_IntuitionBase))
 #endif
#endif

#ifndef __aros_getbase_IntuitionBase
extern struct IntuitionBase *__aros_getbase_IntuitionBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(INTUITION_NOLIBINLINE) && !defined(__INTUITION_RELLIBBASE__)
# include <inline/intuition.h>
#elif !defined(NOLIBDEFINES) && !defined(INTUITION_NOLIBDEFINES)
# include <defines/intuition.h>
#endif

#endif /* PROTO_INTUITION_H */
