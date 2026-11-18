#ifndef PROTO_BTCLASS_H
#define PROTO_BTCLASS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/bluetooth/classes/btclass.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/btclass_protos.h>

#ifndef __BTCLASS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__BTCLASS_NOLIBBASE__)
  #if !defined(BtClsBase)
   extern struct Library *BtClsBase;
  #endif
  #ifndef __aros_getbase_BtClsBase
   #define __aros_getbase_BtClsBase() (BtClsBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __BTCLASS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_BtClsBase;
 #define AROS_RELLIB_OFFSET_BTCLASS __aros_rellib_offset_BtClsBase
 #define AROS_RELLIB_BASE_BTCLASS __aros_rellib_base_BtClsBase
 #ifndef __aros_getbase_BtClsBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_BtClsBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_BtClsBase))
 #endif
#endif

#ifndef __aros_getbase_BtClsBase
extern struct Library *__aros_getbase_BtClsBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(BTCLASS_NOLIBINLINE) && !defined(__BTCLASS_RELLIBBASE__)
# include <inline/btclass.h>
#elif !defined(NOLIBDEFINES) && !defined(BTCLASS_NOLIBDEFINES)
# include <defines/btclass.h>
#endif

#endif /* PROTO_BTCLASS_H */
