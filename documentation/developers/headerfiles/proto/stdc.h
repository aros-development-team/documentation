#ifndef PROTO_STDC_H
#define PROTO_STDC_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/compiler/crt/stdc/stdc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/stdc_protos.h>

struct StdCBase *__aros_getbase_StdCBase(void);
 extern const IPTR __aros_rellib_offset_StdCBase;
 #define AROS_RELLIB_OFFSET_STDC __aros_rellib_offset_StdCBase
 #define AROS_RELLIB_BASE_STDC __aros_rellib_base_StdCBase

#if !defined(NOLIBINLINE) && !defined(STDC_NOLIBINLINE) && !defined(__STDC_RELLIBBASE__)
# include <inline/stdc.h>
#elif !defined(NOLIBDEFINES) && !defined(STDC_NOLIBDEFINES)
# include <defines/stdc.h>
#endif

#endif /* PROTO_STDC_H */
