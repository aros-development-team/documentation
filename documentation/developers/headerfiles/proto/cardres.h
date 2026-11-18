#ifndef PROTO_CARDRES_H
#define PROTO_CARDRES_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/card/card.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/cardres_protos.h>

#ifndef __CARDRES_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__CARDRES_NOLIBBASE__)
  #if !defined(CardResource)
   extern struct Library *CardResource;
  #endif
  #ifndef __aros_getbase_CardResource
   #define __aros_getbase_CardResource() (CardResource)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __CARDRES_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_CardResource;
 #define AROS_RELLIB_OFFSET_CARDRES __aros_rellib_offset_CardResource
 #define AROS_RELLIB_BASE_CARDRES __aros_rellib_base_CardResource
 #ifndef __aros_getbase_CardResource
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_CardResource() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_CardResource))
 #endif
#endif

#ifndef __aros_getbase_CardResource
extern struct Library *__aros_getbase_CardResource(void);
#endif

#if !defined(NOLIBINLINE) && !defined(CARDRES_NOLIBINLINE) && !defined(__CARDRES_RELLIBBASE__)
# include <inline/cardres.h>
#elif !defined(NOLIBDEFINES) && !defined(CARDRES_NOLIBDEFINES)
# include <defines/cardres.h>
#endif

#endif /* PROTO_CARDRES_H */
