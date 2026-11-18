#ifndef CLIB_JFIF_PROTOS_H
#define CLIB_JFIF_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/jpeg/jfif.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <stdio.h>
#include <jpeglib.h>

__BEGIN_DECLS


#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_CreateCompress
void jpeg_CreateCompress(j_compress_ptr cinfo, int version, size_t structsize);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_CreateDecompress
void jpeg_CreateDecompress(j_decompress_ptr cinfo, int version, size_t structsize);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_destroy_compress
void jpeg_destroy_compress(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_destroy_decompress
void jpeg_destroy_decompress(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_set_defaults
void jpeg_set_defaults(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_set_colorspace
void jpeg_set_colorspace(j_compress_ptr cinfo, J_COLOR_SPACE colorspace);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_default_colorspace
void jpeg_default_colorspace(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_set_quality
void jpeg_set_quality(j_compress_ptr cinfo, int quality, boolean force_baseline);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_set_linear_quality
void jpeg_set_linear_quality(j_compress_ptr cinfo, int scale_factor, boolean force_baseline);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_add_quant_table
void jpeg_add_quant_table(j_compress_ptr cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, boolean force_baseline);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_quality_scaling
int jpeg_quality_scaling(int quality);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_simple_progression
void jpeg_simple_progression(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_suppress_tables
void jpeg_suppress_tables(j_compress_ptr cinfo, boolean suppress);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_alloc_quant_table
JQUANT_TBL * jpeg_alloc_quant_table(j_common_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_alloc_huff_table
JHUFF_TBL * jpeg_alloc_huff_table(j_common_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_start_compress
void jpeg_start_compress(j_compress_ptr cinfo, boolean write_all_tables);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_write_scanlines
JDIMENSION jpeg_write_scanlines(j_compress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION num_lines);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_finish_compress
void jpeg_finish_compress(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_write_raw_data
JDIMENSION jpeg_write_raw_data(j_compress_ptr cinfo, JSAMPIMAGE data, JDIMENSION num_lines);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_write_marker
void jpeg_write_marker(j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_write_m_header
void jpeg_write_m_header(j_compress_ptr cinfo, int marker, unsigned int datalen);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_write_m_byte
void jpeg_write_m_byte(j_compress_ptr cinfo, int val);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_write_tables
void jpeg_write_tables(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_read_header
int jpeg_read_header(j_decompress_ptr cinfo, boolean require_image);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_start_decompress
boolean jpeg_start_decompress(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_read_scanlines
JDIMENSION jpeg_read_scanlines(j_decompress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION max_lines);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_finish_decompress
boolean jpeg_finish_decompress(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_read_raw_data
JDIMENSION jpeg_read_raw_data(j_decompress_ptr cinfo, JSAMPIMAGE data, JDIMENSION max_lines);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_has_multiple_scans
boolean jpeg_has_multiple_scans(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_start_output
boolean jpeg_start_output(j_decompress_ptr cinfo, int scan_number);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_finish_output
boolean jpeg_finish_output(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_input_complete
boolean jpeg_input_complete(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_new_colormap
void jpeg_new_colormap(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_consume_input
int jpeg_consume_input(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_calc_output_dimensions
void jpeg_calc_output_dimensions(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_save_markers
void jpeg_save_markers(j_decompress_ptr cinfo, int marker_code, unsigned int length_limit);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_set_marker_processor
void jpeg_set_marker_processor(j_decompress_ptr cinfo, int marker_code, jpeg_marker_parser_method routine);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_read_coefficients
jvirt_barray_ptr * jpeg_read_coefficients(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_write_coefficients
void jpeg_write_coefficients(j_compress_ptr cinfo, jvirt_barray_ptr * coef_arrays);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_copy_critical_parameters
void jpeg_copy_critical_parameters(j_decompress_ptr srcinfo, j_compress_ptr dstinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_abort_compress
void jpeg_abort_compress(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_abort_decompress
void jpeg_abort_decompress(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_abort
void jpeg_abort(j_common_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_destroy
void jpeg_destroy(j_common_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_resync_to_restart
boolean jpeg_resync_to_restart(j_decompress_ptr cinfo, int desired);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_std_error
struct jpeg_error_mgr * jpeg_std_error(struct jpeg_error_mgr * err);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_mem_dest
void jpeg_mem_dest(j_compress_ptr cinfo, unsigned char ** outbuffer, size_t * outsize);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_mem_src
void jpeg_mem_src(j_decompress_ptr cinfo, const unsigned char * inbuffer, size_t insize);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_default_qtables
void jpeg_default_qtables(j_compress_ptr cinfo, boolean force_baseline);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_calc_jpeg_dimensions
void jpeg_calc_jpeg_dimensions(j_compress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_core_output_dimensions
void jpeg_core_output_dimensions(j_decompress_ptr cinfo);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_std_huff_table
JHUFF_TBL * jpeg_std_huff_table(j_common_ptr cinfo, boolean isDC, int tblno);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_stdio_dest
void jpeg_stdio_dest(j_compress_ptr cinfo, FILE * outfile);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

#if !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__)
#ifndef jpeg_stdio_src
void jpeg_stdio_src(j_decompress_ptr cinfo, FILE * infile);
#endif

#endif /* !defined(__JFIF_LIBAPI__) || (52 <= __JFIF_LIBAPI__) */

__END_DECLS

#endif /* CLIB_JFIF_PROTOS_H */
