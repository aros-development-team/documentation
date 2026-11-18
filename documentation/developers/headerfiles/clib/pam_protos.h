#ifndef CLIB_PAM_PROTOS_H
#define CLIB_PAM_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/pam/pam.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <proto/exec.h>
#include <utility/tagitem.h>
#include <utility/hooks.h>
#include <libraries/pam.h>

__BEGIN_DECLS


#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP4(struct PamHandle *, PamStartA,
         AROS_LPA(CONST_STRPTR, service, A0),
         AROS_LPA(CONST_STRPTR, user, A1),
         AROS_LPA(struct Hook *, conv, A2),
         AROS_LPA(struct TagItem *, tags, A3),
         LIBBASETYPEPTR, PamBase, 5, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamEnd,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(LONG, status, D0),
         LIBBASETYPEPTR, PamBase, 6, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP3(LONG, PamSetItem,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, item, D0),
         AROS_LPA(APTR, value, A1),
         LIBBASETYPEPTR, PamBase, 7, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP3(LONG, PamGetItem,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, item, D0),
         AROS_LPA(APTR *, value, A1),
         LIBBASETYPEPTR, PamBase, 8, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(CONST_STRPTR, PamStrError,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(LONG, code, D0),
         LIBBASETYPEPTR, PamBase, 9, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamAuthenticate,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, PamBase, 10, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamSetCred,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, PamBase, 11, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamAcctMgmt,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, PamBase, 12, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamOpenSession,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, PamBase, 13, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamCloseSession,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, PamBase, 14, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamChAuthTok,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, PamBase, 15, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP3(LONG, PamGetUser,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(CONST_STRPTR *, user, A1),
         AROS_LPA(CONST_STRPTR, prompt, A2),
         LIBBASETYPEPTR, PamBase, 16, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP4(LONG, PamGetAuthTok,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, item, D0),
         AROS_LPA(CONST_STRPTR *, tok, A1),
         AROS_LPA(CONST_STRPTR, prompt, A2),
         LIBBASETYPEPTR, PamBase, 17, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP4(LONG, PamConverse,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(LONG, nmsg, D0),
         AROS_LPA(const struct pam_message **, msgs, A1),
         AROS_LPA(struct pam_response **, resp, A2),
         LIBBASETYPEPTR, PamBase, 18, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP4(LONG, PamSetData,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(CONST_STRPTR, name, A1),
         AROS_LPA(APTR, data, A2),
         AROS_LPA(PamDataCleanup, cleanup, A3),
         LIBBASETYPEPTR, PamBase, 19, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP3(LONG, PamGetData,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(CONST_STRPTR, name, A1),
         AROS_LPA(APTR *, data, A2),
         LIBBASETYPEPTR, PamBase, 20, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP2(LONG, PamFailDelay,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(ULONG, usec, D0),
         LIBBASETYPEPTR, PamBase, 21, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

#if !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__)
AROS_LP3(void, PamLog,
         AROS_LPA(struct PamHandle *, handle, A0),
         AROS_LPA(LONG, level, D0),
         AROS_LPA(CONST_STRPTR, text, A1),
         LIBBASETYPEPTR, PamBase, 22, Pam
);

#endif /* !defined(__PAM_LIBAPI__) || (45 <= __PAM_LIBAPI__) */

__END_DECLS

#endif /* CLIB_PAM_PROTOS_H */
