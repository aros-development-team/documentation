#ifndef CLIB_BLUETOOTH_PROTOS_H
#define CLIB_BLUETOOTH_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/bluetooth/bluetooth/bluetooth.conf'. Edits will be lost. ***
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
#include <libraries/bluetooth.h>
#include <proto/alib.h>

LONG btGetAttrs(ULONG type, APTR btstruct, Tag tag1, ...) __stackparm;
LONG btSetAttrs(ULONG type, APTR btstruct, Tag tag1, ...) __stackparm;
APTR btAddErrorMsg(UWORD level, STRPTR origin, STRPTR fmtstr, ...);
VOID btSafeRawDoFmt(STRPTR buf, ULONG len, STRPTR fmtstr, ...);
STRPTR btCopyStrFmt(CONST_STRPTR fmtstr, ...);
APTR btFindDevice(APTR bd, Tag tag1, ...) __stackparm;
APTR btFindService(APTR bd, APTR bsv, Tag tag1, ...) __stackparm;
APTR btFindEndpoint(APTR bsv, APTR bep, Tag tag1, ...) __stackparm;
APTR btClaimAppBinding(Tag tag1, ...) __stackparm;
BOOL btStartDiscovery(APTR bth, Tag tag1, ...) __stackparm;
BOOL btPairDevice(APTR bd, Tag tag1, ...) __stackparm;
BOOL btPairingReply(APTR bd, Tag tag1, ...) __stackparm;
APTR btAddServiceRecord(Tag tag1, ...) __stackparm;

__BEGIN_DECLS


