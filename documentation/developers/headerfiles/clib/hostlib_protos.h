#ifndef CLIB_HOSTLIB_PROTOS_H
#define CLIB_HOSTLIB_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/arch/all-hosted/hostlib/hostlib.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


__BEGIN_DECLS


#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP2(void *, HostLib_Open,
         AROS_LPA(const char *, filename, A0),
         AROS_LPA(char **, error, A1),
         LIBBASETYPEPTR, HostLibBase, 1, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP2(int, HostLib_Close,
         AROS_LPA(void *, handle, A0),
         AROS_LPA(char **, error, A1),
         LIBBASETYPEPTR, HostLibBase, 2, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP3(void *, HostLib_GetPointer,
         AROS_LPA(void *, handle, A0),
         AROS_LPA(const char *, symbol, A1),
         AROS_LPA(char **, error, A2),
         LIBBASETYPEPTR, HostLibBase, 3, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP1(void, HostLib_FreeErrorStr,
         AROS_LPA(char *, error, A0),
         LIBBASETYPEPTR, HostLibBase, 4, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP3(APTR *, HostLib_GetInterface,
         AROS_LPA(void *, handle, A0),
         AROS_LPA(const char **, symbols, A1),
         AROS_LPA(ULONG *, unresolved, A2),
         LIBBASETYPEPTR, HostLibBase, 5, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP1(void, HostLib_DropInterface,
         AROS_LPA(APTR *, interface, A0),
         LIBBASETYPEPTR, HostLibBase, 6, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP0(void, HostLib_Lock,
         LIBBASETYPEPTR, HostLibBase, 7, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

#if !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__)
AROS_LP0(void, HostLib_Unlock,
         LIBBASETYPEPTR, HostLibBase, 8, HostLib
);

#endif /* !defined(__HOSTLIB_LIBAPI__) || (4 <= __HOSTLIB_LIBAPI__) */

__END_DECLS

#endif /* CLIB_HOSTLIB_PROTOS_H */
