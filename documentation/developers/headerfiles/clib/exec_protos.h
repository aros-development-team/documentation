#ifndef CLIB_EXEC_PROTOS_H
#define CLIB_EXEC_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/exec/exec.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <exec/tasks.h>
#include <exec/memory.h>
#include <exec/ports.h>
#include <exec/devices.h>
#include <exec/io.h>
#include <exec/semaphores.h>
#include <exec/interrupts.h>
#include <exec/pm.h>
#include <exec/avl.h>

#include <dos/bptr.h>

#include <stdarg.h>

__BEGIN_DECLS

#ifndef NewRawDoFmt
STRPTR NewRawDoFmt(CONST_STRPTR FormatString, VOID_FUNC PutChProc, APTR PutChData, ...);
#endif

#ifdef __AROS_GIMME_DEPRECATED_STACKSWAP__

#ifdef __GNUC__

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)

static inline void __attribute__((__always_inline__)) __inline_Exec_StackSwap(struct StackSwapStruct * __arg1, APTR __SysBase)
{
    AROS_LC1NR(void, StackSwap,
        AROS_LCA(struct StackSwapStruct *,(__arg1),A0),
        struct ExecBase *, (__SysBase), 122, Exec
    );
}

#define StackSwap(arg1) \
    __inline_Exec_StackSwap((arg1), (APTR)SysBase)

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#else

#error no StackSwap() support for your compiler 

#endif /* __GNUC__ */

#endif /* __AROS_GIMME_DEPRECATED_STACKSWAP__ */

__END_DECLS


__BEGIN_DECLS


