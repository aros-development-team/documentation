#ifndef PROTO_ASYNCIO_H
#define PROTO_ASYNCIO_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/asyncio/src/asyncio.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/asyncio_protos.h>

#ifndef __ASYNCIO_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__ASYNCIO_NOLIBBASE__)
  #if !defined(AsyncIOBase)
   extern struct Library *AsyncIOBase;
  #endif
  #ifndef __aros_getbase_AsyncIOBase
   #define __aros_getbase_AsyncIOBase() (AsyncIOBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __ASYNCIO_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_AsyncIOBase;
 #define AROS_RELLIB_OFFSET_ASYNCIO __aros_rellib_offset_AsyncIOBase
 #define AROS_RELLIB_BASE_ASYNCIO __aros_rellib_base_AsyncIOBase
 #ifndef __aros_getbase_AsyncIOBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_AsyncIOBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_AsyncIOBase))
 #endif
#endif

#ifndef __aros_getbase_AsyncIOBase
extern struct Library *__aros_getbase_AsyncIOBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(ASYNCIO_NOLIBINLINE) && !defined(__ASYNCIO_RELLIBBASE__)
# include <inline/asyncio.h>
#elif !defined(NOLIBDEFINES) && !defined(ASYNCIO_NOLIBDEFINES)
# include <defines/asyncio.h>
#endif

#endif /* PROTO_ASYNCIO_H */
