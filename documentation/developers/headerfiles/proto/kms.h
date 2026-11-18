#ifndef PROTO_KMS_H
#define PROTO_KMS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/kms/kms.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/kms_protos.h>

#ifndef __KMS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__KMS_NOLIBBASE__)
  #if !defined(KMSBase)
   #ifdef __KMS_STDLIBBASE__
    extern struct Library *KMSBase;
   #else
    extern struct KMSLibrary *KMSBase;
   #endif
  #endif
  #ifndef __aros_getbase_KMSBase
   #define __aros_getbase_KMSBase() (KMSBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __KMS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_KMSBase;
 #define AROS_RELLIB_OFFSET_KMS __aros_rellib_offset_KMSBase
 #define AROS_RELLIB_BASE_KMS __aros_rellib_base_KMSBase
 #ifndef __aros_getbase_KMSBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_KMSBase() (*(struct KMSLibrary **)(__aros_getoffsettable()+__aros_rellib_offset_KMSBase))
 #endif
#endif

#ifndef __aros_getbase_KMSBase
extern struct KMSLibrary *__aros_getbase_KMSBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(KMS_NOLIBINLINE) && !defined(__KMS_RELLIBBASE__)
# include <inline/kms.h>
#elif !defined(NOLIBDEFINES) && !defined(KMS_NOLIBDEFINES)
# include <defines/kms.h>
#endif

#endif /* PROTO_KMS_H */
