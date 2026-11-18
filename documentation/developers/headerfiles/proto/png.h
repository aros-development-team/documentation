#ifndef PROTO_PNG_H
#define PROTO_PNG_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/png/png.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/png_protos.h>

struct Library *__aros_getbase_PngBase(void);
 extern const IPTR __aros_rellib_offset_PngBase;
 #define AROS_RELLIB_OFFSET_PNG __aros_rellib_offset_PngBase
 #define AROS_RELLIB_BASE_PNG __aros_rellib_base_PngBase

#if !defined(NOLIBINLINE) && !defined(PNG_NOLIBINLINE) && !defined(__PNG_RELLIBBASE__)
# include <inline/png.h>
#elif !defined(NOLIBDEFINES) && !defined(PNG_NOLIBDEFINES)
# include <defines/png.h>
#endif

#endif /* PROTO_PNG_H */
