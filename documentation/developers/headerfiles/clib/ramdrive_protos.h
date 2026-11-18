#ifndef CLIB_RAMDRIVE_PROTOS_H
#define CLIB_RAMDRIVE_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/devs/ramdrive/ramdrive.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__RAMDRIVE_LIBAPI__) || (41 <= __RAMDRIVE_LIBAPI__)
AROS_LP0(STRPTR, killrad0,
         LIBBASETYPEPTR, RamdriveBase, 7, Ramdrive
);

#endif /* !defined(__RAMDRIVE_LIBAPI__) || (41 <= __RAMDRIVE_LIBAPI__) */

#if !defined(__RAMDRIVE_LIBAPI__) || (41 <= __RAMDRIVE_LIBAPI__)
AROS_LP1(STRPTR, killrad,
         AROS_LPA(ULONG, unit, D0),
         LIBBASETYPEPTR, RamdriveBase, 8, Ramdrive
);

#endif /* !defined(__RAMDRIVE_LIBAPI__) || (41 <= __RAMDRIVE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_RAMDRIVE_PROTOS_H */
