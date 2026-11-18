#ifndef PROTO_CLICKTAB_H
#define PROTO_CLICKTAB_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/clicktab/clicktab.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/clicktab_protos.h>

#ifndef __CLICKTAB_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CLICKTAB_NOLIBBASE__)
  #if !defined(ClickTabBase)
   extern struct Library *ClickTabBase;
  #endif
  #ifndef __aros_getbase_ClickTabBase
   #define __aros_getbase_ClickTabBase() (ClickTabBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CLICKTAB_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ClickTabBase;
 #define AROS_RELLIB_OFFSET_CLICKTAB __aros_rellib_offset_ClickTabBase
 #define AROS_RELLIB_BASE_CLICKTAB __aros_rellib_base_ClickTabBase
 #ifndef __aros_getbase_ClickTabBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ClickTabBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ClickTabBase))
 #endif
#endif

#ifndef __aros_getbase_ClickTabBase
extern struct Library *__aros_getbase_ClickTabBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CLICKTAB_NOLIBINLINE) && !defined(__CLICKTAB_RELLIBBASE__)
# include <inline/clicktab.h>
#elif !defined(NOLIBDEFINES) && !defined(CLICKTAB_NOLIBDEFINES)
# include <defines/clicktab.h>
#endif

#endif /* PROTO_CLICKTAB_H */
