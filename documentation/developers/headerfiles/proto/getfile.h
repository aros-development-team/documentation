#ifndef PROTO_GETFILE_H
#define PROTO_GETFILE_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/getfile/getfile.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/getfile_protos.h>

#ifndef __GETFILE_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__GETFILE_NOLIBBASE__)
  #if !defined(GetFileBase)
   extern struct Library *GetFileBase;
  #endif
  #ifndef __aros_getbase_GetFileBase
   #define __aros_getbase_GetFileBase() (GetFileBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __GETFILE_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_GetFileBase;
 #define AROS_RELLIB_OFFSET_GETFILE __aros_rellib_offset_GetFileBase
 #define AROS_RELLIB_BASE_GETFILE __aros_rellib_base_GetFileBase
 #ifndef __aros_getbase_GetFileBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_GetFileBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_GetFileBase))
 #endif
#endif

#ifndef __aros_getbase_GetFileBase
extern struct Library *__aros_getbase_GetFileBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(GETFILE_NOLIBINLINE) && !defined(__GETFILE_RELLIBBASE__)
# include <inline/getfile.h>
#elif !defined(NOLIBDEFINES) && !defined(GETFILE_NOLIBDEFINES)
# include <defines/getfile.h>
#endif

#endif /* PROTO_GETFILE_H */
