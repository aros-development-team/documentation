#ifndef CLIB_SERVICES_PROTOS_H
#define CLIB_SERVICES_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/services/services.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <utility/tagitem.h>
#include <envoy/nipc.h>
#include <envoy/services.h>

struct ServiceNode;

__BEGIN_DECLS


#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP4(struct Entity *, FindServiceA,
         AROS_LPA(CONST_STRPTR, remoteHost, A0),
         AROS_LPA(CONST_STRPTR, serviceName, A1),
         AROS_LPA(struct Entity *, srcEntity, A2),
         AROS_LPA(struct TagItem *, tagList, A3),
         LIBBASETYPEPTR, ServicesBase, 5, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP1(void, LoseService,
         AROS_LPA(struct Entity *, entity, A0),
         LIBBASETYPEPTR, ServicesBase, 6, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP0(struct ServiceNode *, LockServiceList,
         LIBBASETYPEPTR, ServicesBase, 7, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP0(void, UnlockServiceList,
         LIBBASETYPEPTR, ServicesBase, 8, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP1(struct ServiceNode *, NextService,
         AROS_LPA(struct ServiceNode *, node, A0),
         LIBBASETYPEPTR, ServicesBase, 9, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP2(void, GetServiceAttrsA,
         AROS_LPA(struct ServiceNode *, node, A0),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, ServicesBase, 10, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP2(void, SetServiceAttrsA,
         AROS_LPA(struct ServiceNode *, node, A0),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, ServicesBase, 11, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP3(BOOL, AddService,
         AROS_LPA(CONST_STRPTR, name, A0),
         AROS_LPA(CONST_STRPTR, path, A1),
         AROS_LPA(struct TagItem *, tagList, A2),
         LIBBASETYPEPTR, ServicesBase, 12, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP1(struct ServiceNode *, FindServiceByName,
         AROS_LPA(CONST_STRPTR, name, A0),
         LIBBASETYPEPTR, ServicesBase, 13, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

#if !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__)
AROS_LP1(void, MarkServiceTemp,
         AROS_LPA(struct ServiceNode *, node, A0),
         LIBBASETYPEPTR, ServicesBase, 14, Services
);

#endif /* !defined(__SERVICES_LIBAPI__) || (50 <= __SERVICES_LIBAPI__) */

__END_DECLS

#endif /* CLIB_SERVICES_PROTOS_H */
