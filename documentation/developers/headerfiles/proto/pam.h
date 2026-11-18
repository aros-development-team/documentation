#ifndef PROTO_PAM_H
#define PROTO_PAM_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/pam/pam.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/pam_protos.h>

#ifndef __PAM_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PAM_NOLIBBASE__)
  #if !defined(PamBase)
   extern struct Library *PamBase;
  #endif
  #ifndef __aros_getbase_PamBase
   #define __aros_getbase_PamBase() (PamBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PAM_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PamBase;
 #define AROS_RELLIB_OFFSET_PAM __aros_rellib_offset_PamBase
 #define AROS_RELLIB_BASE_PAM __aros_rellib_base_PamBase
 #ifndef __aros_getbase_PamBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PamBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_PamBase))
 #endif
#endif

#ifndef __aros_getbase_PamBase
extern struct Library *__aros_getbase_PamBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PAM_NOLIBINLINE) && !defined(__PAM_RELLIBBASE__)
# include <inline/pam.h>
#elif !defined(NOLIBDEFINES) && !defined(PAM_NOLIBDEFINES)
# include <defines/pam.h>
#endif

#endif /* PROTO_PAM_H */
