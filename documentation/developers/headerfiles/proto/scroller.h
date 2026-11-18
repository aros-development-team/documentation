#ifndef PROTO_SCROLLER_H
#define PROTO_SCROLLER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/scroller/scroller.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/scroller_protos.h>

#ifndef __SCROLLER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__SCROLLER_NOLIBBASE__)
  #if !defined(ScrollerBase)
   extern struct Library *ScrollerBase;
  #endif
  #ifndef __aros_getbase_ScrollerBase
   #define __aros_getbase_ScrollerBase() (ScrollerBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __SCROLLER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ScrollerBase;
 #define AROS_RELLIB_OFFSET_SCROLLER __aros_rellib_offset_ScrollerBase
 #define AROS_RELLIB_BASE_SCROLLER __aros_rellib_base_ScrollerBase
 #ifndef __aros_getbase_ScrollerBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ScrollerBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ScrollerBase))
 #endif
#endif

#ifndef __aros_getbase_ScrollerBase
extern struct Library *__aros_getbase_ScrollerBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(SCROLLER_NOLIBINLINE) && !defined(__SCROLLER_RELLIBBASE__)
# include <inline/scroller.h>
#elif !defined(NOLIBDEFINES) && !defined(SCROLLER_NOLIBDEFINES)
# include <defines/scroller.h>
#endif

#endif /* PROTO_SCROLLER_H */
