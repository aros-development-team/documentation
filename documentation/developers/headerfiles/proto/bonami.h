#ifndef PROTO_BONAMI_H
#define PROTO_BONAMI_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/mdns/library/bonami.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bonami_protos.h>

#ifndef __BONAMI_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BONAMI_NOLIBBASE__)
  #if !defined(BonamiBase)
   extern struct Library *BonamiBase;
  #endif
  #ifndef __aros_getbase_BonamiBase
   #define __aros_getbase_BonamiBase() (BonamiBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BONAMI_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BonamiBase;
 #define AROS_RELLIB_OFFSET_BONAMI __aros_rellib_offset_BonamiBase
 #define AROS_RELLIB_BASE_BONAMI __aros_rellib_base_BonamiBase
 #ifndef __aros_getbase_BonamiBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BonamiBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_BonamiBase))
 #endif
#endif

#ifndef __aros_getbase_BonamiBase
extern struct Library *__aros_getbase_BonamiBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BONAMI_NOLIBINLINE) && !defined(__BONAMI_RELLIBBASE__)
# include <inline/bonami.h>
#elif !defined(NOLIBDEFINES) && !defined(BONAMI_NOLIBDEFINES)
# include <defines/bonami.h>
#endif

#endif /* PROTO_BONAMI_H */
