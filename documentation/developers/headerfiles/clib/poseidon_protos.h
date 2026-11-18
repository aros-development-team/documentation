#ifndef CLIB_POSEIDON_PROTOS_H
#define CLIB_POSEIDON_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/usb/poseidon/poseidon.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <exec/lists.h>
#include <exec/interrupts.h>
#include <exec/semaphores.h>
#include <exec/devices.h>
#include <exec/io.h>
#include <exec/ports.h>
#include <utility/utility.h>
#include <devices/timer.h>
#include <libraries/poseidon.h>
#include <proto/alib.h>

LONG psdGetAttrs(ULONG type, APTR psdstruct, Tag tag1, ...) __stackparm;
LONG psdSetAttrs(ULONG type, APTR psdstruct, Tag tag1, ...) __stackparm;
APTR psdAddErrorMsg(UWORD level, STRPTR origin, STRPTR fmtstr, ...);
VOID psdSafeRawDoFmt(STRPTR buf, ULONG len, STRPTR fmtstr, ...);
APTR psdFindDevice(APTR pd, Tag tag1, ...) __stackparm;
APTR psdClaimAppBinding(Tag tag1, ...) __stackparm;
APTR psdFindInterface(APTR pd, APTR pif, Tag tag1, ...) __stackparm;
APTR psdFindEndpoint(APTR pif, APTR pep, Tag tag1, ...) __stackparm;
STRPTR psdCopyStrFmt(CONST_STRPTR fmtstr, ...);
APTR psdOpenStream(APTR pep, Tag tag1, ...) __stackparm;
APTR psdHubClaimAppBinding(Tag tag1, ...) __stackparm;
APTR psdFindDescriptor(APTR pd, APTR pdd, Tag tag1, ...) __stackparm;
IPTR psdDoHubMethod(APTR pd, ULONG methodid, IPTR *methoddata1) __stackparm;
APTR psdAllocRTIsoHandler(APTR pep, Tag tag1, ...) __stackparm;

__BEGIN_DECLS


