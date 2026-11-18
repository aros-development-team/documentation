#ifndef CLIB_LZMA_PROTOS_H
#define CLIB_LZMA_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/lzma/lzma.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <stdarg.h>
#include <lzma.h>

__BEGIN_DECLS


#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_version_string
const char * lzma_version_string(void);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_version_number
uint32_t lzma_version_number(void);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_code
lzma_ret lzma_code(lzma_stream *strm, lzma_action action);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_end
void lzma_end(lzma_stream *strm);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_get_progress
void lzma_get_progress(lzma_stream *strm, uint64_t *progress_in, uint64_t *progress_out);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_memusage
uint64_t lzma_memusage(const lzma_stream *strm);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_memlimit_get
uint64_t lzma_memlimit_get(const lzma_stream *strm);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_memlimit_set
lzma_ret lzma_memlimit_set(lzma_stream *strm, uint64_t memlimit);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_mf_is_supported
lzma_bool lzma_mf_is_supported(lzma_match_finder match_finder);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_mode_is_supported
lzma_bool lzma_mode_is_supported(lzma_mode mode);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_lzma_preset
lzma_bool lzma_lzma_preset(lzma_options_lzma *options, uint32_t preset);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_header_encode
lzma_ret lzma_stream_header_encode(const lzma_stream_flags *options, uint8_t *out);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_footer_encode
lzma_ret lzma_stream_footer_encode(const lzma_stream_flags *options, uint8_t *out);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_header_decode
lzma_ret lzma_stream_header_decode(lzma_stream_flags *options, const uint8_t *in);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_footer_decode
lzma_ret lzma_stream_footer_decode(lzma_stream_flags *options, const uint8_t *in);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_flags_compare
lzma_ret lzma_stream_flags_compare(const lzma_stream_flags *a, const lzma_stream_flags *b);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_easy_encoder_memusage
uint64_t lzma_easy_encoder_memusage(uint32_t preset);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_easy_decoder_memusage
uint64_t lzma_easy_decoder_memusage(uint32_t preset);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_easy_encoder
lzma_ret lzma_easy_encoder(lzma_stream *strm, uint32_t preset, lzma_check check);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_easy_buffer_encode
lzma_ret lzma_easy_buffer_encode(uint32_t preset, lzma_check check, const lzma_allocator *allocator, const uint8_t *in, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_encoder
lzma_ret lzma_stream_encoder(lzma_stream *strm, const lzma_filter *filters, lzma_check check);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_mt_block_size
uint64_t lzma_mt_block_size(const lzma_filter *filters);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_alone_encoder
lzma_ret lzma_alone_encoder(lzma_stream *strm, const lzma_options_lzma *options);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_buffer_bound
size_t lzma_stream_buffer_bound(size_t uncompressed_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_buffer_encode
lzma_ret lzma_stream_buffer_encode(lzma_filter *filters, lzma_check check, const lzma_allocator *allocator, const uint8_t *in, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_microlzma_encoder
lzma_ret lzma_microlzma_encoder(lzma_stream *strm, const lzma_options_lzma *options);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_decoder
lzma_ret lzma_stream_decoder(lzma_stream *strm, uint64_t memlimit, uint32_t flags);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_auto_decoder
lzma_ret lzma_auto_decoder(lzma_stream *strm, uint64_t memlimit, uint32_t flags);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_alone_decoder
lzma_ret lzma_alone_decoder(lzma_stream *strm, uint64_t memlimit);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_lzip_decoder
lzma_ret lzma_lzip_decoder(lzma_stream *strm, uint64_t memlimit, uint32_t flags);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_stream_buffer_decode
lzma_ret lzma_stream_buffer_decode(uint64_t *memlimit, uint32_t flags, const lzma_allocator *allocator, const uint8_t *in, size_t *in_pos, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_microlzma_decoder
lzma_ret lzma_microlzma_decoder(lzma_stream *strm, uint64_t comp_size, uint64_t uncomp_size, lzma_bool uncomp_size_is_exact, uint32_t dict_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_header_size
lzma_ret lzma_block_header_size(lzma_block *block);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_header_encode
lzma_ret lzma_block_header_encode(const lzma_block *block, uint8_t *out);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_header_decode
lzma_ret lzma_block_header_decode(lzma_block *block, const lzma_allocator *allocator, const uint8_t *in);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_compressed_size
lzma_ret lzma_block_compressed_size(lzma_block *block, lzma_vli unpadded_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_unpadded_size
lzma_vli lzma_block_unpadded_size(const lzma_block *block);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_total_size
lzma_vli lzma_block_total_size(const lzma_block *block);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_encoder
lzma_ret lzma_block_encoder(lzma_stream *strm, lzma_block *block);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_decoder
lzma_ret lzma_block_decoder(lzma_stream *strm, lzma_block *block);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_buffer_bound
size_t lzma_block_buffer_bound(size_t uncompressed_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_buffer_encode
lzma_ret lzma_block_buffer_encode(lzma_block *block, const lzma_allocator *allocator, const uint8_t *in, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_uncomp_encode
lzma_ret lzma_block_uncomp_encode(lzma_block *block, const uint8_t *in, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_block_buffer_decode
lzma_ret lzma_block_buffer_decode(lzma_block *block, const lzma_allocator *allocator, const uint8_t *in, size_t *in_pos, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_check_is_supported
lzma_bool lzma_check_is_supported(lzma_check check);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_check_size
uint32_t lzma_check_size(lzma_check check);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_crc32
uint32_t lzma_crc32(const uint8_t *buf, size_t size, uint32_t crc);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_crc64
uint64_t lzma_crc64(const uint8_t *buf, size_t size, uint64_t crc);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_get_check
lzma_check lzma_get_check(const lzma_stream *strm);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filter_encoder_is_supported
lzma_bool lzma_filter_encoder_is_supported(lzma_vli id);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filter_decoder_is_supported
lzma_bool lzma_filter_decoder_is_supported(lzma_vli id);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filters_copy
lzma_ret lzma_filters_copy(const lzma_filter *src, lzma_filter *dest, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filters_free
void lzma_filters_free(lzma_filter *filters, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_raw_encoder_memusage
uint64_t lzma_raw_encoder_memusage(const lzma_filter *filters);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_raw_decoder_memusage
uint64_t lzma_raw_decoder_memusage(const lzma_filter *filters);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_raw_encoder
lzma_ret lzma_raw_encoder(lzma_stream *strm, const lzma_filter *filters);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_raw_decoder
lzma_ret lzma_raw_decoder(lzma_stream *strm, const lzma_filter *filters);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filters_update
lzma_ret lzma_filters_update(lzma_stream *strm, const lzma_filter *filters);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_raw_buffer_encode
lzma_ret lzma_raw_buffer_encode(const lzma_filter *filters, const lzma_allocator *allocator, const uint8_t *in, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_raw_buffer_decode
lzma_ret lzma_raw_buffer_decode(const lzma_filter *filters, const lzma_allocator *allocator, const uint8_t *in, size_t *in_pos, size_t in_size, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_properties_size
lzma_ret lzma_properties_size(uint32_t *size, const lzma_filter *filter);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_properties_encode
lzma_ret lzma_properties_encode(const lzma_filter *filter, uint8_t *props);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_properties_decode
lzma_ret lzma_properties_decode(lzma_filter *filter, const lzma_allocator *allocator, const uint8_t *props, size_t props_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filter_flags_size
lzma_ret lzma_filter_flags_size(uint32_t *size, const lzma_filter *filter);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filter_flags_encode
lzma_ret lzma_filter_flags_encode(const lzma_filter *filter, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_filter_flags_decode
lzma_ret lzma_filter_flags_decode(lzma_filter *filter, const lzma_allocator *allocator, const uint8_t *in, size_t *in_pos, size_t in_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_str_to_filters
const char * lzma_str_to_filters(const char *str, int *error_pos, lzma_filter *filters, uint32_t flags, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_str_from_filters
lzma_ret lzma_str_from_filters(char **str, const lzma_filter *filters, uint32_t flags, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_str_list_filters
lzma_ret lzma_str_list_filters(char **str, lzma_vli filter_id, uint32_t flags, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_memusage
uint64_t lzma_index_memusage(lzma_vli streams, lzma_vli blocks);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_memused
uint64_t lzma_index_memused(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_init
lzma_index * lzma_index_init(const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_end
void lzma_index_end(lzma_index *i, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_append
lzma_ret lzma_index_append(lzma_index *i, const lzma_allocator *allocator, lzma_vli unpadded_size, lzma_vli uncompressed_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_stream_flags
lzma_ret lzma_index_stream_flags(lzma_index *i, const lzma_stream_flags *stream_flags);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_checks
uint32_t lzma_index_checks(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_stream_padding
lzma_ret lzma_index_stream_padding(lzma_index *i, lzma_vli stream_padding);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_stream_count
lzma_vli lzma_index_stream_count(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_block_count
lzma_vli lzma_index_block_count(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_size
lzma_vli lzma_index_size(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_stream_size
lzma_vli lzma_index_stream_size(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_total_size
lzma_vli lzma_index_total_size(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_file_size
lzma_vli lzma_index_file_size(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_uncompressed_size
lzma_vli lzma_index_uncompressed_size(const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_iter_init
void lzma_index_iter_init(lzma_index_iter *iter, const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_iter_rewind
void lzma_index_iter_rewind(lzma_index_iter *iter);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_iter_next
lzma_bool lzma_index_iter_next(lzma_index_iter *iter, lzma_index_iter_mode mode);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_iter_locate
lzma_bool lzma_index_iter_locate(lzma_index_iter *iter, lzma_vli target);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_cat
lzma_ret lzma_index_cat(lzma_index *dest, lzma_index *src, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_dup
lzma_index * lzma_index_dup(const lzma_index *i, const lzma_allocator *allocator);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_encoder
lzma_ret lzma_index_encoder(lzma_stream *strm, const lzma_index *i);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_decoder
lzma_ret lzma_index_decoder(lzma_stream *strm, lzma_index **i, uint64_t memlimit);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_buffer_encode
lzma_ret lzma_index_buffer_encode(const lzma_index *i, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_index_buffer_decode
lzma_ret lzma_index_buffer_decode(lzma_index **i, uint64_t *memlimit, const lzma_allocator *allocator, const uint8_t *in, size_t *in_pos, size_t in_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_file_info_decoder
lzma_ret lzma_file_info_decoder(lzma_stream *strm, lzma_index **dest_index, uint64_t memlimit, uint64_t file_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_vli_size
uint32_t lzma_vli_size(lzma_vli vli);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_vli_encode
lzma_ret lzma_vli_encode(lzma_vli vli, size_t *vli_pos, uint8_t *out, size_t *out_pos, size_t out_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

#if !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__)
#ifndef lzma_vli_decode
lzma_ret lzma_vli_decode(lzma_vli *vli, size_t *vli_pos, const uint8_t *in, size_t *in_pos, size_t in_size);
#endif

#endif /* !defined(__LZMA_LIBAPI__) || (5 <= __LZMA_LIBAPI__) */

__END_DECLS

#endif /* CLIB_LZMA_PROTOS_H */
