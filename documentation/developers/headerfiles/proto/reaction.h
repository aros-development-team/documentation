#ifndef PROTO_REACTION_H
#define PROTO_REACTION_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/reaction/reaction.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/reaction_protos.h>

#ifndef __REACTION_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__REACTION_NOLIBBASE__)
  #if !defined(ReactionBase)
   extern struct Library *ReactionBase;
  #endif
  #ifndef __aros_getbase_ReactionBase
   #define __aros_getbase_ReactionBase() (ReactionBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __REACTION_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ReactionBase;
 #define AROS_RELLIB_OFFSET_REACTION __aros_rellib_offset_ReactionBase
 #define AROS_RELLIB_BASE_REACTION __aros_rellib_base_ReactionBase
 #ifndef __aros_getbase_ReactionBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ReactionBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ReactionBase))
 #endif
#endif

#ifndef __aros_getbase_ReactionBase
extern struct Library *__aros_getbase_ReactionBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(REACTION_NOLIBINLINE) && !defined(__REACTION_RELLIBBASE__)
# include <inline/reaction.h>
#elif !defined(NOLIBDEFINES) && !defined(REACTION_NOLIBDEFINES)
# include <defines/reaction.h>
#endif

#endif /* PROTO_REACTION_H */