#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdAllocVec,
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, ps, 5, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdFreeVec,
         AROS_LPA(APTR, memptr, A1),
         LIBBASETYPEPTR, ps, 6, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP0(VOID, psdLockWritePBase,
         LIBBASETYPEPTR, ps, 7, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP0(VOID, psdLockReadPBase,
         LIBBASETYPEPTR, ps, 8, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP0(VOID, psdUnlockPBase,
         LIBBASETYPEPTR, ps, 9, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(STRPTR, psdCopyStr,
         AROS_LPA(CONST_STRPTR, name, A0),
         LIBBASETYPEPTR, ps, 10, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdDelayMS,
         AROS_LPA(ULONG, milli, D0),
         LIBBASETYPEPTR, ps, 11, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdAddHardware,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(ULONG, unit, D0),
         LIBBASETYPEPTR, ps, 12, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdRemHardware,
         AROS_LPA(APTR, phw, A0),
         LIBBASETYPEPTR, ps, 13, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdEnumerateHardware,
         AROS_LPA(APTR, phw, A0),
         LIBBASETYPEPTR, ps, 14, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdAllocDevice,
         AROS_LPA(APTR, phw, A0),
         LIBBASETYPEPTR, ps, 15, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdFreeDevice,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 16, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdLockReadDevice,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 17, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdLockWriteDevice,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 18, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdUnlockDevice,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 19, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdEnumerateDevice,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, ps, 20, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdGetNextDevice,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 21, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(LONG, psdGetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, psdstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 22, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(LONG, psdSetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, psdstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 23, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(APTR, psdAllocPipe,
         AROS_LPA(APTR, pd, A0),
         AROS_LPA(struct MsgPort *, mp, A1),
         AROS_LPA(APTR, pep, A2),
         LIBBASETYPEPTR, ps, 24, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdFreePipe,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, ps, 25, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP5(VOID, psdPipeSetup,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(UWORD, rt, D0),
         AROS_LPA(UWORD, rq, D1),
         AROS_LPA(UWORD, val, D2),
         AROS_LPA(UWORD, idx, D3),
         LIBBASETYPEPTR, ps, 26, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(LONG, psdDoPipe,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(APTR, data, A0),
         AROS_LPA(ULONG, len, D0),
         LIBBASETYPEPTR, ps, 27, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(VOID, psdSendPipe,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(APTR, data, A0),
         AROS_LPA(ULONG, len, D0),
         LIBBASETYPEPTR, ps, 28, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdAbortPipe,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, ps, 29, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(LONG, psdWaitPipe,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, ps, 30, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(ULONG, psdGetPipeActual,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, ps, 31, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(LONG, psdGetPipeError,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, ps, 32, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(STRPTR, psdGetStringDescriptor,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(UWORD, idx, D0),
         LIBBASETYPEPTR, ps, 33, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(BOOL, psdSetDeviceConfig,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(UWORD, cfgnum, D0),
         LIBBASETYPEPTR, ps, 34, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdAddClass,
         AROS_LPA(STRPTR, name, A1),
         AROS_LPA(ULONG, version, D0),
         LIBBASETYPEPTR, ps, 35, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdRemClass,
         AROS_LPA(APTR, puc, A1),
         LIBBASETYPEPTR, ps, 36, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP0(VOID, psdClassScan,
         LIBBASETYPEPTR, ps, 37, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(STRPTR, psdNumToStr,
         AROS_LPA(UWORD, type, D0),
         AROS_LPA(LONG, idx, D1),
         AROS_LPA(STRPTR, defstr, A0),
         LIBBASETYPEPTR, ps, 38, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(struct Task *, psdSpawnSubTask,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(APTR, initpc, A1),
         AROS_LPA(APTR, userdata, A2),
         LIBBASETYPEPTR, ps, 39, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP4(APTR, psdAddErrorMsgA,
         AROS_LPA(UWORD, level, D0),
         AROS_LPA(STRPTR, origin, A0),
         AROS_LPA(STRPTR, fmtstr, A1),
         AROS_LPA(RAWARG, fmtdata, A2),
         LIBBASETYPEPTR, ps, 40, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdRemErrorMsg,
         AROS_LPA(APTR, pem, A0),
         LIBBASETYPEPTR, ps, 41, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP4(VOID, psdSafeRawDoFmtA,
         AROS_LPA(STRPTR, buf, A0),
         AROS_LPA(ULONG, len, D0),
         AROS_LPA(CONST_STRPTR, fmtstr, A1),
         AROS_LPA(RAWARG, fmtdata, A2),
         LIBBASETYPEPTR, ps, 42, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(BOOL, psdSetAltInterface,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(APTR, pif, A0),
         LIBBASETYPEPTR, ps, 43, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdFindDeviceA,
         AROS_LPA(APTR, pd, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 44, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdClaimAppBindingA,
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 45, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdReleaseAppBinding,
         AROS_LPA(APTR, pab, A0),
         LIBBASETYPEPTR, ps, 46, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdAddEventHandler,
         AROS_LPA(struct MsgPort *, mp, A1),
         AROS_LPA(ULONG, msgmask, D0),
         LIBBASETYPEPTR, ps, 47, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdRemEventHandler,
         AROS_LPA(APTR, peh, A0),
         LIBBASETYPEPTR, ps, 48, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(VOID, psdSendEvent,
         AROS_LPA(ULONG, ehmt, D0),
         AROS_LPA(APTR, param1, A0),
         AROS_LPA(APTR, param2, A1),
         LIBBASETYPEPTR, ps, 49, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdReleaseDevBinding,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 50, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdReleaseIfBinding,
         AROS_LPA(APTR, pif, A0),
         LIBBASETYPEPTR, ps, 51, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(BOOL, psdReadCfg,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(APTR, formdata, A1),
         LIBBASETYPEPTR, ps, 52, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdWriteCfg,
         AROS_LPA(APTR, pic, A0),
         LIBBASETYPEPTR, ps, 53, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdFindCfgForm,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(ULONG, formid, D0),
         LIBBASETYPEPTR, ps, 54, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdNextCfgForm,
         AROS_LPA(APTR, pic, A0),
         LIBBASETYPEPTR, ps, 55, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(BOOL, psdRemCfgForm,
         AROS_LPA(APTR, pic, A0),
         LIBBASETYPEPTR, ps, 56, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdAddCfgEntry,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(APTR, formdata, A1),
         LIBBASETYPEPTR, ps, 57, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(BOOL, psdRemCfgChunk,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(ULONG, chnkid, D0),
         LIBBASETYPEPTR, ps, 58, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdGetCfgChunk,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(ULONG, chnkid, D0),
         LIBBASETYPEPTR, ps, 59, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP0(VOID, psdParseCfg,
         LIBBASETYPEPTR, ps, 60, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP0(VOID, psdUnbindAll,
         LIBBASETYPEPTR, ps, 61, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(BOOL, psdSetClsCfg,
         AROS_LPA(STRPTR, owner, A0),
         AROS_LPA(APTR, form, A1),
         LIBBASETYPEPTR, ps, 62, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdGetClsCfg,
         AROS_LPA(STRPTR, owner, A0),
         LIBBASETYPEPTR, ps, 63, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP4(BOOL, psdSetUsbDevCfg,
         AROS_LPA(STRPTR, owner, A0),
         AROS_LPA(STRPTR, devid, A2),
         AROS_LPA(STRPTR, ifid, A3),
         AROS_LPA(APTR, form, A1),
         LIBBASETYPEPTR, ps, 64, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(APTR, psdGetUsbDevCfg,
         AROS_LPA(STRPTR, owner, A0),
         AROS_LPA(STRPTR, devid, A2),
         AROS_LPA(STRPTR, ifid, A3),
         LIBBASETYPEPTR, ps, 65, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(APTR, psdFindInterfaceA,
         AROS_LPA(APTR, pd, A0),
         AROS_LPA(APTR, pif, A2),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 66, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(APTR, psdFindEndpointA,
         AROS_LPA(APTR, pif, A0),
         AROS_LPA(APTR, pep, A2),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 67, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(STRPTR, psdCopyStrFmtA,
         AROS_LPA(CONST_STRPTR, fmtstr, A0),
         AROS_LPA(RAWARG, fmtdata, A1),
         LIBBASETYPEPTR, ps, 68, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(BOOL, psdSetForcedBinding,
         AROS_LPA(STRPTR, owner, A2),
         AROS_LPA(STRPTR, devid, A0),
         AROS_LPA(STRPTR, ifid, A1),
         LIBBASETYPEPTR, ps, 69, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(STRPTR, psdGetForcedBinding,
         AROS_LPA(STRPTR, devid, A0),
         AROS_LPA(STRPTR, ifid, A1),
         LIBBASETYPEPTR, ps, 70, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdCheckPipe,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, ps, 71, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdOpenStreamA,
         AROS_LPA(APTR, pep, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 72, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdCloseStream,
         AROS_LPA(APTR, pps, A1),
         LIBBASETYPEPTR, ps, 73, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(LONG, psdStreamRead,
         AROS_LPA(APTR, pps, A1),
         AROS_LPA(APTR, buffer, A0),
         AROS_LPA(LONG, length, D0),
         LIBBASETYPEPTR, ps, 74, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(LONG, psdStreamWrite,
         AROS_LPA(APTR, pps, A1),
         AROS_LPA(APTR, buffer, A0),
         AROS_LPA(LONG, length, D0),
         LIBBASETYPEPTR, ps, 75, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(LONG, psdStreamFlush,
         AROS_LPA(APTR, pps, A1),
         LIBBASETYPEPTR, ps, 76, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(LONG, psdGetStreamError,
         AROS_LPA(APTR, pps, A1),
         LIBBASETYPEPTR, ps, 77, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdCalculatePower,
         AROS_LPA(APTR, phw, A0),
         LIBBASETYPEPTR, ps, 78, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(BOOL, psdLoadCfgFromDisk,
         AROS_LPA(STRPTR, filename, A1),
         LIBBASETYPEPTR, ps, 79, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(BOOL, psdSaveCfgToDisk,
         AROS_LPA(STRPTR, filename, A1),
         AROS_LPA(BOOL, mode, D0),
         LIBBASETYPEPTR, ps, 80, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP0(VOID, psdDebugSemaphores,
         LIBBASETYPEPTR, ps, 81, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdHubClassScan,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 82, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdHubClaimAppBindingA,
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 83, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdHubReleaseDevBinding,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 84, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdHubReleaseIfBinding,
         AROS_LPA(APTR, pif, A0),
         LIBBASETYPEPTR, ps, 85, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(APTR, psdAllocCfgForm,
         AROS_LPA(ULONG, formid, D0),
         LIBBASETYPEPTR, ps, 86, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(BOOL, psdAddStringChunk,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(ULONG, chunkid, D0),
         AROS_LPA(CONST_STRPTR, contents, A1),
         LIBBASETYPEPTR, ps, 87, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(BOOL, psdMatchStringChunk,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(ULONG, chunkid, D0),
         AROS_LPA(CONST_STRPTR, contents, A1),
         LIBBASETYPEPTR, ps, 88, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(STRPTR, psdGetStringChunk,
         AROS_LPA(APTR, pic, A0),
         AROS_LPA(ULONG, chunkid, D0),
         LIBBASETYPEPTR, ps, 89, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(APTR, psdFindDescriptorA,
         AROS_LPA(APTR, pd, A0),
         AROS_LPA(APTR, pdd, A2),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 91, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP3(IPTR, psdDoHubMethodA,
         AROS_LPA(APTR, pd, A0),
         AROS_LPA(ULONG, methodid, D0),
         AROS_LPA(IPTR *, methoddata, A1),
         LIBBASETYPEPTR, ps, 92, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(APTR, psdAllocRTIsoHandlerA,
         AROS_LPA(APTR, pep, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, ps, 93, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(VOID, psdFreeRTIsoHandler,
         AROS_LPA(APTR, prt, A1),
         LIBBASETYPEPTR, ps, 94, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(LONG, psdStartRTIso,
         AROS_LPA(APTR, prt, A1),
         LIBBASETYPEPTR, ps, 95, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(LONG, psdStopRTIso,
         AROS_LPA(APTR, prt, A1),
         LIBBASETYPEPTR, ps, 96, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP2(ULONG, psdBorrowLocksWait,
         AROS_LPA(struct Task *, task, A1),
         AROS_LPA(ULONG, signals, D0),
         LIBBASETYPEPTR, ps, 97, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(BOOL, psdSuspendDevice,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 98, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(BOOL, psdResumeDevice,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 99, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(BOOL, psdSuspendBindings,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 100, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

#if !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__)
AROS_LP1(BOOL, psdResumeBindings,
         AROS_LPA(APTR, pd, A0),
         LIBBASETYPEPTR, ps, 101, psd
);

#endif /* !defined(__POSEIDON_LIBAPI__) || (5 <= __POSEIDON_LIBAPI__) */

__END_DECLS

#endif /* CLIB_POSEIDON_PROTOS_H */
