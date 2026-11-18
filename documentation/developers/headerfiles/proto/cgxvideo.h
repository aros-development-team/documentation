#ifndef PROTO_CGXVIDEO_H
#define PROTO_CGXVIDEO_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/cgxvideo/cgxvideo.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/cgxvideo_protos.h>

#ifndef __CGXVIDEO_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CGXVIDEO_NOLIBBASE__)
  #if !defined(CGXVideoBase)
   extern struct Library *CGXVideoBase;
  #endif
  #ifndef __aros_getbase_CGXVideoBase
   #define __aros_getbase_CGXVideoBase() (CGXVideoBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CGXVIDEO_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_CGXVideoBase;
 #define AROS_RELLIB_OFFSET_CGXVIDEO __aros_rellib_offset_CGXVideoBase
 #define AROS_RELLIB_BASE_CGXVIDEO __aros_rellib_base_CGXVideoBase
 #ifndef __aros_getbase_CGXVideoBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_CGXVideoBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_CGXVideoBase))
 #endif
#endif

#ifndef __aros_getbase_CGXVideoBase
extern struct Library *__aros_getbase_CGXVideoBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CGXVIDEO_NOLIBINLINE) && !defined(__CGXVIDEO_RELLIBBASE__)
# include <inline/cgxvideo.h>
#elif !defined(NOLIBDEFINES) && !defined(CGXVIDEO_NOLIBDEFINES)
# include <defines/cgxvideo.h>
#endif

#endif /* PROTO_CGXVIDEO_H */
