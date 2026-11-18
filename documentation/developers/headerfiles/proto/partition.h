#ifndef PROTO_PARTITION_H
#define PROTO_PARTITION_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/partition/partition.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/partition_protos.h>

#ifndef __PARTITION_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__PARTITION_NOLIBBASE__)
  #if !defined(PartitionBase)
   #ifdef __PARTITION_STDLIBBASE__
    extern struct Library *PartitionBase;
   #else
    extern struct PartitionBase *PartitionBase;
   #endif
  #endif
  #ifndef __aros_getbase_PartitionBase
   #define __aros_getbase_PartitionBase() (PartitionBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __PARTITION_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_PartitionBase;
 #define AROS_RELLIB_OFFSET_PARTITION __aros_rellib_offset_PartitionBase
 #define AROS_RELLIB_BASE_PARTITION __aros_rellib_base_PartitionBase
 #ifndef __aros_getbase_PartitionBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_PartitionBase() (*(struct PartitionBase **)(__aros_getoffsettable()+__aros_rellib_offset_PartitionBase))
 #endif
#endif

#ifndef __aros_getbase_PartitionBase
extern struct PartitionBase *__aros_getbase_PartitionBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(PARTITION_NOLIBINLINE) && !defined(__PARTITION_RELLIBBASE__)
# include <inline/partition.h>
#elif !defined(NOLIBDEFINES) && !defined(PARTITION_NOLIBDEFINES)
# include <defines/partition.h>
#endif

#endif /* PROTO_PARTITION_H */
