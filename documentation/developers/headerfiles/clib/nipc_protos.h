#ifndef CLIB_NIPC_PROTOS_H
#define CLIB_NIPC_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/nipc/nipc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <exec/ports.h>
#include <devices/timer.h>
#include <utility/tagitem.h>
#include <utility/hooks.h>
#include <envoy/nipc.h>

__BEGIN_DECLS


#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP4(BOOL, AddRoute,
         AROS_LPA(ULONG, network, D0),
         AROS_LPA(ULONG, gateway, D1),
         AROS_LPA(UWORD, hops, D2),
         AROS_LPA(WORD, ttl, D3),
         LIBBASETYPEPTR, NIPCBase, 7, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(APTR, DeleteRoute,
         AROS_LPA(ULONG, network, D0),
         LIBBASETYPEPTR, NIPCBase, 8, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(struct Transaction *, AllocTransactionA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, NIPCBase, 19, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(APTR, FreeTransaction,
         AROS_LPA(struct Transaction *, transaction, A1),
         LIBBASETYPEPTR, NIPCBase, 20, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(struct Entity *, CreateEntityA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, NIPCBase, 21, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, DeleteEntity,
         AROS_LPA(struct Entity *, entity, A0),
         LIBBASETYPEPTR, NIPCBase, 22, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP4(struct Entity *, FindEntity,
         AROS_LPA(CONST_STRPTR, hostname, A0),
         AROS_LPA(CONST_STRPTR, entityname, A1),
         AROS_LPA(struct Entity *, src_entity, A2),
         AROS_LPA(ULONG *, detailerror, A3),
         LIBBASETYPEPTR, NIPCBase, 23, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, LoseEntity,
         AROS_LPA(struct Entity *, entity, A0),
         LIBBASETYPEPTR, NIPCBase, 24, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(ULONG, DoTransaction,
         AROS_LPA(struct Entity *, dest_entity, A0),
         AROS_LPA(struct Entity *, src_entity, A1),
         AROS_LPA(struct Transaction *, transaction, A2),
         LIBBASETYPEPTR, NIPCBase, 25, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(BOOL, BeginTransaction,
         AROS_LPA(struct Entity *, dest_entity, A0),
         AROS_LPA(struct Entity *, src_entity, A1),
         AROS_LPA(struct Transaction *, transaction, A2),
         LIBBASETYPEPTR, NIPCBase, 26, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(struct Transaction *, GetTransaction,
         AROS_LPA(struct Entity *, entity, A0),
         LIBBASETYPEPTR, NIPCBase, 27, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, ReplyTransaction,
         AROS_LPA(struct Transaction *, transaction, A1),
         LIBBASETYPEPTR, NIPCBase, 28, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(BOOL, CheckTransaction,
         AROS_LPA(struct Transaction *, transaction, A1),
         LIBBASETYPEPTR, NIPCBase, 29, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, AbortTransaction,
         AROS_LPA(struct Transaction *, transaction, A1),
         LIBBASETYPEPTR, NIPCBase, 30, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(ULONG, WaitTransaction,
         AROS_LPA(struct Transaction *, transaction, A1),
         LIBBASETYPEPTR, NIPCBase, 31, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, WaitEntity,
         AROS_LPA(struct Entity *, entity, A0),
         LIBBASETYPEPTR, NIPCBase, 32, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(BOOL, GetEntityName,
         AROS_LPA(struct Entity *, entity, A0),
         AROS_LPA(STRPTR, string, A1),
         AROS_LPA(ULONG, maxlen, D0),
         LIBBASETYPEPTR, NIPCBase, 33, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(BOOL, GetHostName,
         AROS_LPA(struct Entity *, entity, A0),
         AROS_LPA(STRPTR, string, A1),
         AROS_LPA(ULONG, maxlen, D0),
         LIBBASETYPEPTR, NIPCBase, 34, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP4(BOOL, NIPCInquiryA,
         AROS_LPA(struct Hook *, hook, A0),
         AROS_LPA(ULONG, maxTime, D0),
         AROS_LPA(ULONG, maxResponses, D1),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, NIPCBase, 35, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP2(ULONG, PingEntity,
         AROS_LPA(struct Entity *, pingtarget, A0),
         AROS_LPA(ULONG, maxTime, D0),
         LIBBASETYPEPTR, NIPCBase, 36, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP2(ULONG, GetEntityAttrsA,
         AROS_LPA(struct Entity *, entity, A0),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, NIPCBase, 37, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP2(void, SetEntityAttrsA,
         AROS_LPA(struct Entity *, entity, A0),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, NIPCBase, 38, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(struct NIPCBuff *, AllocNIPCBuff,
         AROS_LPA(ULONG, entries, D0),
         LIBBASETYPEPTR, NIPCBase, 39, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP0(struct NIPCBuffEntry *, AllocNIPCBuffEntry,
         LIBBASETYPEPTR, NIPCBase, 40, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP5(ULONG, CopyNIPCBuff,
         AROS_LPA(struct NIPCBuff *, src_buff, A0),
         AROS_LPA(struct NIPCBuff *, dest_buff, A1),
         AROS_LPA(ULONG, srcoffset, D0),
         AROS_LPA(ULONG, dstoffset, D1),
         AROS_LPA(ULONG, length, D2),
         LIBBASETYPEPTR, NIPCBase, 41, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP4(ULONG, CopyToNIPCBuff,
         AROS_LPA(UBYTE *, src_data, A0),
         AROS_LPA(struct NIPCBuff *, dest_buff, A1),
         AROS_LPA(ULONG, dstoffset, D0),
         AROS_LPA(ULONG, length, D1),
         LIBBASETYPEPTR, NIPCBase, 42, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP4(ULONG, CopyFromNIPCBuff,
         AROS_LPA(struct NIPCBuff *, src_buff, A0),
         AROS_LPA(UBYTE *, dest_data, A1),
         AROS_LPA(ULONG, srcoffset, D0),
         AROS_LPA(ULONG, length, D1),
         LIBBASETYPEPTR, NIPCBase, 43, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, FreeNIPCBuff,
         AROS_LPA(struct NIPCBuff *, buff, A0),
         LIBBASETYPEPTR, NIPCBase, 44, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, FreeNIPCBuffEntry,
         AROS_LPA(struct NIPCBuffEntry *, entry, A0),
         LIBBASETYPEPTR, NIPCBase, 45, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(ULONG, NIPCBuffLength,
         AROS_LPA(struct NIPCBuff *, buff, A0),
         LIBBASETYPEPTR, NIPCBase, 46, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP2(void, AppendNIPCBuff,
         AROS_LPA(struct NIPCBuff *, first, A0),
         AROS_LPA(struct NIPCBuff *, second, A1),
         LIBBASETYPEPTR, NIPCBase, 47, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(UBYTE *, NIPCBuffPointer,
         AROS_LPA(struct NIPCBuff *, buff, A0),
         AROS_LPA(struct NIPCBuffEntry **, beptr, A1),
         AROS_LPA(ULONG, offset, D0),
         LIBBASETYPEPTR, NIPCBase, 48, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, LockNIPCBuff,
         AROS_LPA(struct NIPCBuff *, buff, A0),
         LIBBASETYPEPTR, NIPCBase, 49, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(struct NIPCBuffEntry *, AllocNIPCBuffEntryWithMem,
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, NIPCBase, 50, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(UWORD, CalcNIPCChecksum,
         AROS_LPA(APTR, data, A0),
         AROS_LPA(ULONG, length, D0),
         AROS_LPA(UWORD, startsum, D1),
         LIBBASETYPEPTR, NIPCBase, 51, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP5(BOOL, SetDeviceIPAddressA,
         AROS_LPA(CONST_STRPTR, devicename, A0),
         AROS_LPA(ULONG, unit, D0),
         AROS_LPA(ULONG, ipaddress, D1),
         AROS_LPA(ULONG, mask, D2),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, NIPCBase, 55, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP4(APTR, AllocateIPProtocolA,
         AROS_LPA(UWORD, protonr, D0),
         AROS_LPA(APTR, input, A0),
         AROS_LPA(APTR, cleanup, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, NIPCBase, 56, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(BOOL, RegisterIPProtocol,
         AROS_LPA(APTR, handle, A0),
         LIBBASETYPEPTR, NIPCBase, 57, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, FreeIPProtocol,
         AROS_LPA(APTR, handle, A0),
         LIBBASETYPEPTR, NIPCBase, 58, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP5(void, SendIPPacketA,
         AROS_LPA(struct NIPCBuff *, data, A0),
         AROS_LPA(ULONG, srcip, D0),
         AROS_LPA(ULONG, destip, D1),
         AROS_LPA(UBYTE, protocol, D2),
         AROS_LPA(struct TagItem *, iptags, A1),
         LIBBASETYPEPTR, NIPCBase, 59, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP8(ULONG, SendICMPMessageA,
         AROS_LPA(UWORD, typeandcode, D0),
         AROS_LPA(ULONG, magicid, D1),
         AROS_LPA(APTR, iphdr, A0),
         AROS_LPA(ULONG, sourceip, D2),
         AROS_LPA(ULONG, destip, D3),
         AROS_LPA(APTR, data, A1),
         AROS_LPA(ULONG, datalen, D4),
         AROS_LPA(struct TagItem *, iptags, A2),
         LIBBASETYPEPTR, NIPCBase, 60, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(APTR, AllocateUDPPortA,
         AROS_LPA(LONG, localport, D0),
         AROS_LPA(APTR, datain, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, NIPCBase, 61, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(BOOL, RegisterUDPPort,
         AROS_LPA(APTR, handle, A0),
         LIBBASETYPEPTR, NIPCBase, 62, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, FreeUDPPort,
         AROS_LPA(APTR, handle, A0),
         LIBBASETYPEPTR, NIPCBase, 63, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP6(void, SendUDPPacketA,
         AROS_LPA(APTR, dataptr, A0),
         AROS_LPA(UWORD, length, D0),
         AROS_LPA(ULONG, destip, D1),
         AROS_LPA(UWORD, srcport, D2),
         AROS_LPA(UWORD, dstport, D3),
         AROS_LPA(struct TagItem *, iptags, A1),
         LIBBASETYPEPTR, NIPCBase, 64, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP0(struct MsgPort *, AllocNIPCEventPort,
         LIBBASETYPEPTR, NIPCBase, 67, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(struct NIPCEvent *, AllocNIPCEvent,
         AROS_LPA(ULONG, eventcode, D0),
         AROS_LPA(APTR, eventdata, A0),
         AROS_LPA(struct MsgPort *, eventport, A1),
         LIBBASETYPEPTR, NIPCBase, 68, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(void, ScheduleNIPCEvent,
         AROS_LPA(struct NIPCEvent *, event, A0),
         AROS_LPA(ULONG, seconds, D0),
         AROS_LPA(ULONG, micros, D1),
         LIBBASETYPEPTR, NIPCBase, 69, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(ULONG, CheckNIPCEvent,
         AROS_LPA(struct NIPCEvent *, event, A0),
         LIBBASETYPEPTR, NIPCBase, 70, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(struct NIPCEvent *, GetNIPCEvent,
         AROS_LPA(struct MsgPort *, eventport, A0),
         LIBBASETYPEPTR, NIPCBase, 71, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(ULONG, GetNIPCEventCode,
         AROS_LPA(struct NIPCEvent *, event, A0),
         LIBBASETYPEPTR, NIPCBase, 72, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(APTR, GetNIPCEventData,
         AROS_LPA(struct NIPCEvent *, event, A0),
         LIBBASETYPEPTR, NIPCBase, 73, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, AbortNIPCEvent,
         AROS_LPA(struct NIPCEvent *, event, A0),
         LIBBASETYPEPTR, NIPCBase, 74, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, FreeNIPCEvent,
         AROS_LPA(struct NIPCEvent *, event, A0),
         LIBBASETYPEPTR, NIPCBase, 75, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, FreeNIPCEventPort,
         AROS_LPA(struct MsgPort *, eventport, A0),
         LIBBASETYPEPTR, NIPCBase, 76, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, NIPCControlA,
         AROS_LPA(struct TagItem *, taglist, A0),
         LIBBASETYPEPTR, NIPCBase, 79, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP1(void, CancelNIPCEvent,
         AROS_LPA(struct NIPCEvent *, event, A0),
         LIBBASETYPEPTR, NIPCBase, 82, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

#if !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__)
AROS_LP3(ULONG, GetNIPCEventTime,
         AROS_LPA(struct NIPCEvent *, event, A0),
         AROS_LPA(struct timeval *, tv, A1),
         AROS_LPA(BOOL, remaining, D0),
         LIBBASETYPEPTR, NIPCBase, 83, NIPC
);

#endif /* !defined(__NIPC_LIBAPI__) || (50 <= __NIPC_LIBAPI__) */

__END_DECLS

#endif /* CLIB_NIPC_PROTOS_H */
