#ifndef PROTO_POSEIDON_H
#define PROTO_POSEIDON_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/usb/poseidon/poseidon.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/poseidon_protos.h>

#ifndef __POSEIDON_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__POSEIDON_NOLIBBASE__)
  #if !defined(ps)
   extern struct Library *ps;
  #endif
  #ifndef __aros_getbase_ps
   #define __aros_getbase_ps() (ps)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __POSEIDON_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ps;
 #define AROS_RELLIB_OFFSET_POSEIDON __aros_rellib_offset_ps
 #define AROS_RELLIB_BASE_POSEIDON __aros_rellib_base_ps
 #ifndef __aros_getbase_ps
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ps() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ps))
 #endif
#endif

#ifndef __aros_getbase_ps
extern struct Library *__aros_getbase_ps(void);
#endif

#if !defined(NOLIBINLINE) && !defined(POSEIDON_NOLIBINLINE) && !defined(__POSEIDON_RELLIBBASE__)
# include <inline/poseidon.h>
#elif !defined(NOLIBDEFINES) && !defined(POSEIDON_NOLIBDEFINES)
# include <defines/poseidon.h>
#endif

#endif /* PROTO_POSEIDON_H */
