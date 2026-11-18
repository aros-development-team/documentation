#ifndef CLIB_EXAMPLE_PROTOS_H
#define CLIB_EXAMPLE_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/developer/debug/test/security/pamexample/example.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <libraries/pam.h>

__BEGIN_DECLS


#if !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__)
AROS_LP4(LONG, PAMM_Authenticate,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         AROS_LPA(LONG, argc, D1),
         AROS_LPA(CONST_STRPTR *, argv, A1),
         LIBBASETYPEPTR, PamExampleBase, 5, PamExample
);

#endif /* !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__) */

#if !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__)
AROS_LP4(LONG, PAMM_SetCred,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         AROS_LPA(LONG, argc, D1),
         AROS_LPA(CONST_STRPTR *, argv, A1),
         LIBBASETYPEPTR, PamExampleBase, 6, PamExample
);

#endif /* !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__) */

#if !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__)
AROS_LP4(LONG, PAMM_AcctMgmt,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         AROS_LPA(LONG, argc, D1),
         AROS_LPA(CONST_STRPTR *, argv, A1),
         LIBBASETYPEPTR, PamExampleBase, 7, PamExample
);

#endif /* !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__) */

#if !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__)
AROS_LP4(LONG, PAMM_OpenSession,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         AROS_LPA(LONG, argc, D1),
         AROS_LPA(CONST_STRPTR *, argv, A1),
         LIBBASETYPEPTR, PamExampleBase, 8, PamExample
);

#endif /* !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__) */

#if !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__)
AROS_LP4(LONG, PAMM_CloseSession,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         AROS_LPA(LONG, argc, D1),
         AROS_LPA(CONST_STRPTR *, argv, A1),
         LIBBASETYPEPTR, PamExampleBase, 9, PamExample
);

#endif /* !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__) */

#if !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__)
AROS_LP4(LONG, PAMM_ChAuthTok,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         AROS_LPA(LONG, argc, D1),
         AROS_LPA(CONST_STRPTR *, argv, A1),
         LIBBASETYPEPTR, PamExampleBase, 10, PamExample
);

#endif /* !defined(__EXAMPLE_LIBAPI__) || (1 <= __EXAMPLE_LIBAPI__) */

__END_DECLS

#endif /* CLIB_EXAMPLE_PROTOS_H */
