#ifndef PROTO_SLIDER_H
#define PROTO_SLIDER_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/slider/slider.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/slider_protos.h>

#ifndef __SLIDER_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__SLIDER_NOLIBBASE__)
  #if !defined(SliderBase)
   extern struct Library *SliderBase;
  #endif
  #ifndef __aros_getbase_SliderBase
   #define __aros_getbase_SliderBase() (SliderBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __SLIDER_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_SliderBase;
 #define AROS_RELLIB_OFFSET_SLIDER __aros_rellib_offset_SliderBase
 #define AROS_RELLIB_BASE_SLIDER __aros_rellib_base_SliderBase
 #ifndef __aros_getbase_SliderBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_SliderBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_SliderBase))
 #endif
#endif

#ifndef __aros_getbase_SliderBase
extern struct Library *__aros_getbase_SliderBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(SLIDER_NOLIBINLINE) && !defined(__SLIDER_RELLIBBASE__)
# include <inline/slider.h>
#elif !defined(NOLIBDEFINES) && !defined(SLIDER_NOLIBDEFINES)
# include <defines/slider.h>
#endif

#endif /* PROTO_SLIDER_H */
