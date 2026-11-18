#ifndef PROTO_PAGE_H
#define PROTO_PAGE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/page/page.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/page_protos.h>

#ifndef __PAGE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PAGE_NOLIBBASE__)
  #if !defined(PageBase)
   extern struct Library *PageBase;
  #endif
  #ifndef __aros_getbase_PageBase
   #define __aros_getbase_PageBase() (PageBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PAGE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PageBase;
 #define AROS_RELLIB_OFFSET_PAGE __aros_rellib_offset_PageBase
 #define AROS_RELLIB_BASE_PAGE __aros_rellib_base_PageBase
 #ifndef __aros_getbase_PageBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PageBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PageBase))
 #endif
#endif

#ifndef __aros_getbase_PageBase
extern struct Library *__aros_getbase_PageBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PAGE_NOLIBINLINE) && !defined(__PAGE_RELLIBBASE__)
# include <inline/page.h>
#elif !defined(NOLIBDEFINES) && !defined(PAGE_NOLIBDEFINES)
# include <defines/page.h>
#endif

#endif /* PROTO_PAGE_H */
