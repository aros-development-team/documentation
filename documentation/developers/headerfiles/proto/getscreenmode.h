#ifndef PROTO_GETSCREENMODE_H
#define PROTO_GETSCREENMODE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/getscreenmode/getscreenmode.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/getscreenmode_protos.h>

#ifndef __GETSCREENMODE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GETSCREENMODE_NOLIBBASE__)
  #if !defined(GetScreenModeBase)
   extern struct Library *GetScreenModeBase;
  #endif
  #ifndef __aros_getbase_GetScreenModeBase
   #define __aros_getbase_GetScreenModeBase() (GetScreenModeBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GETSCREENMODE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GetScreenModeBase;
 #define AROS_RELLIB_OFFSET_GETSCREENMODE __aros_rellib_offset_GetScreenModeBase
 #define AROS_RELLIB_BASE_GETSCREENMODE __aros_rellib_base_GetScreenModeBase
 #ifndef __aros_getbase_GetScreenModeBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GetScreenModeBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_GetScreenModeBase))
 #endif
#endif

#ifndef __aros_getbase_GetScreenModeBase
extern struct Library *__aros_getbase_GetScreenModeBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GETSCREENMODE_NOLIBINLINE) && !defined(__GETSCREENMODE_RELLIBBASE__)
# include <inline/getscreenmode.h>
#elif !defined(NOLIBDEFINES) && !defined(GETSCREENMODE_NOLIBDEFINES)
# include <defines/getscreenmode.h>
#endif

#endif /* PROTO_GETSCREENMODE_H */
