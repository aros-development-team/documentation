#ifndef CLIB_KERNEL_PROTOS_H
#define CLIB_KERNEL_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/kernel/kernel.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <aros/types/spinlock_s.h>
#include <aros/kernel.h>
#include <exec/memory.h>
#include <utility/tagitem.h>
#include <utility/hooks.h>

#include <inttypes.h>
#include <stdarg.h>

static inline void __inline_KrnPrintf(APTR __KernelBase, const char *format, ...)
{
    va_list args;

    va_start(args, format);

    AROS_LC2(int, KrnBug,
             AROS_LCA(const char *, format, A0),
             AROS_LCA(va_list, args, A1),
             APTR, __KernelBase, 12, Kernel);

    va_end(args);
}

#define KrnPrintf(...) __inline_KrnPrintf(KernelBase, __VA_ARGS__)


__BEGIN_DECLS


#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(KRN_SchedType, KrnGetScheduler,
         LIBBASETYPEPTR, KernelBase, 1, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnSetScheduler,
         AROS_LPA(KRN_SchedType, sched, D0),
         LIBBASETYPEPTR, KernelBase, 2, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void, KrnCause,
         LIBBASETYPEPTR, KernelBase, 3, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void, KrnDispatch,
         LIBBASETYPEPTR, KernelBase, 4, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void, KrnSwitch,
         LIBBASETYPEPTR, KernelBase, 5, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void, KrnSchedule,
         LIBBASETYPEPTR, KernelBase, 6, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP4(void *, KrnAddIRQHandler,
         AROS_LPA(uint32_t, irq, D0),
         AROS_LPA(void *, handler, A0),
         AROS_LPA(void *, handlerData, A1),
         AROS_LPA(void *, handlerData2, A2),
         LIBBASETYPEPTR, KernelBase, 7, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnRemIRQHandler,
         AROS_LPA(void *, handle, A0),
         LIBBASETYPEPTR, KernelBase, 8, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void, KrnCli,
         LIBBASETYPEPTR, KernelBase, 9, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void, KrnSti,
         LIBBASETYPEPTR, KernelBase, 10, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(struct TagItem *, KrnGetBootInfo,
         LIBBASETYPEPTR, KernelBase, 11, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(int, KrnBug,
         AROS_LPA(const char *, format, A0),
         AROS_LPA(va_list, args, A1),
         LIBBASETYPEPTR, KernelBase, 12, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(int, KrnIsSuper,
         LIBBASETYPEPTR, KernelBase, 13, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP4(void *, KrnAddExceptionHandler,
         AROS_LPA(uint8_t, irq, D0),
         AROS_LPA(void *, handler, A0),
         AROS_LPA(void *, handlerData, A1),
         AROS_LPA(void *, handlerData2, A2),
         LIBBASETYPEPTR, KernelBase, 14, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnRemExceptionHandler,
         AROS_LPA(void *, handle, A0),
         LIBBASETYPEPTR, KernelBase, 15, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP4(int, KrnMapGlobal,
         AROS_LPA(void *, virt, A0),
         AROS_LPA(void *, phys, A1),
         AROS_LPA(uint32_t, length, D0),
         AROS_LPA(KRN_MapAttr, flags, D1),
         LIBBASETYPEPTR, KernelBase, 16, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(int, KrnUnmapGlobal,
         AROS_LPA(void *, virt, A0),
         AROS_LPA(uint32_t, length, D0),
         LIBBASETYPEPTR, KernelBase, 17, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void *, KrnCreateContext,
         LIBBASETYPEPTR, KernelBase, 18, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnDeleteContext,
         AROS_LPA(void *, context, A0),
         LIBBASETYPEPTR, KernelBase, 19, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void *, KrnVirtualToPhysical,
         AROS_LPA(void *, virt, A0),
         LIBBASETYPEPTR, KernelBase, 20, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP3(void, KrnSetProtection,
         AROS_LPA(void *, address, A0),
         AROS_LPA(uint32_t, length, D0),
         AROS_LPA(KRN_MapAttr, flags, D1),
         LIBBASETYPEPTR, KernelBase, 21, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnPutChar,
         AROS_LPA(char, c, D0),
         LIBBASETYPEPTR, KernelBase, 25, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(int, KrnMayGetChar,
         LIBBASETYPEPTR, KernelBase, 26, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP3(void *, KrnAllocPages,
         AROS_LPA(void *, addr, A0),
         AROS_LPA(uintptr_t, length, D0),
         AROS_LPA(uint32_t, flags, D1),
         LIBBASETYPEPTR, KernelBase, 27, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(void, KrnFreePages,
         AROS_LPA(void *, phy_addr, A0),
         AROS_LPA(uintptr_t, length, D0),
         LIBBASETYPEPTR, KernelBase, 28, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(intptr_t, KrnGetSystemAttr,
         AROS_LPA(uint32_t, id, D0),
         LIBBASETYPEPTR, KernelBase, 29, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP3(int, KrnFormatStr,
         AROS_LPA(void *, putch, A0),
         AROS_LPA(const char *, format, A1),
         AROS_LPA(va_list, args, A2),
         LIBBASETYPEPTR, KernelBase, 30, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnInitMemory,
         AROS_LPA(struct MemHeader *, mh, A0),
         LIBBASETYPEPTR, KernelBase, 31, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(ULONG, KrnStatMemoryA,
         AROS_LPA(uint32_t, flags, D0),
         AROS_LPA(struct TagItem *, query, A0),
         LIBBASETYPEPTR, KernelBase, 32, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(int, KrnObtainInput,
         LIBBASETYPEPTR, KernelBase, 33, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void, KrnReleaseInput,
         LIBBASETYPEPTR, KernelBase, 34, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(void, KrnDisplayAlert,
         AROS_LPA(uint32_t, code, D0),
         AROS_LPA(const char *, text, A0),
         LIBBASETYPEPTR, KernelBase, 35, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP3(void, KrnModifyIRQHandler,
         AROS_LPA(void *, handle, A0),
         AROS_LPA(void *, handlerData, A1),
         AROS_LPA(void *, handlerData2, A2),
         LIBBASETYPEPTR, KernelBase, 37, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(ULONG, KrnAllocIRQ,
         AROS_LPA(ULONG, irq_type, D0),
         AROS_LPA(ULONG, count, D1),
         LIBBASETYPEPTR, KernelBase, 38, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(ULONG, KrnModifyIRQA,
         AROS_LPA(ULONG, irq, D0),
         AROS_LPA(struct TagItem *, attribs, A0),
         LIBBASETYPEPTR, KernelBase, 39, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(unsigned int, KrnGetCPUCount,
         LIBBASETYPEPTR, KernelBase, 40, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(uint32_t, KrnGetCPUNumber,
         LIBBASETYPEPTR, KernelBase, 41, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(void *, KrnAllocCPUMask,
         LIBBASETYPEPTR, KernelBase, 42, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void *, KrnFreeCPUMask,
         AROS_LPA(void *, , A0),
         LIBBASETYPEPTR, KernelBase, 43, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnClearCPUMask,
         AROS_LPA(void *, , A0),
         LIBBASETYPEPTR, KernelBase, 44, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(void, KrnGetCPUMask,
         AROS_LPA(uint32_t, number, D0),
         AROS_LPA(void *, , A0),
         LIBBASETYPEPTR, KernelBase, 45, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(BOOL, KrnCPUInMask,
         AROS_LPA(uint32_t, number, D0),
         AROS_LPA(void *, , A0),
         LIBBASETYPEPTR, KernelBase, 46, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnScheduleCPU,
         AROS_LPA(void *, mask, A0),
         LIBBASETYPEPTR, KernelBase, 47, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnSpinInit,
         AROS_LPA(spinlock_t *, lock, A0),
         LIBBASETYPEPTR, KernelBase, 49, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(int, KrnSpinIsLocked,
         AROS_LPA(spinlock_t *, lock, A0),
         LIBBASETYPEPTR, KernelBase, 50, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(spinlock_t *, KrnSpinTryLock,
         AROS_LPA(spinlock_t *, lock, A0),
         AROS_LPA(ULONG, mode, D0),
         LIBBASETYPEPTR, KernelBase, 51, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP3(spinlock_t *, KrnSpinLock,
         AROS_LPA(spinlock_t *, lock, A1),
         AROS_LPA(struct Hook *, failhook, A0),
         AROS_LPA(ULONG, mode, D0),
         LIBBASETYPEPTR, KernelBase, 52, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnSpinUnLock,
         AROS_LPA(spinlock_t *, lock, A0),
         LIBBASETYPEPTR, KernelBase, 53, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(void, KrnFreeIRQ,
         AROS_LPA(ULONG, start, D0),
         AROS_LPA(ULONG, count, D1),
         LIBBASETYPEPTR, KernelBase, 55, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(void, KrnRegisterClockSource,
         AROS_LPA(APTR, csbase, A0),
         AROS_LPA(struct TagItem *, cstags, A1),
         LIBBASETYPEPTR, KernelBase, 57, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(void, KrnExitInterrupt,
         AROS_LPA(APTR, ctx, A0),
         LIBBASETYPEPTR, KernelBase, 62, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(void, KrnGetIRQA,
         AROS_LPA(ULONG, irq, D0),
         AROS_LPA(struct TagItem *, attribs, A0),
         LIBBASETYPEPTR, KernelBase, 63, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP0(UQUAD, KrnTimeStamp,
         LIBBASETYPEPTR, KernelBase, 64, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(void, KrnFmtAlertInfo,
         AROS_LPA(STRPTR *, TemplatePtr, A0),
         AROS_LPA(IPTR *, ParamPtr, A1),
         LIBBASETYPEPTR, KernelBase, 65, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(LONG, KrnRegisterSymResolver,
         AROS_LPA(KrnSymResolver_t, resolver, A0),
         AROS_LPA(APTR, priv, A1),
         LIBBASETYPEPTR, KernelBase, 67, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP1(LONG, KrnUnregisterSymResolver,
         AROS_LPA(KrnSymResolver_t, resolver, A0),
         LIBBASETYPEPTR, KernelBase, 68, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP3(ULONG, KrnBacktraceFromFrame,
         AROS_LPA(APTR, frame_in, A0),
         AROS_LPA(APTR *, out_pcs, A1),
         AROS_LPA(ULONG, max_depth, D0),
         LIBBASETYPEPTR, KernelBase, 69, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP3(VOID, KrnPrintBacktrace,
         AROS_LPA(const STRPTR, prefix, A0),
         AROS_LPA(APTR *, pcs, A1),
         AROS_LPA(ULONG, depth, D0),
         LIBBASETYPEPTR, KernelBase, 70, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

#if !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__)
AROS_LP2(intptr_t, KrnGetCPUAttr,
         AROS_LPA(uint32_t, id, D0),
         AROS_LPA(uint32_t, cpu, D1),
         LIBBASETYPEPTR, KernelBase, 71, Kernel
);

#endif /* !defined(__KERNEL_LIBAPI__) || (4 <= __KERNEL_LIBAPI__) */

__END_DECLS

#endif /* CLIB_KERNEL_PROTOS_H */
