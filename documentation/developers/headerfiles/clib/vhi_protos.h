#ifndef CLIB_VHI_PROTOS_H
#define CLIB_VHI_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/vhi/vhi.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__VHI_LIBAPI__) || (1 <= __VHI_LIBAPI__)
AROS_LP5(IPTR, vhi_api,
         AROS_LPA(ULONG, method, D2),
         AROS_LPA(ULONG, submethod, D3),
         AROS_LPA(APTR, attr, D4),
         AROS_LPA(ULONG *, errcode, D5),
         AROS_LPA(APTR, vhi_handle, D6),
         LIBBASETYPEPTR, VHIBase, 5, Vhi
);

#endif /* !defined(__VHI_LIBAPI__) || (1 <= __VHI_LIBAPI__) */

__END_DECLS

#endif /* CLIB_VHI_PROTOS_H */
