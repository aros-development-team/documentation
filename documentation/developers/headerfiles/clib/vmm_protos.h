#ifndef CLIB_VMM_PROTOS_H
#define CLIB_VMM_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/system/VMM/vmm.lib/vmm.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__)
AROS_LP2(APTR, AllocVMem,
         AROS_LPA(ULONG, size, D0),
         AROS_LPA(ULONG, attributes, D1),
         LIBBASETYPEPTR, VMMBase, 5, VMM
);

#endif /* !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__) */

#if !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__)
AROS_LP2(void, FreeVMem,
         AROS_LPA(APTR, block, A1),
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, VMMBase, 6, VMM
);

#endif /* !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__) */

#if !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__)
AROS_LP1(ULONG, AvailVMem,
         AROS_LPA(ULONG, attributes, D1),
         LIBBASETYPEPTR, VMMBase, 7, VMM
);

#endif /* !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__) */

#if !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__)
AROS_LP2(APTR, AllocVVec,
         AROS_LPA(ULONG, size, D0),
         AROS_LPA(ULONG, attributes, D1),
         LIBBASETYPEPTR, VMMBase, 8, VMM
);

#endif /* !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__) */

#if !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__)
AROS_LP1(void, FreeVVec,
         AROS_LPA(APTR, block, A1),
         LIBBASETYPEPTR, VMMBase, 9, VMM
);

#endif /* !defined(__VMM_LIBAPI__) || (40 <= __VMM_LIBAPI__) */

__END_DECLS

#endif /* CLIB_VMM_PROTOS_H */
