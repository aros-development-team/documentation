#ifndef CLIB_USERGROUP_PROTOS_H
#define CLIB_USERGROUP_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/usergroup/usergroup.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <proto/exec.h>

#include <utility/tagitem.h>
#include <aros/types/uid_t.h>
#include <aros/types/gid_t.h>
#include <aros/types/pid_t.h>
#include <aros/types/mode_t.h>

__BEGIN_DECLS


#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP2(int, ug_SetupContextTagList,
         AROS_LPA(const UBYTE*, pname, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, UserGroupBase, 5, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(int, ug_GetErr,
         LIBBASETYPEPTR, UserGroupBase, 6, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(const char *, ug_StrError,
         AROS_LPA(LONG, code, D1),
         LIBBASETYPEPTR, UserGroupBase, 7, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(uid_t, getuid,
         LIBBASETYPEPTR, UserGroupBase, 8, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(uid_t, geteuid,
         LIBBASETYPEPTR, UserGroupBase, 9, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP2(int, setreuid,
         AROS_LPA(uid_t, real, D0),
         AROS_LPA(uid_t, eff, D1),
         LIBBASETYPEPTR, UserGroupBase, 10, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(int, setuid,
         AROS_LPA(uid_t, id, D0),
         LIBBASETYPEPTR, UserGroupBase, 11, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(gid_t, getgid,
         LIBBASETYPEPTR, UserGroupBase, 12, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(gid_t, getegid,
         LIBBASETYPEPTR, UserGroupBase, 13, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP2(int, setregid,
         AROS_LPA(gid_t, real, D0),
         AROS_LPA(gid_t, eff, D1),
         LIBBASETYPEPTR, UserGroupBase, 14, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(int, setgid,
         AROS_LPA(gid_t, id, D0),
         LIBBASETYPEPTR, UserGroupBase, 15, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP2(int, getgroups,
         AROS_LPA(int, ngroups, D0),
         AROS_LPA(gid_t *, groups, A1),
         LIBBASETYPEPTR, UserGroupBase, 16, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP2(int, setgroups,
         AROS_LPA(int, ngroups, D0),
         AROS_LPA(const gid_t *, groups, A1),
         LIBBASETYPEPTR, UserGroupBase, 17, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP2(int, initgroups,
         AROS_LPA(const char *, name, A1),
         AROS_LPA(gid_t, basegroup, D0),
         LIBBASETYPEPTR, UserGroupBase, 18, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(struct passwd *, getpwnam,
         AROS_LPA(const char *, name, A1),
         LIBBASETYPEPTR, UserGroupBase, 19, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(struct passwd *, getpwuid,
         AROS_LPA(uid_t, uid, D0),
         LIBBASETYPEPTR, UserGroupBase, 20, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(void, setpwent,
         LIBBASETYPEPTR, UserGroupBase, 21, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(struct passwd *, getpwent,
         LIBBASETYPEPTR, UserGroupBase, 22, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(void, endpwent,
         LIBBASETYPEPTR, UserGroupBase, 23, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(struct group *, getgrnam,
         AROS_LPA(const char *, name, A1),
         LIBBASETYPEPTR, UserGroupBase, 24, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(struct group *, getgrgid,
         AROS_LPA(gid_t, gid, D0),
         LIBBASETYPEPTR, UserGroupBase, 25, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(void, setgrent,
         LIBBASETYPEPTR, UserGroupBase, 26, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(struct group *, getgrent,
         LIBBASETYPEPTR, UserGroupBase, 27, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(void, endgrent,
         LIBBASETYPEPTR, UserGroupBase, 28, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP2(char *, crypt,
         AROS_LPA(const char *, key, A0),
         AROS_LPA(const char *, salt, A1),
         LIBBASETYPEPTR, UserGroupBase, 29, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP3(char *, ug_GetSalt,
         AROS_LPA(const struct passwd *, user, A0),
         AROS_LPA(char *, buffer, A1),
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, UserGroupBase, 30, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(char *, getpass,
         AROS_LPA(const char *, prompt, A1),
         LIBBASETYPEPTR, UserGroupBase, 31, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(mode_t, umask,
         AROS_LPA(mode_t, mask, D0),
         LIBBASETYPEPTR, UserGroupBase, 32, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(mode_t, getumask,
         LIBBASETYPEPTR, UserGroupBase, 33, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(pid_t, setsid,
         LIBBASETYPEPTR, UserGroupBase, 34, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(pid_t, getpgrp,
         LIBBASETYPEPTR, UserGroupBase, 35, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(char *, getlogin,
         LIBBASETYPEPTR, UserGroupBase, 36, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(int, setlogin,
         AROS_LPA(const char *, buffer, A1),
         LIBBASETYPEPTR, UserGroupBase, 37, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(void, setutent,
         LIBBASETYPEPTR, UserGroupBase, 38, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(struct utmp *, getutent,
         LIBBASETYPEPTR, UserGroupBase, 39, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP0(void, endutent,
         LIBBASETYPEPTR, UserGroupBase, 40, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(struct lastlog *, getlastlog,
         AROS_LPA(uid_t, uid, D0),
         LIBBASETYPEPTR, UserGroupBase, 41, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP3(int, setlastlog,
         AROS_LPA(uid_t, uid, D0),
         AROS_LPA(char *, name, A0),
         AROS_LPA(char *, host, A1),
         LIBBASETYPEPTR, UserGroupBase, 42, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(struct UserGroupCredentials *, getcredentials,
         AROS_LPA(struct Task *, task, A0),
         LIBBASETYPEPTR, UserGroupBase, 43, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

#if !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__)
AROS_LP1(int, ug_UserAdminA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, UserGroupBase, 44, Usergroup
);

#endif /* !defined(__USERGROUP_LIBAPI__) || (4 <= __USERGROUP_LIBAPI__) */

__END_DECLS

#endif /* CLIB_USERGROUP_PROTOS_H */
