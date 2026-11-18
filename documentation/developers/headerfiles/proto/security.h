#ifndef PROTO_SECURITY_H
#define PROTO_SECURITY_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/security/security.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/security_protos.h>

#ifndef __SECURITY_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__SECURITY_NOLIBBASE__)
  #if !defined(secBase)
   extern struct Library *secBase;
  #endif
  #ifndef __aros_getbase_secBase
   #define __aros_getbase_secBase() (secBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __SECURITY_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_secBase;
 #define AROS_RELLIB_OFFSET_SECURITY __aros_rellib_offset_secBase
 #define AROS_RELLIB_BASE_SECURITY __aros_rellib_base_secBase
 #ifndef __aros_getbase_secBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_secBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_secBase))
 #endif
#endif

#ifndef __aros_getbase_secBase
extern struct Library *__aros_getbase_secBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(SECURITY_NOLIBINLINE) && !defined(__SECURITY_RELLIBBASE__)
# include <inline/security.h>
#elif !defined(NOLIBDEFINES) && !defined(SECURITY_NOLIBDEFINES)
# include <defines/security.h>
#endif

#endif /* PROTO_SECURITY_H */
