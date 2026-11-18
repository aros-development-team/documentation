#ifndef PROTO_COLORWHEEL_H
#define PROTO_COLORWHEEL_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/gadgets/colorwheel/colorwheel.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/colorwheel_protos.h>

#ifndef __COLORWHEEL_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__COLORWHEEL_NOLIBBASE__)
  #if !defined(ColorWheelBase)
   extern struct Library *ColorWheelBase;
  #endif
  #ifndef __aros_getbase_ColorWheelBase
   #define __aros_getbase_ColorWheelBase() (ColorWheelBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __COLORWHEEL_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_ColorWheelBase;
 #define AROS_RELLIB_OFFSET_COLORWHEEL __aros_rellib_offset_ColorWheelBase
 #define AROS_RELLIB_BASE_COLORWHEEL __aros_rellib_base_ColorWheelBase
 #ifndef __aros_getbase_ColorWheelBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_ColorWheelBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_ColorWheelBase))
 #endif
#endif

#ifndef __aros_getbase_ColorWheelBase
extern struct Library *__aros_getbase_ColorWheelBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(COLORWHEEL_NOLIBINLINE) && !defined(__COLORWHEEL_RELLIBBASE__)
# include <inline/colorwheel.h>
#elif !defined(NOLIBDEFINES) && !defined(COLORWHEEL_NOLIBDEFINES)
# include <defines/colorwheel.h>
#endif

#endif /* PROTO_COLORWHEEL_H */
