#ifndef CLIB_M68KEMU_PROTOS_H
#define CLIB_M68KEMU_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/m68kemu/m68kemu.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <dos/bptr.h>

__BEGIN_DECLS


#if !defined(__M68KEMU_LIBAPI__) || (1 <= __M68KEMU_LIBAPI__)
AROS_LP4(LONG, RunHunk,
         AROS_LPA(BPTR, segList, D1),
         AROS_LPA(ULONG, stackSize, D2),
         AROS_LPA(CONST_STRPTR, argPtr, D3),
         AROS_LPA(ULONG, argSize, D4),
         LIBBASETYPEPTR, M68KEmuBase, 5, M68kemu
);

#endif /* !defined(__M68KEMU_LIBAPI__) || (1 <= __M68KEMU_LIBAPI__) */

#if !defined(__M68KEMU_LIBAPI__) || (1 <= __M68KEMU_LIBAPI__)
AROS_LP4(LONG, RunFile,
         AROS_LPA(CONST_STRPTR, fileName, D1),
         AROS_LPA(ULONG, stackSize, D2),
         AROS_LPA(CONST_STRPTR, argPtr, D3),
         AROS_LPA(ULONG, argSize, D4),
         LIBBASETYPEPTR, M68KEmuBase, 6, M68kemu
);

#endif /* !defined(__M68KEMU_LIBAPI__) || (1 <= __M68KEMU_LIBAPI__) */

__END_DECLS

#endif /* CLIB_M68KEMU_PROTOS_H */
