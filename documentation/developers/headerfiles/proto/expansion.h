#ifndef PROTO_EXPANSION_H
#define PROTO_EXPANSION_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/expansion/expansion.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/expansion_protos.h>

#ifndef __EXPANSION_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__EXPANSION_NOLIBBASE__)
  #if !defined(ExpansionBase)
   extern struct Library *ExpansionBase;
  #endif
  #ifndef __aros_getbase_ExpansionBase
   #define __aros_getbase_ExpansionBase() (ExpansionBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __EXPANSION_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ExpansionBase;
 #define AROS_RELLIB_OFFSET_EXPANSION __aros_rellib_offset_ExpansionBase
 #define AROS_RELLIB_BASE_EXPANSION __aros_rellib_base_ExpansionBase
 #ifndef __aros_getbase_ExpansionBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ExpansionBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ExpansionBase))
 #endif
#endif

#ifndef __aros_getbase_ExpansionBase
extern struct Library *__aros_getbase_ExpansionBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(EXPANSION_NOLIBINLINE) && !defined(__EXPANSION_RELLIBBASE__)
# include <inline/expansion.h>
#elif !defined(NOLIBDEFINES) && !defined(EXPANSION_NOLIBDEFINES)
# include <defines/expansion.h>
#endif

#endif /* PROTO_EXPANSION_H */
