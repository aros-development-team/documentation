#ifndef PROTO_TIFF_H
#define PROTO_TIFF_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/tiff/tiff.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/tiff_protos.h>

struct Library *__aros_getbase_TiffBase(void);
 extern const IPTR __aros_rellib_offset_TiffBase;
 #define AROS_RELLIB_OFFSET_TIFF __aros_rellib_offset_TiffBase
 #define AROS_RELLIB_BASE_TIFF __aros_rellib_base_TiffBase

#if !defined(NOLIBINLINE) && !defined(TIFF_NOLIBINLINE) && !defined(__TIFF_RELLIBBASE__)
# include <inline/tiff.h>
#elif !defined(NOLIBDEFINES) && !defined(TIFF_NOLIBDEFINES)
# include <defines/tiff.h>
#endif

#endif /* PROTO_TIFF_H */
