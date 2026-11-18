#ifndef CLIB_ECHO_PROTOS_H
#define CLIB_ECHO_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/services/echo/echo.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <utility/tagitem.h>
#include <envoy/services.h>

__BEGIN_DECLS


#if !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__)
AROS_LP0(void, RexxReserved,
         LIBBASETYPEPTR, EchoBase, 5, Echo
);

#endif /* !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__) */

#if !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__)
AROS_LP1(ULONG, StartServiceA,
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, EchoBase, 6, Echo
);

#endif /* !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__) */

#if !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__)
AROS_LP1(void, GetServiceAttrsA,
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, EchoBase, 7, Echo
);

#endif /* !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__) */

#if !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__)
AROS_LP1(void, SetServiceAttrsA,
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, EchoBase, 8, Echo
);

#endif /* !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__) */

#if !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__)
AROS_LP2(void, AttemptShutdown,
         AROS_LPA(CONST_STRPTR, desc, A0),
         AROS_LPA(ULONG, seconds, D0),
         LIBBASETYPEPTR, EchoBase, 9, Echo
);

#endif /* !defined(__ECHO_LIBAPI__) || (50 <= __ECHO_LIBAPI__) */

__END_DECLS

#endif /* CLIB_ECHO_PROTOS_H */
