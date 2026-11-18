#ifndef PROTO_LZMA_H
#define PROTO_LZMA_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/lzma/lzma.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/lzma_protos.h>

struct Library *__aros_getbase_XZBase(void);
 extern const IPTR __aros_rellib_offset_XZBase;
 #define AROS_RELLIB_OFFSET_LZMA __aros_rellib_offset_XZBase
 #define AROS_RELLIB_BASE_LZMA __aros_rellib_base_XZBase

#if !defined(NOLIBINLINE) && !defined(LZMA_NOLIBINLINE) && !defined(__LZMA_RELLIBBASE__)
# include <inline/lzma.h>
#elif !defined(NOLIBDEFINES) && !defined(LZMA_NOLIBDEFINES)
# include <defines/lzma.h>
#endif

#endif /* PROTO_LZMA_H */
