#ifndef PROTO_INPUT_H
#define PROTO_INPUT_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/devs/input/input.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <exec/devices.h>
#include <aros/system.h>

#include <clib/input_protos.h>

#ifndef __INPUT_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__INPUT_NOLIBBASE__)
  #if !defined(InputBase)
   #ifdef __INPUT_STDLIBBASE__
    extern struct Library *InputBase;
   #else
    extern struct Device *InputBase;
   #endif
  #endif
  #ifndef __aros_getbase_InputBase
   #define __aros_getbase_InputBase() (InputBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __INPUT_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_InputBase;
 #define AROS_RELLIB_OFFSET_INPUT __aros_rellib_offset_InputBase
 #define AROS_RELLIB_BASE_INPUT __aros_rellib_base_InputBase
 #ifndef __aros_getbase_InputBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_InputBase() (*(struct Device **)(__aros_getoffsettable()+__aros_rellib_offset_InputBase))
 #endif
#endif

#ifndef __aros_getbase_InputBase
extern struct Device *__aros_getbase_InputBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(INPUT_NOLIBINLINE) && !defined(__INPUT_RELLIBBASE__)
# include <inline/input.h>
#elif !defined(NOLIBDEFINES) && !defined(INPUT_NOLIBDEFINES)
# include <defines/input.h>
#endif

#endif /* PROTO_INPUT_H */
