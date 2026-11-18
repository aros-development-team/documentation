#ifndef PROTO_DATATYPES_H
#define PROTO_DATATYPES_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/datatypes/datatypes.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/datatypes_protos.h>

#ifndef __DATATYPES_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__DATATYPES_NOLIBBASE__)
  #if !defined(DataTypesBase)
   extern struct Library *DataTypesBase;
  #endif
  #ifndef __aros_getbase_DataTypesBase
   #define __aros_getbase_DataTypesBase() (DataTypesBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __DATATYPES_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_DataTypesBase;
 #define AROS_RELLIB_OFFSET_DATATYPES __aros_rellib_offset_DataTypesBase
 #define AROS_RELLIB_BASE_DATATYPES __aros_rellib_base_DataTypesBase
 #ifndef __aros_getbase_DataTypesBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_DataTypesBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_DataTypesBase))
 #endif
#endif

#ifndef __aros_getbase_DataTypesBase
extern struct Library *__aros_getbase_DataTypesBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(DATATYPES_NOLIBINLINE) && !defined(__DATATYPES_RELLIBBASE__)
# include <inline/datatypes.h>
#elif !defined(NOLIBDEFINES) && !defined(DATATYPES_NOLIBDEFINES)
# include <defines/datatypes.h>
#endif

#endif /* PROTO_DATATYPES_H */
