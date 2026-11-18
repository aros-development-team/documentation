#ifndef PROTO_ACCOUNTS_H
#define PROTO_ACCOUNTS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/network/envoy/accounts/accounts.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/accounts_protos.h>

#ifndef __ACCOUNTS_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__ACCOUNTS_NOLIBBASE__)
  #if !defined(AccountsBase)
   extern struct Library *AccountsBase;
  #endif
  #ifndef __aros_getbase_AccountsBase
   #define __aros_getbase_AccountsBase() (AccountsBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __ACCOUNTS_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_AccountsBase;
 #define AROS_RELLIB_OFFSET_ACCOUNTS __aros_rellib_offset_AccountsBase
 #define AROS_RELLIB_BASE_ACCOUNTS __aros_rellib_base_AccountsBase
 #ifndef __aros_getbase_AccountsBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_AccountsBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_AccountsBase))
 #endif
#endif

#ifndef __aros_getbase_AccountsBase
extern struct Library *__aros_getbase_AccountsBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(ACCOUNTS_NOLIBINLINE) && !defined(__ACCOUNTS_RELLIBBASE__)
# include <inline/accounts.h>
#elif !defined(NOLIBDEFINES) && !defined(ACCOUNTS_NOLIBDEFINES)
# include <defines/accounts.h>
#endif

#endif /* PROTO_ACCOUNTS_H */
