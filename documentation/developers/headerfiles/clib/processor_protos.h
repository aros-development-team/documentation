#ifndef CLIB_PROCESSOR_PROTOS_H
#define CLIB_PROCESSOR_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/processor/processor.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


#include <utility/tagitem.h>
#include <resources/processor.h>


__BEGIN_DECLS


#if !defined(__PROCESSOR_LIBAPI__) || (2 <= __PROCESSOR_LIBAPI__)
AROS_LP1(VOID, GetCPUInfo,
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, ProcessorBase, 1, Processor
);

#endif /* !defined(__PROCESSOR_LIBAPI__) || (2 <= __PROCESSOR_LIBAPI__) */

#if !defined(__PROCESSOR_LIBAPI__) || (2 <= __PROCESSOR_LIBAPI__)
AROS_LP0(const struct ProcessorTopology *, GetCPUTopology,
         LIBBASETYPEPTR, ProcessorBase, 2, Processor
);

#endif /* !defined(__PROCESSOR_LIBAPI__) || (2 <= __PROCESSOR_LIBAPI__) */

#if !defined(__PROCESSOR_LIBAPI__) || (2 <= __PROCESSOR_LIBAPI__)
AROS_LP2(BOOL, GetCoreInfo,
         AROS_LPA(ULONG, coreNo, D0),
         AROS_LPA(struct TagItem *, tagList, A0),
         LIBBASETYPEPTR, ProcessorBase, 3, Processor
);

#endif /* !defined(__PROCESSOR_LIBAPI__) || (2 <= __PROCESSOR_LIBAPI__) */

__END_DECLS

#endif /* CLIB_PROCESSOR_PROTOS_H */
