#ifndef PROTO_ZSTD_H
#define PROTO_ZSTD_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/zstd/zstd.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/zstd_protos.h>

struct Library *__aros_getbase_ZSTDBase(void);
 extern const IPTR __aros_rellib_offset_ZSTDBase;
 #define AROS_RELLIB_OFFSET_ZSTD __aros_rellib_offset_ZSTDBase
 #define AROS_RELLIB_BASE_ZSTD __aros_rellib_base_ZSTDBase

#if !defined(NOLIBINLINE) && !defined(ZSTD_NOLIBINLINE) && !defined(__ZSTD_RELLIBBASE__)
# include <inline/zstd.h>
#elif !defined(NOLIBDEFINES) && !defined(ZSTD_NOLIBDEFINES)
# include <defines/zstd.h>
#endif

#endif /* PROTO_ZSTD_H */
