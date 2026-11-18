#ifndef CLIB_UTF8PROC_PROTOS_H
#define CLIB_UTF8PROC_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/utf8proc/utf8proc.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <utf8proc.h>

__BEGIN_DECLS


#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_version
const char * utf8proc_version(void);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_unicode_version
const char * utf8proc_unicode_version(void);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_errmsg
const char * utf8proc_errmsg(utf8proc_ssize_t errcode);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_iterate
utf8proc_ssize_t utf8proc_iterate(const utf8proc_uint8_t *str, utf8proc_ssize_t strlen, utf8proc_int32_t *dst);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_codepoint_valid
utf8proc_bool utf8proc_codepoint_valid(utf8proc_int32_t uc);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_encode_char
utf8proc_ssize_t utf8proc_encode_char(utf8proc_int32_t uc, utf8proc_uint8_t *dst);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_get_property
const utf8proc_property_t * utf8proc_get_property(utf8proc_int32_t uc);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_grapheme_break_stateful
utf8proc_bool utf8proc_grapheme_break_stateful(utf8proc_int32_t c1, utf8proc_int32_t c2, utf8proc_int32_t *state);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_grapheme_break
utf8proc_bool utf8proc_grapheme_break(utf8proc_int32_t c1, utf8proc_int32_t c2);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_tolower
utf8proc_int32_t utf8proc_tolower(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_toupper
utf8proc_int32_t utf8proc_toupper(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_totitle
utf8proc_int32_t utf8proc_totitle(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_islower
int utf8proc_islower(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_isupper
int utf8proc_isupper(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_charwidth
int utf8proc_charwidth(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_charwidth_ambiguous
utf8proc_bool utf8proc_charwidth_ambiguous(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_category
utf8proc_category_t utf8proc_category(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_category_string
const char * utf8proc_category_string(utf8proc_int32_t c);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_decompose_char
utf8proc_ssize_t utf8proc_decompose_char(utf8proc_int32_t uc, utf8proc_int32_t *dst, utf8proc_ssize_t bufsize, utf8proc_option_t options, int *last_boundclass);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_decompose
utf8proc_ssize_t utf8proc_decompose(const utf8proc_uint8_t *str, utf8proc_ssize_t strlen, utf8proc_int32_t *buffer, utf8proc_ssize_t bufsize, utf8proc_option_t options);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_decompose_custom
utf8proc_ssize_t utf8proc_decompose_custom(const utf8proc_uint8_t *str, utf8proc_ssize_t strlen, utf8proc_int32_t *buffer, utf8proc_ssize_t bufsize, utf8proc_option_t options, utf8proc_custom_func custom_func, void *custom_data);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_normalize_utf32
utf8proc_ssize_t utf8proc_normalize_utf32(utf8proc_int32_t *buffer, utf8proc_ssize_t length, utf8proc_option_t options);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_reencode
utf8proc_ssize_t utf8proc_reencode(utf8proc_int32_t *buffer, utf8proc_ssize_t length, utf8proc_option_t options);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_map
utf8proc_ssize_t utf8proc_map(const utf8proc_uint8_t *str, utf8proc_ssize_t strlen, utf8proc_uint8_t **dstptr, utf8proc_option_t options);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_map_custom
utf8proc_ssize_t utf8proc_map_custom(const utf8proc_uint8_t *str, utf8proc_ssize_t strlen, utf8proc_uint8_t **dstptr, utf8proc_option_t options, utf8proc_custom_func custom_func, void *custom_data);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_NFD
utf8proc_uint8_t * utf8proc_NFD(const utf8proc_uint8_t *str);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_NFC
utf8proc_uint8_t * utf8proc_NFC(const utf8proc_uint8_t *str);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_NFKD
utf8proc_uint8_t * utf8proc_NFKD(const utf8proc_uint8_t *str);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_NFKC
utf8proc_uint8_t * utf8proc_NFKC(const utf8proc_uint8_t *str);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

#if !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__)
#ifndef utf8proc_NFKC_Casefold
utf8proc_uint8_t * utf8proc_NFKC_Casefold(const utf8proc_uint8_t *str);
#endif

#endif /* !defined(__UTF8PROC_LIBAPI__) || (17 <= __UTF8PROC_LIBAPI__) */

__END_DECLS

#endif /* CLIB_UTF8PROC_PROTOS_H */
