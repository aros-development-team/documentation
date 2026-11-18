#ifndef PROTO_BESTCOMM_H
#define PROTO_BESTCOMM_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/ppc-chrp/efika/bestcomm/bestcomm.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bestcomm_protos.h>

#ifndef __BESTCOMM_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BESTCOMM_NOLIBBASE__)
  #if !defined(BestCommBase)
   #ifdef __BESTCOMM_STDLIBBASE__
    extern struct Library *BestCommBase;
   #else
    extern APTR BestCommBase;
   #endif
  #endif
  #ifndef __aros_getbase_BestCommBase
   #define __aros_getbase_BestCommBase() (BestCommBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BESTCOMM_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BestCommBase;
 #define AROS_RELLIB_OFFSET_BESTCOMM __aros_rellib_offset_BestCommBase
 #define AROS_RELLIB_BASE_BESTCOMM __aros_rellib_base_BestCommBase
 #ifndef __aros_getbase_BestCommBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BestCommBase() (*(APTR *)(__aros_getoffsettable()+__aros_rellib_offset_BestCommBase))
 #endif
#endif

#ifndef __aros_getbase_BestCommBase
extern APTR __aros_getbase_BestCommBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BESTCOMM_NOLIBINLINE) && !defined(__BESTCOMM_RELLIBBASE__)
# include <inline/bestcomm.h>
#elif !defined(NOLIBDEFINES) && !defined(BESTCOMM_NOLIBDEFINES)
# include <defines/bestcomm.h>
#endif

#endif /* PROTO_BESTCOMM_H */
