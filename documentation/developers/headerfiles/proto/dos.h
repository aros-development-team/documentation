#ifndef PROTO_DOS_H
#define PROTO_DOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/dos/dos.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/dos_protos.h>

#ifndef __DOS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DOS_NOLIBBASE__)
  #if !defined(DOSBase)
   #ifdef __DOS_STDLIBBASE__
    extern struct Library *DOSBase;
   #else
    extern struct DosLibrary *DOSBase;
   #endif
  #endif
  #ifndef __aros_getbase_DOSBase
   #define __aros_getbase_DOSBase() (DOSBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DOS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DOSBase;
 #define AROS_RELLIB_OFFSET_DOS __aros_rellib_offset_DOSBase
 #define AROS_RELLIB_BASE_DOS __aros_rellib_base_DOSBase
 #ifndef __aros_getbase_DOSBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DOSBase() (*(struct DosLibrary **)(__aros_getoffsettable()+__aros_rellib_offset_DOSBase))
 #endif
#endif

#ifndef __aros_getbase_DOSBase
extern struct DosLibrary *__aros_getbase_DOSBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DOS_NOLIBINLINE) && !defined(__DOS_RELLIBBASE__)
# include <inline/dos.h>
#elif !defined(NOLIBDEFINES) && !defined(DOS_NOLIBDEFINES)
# include <defines/dos.h>
#endif

#endif /* PROTO_DOS_H */