#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(IPTR, Supervisor,
         AROS_LPA(void *, userFunction, A5),
         LIBBASETYPEPTR, SysBase, 5, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(void, Reschedule,
         LIBBASETYPEPTR, SysBase, 8, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(void, Exception,
         LIBBASETYPEPTR, SysBase, 11, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, InitCode,
         AROS_LPA(ULONG, startClass, D0),
         AROS_LPA(ULONG, version, D1),
         LIBBASETYPEPTR, SysBase, 12, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP3(void, InitStruct,
         AROS_LPA(CONST_APTR, initTable, A1),
         AROS_LPA(APTR, memory, A2),
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, SysBase, 13, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP5(struct Library *, MakeLibrary,
         AROS_LPA(CONST_APTR, funcInit, A0),
         AROS_LPA(CONST_APTR, structInit, A1),
         AROS_LPA(ULONG_FUNC, libInit, A2),
         AROS_LPA(ULONG, dataSize, D0),
         AROS_LPA(BPTR, segList, D1),
         LIBBASETYPEPTR, SysBase, 14, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP3(ULONG, MakeFunctions,
         AROS_LPA(APTR, target, A0),
         AROS_LPA(CONST_APTR, functionArray, A1),
         AROS_LPA(CONST_APTR, funcDispBase, A2),
         LIBBASETYPEPTR, SysBase, 15, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct Resident *, FindResident,
         AROS_LPA(const UBYTE *, name, A1),
         LIBBASETYPEPTR, SysBase, 16, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, InitResident,
         AROS_LPA(struct Resident *, resident, A1),
         AROS_LPA(BPTR, segList, D1),
         LIBBASETYPEPTR, SysBase, 17, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, Alert,
         AROS_LPA(ULONG, alertNum, D7),
         LIBBASETYPEPTR, SysBase, 18, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, Debug,
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, SysBase, 19, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(void, Disable,
         LIBBASETYPEPTR, SysBase, 20, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(void, Enable,
         LIBBASETYPEPTR, SysBase, 21, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(void, Forbid,
         LIBBASETYPEPTR, SysBase, 22, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(void, Permit,
         LIBBASETYPEPTR, SysBase, 23, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(ULONG, SetSR,
         AROS_LPA(ULONG, newSR, D0),
         AROS_LPA(ULONG, mask, D1),
         LIBBASETYPEPTR, SysBase, 24, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(APTR, SuperState,
         LIBBASETYPEPTR, SysBase, 25, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, UserState,
         AROS_LPA(APTR, sysStack, D0),
         LIBBASETYPEPTR, SysBase, 26, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(struct Interrupt *, SetIntVector,
         AROS_LPA(ULONG, intNumber, D0),
         AROS_LPA(struct Interrupt *, interrupt, A1),
         LIBBASETYPEPTR, SysBase, 27, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, AddIntServer,
         AROS_LPA(ULONG, intNumber, D0),
         AROS_LPA(struct Interrupt *, interrupt, A1),
         LIBBASETYPEPTR, SysBase, 28, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, RemIntServer,
         AROS_LPA(ULONG, intNumber, D0),
         AROS_LPA(struct Interrupt *, interrupt, A1),
         LIBBASETYPEPTR, SysBase, 29, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, Cause,
         AROS_LPA(struct Interrupt *, softint, A1),
         LIBBASETYPEPTR, SysBase, 30, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, Allocate,
         AROS_LPA(struct MemHeader *, freeList, A0),
         AROS_LPA(IPTR, byteSize, D0),
         LIBBASETYPEPTR, SysBase, 31, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP3(void, Deallocate,
         AROS_LPA(struct MemHeader *, freeList, A0),
         AROS_LPA(APTR, memoryBlock, A1),
         AROS_LPA(IPTR, byteSize, D0),
         LIBBASETYPEPTR, SysBase, 32, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, AllocMem,
         AROS_LPA(IPTR, byteSize, D0),
         AROS_LPA(ULONG, requirements, D1),
         LIBBASETYPEPTR, SysBase, 33, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, AllocAbs,
         AROS_LPA(IPTR, byteSize, D0),
         AROS_LPA(APTR, location, A1),
         LIBBASETYPEPTR, SysBase, 34, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, FreeMem,
         AROS_LPA(APTR, memoryBlock, A1),
         AROS_LPA(IPTR, byteSize, D0),
         LIBBASETYPEPTR, SysBase, 35, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(IPTR, AvailMem,
         AROS_LPA(ULONG, attributes, D1),
         LIBBASETYPEPTR, SysBase, 36, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct MemList *, AllocEntry,
         AROS_LPA(struct MemList *, entry, A0),
         LIBBASETYPEPTR, SysBase, 37, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, FreeEntry,
         AROS_LPA(struct MemList *, entry, A0),
         LIBBASETYPEPTR, SysBase, 38, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP3(void, Insert,
         AROS_LPA(struct List *, list, A0),
         AROS_LPA(struct Node *, node, A1),
         AROS_LPA(struct Node *, pred, A2),
         LIBBASETYPEPTR, SysBase, 39, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, AddHead,
         AROS_LPA(struct List *, list, A0),
         AROS_LPA(struct Node *, node, A1),
         LIBBASETYPEPTR, SysBase, 40, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, AddTail,
         AROS_LPA(struct List *, list, A0),
         AROS_LPA(struct Node *, node, A1),
         LIBBASETYPEPTR, SysBase, 41, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, Remove,
         AROS_LPA(struct Node *, node, A1),
         LIBBASETYPEPTR, SysBase, 42, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct Node *, RemHead,
         AROS_LPA(struct List *, list, A0),
         LIBBASETYPEPTR, SysBase, 43, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct Node *, RemTail,
         AROS_LPA(struct List *, list, A0),
         LIBBASETYPEPTR, SysBase, 44, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, Enqueue,
         AROS_LPA(struct List *, list, A0),
         AROS_LPA(struct Node *, node, A1),
         LIBBASETYPEPTR, SysBase, 45, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(struct Node *, FindName,
         AROS_LPA(struct List *, list, A0),
         AROS_LPA(CONST_STRPTR, name, A1),
         LIBBASETYPEPTR, SysBase, 46, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP3(APTR, AddTask,
         AROS_LPA(struct Task *, task, A1),
         AROS_LPA(APTR, initialPC, A2),
         AROS_LPA(APTR, finalPC, A3),
         LIBBASETYPEPTR, SysBase, 47, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemTask,
         AROS_LPA(struct Task *, task, A1),
         LIBBASETYPEPTR, SysBase, 48, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct Task *, FindTask,
         AROS_LPA(CONST_STRPTR, name, A1),
         LIBBASETYPEPTR, SysBase, 49, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(BYTE, SetTaskPri,
         AROS_LPA(struct Task *, task, A1),
         AROS_LPA(LONG, priority, D0),
         LIBBASETYPEPTR, SysBase, 50, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(ULONG, SetSignal,
         AROS_LPA(ULONG, newSignals, D0),
         AROS_LPA(ULONG, signalSet, D1),
         LIBBASETYPEPTR, SysBase, 51, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(ULONG, SetExcept,
         AROS_LPA(ULONG, newSignals, D0),
         AROS_LPA(ULONG, signalSet, D1),
         LIBBASETYPEPTR, SysBase, 52, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, Wait,
         AROS_LPA(ULONG, signalSet, D0),
         LIBBASETYPEPTR, SysBase, 53, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, Signal,
         AROS_LPA(struct Task *, task, A1),
         AROS_LPA(ULONG, signalSet, D0),
         LIBBASETYPEPTR, SysBase, 54, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(BYTE, AllocSignal,
         AROS_LPA(LONG, signalNum, D0),
         LIBBASETYPEPTR, SysBase, 55, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, FreeSignal,
         AROS_LPA(LONG, signalNum, D0),
         LIBBASETYPEPTR, SysBase, 56, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(LONG, AllocTrap,
         AROS_LPA(long, trapNum, D0),
         LIBBASETYPEPTR, SysBase, 57, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, FreeTrap,
         AROS_LPA(long, trapNum, D0),
         LIBBASETYPEPTR, SysBase, 58, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, AddPort,
         AROS_LPA(struct MsgPort *, port, A1),
         LIBBASETYPEPTR, SysBase, 59, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemPort,
         AROS_LPA(struct MsgPort *, port, A1),
         LIBBASETYPEPTR, SysBase, 60, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, PutMsg,
         AROS_LPA(struct MsgPort *, port, A0),
         AROS_LPA(struct Message *, message, A1),
         LIBBASETYPEPTR, SysBase, 61, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct Message *, GetMsg,
         AROS_LPA(struct MsgPort *, port, A0),
         LIBBASETYPEPTR, SysBase, 62, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, ReplyMsg,
         AROS_LPA(struct Message *, message, A1),
         LIBBASETYPEPTR, SysBase, 63, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct Message *, WaitPort,
         AROS_LPA(struct MsgPort *, port, A0),
         LIBBASETYPEPTR, SysBase, 64, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct MsgPort *, FindPort,
         AROS_LPA(CONST_STRPTR, name, A1),
         LIBBASETYPEPTR, SysBase, 65, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, AddLibrary,
         AROS_LPA(struct Library *, library, A1),
         LIBBASETYPEPTR, SysBase, 66, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemLibrary,
         AROS_LPA(struct Library *, library, A1),
         LIBBASETYPEPTR, SysBase, 67, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct Library *, OldOpenLibrary,
         AROS_LPA(UBYTE *, libName, A1),
         LIBBASETYPEPTR, SysBase, 68, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, CloseLibrary,
         AROS_LPA(struct Library *, library, A1),
         LIBBASETYPEPTR, SysBase, 69, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP3(APTR, SetFunction,
         AROS_LPA(struct Library *, library, A1),
         AROS_LPA(LONG, funcOffset, A0),
         AROS_LPA(APTR, newFunction, D0),
         LIBBASETYPEPTR, SysBase, 70, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, SumLibrary,
         AROS_LPA(struct Library *, library, A1),
         LIBBASETYPEPTR, SysBase, 71, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, AddDevice,
         AROS_LPA(struct Device *, device, A1),
         LIBBASETYPEPTR, SysBase, 72, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemDevice,
         AROS_LPA(struct Device *, device, A1),
         LIBBASETYPEPTR, SysBase, 73, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP4(LONG, OpenDevice,
         AROS_LPA(CONST_STRPTR, devName, A0),
         AROS_LPA(IPTR, unitNumber, D0),
         AROS_LPA(struct IORequest *, iORequest, A1),
         AROS_LPA(ULONG, flags, D1),
         LIBBASETYPEPTR, SysBase, 74, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, CloseDevice,
         AROS_LPA(struct IORequest *, iORequest, A1),
         LIBBASETYPEPTR, SysBase, 75, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(LONG, DoIO,
         AROS_LPA(struct IORequest *, iORequest, A1),
         LIBBASETYPEPTR, SysBase, 76, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, SendIO,
         AROS_LPA(struct IORequest *, iORequest, A1),
         LIBBASETYPEPTR, SysBase, 77, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(struct IORequest *, CheckIO,
         AROS_LPA(struct IORequest *, iORequest, A1),
         LIBBASETYPEPTR, SysBase, 78, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(LONG, WaitIO,
         AROS_LPA(struct IORequest *, iORequest, A1),
         LIBBASETYPEPTR, SysBase, 79, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(LONG, AbortIO,
         AROS_LPA(struct IORequest *, iORequest, A1),
         LIBBASETYPEPTR, SysBase, 80, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, AddResource,
         AROS_LPA(APTR, resource, A1),
         LIBBASETYPEPTR, SysBase, 81, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemResource,
         AROS_LPA(APTR, resource, A1),
         LIBBASETYPEPTR, SysBase, 82, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(APTR, OpenResource,
         AROS_LPA(CONST_STRPTR, resName, A1),
         LIBBASETYPEPTR, SysBase, 83, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(void, RawIOInit,
         LIBBASETYPEPTR, SysBase, 84, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(LONG, RawMayGetChar,
         LIBBASETYPEPTR, SysBase, 85, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(void, RawPutChar,
         AROS_LPA(UBYTE, chr, D0),
         LIBBASETYPEPTR, SysBase, 86, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP4(RAWARG, RawDoFmt,
         AROS_LPA(CONST_STRPTR, FormatString, A0),
         AROS_LPA(RAWARG, DataStream, A1),
         AROS_LPA(VOID_FUNC, PutChProc, A2),
         AROS_LPA(APTR, PutChData, A3),
         LIBBASETYPEPTR, SysBase, 87, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP0(UWORD, GetCC,
         LIBBASETYPEPTR, SysBase, 88, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, TypeOfMem,
         AROS_LPA(APTR, address, A1),
         LIBBASETYPEPTR, SysBase, 89, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(ULONG, Procure,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         AROS_LPA(struct SemaphoreMessage *, bidMsg, A1),
         LIBBASETYPEPTR, SysBase, 90, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(void, Vacate,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         AROS_LPA(struct SemaphoreMessage *, bidMsg, A1),
         LIBBASETYPEPTR, SysBase, 91, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__)
AROS_LP2(struct Library *, OpenLibrary,
         AROS_LPA(CONST_STRPTR, libName, A1),
         AROS_LPA(ULONG, version, D0),
         LIBBASETYPEPTR, SysBase, 92, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (0 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(void, InitSemaphore,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 93, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(void, ObtainSemaphore,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 94, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(void, ReleaseSemaphore,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 95, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, AttemptSemaphore,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 96, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(void, ObtainSemaphoreList,
         AROS_LPA(struct List *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 97, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(void, ReleaseSemaphoreList,
         AROS_LPA(struct List *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 98, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(struct SignalSemaphore *, FindSemaphore,
         AROS_LPA(CONST_STRPTR, name, A1),
         LIBBASETYPEPTR, SysBase, 99, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(void, AddSemaphore,
         AROS_LPA(struct SignalSemaphore *, sigSem, A1),
         LIBBASETYPEPTR, SysBase, 100, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemSemaphore,
         AROS_LPA(struct SignalSemaphore *, sigSem, A1),
         LIBBASETYPEPTR, SysBase, 101, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP0(ULONG, SumKickData,
         LIBBASETYPEPTR, SysBase, 102, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP5(void, AddMemList,
         AROS_LPA(IPTR, size, D0),
         AROS_LPA(ULONG, attributes, D1),
         AROS_LPA(LONG, pri, D2),
         AROS_LPA(APTR, base, A0),
         AROS_LPA(STRPTR, name, A1),
         LIBBASETYPEPTR, SysBase, 103, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP3(void, CopyMem,
         AROS_LPA(CONST_APTR, source, A0),
         AROS_LPA(APTR, dest, A1),
         AROS_LPA(IPTR, size, D0),
         LIBBASETYPEPTR, SysBase, 104, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__)
AROS_LP3(void, CopyMemQuick,
         AROS_LPA(CONST_APTR, source, A0),
         AROS_LPA(APTR, dest, A1),
         AROS_LPA(IPTR, size, D0),
         LIBBASETYPEPTR, SysBase, 105, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (33 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP0(void, CacheClearU,
         LIBBASETYPEPTR, SysBase, 106, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP3(void, CacheClearE,
         AROS_LPA(APTR, address, A0),
         AROS_LPA(IPTR, length, D0),
         AROS_LPA(ULONG, caches, D1),
         LIBBASETYPEPTR, SysBase, 107, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP2(ULONG, CacheControl,
         AROS_LPA(ULONG, cacheBits, D0),
         AROS_LPA(ULONG, cacheMask, D1),
         LIBBASETYPEPTR, SysBase, 108, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, CreateIORequest,
         AROS_LPA(struct MsgPort *, ioReplyPort, A0),
         AROS_LPA(ULONG, size, D0),
         LIBBASETYPEPTR, SysBase, 109, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(void, DeleteIORequest,
         AROS_LPA(APTR, iorequest, A0),
         LIBBASETYPEPTR, SysBase, 110, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP0(struct MsgPort *, CreateMsgPort,
         LIBBASETYPEPTR, SysBase, 111, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(void, DeleteMsgPort,
         AROS_LPA(struct MsgPort *, port, A0),
         LIBBASETYPEPTR, SysBase, 112, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(void, ObtainSemaphoreShared,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 113, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, AllocVec,
         AROS_LPA(IPTR, byteSize, D0),
         AROS_LPA(ULONG, requirements, D1),
         LIBBASETYPEPTR, SysBase, 114, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(void, FreeVec,
         AROS_LPA(APTR, memoryBlock, A1),
         LIBBASETYPEPTR, SysBase, 115, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP3(APTR, CreatePool,
         AROS_LPA(ULONG, requirements, D0),
         AROS_LPA(IPTR, puddleSize, D1),
         AROS_LPA(IPTR, threshSize, D2),
         LIBBASETYPEPTR, SysBase, 116, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(void, DeletePool,
         AROS_LPA(APTR, poolHeader, A0),
         LIBBASETYPEPTR, SysBase, 117, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, AllocPooled,
         AROS_LPA(APTR, poolHeader, A0),
         AROS_LPA(IPTR, memSize, D0),
         LIBBASETYPEPTR, SysBase, 118, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP3(void, FreePooled,
         AROS_LPA(APTR, poolHeader, A0),
         AROS_LPA(APTR, memory, A1),
         AROS_LPA(IPTR, memSize, D0),
         LIBBASETYPEPTR, SysBase, 119, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, AttemptSemaphoreShared,
         AROS_LPA(struct SignalSemaphore *, sigSem, A0),
         LIBBASETYPEPTR, SysBase, 120, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP0(void, ColdReboot,
         LIBBASETYPEPTR, SysBase, 121, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(void, ChildFree,
         AROS_LPA(ULONG, tid, D0),
         LIBBASETYPEPTR, SysBase, 123, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, ChildOrphan,
         AROS_LPA(ULONG, tid, D0),
         LIBBASETYPEPTR, SysBase, 124, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, ChildStatus,
         AROS_LPA(ULONG, tid, D0),
         LIBBASETYPEPTR, SysBase, 125, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP1(IPTR, ChildWait,
         AROS_LPA(ULONG, tid, D0),
         LIBBASETYPEPTR, SysBase, 126, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP3(APTR, CachePreDMA,
         AROS_LPA(APTR, address, A0),
         AROS_LPA(ULONG *, length, A1),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, SysBase, 127, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__)
AROS_LP3(void, CachePostDMA,
         AROS_LPA(APTR, address, A0),
         AROS_LPA(ULONG *, length, A1),
         AROS_LPA(ULONG, flags, D0),
         LIBBASETYPEPTR, SysBase, 128, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (36 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__)
AROS_LP1(void, AddMemHandler,
         AROS_LPA(struct Interrupt *, memHandler, A1),
         LIBBASETYPEPTR, SysBase, 129, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemMemHandler,
         AROS_LPA(struct Interrupt *, memHandler, A1),
         LIBBASETYPEPTR, SysBase, 130, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, ObtainQuickVector,
         AROS_LPA(APTR, interruptCode, A0),
         LIBBASETYPEPTR, SysBase, 131, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__)
AROS_LP3(IPTR, NewStackSwap,
         AROS_LPA(struct StackSwapStruct *, newStack, A0),
         AROS_LPA(APTR, function, A1),
         AROS_LPA(struct StackSwapArgs *, args, A2),
         LIBBASETYPEPTR, SysBase, 134, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__)
AROS_LP1(APTR, TaggedOpenLibrary,
         AROS_LPA(LONG, tag, D0),
         LIBBASETYPEPTR, SysBase, 135, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__)
AROS_LP0(ULONG, ReadGayle,
         LIBBASETYPEPTR, SysBase, 136, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (39 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP4(STRPTR, VNewRawDoFmt,
         AROS_LPA(CONST_STRPTR, FormatString, A0),
         AROS_LPA(VOID_FUNC, PutChProc, A2),
         AROS_LPA(APTR, PutChData, A3),
         AROS_LPA(va_list, VaListStream, A1),
         LIBBASETYPEPTR, SysBase, 137, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP1(void, NewMinList,
         AROS_LPA(struct MinList *, ml, A0),
         LIBBASETYPEPTR, SysBase, 138, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP3(struct AVLNode *, AVL_AddNode,
         AROS_LPA(struct AVLNode **, root, A0),
         AROS_LPA(struct AVLNode *, node, A1),
         AROS_LPA(AVLNODECOMP, func, A2),
         LIBBASETYPEPTR, SysBase, 142, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP2(struct AVLNode *, AVL_RemNodeByAddress,
         AROS_LPA(struct AVLNode **, root, A0),
         AROS_LPA(struct AVLNode *, node, A1),
         LIBBASETYPEPTR, SysBase, 143, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP3(struct AVLNode *, AVL_RemNodeByKey,
         AROS_LPA(struct AVLNode **, root, A0),
         AROS_LPA(AVLKey, key, A1),
         AROS_LPA(AVLKEYCOMP, func, A2),
         LIBBASETYPEPTR, SysBase, 144, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP3(struct AVLNode *, AVL_FindNode,
         AROS_LPA(const struct AVLNode *, root, A0),
         AROS_LPA(AVLKey, key, A1),
         AROS_LPA(AVLKEYCOMP, func, A2),
         LIBBASETYPEPTR, SysBase, 145, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP1(struct AVLNode *, AVL_FindPrevNodeByAddress,
         AROS_LPA(const struct AVLNode *, node, A0),
         LIBBASETYPEPTR, SysBase, 146, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP3(struct AVLNode *, AVL_FindPrevNodeByKey,
         AROS_LPA(const struct AVLNode *, root, A0),
         AROS_LPA(AVLKey, key, A1),
         AROS_LPA(AVLKEYCOMP, func, A2),
         LIBBASETYPEPTR, SysBase, 147, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP1(struct AVLNode *, AVL_FindNextNodeByAddress,
         AROS_LPA(const struct AVLNode *, node, A0),
         LIBBASETYPEPTR, SysBase, 148, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP3(struct AVLNode *, AVL_FindNextNodeByKey,
         AROS_LPA(const struct AVLNode *, node, A0),
         AROS_LPA(AVLKey, key, A1),
         AROS_LPA(AVLKEYCOMP, func, A2),
         LIBBASETYPEPTR, SysBase, 149, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP1(struct AVLNode *, AVL_FindFirstNode,
         AROS_LPA(const struct AVLNode *, root, A0),
         LIBBASETYPEPTR, SysBase, 150, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__)
AROS_LP1(struct AVLNode *, AVL_FindLastNode,
         AROS_LPA(const struct AVLNode *, root, A0),
         LIBBASETYPEPTR, SysBase, 151, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (45 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP1(struct Task *, NewCreateTaskA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, SysBase, 153, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP1(struct Task *, FindTaskByPID,
         AROS_LPA(ULONG, processID, D0),
         LIBBASETYPEPTR, SysBase, 166, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP1(BOOL, AddResetCallback,
         AROS_LPA(struct Interrupt *, resetCallback, A0),
         LIBBASETYPEPTR, SysBase, 167, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP1(void, RemResetCallback,
         AROS_LPA(struct Interrupt *, resetCallback, A0),
         LIBBASETYPEPTR, SysBase, 168, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP2(APTR, AllocVecPooled,
         AROS_LPA(APTR, poolHeader, A0),
         AROS_LPA(IPTR, memSize, D0),
         LIBBASETYPEPTR, SysBase, 169, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP2(void, FreeVecPooled,
         AROS_LPA(APTR, poolHeader, A0),
         AROS_LPA(APTR, memory, A1),
         LIBBASETYPEPTR, SysBase, 170, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP1(ULONG, ShutdownA,
         AROS_LPA(ULONG, action, D0),
         LIBBASETYPEPTR, SysBase, 173, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP2(struct MemList *, NewAllocEntry,
         AROS_LPA(struct MemList *, entry, A0),
         AROS_LPA(ULONG *, return_flags, A1),
         LIBBASETYPEPTR, SysBase, 174, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

#if !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__)
AROS_LP4(APTR, NewAddTask,
         AROS_LPA(struct Task *, task, A1),
         AROS_LPA(APTR, initialPC, A2),
         AROS_LPA(APTR, finalPC, A3),
         AROS_LPA(struct TagItem *, tagList, A4),
         LIBBASETYPEPTR, SysBase, 176, Exec
);

#endif /* !defined(__EXEC_LIBAPI__) || (50 <= __EXEC_LIBAPI__) */

__END_DECLS

#endif /* CLIB_EXEC_PROTOS_H */
