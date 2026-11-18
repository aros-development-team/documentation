#ifndef PROTO_LAYERS_H
#define PROTO_LAYERS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/hyperlayers/layers.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/layers_protos.h>

#ifndef __LAYERS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__LAYERS_NOLIBBASE__)
  #if !defined(LayersBase)
   extern struct Library *LayersBase;
  #endif
  #ifndef __aros_getbase_LayersBase
   #define __aros_getbase_LayersBase() (LayersBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __LAYERS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_LayersBase;
 #define AROS_RELLIB_OFFSET_LAYERS __aros_rellib_offset_LayersBase
 #define AROS_RELLIB_BASE_LAYERS __aros_rellib_base_LayersBase
 #ifndef __aros_getbase_LayersBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_LayersBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_LayersBase))
 #endif
#endif

#ifndef __aros_getbase_LayersBase
extern struct Library *__aros_getbase_LayersBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(LAYERS_NOLIBINLINE) && !defined(__LAYERS_RELLIBBASE__)
# include <inline/layers.h>
#elif !defined(NOLIBDEFINES) && !defined(LAYERS_NOLIBDEFINES)
# include <defines/layers.h>
#endif

#endif /* PROTO_LAYERS_H */
