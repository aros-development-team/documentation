#ifndef CLIB_TRANSLATOR_PROTOS_H
#define CLIB_TRANSLATOR_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/translator/translator.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <exec/types.h>

__BEGIN_DECLS


#if !defined(__TRANSLATOR_LIBAPI__) || (50 <= __TRANSLATOR_LIBAPI__)
AROS_LP4(LONG, Translate,
         AROS_LPA(CONST_STRPTR, inputString, A0),
         AROS_LPA(LONG, inputLength, D0),
         AROS_LPA(STRPTR, outputBuffer, A1),
         AROS_LPA(LONG, outputLength, D1),
         LIBBASETYPEPTR, TranslatorBase, 5, Translator
);

#endif /* !defined(__TRANSLATOR_LIBAPI__) || (50 <= __TRANSLATOR_LIBAPI__) */

__END_DECLS

#endif /* CLIB_TRANSLATOR_PROTOS_H */
