#ifndef CLIB_FREETYPE2_PROTOS_H
#define CLIB_FREETYPE2_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/freetype2/freetype2.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


#include <diskfont/glyph.h>
#include <utility/tagitem.h>

#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_GLYPH_H
#include FT_IMAGE_H
#include FT_SYSTEM_H
#include FT_TYPES_H
#include FT_CACHE_H
#include FT_CACHE_IMAGE_H
#include FT_CACHE_SMALL_BITMAPS_H
#include FT_CACHE_CHARMAP_H
#include FT_TRIGONOMETRY_H
#include FT_MODULE_H
#include FT_LIST_H
#include FT_TRUETYPE_TABLES_H
#include FT_SFNT_NAMES_H
#include FT_COLOR_H
#include FT_OUTLINE_H
#include FT_STROKER_H
#include FT_LCD_FILTER_H
#include FT_MULTIPLE_MASTERS_H
#include FT_SYNTHESIS_H


__BEGIN_DECLS


#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
AROS_LP0(struct GlyphEngine *, OpenEngine,
         LIBBASETYPEPTR, FreeType2Base, 5, FreeType2
);

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
AROS_LP1(void, CloseEngine,
         AROS_LPA(struct GlyphEngine *, ge, A0),
         LIBBASETYPEPTR, FreeType2Base, 6, FreeType2
);

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
AROS_LP2(ULONG, SetInfoA,
         AROS_LPA(struct GlyphEngine *, ge, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, FreeType2Base, 7, FreeType2
);

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
AROS_LP2(ULONG, ObtainInfoA,
         AROS_LPA(struct GlyphEngine *, ge, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, FreeType2Base, 8, FreeType2
);

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
AROS_LP2(ULONG, ReleaseInfoA,
         AROS_LPA(struct GlyphEngine *, ge, A0),
         AROS_LPA(struct TagItem *, tags, A1),
         LIBBASETYPEPTR, FreeType2Base, 9, FreeType2
);

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Init_FreeType
FT_Error FT_Init_FreeType(FT_Library *alibrary);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Done_FreeType
FT_Error FT_Done_FreeType(FT_Library library);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Library_Version
void FT_Library_Version(FT_Library library, FT_Int *amajor, FT_Int *aminor, FT_Int *apatch);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Library_SetLcdFilter
FT_Error FT_Library_SetLcdFilter(FT_Library library, FT_LcdFilter  filter);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Library_SetLcdFilterWeights
FT_Error FT_Library_SetLcdFilterWeights(FT_Library library, unsigned char  *weights);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Library_SetLcdGeometry
FT_Error FT_Library_SetLcdGeometry(FT_Library  library, FT_Vector   sub[3]);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_New_Face
FT_Error FT_New_Face(FT_Library library, const char *pathname, FT_Long face_index, FT_Face *aface);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Done_Face
FT_Error FT_Done_Face(FT_Face face);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_New_Memory_Face
FT_Error FT_New_Memory_Face(FT_Library library, const FT_Byte *file_base, FT_Long file_size, FT_Long face_index, FT_Face *aface);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Open_Face
FT_Error FT_Open_Face(FT_Library library, const FT_Open_Args *args, FT_Long face_index, FT_Face *aface);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Attach_File
FT_Error FT_Attach_File(FT_Face face, const char *filepathname);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Attach_Stream
FT_Error FT_Attach_Stream(FT_Face face, const FT_Open_Args *parameters);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Char_Size
FT_Error FT_Set_Char_Size(FT_Face face, FT_F26Dot6 char_width, FT_F26Dot6 char_height, FT_UInt horz_resolution, FT_UInt vert_resolution);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Pixel_Sizes
FT_Error FT_Set_Pixel_Sizes(FT_Face face, FT_UInt pixel_width, FT_UInt pixel_height);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Transform
void FT_Set_Transform(FT_Face face, FT_Matrix *matrix, FT_Vector *delta);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_New_Glyph
FT_Error FT_New_Glyph(FT_Library library, FT_Glyph_Format format, FT_Glyph *aglyph);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Load_Glyph
FT_Error FT_Load_Glyph(FT_Face face, FT_UInt glyph_index, FT_Int32 load_flags);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Char_Index
FT_UInt FT_Get_Char_Index(FT_Face face, FT_ULong charcode);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Name_Index
FT_UInt FT_Get_Name_Index(FT_Face face, const FT_String *glyph_name);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Load_Char
FT_Error FT_Load_Char(FT_Face face, FT_ULong char_code, FT_Int32 load_flags);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Render_Glyph
FT_Error FT_Render_Glyph(FT_GlyphSlot slot, FT_Render_Mode render_mode);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Kerning
FT_Error FT_Get_Kerning(FT_Face face, FT_UInt left_glyph, FT_UInt right_glyph, FT_UInt kern_mode, FT_Vector *akerning);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Track_Kerning
FT_Error FT_Get_Track_Kerning(FT_Face face, FT_Fixed point_size, FT_Int degree, FT_Fixed *akerning);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Glyph_Name
FT_Error FT_Get_Glyph_Name(FT_Face face, FT_UInt glyph_index, FT_Pointer buffer, FT_UInt buffer_max);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Postscript_Name
const char * FT_Get_Postscript_Name(FT_Face face);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Select_Charmap
FT_Error FT_Select_Charmap(FT_Face face, FT_Encoding encoding);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Charmap
FT_Error FT_Set_Charmap(FT_Face face, FT_CharMap charmap);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Charmap_Index
FT_Int FT_Get_Charmap_Index(FT_CharMap  charmap);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_First_Char
FT_ULong FT_Get_First_Char(FT_Face face, FT_UInt *agindex);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Next_Char
FT_ULong FT_Get_Next_Char(FT_Face face, FT_ULong charcode, FT_UInt *agindex);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Glyph
FT_Error FT_Get_Glyph(FT_GlyphSlot slot, FT_Glyph *aglyph);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Color_Glyph_Layer
FT_Bool FT_Get_Color_Glyph_Layer(FT_Face face, FT_UInt base_glyph, FT_UInt *aglyph_index, FT_UInt *acolor_index, FT_LayerIterator* iterator);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Glyph_Copy
FT_Error FT_Glyph_Copy(FT_Glyph source, FT_Glyph *target);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Glyph_Transform
FT_Error FT_Glyph_Transform(FT_Glyph glyph, const FT_Matrix*  matrix, const FT_Vector*  delta);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Glyph_Get_CBox
void FT_Glyph_Get_CBox(FT_Glyph glyph, FT_UInt bbox_mode, FT_BBox *acbox);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_GlyphSlot_Own_Bitmap
FT_Error FT_GlyphSlot_Own_Bitmap(FT_GlyphSlot  slot);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Glyph_To_Bitmap
FT_Error FT_Glyph_To_Bitmap(FT_Glyph *the_glyph, FT_Render_Mode render_mode, const FT_Vector *origin, FT_Bool destroy);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Done_Glyph
void FT_Done_Glyph(FT_Glyph glyph);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_New_Size
FT_Error FT_New_Size(FT_Face face, FT_Size *asize);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Done_Size
FT_Error FT_Done_Size(FT_Size size);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Activate_Size
FT_Error FT_Activate_Size(FT_Size size);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_Manager_New
FT_Error FTC_Manager_New(FT_Library library, FT_UInt max_faces, FT_UInt max_sizes, FT_ULong max_bytes, FTC_Face_Requester requester, FT_Pointer req_data, FTC_Manager *amanager);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_Manager_LookupFace
FT_Error FTC_Manager_LookupFace(FTC_Manager manager, FTC_FaceID face_id, FT_Face *aface);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_Manager_LookupSize
FT_Error FTC_Manager_LookupSize(FTC_Manager manager, FTC_Scaler scaler, FT_Size *asize);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_Manager_RemoveFaceID
void FTC_Manager_RemoveFaceID(FTC_Manager manager, FTC_FaceID face_id);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_Node_Unref
void FTC_Node_Unref(FTC_Node node, FTC_Manager manager);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_ImageCache_New
FT_Error FTC_ImageCache_New(FTC_Manager manager, FTC_ImageCache *acache);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_ImageCache_Lookup
FT_Error FTC_ImageCache_Lookup(FTC_ImageCache cache, FTC_ImageType type, FT_UInt gindex, FT_Glyph *aglyph, FTC_Node *anode);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_ImageCache_LookupScaler
FT_Error FTC_ImageCache_LookupScaler(FTC_ImageCache cache, FTC_Scaler scaler, FT_ULong load_flags, FT_UInt gindex, FT_Glyph *aglyph, FTC_Node *anode);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_SBitCache_New
FT_Error FTC_SBitCache_New(FTC_Manager manager, FTC_SBitCache *acache);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_SBitCache_Lookup
FT_Error FTC_SBitCache_Lookup(FTC_SBitCache cache, FTC_ImageType type, FT_UInt gindex, FTC_SBit *ansbit, FTC_Node *anode);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_SBitCache_LookupScaler
FT_Error FTC_SBitCache_LookupScaler(FTC_SBitCache cache, FTC_Scaler scaler, FT_ULong load_flags, FT_UInt gindex, FTC_SBit *sbit, FTC_Node *anode);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_Manager_Done
void FTC_Manager_Done(FTC_Manager manager);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_Manager_Reset
void FTC_Manager_Reset(FTC_Manager manager);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_CMapCache_New
FT_Error FTC_CMapCache_New(FTC_Manager manager, FTC_CMapCache *acache);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FTC_CMapCache_Lookup
FT_UInt FTC_CMapCache_Lookup(FTC_CMapCache cache, FTC_FaceID face_id, FT_Int cmap_index, FT_UInt32 char_code);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_MulDiv
FT_Long FT_MulDiv(FT_Long a, FT_Long b, FT_Long c);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_MulFix
FT_Long FT_MulFix(FT_Long a, FT_Long b);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_DivFix
FT_Long FT_DivFix(FT_Long a, FT_Long b);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_RoundFix
FT_Fixed FT_RoundFix(FT_Fixed a);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_CeilFix
FT_Fixed FT_CeilFix(FT_Fixed a);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_FloorFix
FT_Fixed FT_FloorFix(FT_Fixed a);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Vector_Transform
void FT_Vector_Transform(FT_Vector *vector, const FT_Matrix *matrix);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Matrix_Multiply
void FT_Matrix_Multiply(const FT_Matrix *a, FT_Matrix *b);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Matrix_Invert
FT_Error FT_Matrix_Invert(FT_Matrix *matrix);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Sin
FT_Fixed FT_Sin(FT_Angle angle);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Cos
FT_Fixed FT_Cos(FT_Angle angle);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Tan
FT_Fixed FT_Tan(FT_Angle angle);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Atan2
FT_Angle FT_Atan2(FT_Fixed dx, FT_Fixed dy);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Angle_Diff
FT_Angle FT_Angle_Diff(FT_Angle angle1, FT_Angle angle2);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Vector_Unit
void FT_Vector_Unit(FT_Vector *vec, FT_Angle angle);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Vector_Rotate
void FT_Vector_Rotate(FT_Vector *vec, FT_Angle angle);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Vector_Length
FT_Fixed FT_Vector_Length(FT_Vector *vec);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Vector_Polarize
void FT_Vector_Polarize(FT_Vector *vec, FT_Fixed *length, FT_Angle *angle);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Vector_From_Polar
void FT_Vector_From_Polar(FT_Vector *vec, FT_Fixed length, FT_Angle angle);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_List_Add
void FT_List_Add(FT_List list, FT_ListNode node);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_List_Insert
void FT_List_Insert(FT_List list, FT_ListNode node);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_List_Find
FT_ListNode FT_List_Find(FT_List list, void *data);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_List_Remove
void FT_List_Remove(FT_List list, FT_ListNode node);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_List_Up
void FT_List_Up(FT_List list, FT_ListNode node);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_List_Iterate
FT_Error FT_List_Iterate(FT_List list, FT_List_Iterator iterator, void *user);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_List_Finalize
void FT_List_Finalize(FT_List list, FT_List_Destructor destroy, FT_Memory memory, void *user);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_New
FT_Error FT_Outline_New(FT_Library library, FT_UInt numPoints, FT_Int numContours, FT_Outline *anoutline);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Done
FT_Error FT_Outline_Done(FT_Library library, FT_Outline *outline);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Copy
FT_Error FT_Outline_Copy(const FT_Outline *source, FT_Outline *target);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Translate
void FT_Outline_Translate(const FT_Outline *outline, FT_Pos xOffset, FT_Pos yOffset);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Transform
void FT_Outline_Transform(const FT_Outline *outline, const FT_Matrix *matrix);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Reverse
void FT_Outline_Reverse(FT_Outline *outline);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Check
FT_Error FT_Outline_Check(FT_Outline *outline);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Get_CBox
void FT_Outline_Get_CBox(const FT_Outline *outline, FT_BBox *acbox);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Get_BBox
FT_Error FT_Outline_Get_BBox(FT_Outline *outline, FT_BBox *abbox);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Get_Bitmap
FT_Error FT_Outline_Get_Bitmap(FT_Library library, FT_Outline *outline, const FT_Bitmap *abitmap);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Render
FT_Error FT_Outline_Render(FT_Library library, FT_Outline *outline, FT_Raster_Params *params);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_Decompose
FT_Error FT_Outline_Decompose(FT_Outline *outline, const FT_Outline_Funcs *func_interface, void *user);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Outline_EmboldenXY
FT_Error FT_Outline_EmboldenXY(FT_Outline *outline, FT_Pos xstrength, FT_Pos ystrength);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Add_Module
FT_Error FT_Add_Module(FT_Library library, const FT_Module_Class *clazz);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Module
FT_Module FT_Get_Module(FT_Library library, const char *module_name);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Remove_Module
FT_Error FT_Remove_Module(FT_Library library, FT_Module module);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_New_Library
FT_Error FT_New_Library(FT_Memory memory, FT_Library *alibrary);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Done_Library
FT_Error FT_Done_Library(FT_Library library);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Debug_Hook
void FT_Set_Debug_Hook(FT_Library library, FT_UInt hook_index, FT_DebugHook_Func debug_hook);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Add_Default_Modules
void FT_Add_Default_Modules(FT_Library library);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Renderer
FT_Renderer FT_Get_Renderer(FT_Library library, FT_Glyph_Format format);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Renderer
FT_Error FT_Set_Renderer(FT_Library library, FT_Renderer renderer, FT_UInt num_params, FT_Parameter *parameters);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Stream_OpenGzip
FT_Error FT_Stream_OpenGzip(FT_Stream stream, FT_Stream source);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Sfnt_Table
void * FT_Get_Sfnt_Table(FT_Face face, FT_Sfnt_Tag tag);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Sfnt_Name
FT_Error FT_Get_Sfnt_Name(FT_Face face, FT_UInt idx, FT_SfntName *aname);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Sfnt_Name_Count
FT_UInt FT_Get_Sfnt_Name_Count(FT_Face face);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Load_Sfnt_Table
FT_Error FT_Load_Sfnt_Table(FT_Face face, FT_ULong tag, FT_Long offset, FT_Byte *buffer, FT_ULong *length);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Select_Size
FT_Error FT_Select_Size(FT_Face face, FT_Int strike_index);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_X11_Font_Format
const char * FT_Get_X11_Font_Format(FT_Face  face);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Font_Format
const char * FT_Get_Font_Format(FT_Face  face);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Property_Get
FT_Error FT_Property_Get(FT_Library library, const FT_String *module_name, const FT_String *property_name, void *value);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Property_Set
FT_Error FT_Property_Set(FT_Library library, const FT_String *module_name, const FT_String *property_name, const void *value);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Palette_Data_Get
FT_Error FT_Palette_Data_Get(FT_Face face, FT_Palette_Data  *apalette);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Palette_Select
FT_Error FT_Palette_Select(FT_Face face, FT_UShort palette_index, FT_Color **apalette);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Bitmap_New
void FT_Bitmap_New(FT_Bitmap  *abitmap);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Bitmap_Init
void FT_Bitmap_Init(FT_Bitmap  *abitmap);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Bitmap_Blend
FT_Error FT_Bitmap_Blend(FT_Library library, const FT_Bitmap *source, const FT_Vector source_offset, FT_Bitmap *target, FT_Vector *atarget_offset, FT_Color color);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Bitmap_Convert
FT_Error FT_Bitmap_Convert(FT_Library library, const FT_Bitmap *source, FT_Bitmap *target, FT_Int alignment);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Bitmap_Done
FT_Error FT_Bitmap_Done(FT_Library library, FT_Bitmap  *bitmap);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Bitmap_Embolden
FT_Error FT_Bitmap_Embolden(FT_Library library, FT_Bitmap *bitmap, FT_Pos xStrength, FT_Pos yStrength);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Stroker_New
FT_Error FT_Stroker_New(FT_Library library, FT_Stroker  *astroker);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Stroker_Set
void FT_Stroker_Set(FT_Stroker stroker, FT_Fixed radius, FT_Stroker_LineCap line_cap, FT_Stroker_LineJoin line_join, FT_Fixed miter_limit);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Stroker_GetCounts
FT_Error FT_Stroker_GetCounts(FT_Stroker  stroker, FT_UInt *anum_points, FT_UInt *anum_contours);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Stroker_ParseOutline
FT_Error FT_Stroker_ParseOutline(FT_Stroker stroker, FT_Outline *outline, FT_Bool opened);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Glyph_Stroke
FT_Error FT_Glyph_Stroke(FT_Glyph *pglyph, FT_Stroker stroker, FT_Bool destroy);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Glyph_StrokeBorder
FT_Error FT_Glyph_StrokeBorder(FT_Glyph *pglyph, FT_Stroker stroker, FT_Bool inside, FT_Bool destroy);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Stroker_Export
void FT_Stroker_Export(FT_Stroker stroker, FT_Outline *outline);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Stroker_Done
void FT_Stroker_Done(FT_Stroker stroker);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Advance
FT_Error FT_Get_Advance(FT_Face face, FT_UInt gindex, FT_Int32 load_flags, FT_Fixed  *padvance);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Advances
FT_Error FT_Get_Advances(FT_Face face, FT_UInt start, FT_UInt count, FT_Int32 load_flags, FT_Fixed  *padvances);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_MM_Var
FT_Error FT_Get_MM_Var(FT_Face face, FT_MM_Var* *amaster);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Done_MM_Var
FT_Error FT_Done_MM_Var(FT_Library library, FT_MM_Var *amaster);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Named_Instance
FT_Error FT_Set_Named_Instance(FT_Face face, FT_UInt  instance_index);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Default_Named_Instance
FT_Error FT_Get_Default_Named_Instance(FT_Face face, FT_UInt *instance_index);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Var_Design_Coordinates
FT_Error FT_Get_Var_Design_Coordinates(FT_Face face, FT_UInt num_coords, FT_Fixed* coords);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Var_Design_Coordinates
FT_Error FT_Set_Var_Design_Coordinates(FT_Face face, FT_UInt num_coords, FT_Fixed* coords);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (0 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Face_GetCharVariantIndex
FT_UInt FT_Face_GetCharVariantIndex(FT_Face face, FT_ULong charcode, FT_ULong variantSelector);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Reference_Library
FT_Error FT_Reference_Library(FT_Library library);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Reference_Face
FT_Error FT_Reference_Face(FT_Face face);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Set_Default_Properties
void FT_Set_Default_Properties(FT_Library library);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Transform
void FT_Get_Transform(FT_Face face, FT_Matrix *matrix, FT_Vector *delta);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Sfnt_Table_Info
FT_Error FT_Sfnt_Table_Info(FT_Face face, FT_UInt table_index, FT_ULong *tag, FT_ULong *length);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Var_Blend_Coordinates
FT_Error FT_Get_Var_Blend_Coordinates(FT_Face face, FT_UInt num_coords, FT_Fixed* coords);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_GlyphSlot_Embolden
void FT_GlyphSlot_Embolden(FT_GlyphSlot slot);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_GlyphSlot_Oblique
void FT_GlyphSlot_Oblique(FT_GlyphSlot slot);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Palette_Set_Foreground_Color
FT_Error FT_Palette_Set_Foreground_Color(FT_Face face, FT_Color foreground_color);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Color_Glyph_Paint
FT_Bool FT_Get_Color_Glyph_Paint(FT_Face face, FT_UInt base_glyph, FT_Color_Root_Transform root_transform, FT_OpaquePaint *paint);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Color_Glyph_ClipBox
FT_Bool FT_Get_Color_Glyph_ClipBox(FT_Face face, FT_UInt base_glyph, FT_ClipBox *clip_box);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Paint_Layers
FT_Bool FT_Get_Paint_Layers(FT_Face face, FT_LayerIterator *iterator, FT_OpaquePaint *paint);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Colorline_Stops
FT_Bool FT_Get_Colorline_Stops(FT_Face face, FT_ColorStop *color_stop, FT_ColorStopIterator *iterator);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

#if !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__)
#ifndef FT_Get_Paint
FT_Bool FT_Get_Paint(FT_Face face, FT_OpaquePaint opaque_paint, FT_COLR_Paint *paint);
#endif

#endif /* !defined(__FREETYPE2_LIBAPI__) || (7 <= __FREETYPE2_LIBAPI__) */

__END_DECLS

#endif /* CLIB_FREETYPE2_PROTOS_H */
