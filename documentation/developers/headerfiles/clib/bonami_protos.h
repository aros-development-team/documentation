#ifndef CLIB_BONAMI_PROTOS_H
#define CLIB_BONAMI_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/mdns/library/bonami.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <utility/tagitem.h>
#include <bonami/mdns.h>

__BEGIN_DECLS


#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP0(LONG, OpenMDNSEngine,
         LIBBASETYPEPTR, BonamiBase, 5, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP0(void, CloseMDNSEngine,
         LIBBASETYPEPTR, BonamiBase, 6, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(LONG, RegisterServiceA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, BonamiBase, 7, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP2(LONG, UpdateServiceA,
         AROS_LPA(MDNSRegisterRef, ref, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, BonamiBase, 8, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(void, DeregisterService,
         AROS_LPA(MDNSRegisterRef, ref, A0),
         LIBBASETYPEPTR, BonamiBase, 9, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP3(LONG, BrowseServiceTypeA,
         AROS_LPA(STRPTR, type, A0),
         AROS_LPA(struct Hook *, hook, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, BonamiBase, 10, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(void, StopBrowse,
         AROS_LPA(MDNSBrowseRef, ref, A0),
         LIBBASETYPEPTR, BonamiBase, 11, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP4(LONG, ResolveServiceA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(STRPTR, type, A1),
         AROS_LPA(struct Hook *, hook, A2),
         AROS_LPA(struct TagItem *, tags, A3),
         LIBBASETYPEPTR, BonamiBase, 12, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(void, StopResolve,
         AROS_LPA(MDNSResolveRef, ref, A0),
         LIBBASETYPEPTR, BonamiBase, 13, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP3(LONG, MakeTXTRecordA,
         AROS_LPA(struct TagItem *, tags, A0),
         AROS_LPA(APTR *, record, A1),
         AROS_LPA(ULONG *, recordLen, A2),
         LIBBASETYPEPTR, BonamiBase, 14, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(void, FreeTXTRecord,
         AROS_LPA(APTR, record, A0),
         LIBBASETYPEPTR, BonamiBase, 15, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(LONG, GetMDNSStatusA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, BonamiBase, 16, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP4(LONG, InquiryFromNIPCTagsA,
         AROS_LPA(struct Hook *, hook, A0),
         AROS_LPA(ULONG, maxTime, D0),
         AROS_LPA(ULONG, maxResponses, D1),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, BonamiBase, 17, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(LONG, PublishNIPCEntitiesA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, BonamiBase, 18, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP0(void, UnpublishNIPCEntitiesA,
         LIBBASETYPEPTR, BonamiBase, 19, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP2(LONG, ReadMDNSEvent,
         AROS_LPA(APTR, ref, A0),
         AROS_LPA(struct MDNSDiscoveryEvent *, event, A1),
         LIBBASETYPEPTR, BonamiBase, 20, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP2(LONG, RequestMDNSEvent,
         AROS_LPA(APTR, ref, A0),
         AROS_LPA(struct MDNSEventRequest *, request, A1),
         LIBBASETYPEPTR, BonamiBase, 21, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP3(LONG, LookupHostA,
         AROS_LPA(STRPTR, host, A0),
         AROS_LPA(ULONG *, addr, A1),
         AROS_LPA(struct TagItem *, tags, A2),
         LIBBASETYPEPTR, BonamiBase, 22, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP3(LONG, QueryRecordA,
         AROS_LPA(STRPTR, name, A0),
         AROS_LPA(ULONG, rrtype, D0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, BonamiBase, 23, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP1(void, StopQuery,
         AROS_LPA(MDNSQueryRef, ref, A0),
         LIBBASETYPEPTR, BonamiBase, 24, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

#if !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__)
AROS_LP2(LONG, ReadMDNSRecordEvent,
         AROS_LPA(MDNSQueryRef, ref, A0),
         AROS_LPA(struct MDNSRecordEvent *, event, A1),
         LIBBASETYPEPTR, BonamiBase, 25, Bonami
);

#endif /* !defined(__BONAMI_LIBAPI__) || (41 <= __BONAMI_LIBAPI__) */

__END_DECLS

#endif /* CLIB_BONAMI_PROTOS_H */
