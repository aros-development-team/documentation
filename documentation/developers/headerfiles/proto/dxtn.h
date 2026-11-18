#ifndef PROTO_DXTN_H
#define PROTO_DXTN_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/dxtn/dxtn.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/dxtn_protos.h>

#ifndef __DXTN_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DXTN_NOLIBBASE__)
  #if !defined(DXTNBase)
   extern struct Library *DXTNBase;
  #endif
  #ifndef __aros_getbase_DXTNBase
   #define __aros_getbase_DXTNBase() (DXTNBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DXTN_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DXTNBase;
 #define AROS_RELLIB_OFFSET_DXTN __aros_rellib_offset_DXTNBase
 #define AROS_RELLIB_BASE_DXTN __aros_rellib_base_DXTNBase
 #ifndef __aros_getbase_DXTNBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DXTNBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DXTNBase))
 #endif
#endif

#ifndef __aros_getbase_DXTNBase
extern struct Library *__aros_getbase_DXTNBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DXTN_NOLIBINLINE) && !defined(__DXTN_RELLIBBASE__)
# include <inline/dxtn.h>
#elif !defined(NOLIBDEFINES) && !defined(DXTN_NOLIBDEFINES)
# include <defines/dxtn.h>
#endif

#endif /* PROTO_DXTN_H */
