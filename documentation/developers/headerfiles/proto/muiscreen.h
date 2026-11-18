#ifndef PROTO_MUISCREEN_H
#define PROTO_MUISCREEN_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/muiscreen/muiscreen.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/muiscreen_protos.h>

#ifndef __MUISCREEN_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MUISCREEN_NOLIBBASE__)
  #if !defined(MUIScreenBase)
   extern struct Library *MUIScreenBase;
  #endif
  #ifndef __aros_getbase_MUIScreenBase
   #define __aros_getbase_MUIScreenBase() (MUIScreenBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MUISCREEN_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MUIScreenBase;
 #define AROS_RELLIB_OFFSET_MUISCREEN __aros_rellib_offset_MUIScreenBase
 #define AROS_RELLIB_BASE_MUISCREEN __aros_rellib_base_MUIScreenBase
 #ifndef __aros_getbase_MUIScreenBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MUIScreenBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MUIScreenBase))
 #endif
#endif

#ifndef __aros_getbase_MUIScreenBase
extern struct Library *__aros_getbase_MUIScreenBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MUISCREEN_NOLIBINLINE) && !defined(__MUISCREEN_RELLIBBASE__)
# include <inline/muiscreen.h>
#elif !defined(NOLIBDEFINES) && !defined(MUISCREEN_NOLIBDEFINES)
# include <defines/muiscreen.h>
#endif

#endif /* PROTO_MUISCREEN_H */
