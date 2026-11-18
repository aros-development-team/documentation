#ifndef PROTO_NONVOLATILE_H
#define PROTO_NONVOLATILE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/nonvolatile/nonvolatile.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/nonvolatile_protos.h>

#ifndef __NONVOLATILE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__NONVOLATILE_NOLIBBASE__)
  #if !defined(NonvolatileBase)
   extern struct Library *NonvolatileBase;
  #endif
  #ifndef __aros_getbase_NonvolatileBase
   #define __aros_getbase_NonvolatileBase() (NonvolatileBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __NONVOLATILE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_NonvolatileBase;
 #define AROS_RELLIB_OFFSET_NONVOLATILE __aros_rellib_offset_NonvolatileBase
 #define AROS_RELLIB_BASE_NONVOLATILE __aros_rellib_base_NonvolatileBase
 #ifndef __aros_getbase_NonvolatileBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_NonvolatileBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_NonvolatileBase))
 #endif
#endif

#ifndef __aros_getbase_NonvolatileBase
extern struct Library *__aros_getbase_NonvolatileBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(NONVOLATILE_NOLIBINLINE) && !defined(__NONVOLATILE_RELLIBBASE__)
# include <inline/nonvolatile.h>
#elif !defined(NOLIBDEFINES) && !defined(NONVOLATILE_NOLIBDEFINES)
# include <defines/nonvolatile.h>
#endif

#endif /* PROTO_NONVOLATILE_H */