#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btAllocVec,
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, BluetoothBase, 5, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btFreeVec,
         AROS_LPA(APTR, memptr, A1),
         LIBBASETYPEPTR, BluetoothBase, 6, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP0(VOID, btLockWriteBase,
         LIBBASETYPEPTR, BluetoothBase, 7, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP0(VOID, btLockReadBase,
         LIBBASETYPEPTR, BluetoothBase, 8, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP0(VOID, btUnlockBase,
         LIBBASETYPEPTR, BluetoothBase, 9, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(STRPTR, btCopyStr,
         AROS_LPA(CONST_STRPTR, name, A0),
         LIBBASETYPEPTR, BluetoothBase, 10, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btDelayMS,
         AROS_LPA(ULONG, milli, D0),
         LIBBASETYPEPTR, BluetoothBase, 11, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(APTR, btAddHardware,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(ULONG, unit, D0),
         LIBBASETYPEPTR, BluetoothBase, 12, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btRemHardware,
         AROS_LPA(APTR, bth, A0),
         LIBBASETYPEPTR, BluetoothBase, 13, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btEnumerateHardware,
         AROS_LPA(APTR, bth, A0),
         LIBBASETYPEPTR, BluetoothBase, 14, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btAllocDevice,
         AROS_LPA(APTR, bth, A0),
         LIBBASETYPEPTR, BluetoothBase, 15, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btFreeDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 16, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btLockReadDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 17, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btLockWriteDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 18, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btUnlockDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 19, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btGetNextDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 20, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(LONG, btGetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, btstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 21, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(LONG, btSetAttrsA,
         AROS_LPA(ULONG, type, D0),
         AROS_LPA(APTR, btstruct, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 22, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(APTR, btAllocChannel,
         AROS_LPA(APTR, bd, A0),
         AROS_LPA(struct MsgPort *, mp, A1),
         AROS_LPA(APTR, bep, A2),
         LIBBASETYPEPTR, BluetoothBase, 23, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btFreeChannel,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, BluetoothBase, 24, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP4(VOID, btChannelSetup,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(UWORD, rq, D0),
         AROS_LPA(UWORD, val, D1),
         AROS_LPA(UWORD, idx, D2),
         LIBBASETYPEPTR, BluetoothBase, 25, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(LONG, btDoChannel,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(APTR, data, A0),
         AROS_LPA(ULONG, len, D0),
         LIBBASETYPEPTR, BluetoothBase, 26, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(VOID, btSendChannel,
         AROS_LPA(APTR, pp, A1),
         AROS_LPA(APTR, data, A0),
         AROS_LPA(ULONG, len, D0),
         LIBBASETYPEPTR, BluetoothBase, 27, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btAbortChannel,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, BluetoothBase, 28, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(LONG, btWaitChannel,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, BluetoothBase, 29, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(ULONG, btGetChannelActual,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, BluetoothBase, 30, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(LONG, btGetChannelError,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, BluetoothBase, 31, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btCheckChannel,
         AROS_LPA(APTR, pp, A1),
         LIBBASETYPEPTR, BluetoothBase, 32, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(APTR, btAddClass,
         AROS_LPA(STRPTR, name, A1),
         AROS_LPA(ULONG, version, D0),
         LIBBASETYPEPTR, BluetoothBase, 33, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btRemClass,
         AROS_LPA(APTR, bc, A1),
         LIBBASETYPEPTR, BluetoothBase, 34, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP0(VOID, btClassScan,
         LIBBASETYPEPTR, BluetoothBase, 35, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(STRPTR, btNumToStr,
         AROS_LPA(UWORD, type, D0),
         AROS_LPA(LONG, idx, D1),
         AROS_LPA(STRPTR, defstr, A0),
         LIBBASETYPEPTR, BluetoothBase, 36, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(struct Task *, btSpawnSubTask,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(APTR, initpc, A1),
         AROS_LPA(APTR, userdata, A2),
         LIBBASETYPEPTR, BluetoothBase, 37, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP4(APTR, btAddErrorMsgA,
         AROS_LPA(UWORD, level, D0),
         AROS_LPA(STRPTR, origin, A0),
         AROS_LPA(STRPTR, fmtstr, A1),
         AROS_LPA(RAWARG, fmtdata, A2),
         LIBBASETYPEPTR, BluetoothBase, 38, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btRemErrorMsg,
         AROS_LPA(APTR, bem, A0),
         LIBBASETYPEPTR, BluetoothBase, 39, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP4(VOID, btSafeRawDoFmtA,
         AROS_LPA(STRPTR, buf, A0),
         AROS_LPA(ULONG, len, D0),
         AROS_LPA(CONST_STRPTR, fmtstr, A1),
         AROS_LPA(RAWARG, fmtdata, A2),
         LIBBASETYPEPTR, BluetoothBase, 40, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(STRPTR, btCopyStrFmtA,
         AROS_LPA(CONST_STRPTR, fmtstr, A0),
         AROS_LPA(RAWARG, fmtdata, A1),
         LIBBASETYPEPTR, BluetoothBase, 41, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(APTR, btFindDeviceA,
         AROS_LPA(APTR, bd, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 42, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(APTR, btFindServiceA,
         AROS_LPA(APTR, bd, A0),
         AROS_LPA(APTR, bsv, A2),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 43, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(APTR, btFindEndpointA,
         AROS_LPA(APTR, bsv, A0),
         AROS_LPA(APTR, bep, A2),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 44, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btClaimAppBindingA,
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 45, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btReleaseAppBinding,
         AROS_LPA(APTR, bab, A0),
         LIBBASETYPEPTR, BluetoothBase, 46, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(APTR, btAddEventHandler,
         AROS_LPA(struct MsgPort *, mp, A1),
         AROS_LPA(ULONG, msgmask, D0),
         LIBBASETYPEPTR, BluetoothBase, 47, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btRemEventHandler,
         AROS_LPA(APTR, beh, A0),
         LIBBASETYPEPTR, BluetoothBase, 48, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(VOID, btSendEvent,
         AROS_LPA(ULONG, behmt, D0),
         AROS_LPA(APTR, param1, A0),
         AROS_LPA(APTR, param2, A1),
         LIBBASETYPEPTR, BluetoothBase, 49, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btReleaseDevBinding,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 50, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btReleaseSvcBinding,
         AROS_LPA(APTR, bsv, A0),
         LIBBASETYPEPTR, BluetoothBase, 51, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP0(VOID, btUnbindAll,
         LIBBASETYPEPTR, BluetoothBase, 52, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(BOOL, btReadCfg,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(APTR, formdata, A1),
         LIBBASETYPEPTR, BluetoothBase, 53, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btWriteCfg,
         AROS_LPA(APTR, bic, A0),
         LIBBASETYPEPTR, BluetoothBase, 54, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(APTR, btFindCfgForm,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(ULONG, formid, D0),
         LIBBASETYPEPTR, BluetoothBase, 55, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btNextCfgForm,
         AROS_LPA(APTR, bic, A0),
         LIBBASETYPEPTR, BluetoothBase, 56, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btRemCfgForm,
         AROS_LPA(APTR, bic, A0),
         LIBBASETYPEPTR, BluetoothBase, 57, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(APTR, btAddCfgEntry,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(APTR, formdata, A1),
         LIBBASETYPEPTR, BluetoothBase, 58, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(BOOL, btRemCfgChunk,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(ULONG, chnkid, D0),
         LIBBASETYPEPTR, BluetoothBase, 59, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(APTR, btGetCfgChunk,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(ULONG, chnkid, D0),
         LIBBASETYPEPTR, BluetoothBase, 60, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btAllocCfgForm,
         AROS_LPA(ULONG, formid, D0),
         LIBBASETYPEPTR, BluetoothBase, 61, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(BOOL, btAddStringChunk,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(ULONG, chunkid, D0),
         AROS_LPA(CONST_STRPTR, contents, A1),
         LIBBASETYPEPTR, BluetoothBase, 62, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(BOOL, btMatchStringChunk,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(ULONG, chunkid, D0),
         AROS_LPA(CONST_STRPTR, contents, A1),
         LIBBASETYPEPTR, BluetoothBase, 63, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(STRPTR, btGetStringChunk,
         AROS_LPA(APTR, bic, A0),
         AROS_LPA(ULONG, chunkid, D0),
         LIBBASETYPEPTR, BluetoothBase, 64, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP0(VOID, btParseCfg,
         LIBBASETYPEPTR, BluetoothBase, 65, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(BOOL, btSetClsCfg,
         AROS_LPA(STRPTR, owner, A0),
         AROS_LPA(APTR, form, A1),
         LIBBASETYPEPTR, BluetoothBase, 66, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btGetClsCfg,
         AROS_LPA(STRPTR, owner, A0),
         LIBBASETYPEPTR, BluetoothBase, 67, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP4(BOOL, btSetDevCfg,
         AROS_LPA(STRPTR, owner, A0),
         AROS_LPA(STRPTR, devid, A2),
         AROS_LPA(STRPTR, svcid, A3),
         AROS_LPA(APTR, form, A1),
         LIBBASETYPEPTR, BluetoothBase, 68, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(APTR, btGetDevCfg,
         AROS_LPA(STRPTR, owner, A0),
         AROS_LPA(STRPTR, devid, A2),
         AROS_LPA(STRPTR, svcid, A3),
         LIBBASETYPEPTR, BluetoothBase, 69, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP3(BOOL, btSetForcedBinding,
         AROS_LPA(STRPTR, owner, A2),
         AROS_LPA(STRPTR, devid, A0),
         AROS_LPA(STRPTR, svcid, A1),
         LIBBASETYPEPTR, BluetoothBase, 70, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(STRPTR, btGetForcedBinding,
         AROS_LPA(STRPTR, devid, A0),
         AROS_LPA(STRPTR, svcid, A1),
         LIBBASETYPEPTR, BluetoothBase, 71, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btLoadCfgFromDisk,
         AROS_LPA(STRPTR, filename, A1),
         LIBBASETYPEPTR, BluetoothBase, 72, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(BOOL, btSaveCfgToDisk,
         AROS_LPA(STRPTR, filename, A1),
         AROS_LPA(BOOL, mode, D0),
         LIBBASETYPEPTR, BluetoothBase, 73, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(ULONG, btBorrowLocksWait,
         AROS_LPA(struct Task *, task, A1),
         AROS_LPA(ULONG, signals, D0),
         LIBBASETYPEPTR, BluetoothBase, 74, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(BOOL, btStartDiscoveryA,
         AROS_LPA(APTR, bth, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 75, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btStopDiscovery,
         AROS_LPA(APTR, bth, A0),
         LIBBASETYPEPTR, BluetoothBase, 76, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btConnectDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 77, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btDisconnectDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 78, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(BOOL, btPairDeviceA,
         AROS_LPA(APTR, bd, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 79, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP2(BOOL, btPairingReplyA,
         AROS_LPA(APTR, bd, A0),
         AROS_LPA(struct TagItem *, taglist, A1),
         LIBBASETYPEPTR, BluetoothBase, 80, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btUnpairDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 81, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btRegisterDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 82, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btUnregisterDevice,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 83, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(BOOL, btEnumerateServices,
         AROS_LPA(APTR, bd, A0),
         LIBBASETYPEPTR, BluetoothBase, 84, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP0(VOID, btDebugSemaphores,
         LIBBASETYPEPTR, BluetoothBase, 85, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btAddFirmwareLoader,
         AROS_LPA(struct BtFirmwareLoader *, loader, A0),
         LIBBASETYPEPTR, BluetoothBase, 86, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btRemFirmwareLoader,
         AROS_LPA(struct BtFirmwareLoader *, loader, A0),
         LIBBASETYPEPTR, BluetoothBase, 87, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(APTR, btAddServiceRecordA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, BluetoothBase, 88, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP1(VOID, btRemServiceRecord,
         AROS_LPA(APTR, record, A0),
         LIBBASETYPEPTR, BluetoothBase, 89, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP4(LONG, btSetServiceValue,
         AROS_LPA(APTR, record, A0),
         AROS_LPA(ULONG, index, D0),
         AROS_LPA(APTR, data, A1),
         AROS_LPA(ULONG, len, D1),
         LIBBASETYPEPTR, BluetoothBase, 90, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

#if !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__)
AROS_LP4(LONG, btGetServiceValue,
         AROS_LPA(APTR, record, A0),
         AROS_LPA(ULONG, index, D0),
         AROS_LPA(APTR, buf, A1),
         AROS_LPA(ULONG, len, D1),
         LIBBASETYPEPTR, BluetoothBase, 91, bt
);

#endif /* !defined(__BLUETOOTH_LIBAPI__) || (45 <= __BLUETOOTH_LIBAPI__) */

__END_DECLS

#endif /* CLIB_BLUETOOTH_PROTOS_H */
