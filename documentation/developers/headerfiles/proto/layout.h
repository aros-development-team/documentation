#ifndef PROTO_LAYOUT_H
#define PROTO_LAYOUT_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/layout/layout.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/layout_protos.h>

#ifndef __LAYOUT_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LAYOUT_NOLIBBASE__)
  #if !defined(LayoutBase)
   extern struct Library *LayoutBase;
  #endif
  #ifndef __aros_getbase_LayoutBase
   #define __aros_getbase_LayoutBase() (LayoutBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LAYOUT_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_LayoutBase;
 #define AROS_RELLIB_OFFSET_LAYOUT __aros_rellib_offset_LayoutBase
 #define AROS_RELLIB_BASE_LAYOUT __aros_rellib_base_LayoutBase
 #ifndef __aros_getbase_LayoutBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_LayoutBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_LayoutBase))
 #endif
#endif

#ifndef __aros_getbase_LayoutBase
extern struct Library *__aros_getbase_LayoutBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LAYOUT_NOLIBINLINE) && !defined(__LAYOUT_RELLIBBASE__)
# include <inline/layout.h>
#elif !defined(NOLIBDEFINES) && !defined(LAYOUT_NOLIBDEFINES)
# include <defines/layout.h>
#endif

#endif /* PROTO_LAYOUT_H */
