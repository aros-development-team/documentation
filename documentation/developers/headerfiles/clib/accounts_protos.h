#ifndef CLIB_ACCOUNTS_PROTOS_H
#define CLIB_ACCOUNTS_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/accounts/accounts.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <envoy/nipc.h>
#include <envoy/accounts.h>

__BEGIN_DECLS


#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP0(struct UserInfo *, AllocUserInfo,
         LIBBASETYPEPTR, AccountsBase, 5, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP0(struct GroupInfo *, AllocGroupInfo,
         LIBBASETYPEPTR, AccountsBase, 6, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP1(void, FreeUserInfo,
         AROS_LPA(struct UserInfo *, user, A0),
         LIBBASETYPEPTR, AccountsBase, 7, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP1(void, FreeGroupInfo,
         AROS_LPA(struct GroupInfo *, group, A0),
         LIBBASETYPEPTR, AccountsBase, 8, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, VerifyUser,
         AROS_LPA(STRPTR, userName, A0),
         AROS_LPA(STRPTR, password, A1),
         AROS_LPA(struct UserInfo *, user, A2),
         LIBBASETYPEPTR, AccountsBase, 9, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, MemberOf,
         AROS_LPA(struct GroupInfo *, group, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         LIBBASETYPEPTR, AccountsBase, 10, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, NameToUser,
         AROS_LPA(STRPTR, userName, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         LIBBASETYPEPTR, AccountsBase, 11, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, NameToGroup,
         AROS_LPA(STRPTR, groupName, A0),
         AROS_LPA(struct GroupInfo *, group, A1),
         LIBBASETYPEPTR, AccountsBase, 12, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, IDToUser,
         AROS_LPA(UWORD, userID, D0),
         AROS_LPA(struct UserInfo *, user, A0),
         LIBBASETYPEPTR, AccountsBase, 13, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, IDToGroup,
         AROS_LPA(UWORD, groupID, D0),
         AROS_LPA(struct GroupInfo *, group, A0),
         LIBBASETYPEPTR, AccountsBase, 14, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP1(ULONG, NextUser,
         AROS_LPA(struct UserInfo *, user, A0),
         LIBBASETYPEPTR, AccountsBase, 15, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP1(ULONG, NextGroup,
         AROS_LPA(struct GroupInfo *, group, A0),
         LIBBASETYPEPTR, AccountsBase, 16, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, NextMember,
         AROS_LPA(struct GroupInfo *, group, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         LIBBASETYPEPTR, AccountsBase, 17, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(STRPTR, ECrypt,
         AROS_LPA(STRPTR, buffer, A0),
         AROS_LPA(STRPTR, password, A1),
         AROS_LPA(STRPTR, username, A2),
         LIBBASETYPEPTR, AccountsBase, 18, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, VerifyUserCrypt,
         AROS_LPA(STRPTR, userName, A0),
         AROS_LPA(STRPTR, password, A1),
         AROS_LPA(struct UserInfo *, user, A2),
         LIBBASETYPEPTR, AccountsBase, 19, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccVerifyUser,
         AROS_LPA(STRPTR, userName, A0),
         AROS_LPA(STRPTR, password, A1),
         AROS_LPA(struct UserInfo *, user, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 30, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccVerifyUserCrypt,
         AROS_LPA(STRPTR, userName, A0),
         AROS_LPA(STRPTR, password, A1),
         AROS_LPA(struct UserInfo *, user, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 31, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccMemberOf,
         AROS_LPA(struct GroupInfo *, group, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         AROS_LPA(struct Entity *, server, A2),
         LIBBASETYPEPTR, AccountsBase, 32, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccNameToUser,
         AROS_LPA(STRPTR, userName, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         AROS_LPA(struct Entity *, server, A2),
         LIBBASETYPEPTR, AccountsBase, 33, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccNameToGroup,
         AROS_LPA(STRPTR, groupName, A0),
         AROS_LPA(struct GroupInfo *, group, A1),
         AROS_LPA(struct Entity *, server, A2),
         LIBBASETYPEPTR, AccountsBase, 34, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccIDToUser,
         AROS_LPA(UWORD, userID, D0),
         AROS_LPA(struct UserInfo *, user, A0),
         AROS_LPA(struct Entity *, server, A1),
         LIBBASETYPEPTR, AccountsBase, 35, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccIDToGroup,
         AROS_LPA(UWORD, groupID, D0),
         AROS_LPA(struct GroupInfo *, group, A0),
         AROS_LPA(struct Entity *, server, A1),
         LIBBASETYPEPTR, AccountsBase, 36, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, AccNextUser,
         AROS_LPA(struct UserInfo *, user, A0),
         AROS_LPA(struct Entity *, server, A1),
         LIBBASETYPEPTR, AccountsBase, 37, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP2(ULONG, AccNextGroup,
         AROS_LPA(struct GroupInfo *, group, A0),
         AROS_LPA(struct Entity *, server, A1),
         LIBBASETYPEPTR, AccountsBase, 38, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccNextMember,
         AROS_LPA(struct GroupInfo *, group, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         AROS_LPA(struct Entity *, server, A2),
         LIBBASETYPEPTR, AccountsBase, 39, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccModifyUser,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct UserInfo *, newUser, A1),
         AROS_LPA(struct UserInfo *, user, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 50, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccSetPassword,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         AROS_LPA(STRPTR, password, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 51, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccModifyGroup,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct GroupInfo *, newGroup, A1),
         AROS_LPA(struct GroupInfo *, group, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 52, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccAddUser,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         AROS_LPA(STRPTR, password, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 53, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccDeleteUser,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct UserInfo *, user, A1),
         AROS_LPA(struct Entity *, server, A2),
         LIBBASETYPEPTR, AccountsBase, 54, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccAddGroup,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct GroupInfo *, group, A1),
         AROS_LPA(struct Entity *, server, A2),
         LIBBASETYPEPTR, AccountsBase, 55, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP3(ULONG, AccDeleteGroup,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct GroupInfo *, group, A1),
         AROS_LPA(struct Entity *, server, A2),
         LIBBASETYPEPTR, AccountsBase, 56, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccAddMember,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct GroupInfo *, group, A1),
         AROS_LPA(struct UserInfo *, user, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 57, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

#if !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__)
AROS_LP4(ULONG, AccRemoveMember,
         AROS_LPA(struct AuthorityInfo *, authority, A0),
         AROS_LPA(struct GroupInfo *, group, A1),
         AROS_LPA(struct UserInfo *, user, A2),
         AROS_LPA(struct Entity *, server, A3),
         LIBBASETYPEPTR, AccountsBase, 58, Accounts
);

#endif /* !defined(__ACCOUNTS_LIBAPI__) || (50 <= __ACCOUNTS_LIBAPI__) */

__END_DECLS

#endif /* CLIB_ACCOUNTS_PROTOS_H */
