#ifndef PROTO_BZ2_H
#define PROTO_BZ2_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/external/bz2/bz2.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/bz2_protos.h>

struct Library *__aros_getbase_BZ2Base(void);
 extern const IPTR __aros_rellib_offset_BZ2Base;
 #define AROS_RELLIB_OFFSET_BZ2 __aros_rellib_offset_BZ2Base
 #define AROS_RELLIB_BASE_BZ2 __aros_rellib_base_BZ2Base

#if !defined(NOLIBINLINE) && !defined(BZ2_NOLIBINLINE) && !defined(__BZ2_RELLIBBASE__)
# include <inline/bz2.h>
#elif !defined(NOLIBDEFINES) && !defined(BZ2_NOLIBDEFINES)
# include <defines/bz2.h>
#endif

#endif /* PROTO_BZ2_H */
