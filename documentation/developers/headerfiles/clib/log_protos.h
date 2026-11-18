#ifndef CLIB_LOG_PROTOS_H
#define CLIB_LOG_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/log/log.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <exec/lists.h>
#include <exec/semaphores.h>
#include <exec/ports.h>
#include <utility/utility.h>
#include <devices/timer.h>
#include <proto/alib.h>

APTR logAddEntry(ULONG flags, APTR loghandle, CONST_STRPTR sub, CONST_STRPTR src, ULONG eventid, CONST_STRPTR fmtstr, ...);
VOID logRawDoFmt(STRPTR buf, ULONG len, CONST_STRPTR fmtstr, ...);
VOID logRawDoFmtCB(STRPTR buf, ULONG len, VOID_FUNC cbfunc, APTR cbdata, CONST_STRPTR fmtstr, ...);
STRPTR logCopyStrFmt(CONST_STRPTR fmtstr, ...);

__BEGIN_DECLS


#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(APTR, logInitialise,
         AROS_LPA(APTR, logProvider, A0),
         LIBBASETYPEPTR, LogResBase, 1, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(VOID, logFinalise,
         AROS_LPA(APTR, loghandle, A0),
         LIBBASETYPEPTR, LogResBase, 2, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(STRPTR, logCopyStr,
         AROS_LPA(CONST_STRPTR, name, A0),
         LIBBASETYPEPTR, LogResBase, 4, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP4(VOID, logRawDoFmtA,
         AROS_LPA(STRPTR, buf, A0),
         AROS_LPA(ULONG, len, D0),
         AROS_LPA(CONST_STRPTR, fmtstr, A1),
         AROS_LPA(RAWARG, fmtdata, A2),
         LIBBASETYPEPTR, LogResBase, 5, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP6(VOID, logRawDoFmtCBA,
         AROS_LPA(STRPTR, buf, A0),
         AROS_LPA(ULONG, len, D0),
         AROS_LPA(VOID_FUNC, cbfunc, A1),
         AROS_LPA(APTR, cbdata, A2),
         AROS_LPA(CONST_STRPTR, fmtstr, A3),
         AROS_LPA(RAWARG, fmtdata, A4),
         LIBBASETYPEPTR, LogResBase, 6, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP2(STRPTR, logCopyStrFmtA,
         AROS_LPA(CONST_STRPTR, fmtstr, A0),
         AROS_LPA(RAWARG, fmtdata, A1),
         LIBBASETYPEPTR, LogResBase, 7, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP2(int, logCmpStr,
         AROS_LPA(CONST_STRPTR, str1, A0),
         AROS_LPA(CONST_STRPTR, str2, A1),
         LIBBASETYPEPTR, LogResBase, 8, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP2(IPTR, logGetEntryAttrs,
         AROS_LPA(APTR, entryhandle, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, LogResBase, 9, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP7(APTR, logAddEntryA,
         AROS_LPA(ULONG, flags, D0),
         AROS_LPA(APTR, loghandle, A0),
         AROS_LPA(CONST_STRPTR, sub, A1),
         AROS_LPA(CONST_STRPTR, src, A2),
         AROS_LPA(ULONG, eventid, D1),
         AROS_LPA(CONST_STRPTR, fmtstr, A3),
         AROS_LPA(RAWARG, fmtdata, A4),
         LIBBASETYPEPTR, LogResBase, 10, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(VOID, logRemEntry,
         AROS_LPA(APTR, entryhandle, A0),
         LIBBASETYPEPTR, LogResBase, 11, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(VOID, logLockEntries,
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, LogResBase, 13, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(APTR, logNextEntry,
         AROS_LPA(APTR *, entryhandle, A0),
         LIBBASETYPEPTR, LogResBase, 14, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(VOID, logUnlockEntries,
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, LogResBase, 15, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP2(APTR, logAddListener,
         AROS_LPA(struct MsgPort *, mp, A1),
         AROS_LPA(ULONG, msgmask, D0),
         LIBBASETYPEPTR, LogResBase, 17, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP1(VOID, logRemListener,
         AROS_LPA(APTR, listenerhandle, A0),
         LIBBASETYPEPTR, LogResBase, 18, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP3(VOID, logEventBroadcast,
         AROS_LPA(UBYTE, ehmt, D0),
         AROS_LPA(APTR, param1, A0),
         AROS_LPA(APTR, param2, A1),
         LIBBASETYPEPTR, LogResBase, 19, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

#if !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__)
AROS_LP2(VOID, logDeleteBroadcast,
         AROS_LPA(APTR, listenerhandle, A0),
         AROS_LPA(APTR, bMsg, A1),
         LIBBASETYPEPTR, LogResBase, 20, log
);

#endif /* !defined(__LOG_LIBAPI__) || (45 <= __LOG_LIBAPI__) */

__END_DECLS

#endif /* CLIB_LOG_PROTOS_H */
