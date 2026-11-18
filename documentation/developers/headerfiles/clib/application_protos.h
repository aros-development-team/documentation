#ifndef CLIB_APPLICATION_PROTOS_H
#define CLIB_APPLICATION_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/application/application.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/application.h>

__BEGIN_DECLS


#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(ULONG, RegisterApplicationA,
         AROS_LPA(CONST_STRPTR, name, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ApplicationBase, 5, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(BOOL, UnregisterApplicationA,
         AROS_LPA(ULONG, appID, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ApplicationBase, 6, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(BOOL, SetApplicationAttrsA,
         AROS_LPA(ULONG, appID, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ApplicationBase, 7, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(BOOL, GetApplicationAttrsA,
         AROS_LPA(ULONG, appID, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ApplicationBase, 8, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP1(ULONG, FindApplicationA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ApplicationBase, 9, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP4(BOOL, SendApplicationMsg,
         AROS_LPA(ULONG, senderAppID, D0),
         AROS_LPA(ULONG, receiverAppID, D1),
         AROS_LPA(struct ApplicationMsg *, msg, A0),
         AROS_LPA(ULONG, type, D2),
         LIBBASETYPEPTR, ApplicationBase, 10, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(ULONG, NotifyA,
         AROS_LPA(ULONG, appID, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ApplicationBase, 11, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP0(struct MinList *, GetApplicationList,
         LIBBASETYPEPTR, ApplicationBase, 12, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP1(VOID, FreeApplicationList,
         AROS_LPA(struct MinList *, list, A0),
         LIBBASETYPEPTR, ApplicationBase, 13, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP1(BOOL, GetAppLibAttrsA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ApplicationBase, 14, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(BOOL, SetAppLibAttrsA,
         AROS_LPA(ULONG, dummy, D0),
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, ApplicationBase, 15, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP1(BOOL, LockApplicationIcon,
         AROS_LPA(ULONG, appID, D0),
         LIBBASETYPEPTR, ApplicationBase, 16, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP1(VOID, UnlockApplicationIcon,
         AROS_LPA(ULONG, appID, D0),
         LIBBASETYPEPTR, ApplicationBase, 17, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(PrefsObject *, PrefsBaseObjectA,
         AROS_LPA(PrefsObject *, obj, A0),
         AROS_LPA(ULONG *, error, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, ApplicationBase, 18, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(PrefsObject *, PrefsStringA,
         AROS_LPA(PrefsObject *, obj, A0),
         AROS_LPA(ULONG *, error, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, ApplicationBase, 19, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(PrefsObject *, PrefsNumberA,
         AROS_LPA(PrefsObject *, obj, A0),
         AROS_LPA(ULONG *, error, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, ApplicationBase, 20, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(PrefsObject *, PrefsDateA,
         AROS_LPA(PrefsObject *, obj, A0),
         AROS_LPA(ULONG *, error, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, ApplicationBase, 21, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(PrefsObject *, PrefsBinaryA,
         AROS_LPA(PrefsObject *, obj, A0),
         AROS_LPA(ULONG *, error, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, ApplicationBase, 22, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(PrefsObject *, PrefsArrayA,
         AROS_LPA(PrefsObject *, obj, A0),
         AROS_LPA(ULONG *, error, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, ApplicationBase, 23, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(PrefsObject *, PrefsDictionaryA,
         AROS_LPA(PrefsObject *, obj, A0),
         AROS_LPA(ULONG *, error, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, ApplicationBase, 24, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(PrefsObject *, DictGetObjectForKey,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(CONST_STRPTR, key, A1),
         LIBBASETYPEPTR, ApplicationBase, 25, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(BOOL, DictGetBoolForKey,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(CONST_STRPTR, key, A1),
         AROS_LPA(BOOL, defBool, D0),
         LIBBASETYPEPTR, ApplicationBase, 26, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(LONG, DictGetIntegerForKey,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(CONST_STRPTR, key, A1),
         AROS_LPA(LONG, defInt, D0),
         LIBBASETYPEPTR, ApplicationBase, 27, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(CONST_STRPTR, DictGetStringForKey,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(CONST_STRPTR, key, A1),
         AROS_LPA(CONST_STRPTR, defStr, A2),
         LIBBASETYPEPTR, ApplicationBase, 28, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP4(LONG, DictGetOptionForKey,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(CONST_STRPTR, key, A1),
         AROS_LPA(CONST_STRPTR *, optionsTable, A2),
         AROS_LPA(LONG, defaultOption, D0),
         LIBBASETYPEPTR, ApplicationBase, 29, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP3(BOOL, DictSetObjectForKey,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(PrefsObject *, obj, A1),
         AROS_LPA(CONST_STRPTR, key, A2),
         LIBBASETYPEPTR, ApplicationBase, 30, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(ULONG, ReadPrefsA,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ApplicationBase, 31, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP2(ULONG, WritePrefsA,
         AROS_LPA(PrefsObject *, dict, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, ApplicationBase, 32, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

#if !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__)
AROS_LP1(ULONG, BeginDeserialization,
         AROS_LPA(struct ALPOGetProcInfo *, info, A0),
         LIBBASETYPEPTR, ApplicationBase, 33, Application
);

#endif /* !defined(__APPLICATION_LIBAPI__) || (1 <= __APPLICATION_LIBAPI__) */

__END_DECLS

#endif /* CLIB_APPLICATION_PROTOS_H */
