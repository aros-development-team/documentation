#ifndef PROTO_STDCIO_H
#define PROTO_STDCIO_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/compiler/crt/stdc/stdcio.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/stdcio_protos.h>

struct StdCIOBase *__aros_getbase_StdCIOBase(void);
 extern const IPTR __aros_rellib_offset_StdCIOBase;
 #define AROS_RELLIB_OFFSET_STDCIO __aros_rellib_offset_StdCIOBase
 #define AROS_RELLIB_BASE_STDCIO __aros_rellib_base_StdCIOBase

#if !defined(NOLIBINLINE) && !defined(STDCIO_NOLIBINLINE) && !defined(__STDCIO_RELLIBBASE__)
# include <inline/stdcio.h>
#elif !defined(NOLIBDEFINES) && !defined(STDCIO_NOLIBDEFINES)
# include <defines/stdcio.h>
#endif

#endif /* PROTO_STDCIO_H */
