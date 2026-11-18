#ifndef PROTO_Z1_H
#define PROTO_Z1_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/z/z1.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/z1_protos.h>

struct Library *__aros_getbase_Z1Base(void);
 extern const IPTR __aros_rellib_offset_Z1Base;
 #define AROS_RELLIB_OFFSET_Z1 __aros_rellib_offset_Z1Base
 #define AROS_RELLIB_BASE_Z1 __aros_rellib_base_Z1Base

#if !defined(NOLIBINLINE) && !defined(Z1_NOLIBINLINE) && !defined(__Z1_RELLIBBASE__)
# include <inline/z1.h>
#elif !defined(NOLIBDEFINES) && !defined(Z1_NOLIBDEFINES)
# include <defines/z1.h>
#endif

#endif /* PROTO_Z1_H */
