#ifndef PROTO_POSIXC_H
#define PROTO_POSIXC_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/compiler/crt/posixc/posixc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/posixc_protos.h>

struct PosixCBase *__aros_getbase_PosixCBase(void);
 extern const IPTR __aros_rellib_offset_PosixCBase;
 #define AROS_RELLIB_OFFSET_POSIXC __aros_rellib_offset_PosixCBase
 #define AROS_RELLIB_BASE_POSIXC __aros_rellib_base_PosixCBase

#if !defined(NOLIBINLINE) && !defined(POSIXC_NOLIBINLINE) && !defined(__POSIXC_RELLIBBASE__)
# include <inline/posixc.h>
#elif !defined(NOLIBDEFINES) && !defined(POSIXC_NOLIBDEFINES)
# include <defines/posixc.h>
#endif

#endif /* PROTO_POSIXC_H */
