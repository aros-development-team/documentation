#ifndef PROTO_MUIMASTER_H
#define PROTO_MUIMASTER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/muimaster/muimaster.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/muimaster_protos.h>

#ifndef __MUIMASTER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__MUIMASTER_NOLIBBASE__)
  #if !defined(MUIMasterBase)
   extern struct Library *MUIMasterBase;
  #endif
  #ifndef __aros_getbase_MUIMasterBase
   #define __aros_getbase_MUIMasterBase() (MUIMasterBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __MUIMASTER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_MUIMasterBase;
 #define AROS_RELLIB_OFFSET_MUIMASTER __aros_rellib_offset_MUIMasterBase
 #define AROS_RELLIB_BASE_MUIMASTER __aros_rellib_base_MUIMasterBase
 #ifndef __aros_getbase_MUIMasterBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_MUIMasterBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_MUIMasterBase))
 #endif
#endif

#ifndef __aros_getbase_MUIMasterBase
extern struct Library *__aros_getbase_MUIMasterBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(MUIMASTER_NOLIBINLINE) && !defined(__MUIMASTER_RELLIBBASE__)
# include <inline/muimaster.h>
#elif !defined(NOLIBDEFINES) && !defined(MUIMASTER_NOLIBDEFINES)
# include <defines/muimaster.h>
#endif

#endif /* PROTO_MUIMASTER_H */
