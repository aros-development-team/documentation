#ifndef PROTO_USERGROUP_H
#define PROTO_USERGROUP_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/usergroup/usergroup.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/usergroup_protos.h>

struct Library *__aros_getbase_UserGroupBase(void);
 extern const IPTR __aros_rellib_offset_UserGroupBase;
 #define AROS_RELLIB_OFFSET_USERGROUP __aros_rellib_offset_UserGroupBase
 #define AROS_RELLIB_BASE_USERGROUP __aros_rellib_base_UserGroupBase

#if !defined(NOLIBINLINE) && !defined(USERGROUP_NOLIBINLINE) && !defined(__USERGROUP_RELLIBBASE__)
# include <inline/usergroup.h>
#elif !defined(NOLIBDEFINES) && !defined(USERGROUP_NOLIBDEFINES)
# include <defines/usergroup.h>
#endif

#endif /* PROTO_USERGROUP_H */
