#ifndef CLIB_ENVOY_PROTOS_H
#define CLIB_ENVOY_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/envoy/envoy.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>
#include <utility/tagitem.h>
#include <envoy/envoy.h>

__BEGIN_DECLS


#if !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__)
AROS_LP1(BOOL, HostRequestA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, EnvoyBase, 5, Envoy
);

#endif /* !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__) */

#if !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__)
AROS_LP1(BOOL, LoginRequestA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, EnvoyBase, 6, Envoy
);

#endif /* !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__) */

#if !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__)
AROS_LP1(BOOL, UserRequestA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, EnvoyBase, 7, Envoy
);

#endif /* !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__) */

#if !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__)
AROS_LP1(BOOL, PasswordRequestA,
         AROS_LPA(struct TagItem *, tags, A0),
         LIBBASETYPEPTR, EnvoyBase, 19, Envoy
);

#endif /* !defined(__ENVOY_LIBAPI__) || (50 <= __ENVOY_LIBAPI__) */

__END_DECLS

#endif /* CLIB_ENVOY_PROTOS_H */
