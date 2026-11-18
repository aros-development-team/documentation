#ifndef PROTO_BEVEL_H
#define PROTO_BEVEL_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/bevel/bevel.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bevel_protos.h>

#ifndef __BEVEL_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BEVEL_NOLIBBASE__)
  #if !defined(BevelBase)
   extern struct Library *BevelBase;
  #endif
  #ifndef __aros_getbase_BevelBase
   #define __aros_getbase_BevelBase() (BevelBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BEVEL_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BevelBase;
 #define AROS_RELLIB_OFFSET_BEVEL __aros_rellib_offset_BevelBase
 #define AROS_RELLIB_BASE_BEVEL __aros_rellib_base_BevelBase
 #ifndef __aros_getbase_BevelBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BevelBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_BevelBase))
 #endif
#endif

#ifndef __aros_getbase_BevelBase
extern struct Library *__aros_getbase_BevelBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BEVEL_NOLIBINLINE) && !defined(__BEVEL_RELLIBBASE__)
# include <inline/bevel.h>
#elif !defined(NOLIBDEFINES) && !defined(BEVEL_NOLIBDEFINES)
# include <defines/bevel.h>
#endif

#endif /* PROTO_BEVEL_H */
