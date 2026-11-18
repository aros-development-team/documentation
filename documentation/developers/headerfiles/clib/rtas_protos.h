#ifndef CLIB_RTAS_PROTOS_H
#define CLIB_RTAS_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/ppc-chrp/rtas/rtas.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <inttypes.h>
#include <stdarg.h>

__BEGIN_DECLS


#if !defined(__RTAS_LIBAPI__) || (0 <= __RTAS_LIBAPI__)
AROS_LP5(int32_t, RTASCall,
         AROS_LPA(char *, method, A0),
         AROS_LPA(uint32_t, nrags, D0),
         AROS_LPA(uint32_t, nret, D1),
         AROS_LPA(uint32_t *, output, A1),
         AROS_LPA(va_list, args, A2),
         LIBBASETYPEPTR, RTASBase, 1, Rtas
);

#endif /* !defined(__RTAS_LIBAPI__) || (0 <= __RTAS_LIBAPI__) */

__END_DECLS

#endif /* CLIB_RTAS_PROTOS_H */
