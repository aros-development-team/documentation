#ifndef PROTO_TEXTFIELD_H
#define PROTO_TEXTFIELD_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/classes/reaction/textfield/textfield.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <aros/system.h>

#include <clib/textfield_protos.h>

#ifndef __TEXTFIELD_RELLIBBASE__
 #if !defined(__NOLIBBASE__) && !defined(__TEXTFIELD_NOLIBBASE__)
  #if !defined(TextFieldBase)
   extern struct Library *TextFieldBase;
  #endif
  #ifndef __aros_getbase_TextFieldBase
   #define __aros_getbase_TextFieldBase() (TextFieldBase)
  #endif
 #endif /* defined(__NOLIBBASE__) || defined(__DUMMY_NOLIBBASE__) */
#else /* __TEXTFIELD_RELLIBASE__ */
 extern const IPTR __aros_rellib_offset_TextFieldBase;
 #define AROS_RELLIB_OFFSET_TEXTFIELD __aros_rellib_offset_TextFieldBase
 #define AROS_RELLIB_BASE_TEXTFIELD __aros_rellib_base_TextFieldBase
 #ifndef __aros_getbase_TextFieldBase
  #ifndef __aros_getoffsettable
   char *__aros_getoffsettable(void);
  #endif
  #define __aros_getbase_TextFieldBase() (*(struct Library **)(__aros_getoffsettable()+__aros_rellib_offset_TextFieldBase))
 #endif
#endif

#ifndef __aros_getbase_TextFieldBase
extern struct Library *__aros_getbase_TextFieldBase(void);
#endif

#if !defined(NOLIBINLINE) && !defined(TEXTFIELD_NOLIBINLINE) && !defined(__TEXTFIELD_RELLIBBASE__)
# include <inline/textfield.h>
#elif !defined(NOLIBDEFINES) && !defined(TEXTFIELD_NOLIBDEFINES)
# include <defines/textfield.h>
#endif

#endif /* PROTO_TEXTFIELD_H */
