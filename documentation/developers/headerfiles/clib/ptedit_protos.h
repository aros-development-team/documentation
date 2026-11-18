#ifndef CLIB_PTEDIT_PROTOS_H
#define CLIB_PTEDIT_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/ptedit/ptedit.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/partition.h>

/* Helper: the AROS call convention places QUADs at the end of
 * argument list, so we use this helper to reorder the arguments into
 * a more natural order.
 */
#define WritePartitionData(StartBlock, DataSize, Buffer, Partition) \
    WritePartitionDataQ(DataSize, Buffer, Partition, StartBlock)

__BEGIN_DECLS


#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP1(LONG, WritePartitionTable,
         AROS_LPA(struct PartitionHandle *, root, A1),
         LIBBASETYPEPTR, PtEditBase, 5, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP2(LONG, CreatePartitionTable,
         AROS_LPA(struct PartitionHandle *, root, A1),
         AROS_LPA(ULONG, type, D1),
         LIBBASETYPEPTR, PtEditBase, 6, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP2(struct PartitionHandle *, AddPartition,
         AROS_LPA(struct PartitionHandle *, root, A1),
         AROS_LPA(const struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, PtEditBase, 7, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP1(void, DeletePartition,
         AROS_LPA(struct PartitionHandle *, ph, A1),
         LIBBASETYPEPTR, PtEditBase, 8, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP2(LONG, SetPartitionTableAttrs,
         AROS_LPA(struct PartitionHandle *, root, A1),
         AROS_LPA(const struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, PtEditBase, 9, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP2(LONG, SetPartitionAttrs,
         AROS_LPA(struct PartitionHandle *, ph, A1),
         AROS_LPA(const struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, PtEditBase, 10, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP1(LONG, DestroyPartitionTable,
         AROS_LPA(struct PartitionHandle *, root, A1),
         LIBBASETYPEPTR, PtEditBase, 11, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

#if !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__)
AROS_LP4(LONG, WritePartitionDataQ,
         AROS_LPA(struct PartitionHandle *, Partition, A0),
         AROS_LPA(APTR, Buffer, A1),
         AROS_LPA(ULONG, DataSize, D0),
         AROS_LPA(UQUAD, StartBlock, D1/D2),
         LIBBASETYPEPTR, PtEditBase, 12, PtEdit
);

#endif /* !defined(__PTEDIT_LIBAPI__) || (1 <= __PTEDIT_LIBAPI__) */

__END_DECLS

#endif /* CLIB_PTEDIT_PROTOS_H */
