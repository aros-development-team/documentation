#ifndef CLIB_PARTITION_PROTOS_H
#define CLIB_PARTITION_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/rom/partition/partition.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <libraries/partition.h>

/* Helpers: the AROS call convention places QUADs at the end of
 * argument list, so we use these helpers to reorder the arguments into
 * a more natural order.
 */
#define ReadPartitionData(StartBlock, DataSize, Buffer, Partition) \
    ReadPartitionDataQ(DataSize, Buffer, Partition, StartBlock)

/* Partition tables are created and edited with ptedit.library */

__BEGIN_DECLS


#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP2(struct PartitionHandle *, OpenRootPartition,
         AROS_LPA(CONST_STRPTR, Device, A1),
         AROS_LPA(LONG, Unit, D1),
         LIBBASETYPEPTR, PartitionBase, 5, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP1(void, CloseRootPartition,
         AROS_LPA(struct PartitionHandle *, ph, A1),
         LIBBASETYPEPTR, PartitionBase, 6, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP1(LONG, OpenPartitionTable,
         AROS_LPA(struct PartitionHandle *, root, A1),
         LIBBASETYPEPTR, PartitionBase, 7, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP1(void, ClosePartitionTable,
         AROS_LPA(struct PartitionHandle *, root, A1),
         LIBBASETYPEPTR, PartitionBase, 8, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP2(LONG, GetPartitionTableAttrs,
         AROS_LPA(struct PartitionHandle *, root, A1),
         AROS_LPA(const struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, PartitionBase, 9, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP2(LONG, GetPartitionAttrs,
         AROS_LPA(struct PartitionHandle *, ph, A1),
         AROS_LPA(const struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, PartitionBase, 10, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP1(const struct PartitionAttribute *, QueryPartitionTableAttrs,
         AROS_LPA(struct PartitionHandle *, table, A1),
         LIBBASETYPEPTR, PartitionBase, 11, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP1(const struct PartitionAttribute *, QueryPartitionAttrs,
         AROS_LPA(struct PartitionHandle *, table, A1),
         LIBBASETYPEPTR, PartitionBase, 12, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP2(struct Node *, FindFileSystemA,
         AROS_LPA(struct PartitionHandle *, ph, A1),
         AROS_LPA(const struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, PartitionBase, 13, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP1(BPTR, LoadFileSystem,
         AROS_LPA(struct Node *, handle, A1),
         LIBBASETYPEPTR, PartitionBase, 14, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP2(void, GetFileSystemAttrsA,
         AROS_LPA(struct Node *, handle, A1),
         AROS_LPA(const struct TagItem *, taglist, A2),
         LIBBASETYPEPTR, PartitionBase, 15, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP1(LONG, AddBootFileSystem,
         AROS_LPA(struct Node *, handle, A1),
         LIBBASETYPEPTR, PartitionBase, 16, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP0(LONG, LoadBootFileSystems,
         LIBBASETYPEPTR, PartitionBase, 17, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

#if !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__)
AROS_LP4(LONG, ReadPartitionDataQ,
         AROS_LPA(struct PartitionHandle *, Partition, A0),
         AROS_LPA(APTR, Buffer, A1),
         AROS_LPA(ULONG, DataSize, D0),
         AROS_LPA(UQUAD, StartBlock, D1/D2),
         LIBBASETYPEPTR, PartitionBase, 18, Partition
);

#endif /* !defined(__PARTITION_LIBAPI__) || (4 <= __PARTITION_LIBAPI__) */

__END_DECLS

#endif /* CLIB_PARTITION_PROTOS_H */
