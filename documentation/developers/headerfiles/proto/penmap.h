#ifndef PROTO_PENMAP_H
#define PROTO_PENMAP_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/penmap/penmap.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/penmap_protos.h>

#ifndef __PENMAP_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PENMAP_NOLIBBASE__)
  #if !defined(PenMapBase)
   extern struct Library *PenMapBase;
  #endif
  #ifndef __aros_getbase_PenMapBase
   #define __aros_getbase_PenMapBase() (PenMapBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PENMAP_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PenMapBase;
 #define AROS_RELLIB_OFFSET_PENMAP __aros_rellib_offset_PenMapBase
 #define AROS_RELLIB_BASE_PENMAP __aros_rellib_base_PenMapBase
 #ifndef __aros_getbase_PenMapBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PenMapBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PenMapBase))
 #endif
#endif

#ifndef __aros_getbase_PenMapBase
extern struct Library *__aros_getbase_PenMapBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PENMAP_NOLIBINLINE) && !defined(__PENMAP_RELLIBBASE__)
# include <inline/penmap.h>
#elif !defined(NOLIBDEFINES) && !defined(PENMAP_NOLIBDEFINES)
# include <defines/penmap.h>
#endif

#endif /* PROTO_PENMAP_H */
