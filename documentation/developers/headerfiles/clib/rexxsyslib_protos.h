#ifndef CLIB_REXXSYSLIB_PROTOS_H
#define CLIB_REXXSYSLIB_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/rexxsyslib/rexxsyslib.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <rexx/storage.h>

__BEGIN_DECLS


#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP2(UBYTE *, CreateArgstring,
         AROS_LPA(CONST UBYTE *, string, A0),
         AROS_LPA(ULONG, length, D0),
         LIBBASETYPEPTR, RexxSysBase, 21, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP1(void, DeleteArgstring,
         AROS_LPA(UBYTE *, argstring, A0),
         LIBBASETYPEPTR, RexxSysBase, 22, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP1(ULONG, LengthArgstring,
         AROS_LPA(UBYTE *, argstring, A0),
         LIBBASETYPEPTR, RexxSysBase, 23, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP3(struct RexxMsg *, CreateRexxMsg,
         AROS_LPA(struct MsgPort *, port, A0),
         AROS_LPA(UBYTE *, extension, A1),
         AROS_LPA(UBYTE *, host, D0),
         LIBBASETYPEPTR, RexxSysBase, 24, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP1(void, DeleteRexxMsg,
         AROS_LPA(struct RexxMsg *, packet, A0),
         LIBBASETYPEPTR, RexxSysBase, 25, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP2(void, ClearRexxMsg,
         AROS_LPA(struct RexxMsg *, msgptr, A0),
         AROS_LPA(ULONG, count, D0),
         LIBBASETYPEPTR, RexxSysBase, 26, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP3(BOOL, FillRexxMsg,
         AROS_LPA(struct RexxMsg *, msgptr, A0),
         AROS_LPA(ULONG, count, D0),
         AROS_LPA(ULONG, mask, D1),
         LIBBASETYPEPTR, RexxSysBase, 27, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP1(BOOL, IsRexxMsg,
         AROS_LPA(struct RexxMsg *, msgptr, A0),
         LIBBASETYPEPTR, RexxSysBase, 28, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP1(void, LockRexxBase,
         AROS_LPA(ULONG, resource, D0),
         LIBBASETYPEPTR, RexxSysBase, 75, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

#if !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__)
AROS_LP1(void, UnlockRexxBase,
         AROS_LPA(ULONG, resource, D0),
         LIBBASETYPEPTR, RexxSysBase, 76, RexxSys
);

#endif /* !defined(__REXXSYSLIB_LIBAPI__) || (33 <= __REXXSYSLIB_LIBAPI__) */

__END_DECLS

#endif /* CLIB_REXXSYSLIB_PROTOS_H */
