#ifndef PROTO_DRAWLIST_H
#define PROTO_DRAWLIST_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/drawlist/drawlist.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/drawlist_protos.h>

#ifndef __DRAWLIST_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DRAWLIST_NOLIBBASE__)
  #if !defined(DrawListBase)
   extern struct Library *DrawListBase;
  #endif
  #ifndef __aros_getbase_DrawListBase
   #define __aros_getbase_DrawListBase() (DrawListBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DRAWLIST_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DrawListBase;
 #define AROS_RELLIB_OFFSET_DRAWLIST __aros_rellib_offset_DrawListBase
 #define AROS_RELLIB_BASE_DRAWLIST __aros_rellib_base_DrawListBase
 #ifndef __aros_getbase_DrawListBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DrawListBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DrawListBase))
 #endif
#endif

#ifndef __aros_getbase_DrawListBase
extern struct Library *__aros_getbase_DrawListBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DRAWLIST_NOLIBINLINE) && !defined(__DRAWLIST_RELLIBBASE__)
# include <inline/drawlist.h>
#elif !defined(NOLIBDEFINES) && !defined(DRAWLIST_NOLIBDEFINES)
# include <defines/drawlist.h>
#endif

#endif /* PROTO_DRAWLIST_H */
