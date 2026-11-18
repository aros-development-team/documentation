#ifndef CLIB_LDDEMON_PROTOS_H
#define CLIB_LDDEMON_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/lddemon/lddemon.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__LDDEMON_LIBAPI__) || (41 <= __LDDEMON_LIBAPI__)
AROS_LP1(BPTR, LDLoadSeg,
         AROS_LPA(CONST_STRPTR, name, D1),
         LIBBASETYPEPTR, ldBase, 1, Lddemon
);

#endif /* !defined(__LDDEMON_LIBAPI__) || (41 <= __LDDEMON_LIBAPI__) */

__END_DECLS

#endif /* CLIB_LDDEMON_PROTOS_H */
