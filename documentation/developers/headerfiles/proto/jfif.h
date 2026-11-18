#ifndef PROTO_JFIF_H
#define PROTO_JFIF_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/jpeg/jfif.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/jfif_protos.h>

struct Library *__aros_getbase_JpegBase(void);
 extern const IPTR __aros_rellib_offset_JpegBase;
 #define AROS_RELLIB_OFFSET_JFIF __aros_rellib_offset_JpegBase
 #define AROS_RELLIB_BASE_JFIF __aros_rellib_base_JpegBase

#if !defined(NOLIBINLINE) && !defined(JFIF_NOLIBINLINE) && !defined(__JFIF_RELLIBBASE__)
# include <inline/jfif.h>
#elif !defined(NOLIBDEFINES) && !defined(JFIF_NOLIBDEFINES)
# include <defines/jfif.h>
#endif

#endif /* PROTO_JFIF_H */
