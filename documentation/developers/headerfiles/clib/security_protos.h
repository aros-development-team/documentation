#ifndef CLIB_SECURITY_PROTOS_H
#define CLIB_SECURITY_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/security/security.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <proto/exec.h>

#include <utility/tagitem.h>
#include <exec/tasks.h>
#include <dos/dosextens.h>

#include <libraries/security.h>

__BEGIN_DECLS


#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secLogoutA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 5, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secLoginA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 6, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secGetTaskOwner,
         AROS_LPA(struct Task *, task, D0),
         LIBBASETYPEPTR, secBase, 7, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(BOOL, secPasswd,
         AROS_LPA(STRPTR, oldpwd, A0),
         AROS_LPA(STRPTR, newpwd, A1),
         LIBBASETYPEPTR, secBase, 8, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(struct secUserInfo *, secAllocUserInfo,
         LIBBASETYPEPTR, secBase, 9, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secFreeUserInfo,
         AROS_LPA(struct secUserInfo *, info, A0),
         LIBBASETYPEPTR, secBase, 10, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(struct secUserInfo *, secGetUserInfo,
         AROS_LPA(struct secUserInfo *, info, A0),
         AROS_LPA(ULONG, keytype, D0),
         LIBBASETYPEPTR, secBase, 11, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secSetDefProtectionA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 13, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secGetDefProtection,
         AROS_LPA(struct Task *, task, D0),
         LIBBASETYPEPTR, secBase, 14, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(BOOL, secSetProtection,
         AROS_LPA(CONST_STRPTR, name, D1),
         AROS_LPA(LONG, mask, D2),
         LIBBASETYPEPTR, secBase, 15, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secLimitDOSSetProtection,
         AROS_LPA(BOOL, flag, D0),
         LIBBASETYPEPTR, secBase, 16, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secCheckPasswdA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 17, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(BOOL, secFSRendezVous,
         LIBBASETYPEPTR, secBase, 18, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(BPTR, secGetPasswdDirLock,
         LIBBASETYPEPTR, secBase, 19, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(BPTR, secGetConfigDirLock,
         LIBBASETYPEPTR, secBase, 20, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(struct secExtOwner *, secGetTaskExtOwner,
         AROS_LPA(struct Task *, task, D0),
         LIBBASETYPEPTR, secBase, 21, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secFreeExtOwner,
         AROS_LPA(struct secExtOwner *, owner, A0),
         LIBBASETYPEPTR, secBase, 22, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP3(ULONG, secGetRelationshipA,
         AROS_LPA(struct secExtOwner *, user, D0),
         AROS_LPA(ULONG, owner, D1),
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 23, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(struct secExtOwner *, secUserInfo2ExtOwner,
         AROS_LPA(struct secUserInfo *, info, A0),
         LIBBASETYPEPTR, secBase, 24, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(struct secGroupInfo *, secAllocGroupInfo,
         LIBBASETYPEPTR, secBase, 25, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secFreeGroupInfo,
         AROS_LPA(struct secGroupInfo *, info, A0),
         LIBBASETYPEPTR, secBase, 26, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(struct secGroupInfo *, secGetGroupInfo,
         AROS_LPA(struct secGroupInfo *, info, A0),
         AROS_LPA(ULONG, keytype, D0),
         LIBBASETYPEPTR, secBase, 27, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secAddMonitor,
         AROS_LPA(struct secMonitor *, monitor, A0),
         LIBBASETYPEPTR, secBase, 28, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secRemMonitor,
         AROS_LPA(struct secMonitor *, monitor, A0),
         LIBBASETYPEPTR, secBase, 29, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secKill,
         AROS_LPA(struct Task *, task, D0),
         LIBBASETYPEPTR, secBase, 30, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secFreeze,
         AROS_LPA(struct Task *, task, D0),
         LIBBASETYPEPTR, secBase, 31, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secUnfreeze,
         AROS_LPA(struct Task *, task, D0),
         LIBBASETYPEPTR, secBase, 32, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP6(LONG, secAccess_Control,
         AROS_LPA(ULONG, contextflags, D1),
         AROS_LPA(APTR, context, A1),
         AROS_LPA(struct secExtOwner *, task, A2),
         AROS_LPA(ULONG, objectowner, D2),
         AROS_LPA(LONG, objectprot, D3),
         AROS_LPA(LONG, access_type, D4),
         LIBBASETYPEPTR, secBase, 33, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(struct secExtOwner *, secGetPktOwner,
         AROS_LPA(struct DosPacket *, pkt, A1),
         LIBBASETYPEPTR, secBase, 34, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(LONG, secGetPktDefProtection,
         AROS_LPA(struct DosPacket *, pkt, A1),
         LIBBASETYPEPTR, secBase, 35, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP3(LONG, secEnumChildren,
         AROS_LPA(struct Task *, parent, A0),
         AROS_LPA(struct Task **, children, A1),
         AROS_LPA(LONG, size, D0),
         LIBBASETYPEPTR, secBase, 36, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(struct secPointers *, secLocksecBase,
         LIBBASETYPEPTR, secBase, 37, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secUnlocksecBase,
         AROS_LPA(struct secPointers *, secP, D0),
         LIBBASETYPEPTR, secBase, 38, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(UWORD, secgetuid,
         LIBBASETYPEPTR, secBase, 39, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(UWORD, secgetgid,
         LIBBASETYPEPTR, secBase, 40, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(int, secsetuid,
         AROS_LPA(UWORD, uid, D0),
         LIBBASETYPEPTR, secBase, 41, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(int, secsetgid,
         AROS_LPA(UWORD, gid, D0),
         LIBBASETYPEPTR, secBase, 42, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(int, secseteuid,
         AROS_LPA(UWORD, uid, D0),
         LIBBASETYPEPTR, secBase, 43, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(int, secsetegid,
         AROS_LPA(UWORD, gid, D0),
         LIBBASETYPEPTR, secBase, 44, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(int, secsetreuid,
         AROS_LPA(int, ruid, D0),
         AROS_LPA(int, euid, D1),
         LIBBASETYPEPTR, secBase, 45, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(int, secgetpgid,
         AROS_LPA(int, pid, D0),
         LIBBASETYPEPTR, secBase, 46, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secRegisterHandler,
         AROS_LPA(struct plugin_ops *, ops, A0),
         LIBBASETYPEPTR, secBase, 47, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secUnRegisterHandler,
         AROS_LPA(struct plugin_ops *, ops, A0),
         LIBBASETYPEPTR, secBase, 48, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(void, secPluginOperationComplete,
         AROS_LPA(APTR, context, A0),
         AROS_LPA(ULONG, result, D0),
         LIBBASETYPEPTR, secBase, 49, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secLoadPlugin,
         AROS_LPA(CONST_STRPTR, name, A0),
         LIBBASETYPEPTR, secBase, 50, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secUnloadPlugin,
         AROS_LPA(CONST_STRPTR, name, A0),
         LIBBASETYPEPTR, secBase, 51, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP4(APTR, secContextLocate,
         AROS_LPA(secPluginModule *, module, A0),
         AROS_LPA(ULONG, id, D0),
         AROS_LPA(struct Task *, caller, A1),
         AROS_LPA(ULONG, size, D1),
         LIBBASETYPEPTR, secBase, 52, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(BOOL, secRegisterSegment,
         AROS_LPA(BPTR, seglist, D0),
         AROS_LPA(BPTR, fh, D1),
         LIBBASETYPEPTR, secBase, 53, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secUnregisterSegment,
         AROS_LPA(BPTR, seglist, D0),
         LIBBASETYPEPTR, secBase, 54, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(APTR, secSetUIDBegin,
         AROS_LPA(BPTR, seglist, D0),
         LIBBASETYPEPTR, secBase, 55, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(void, secSetUIDEnd,
         AROS_LPA(APTR, cookie, A0),
         LIBBASETYPEPTR, secBase, 56, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(BOOL, secSetTaskOwnerFromSegment,
         AROS_LPA(struct Task *, task, A0),
         AROS_LPA(BPTR, seglist, D0),
         LIBBASETYPEPTR, secBase, 57, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP0(BOOL, secIsConfigured,
         LIBBASETYPEPTR, secBase, 58, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(LONG, secLimitProtection,
         AROS_LPA(CONST_STRPTR, name, D1),
         AROS_LPA(LONG, protect, D2),
         LIBBASETYPEPTR, secBase, 59, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP2(BOOL, secIsVolumeSecured,
         AROS_LPA(CONST_STRPTR, volname, A0),
         AROS_LPA(ULONG, dostype, D0),
         LIBBASETYPEPTR, secBase, 60, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secVerifyUserA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 61, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secQueryUserA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 62, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(BOOL, secAuthControlA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 63, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secUserAdminA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 64, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP3(BOOL, secExpandPathA,
         AROS_LPA(CONST_STRPTR, template, A0),
         AROS_LPA(STRPTR, buffer, A1),
         AROS_LPA(struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, secBase, 65, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secKeyAdminA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 66, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

#if !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__)
AROS_LP1(ULONG, secKeyClientA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, secBase, 67, Security
);

#endif /* !defined(__SECURITY_LIBAPI__) || (45 <= __SECURITY_LIBAPI__) */

__END_DECLS

#endif /* CLIB_SECURITY_PROTOS_H */
