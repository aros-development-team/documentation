#ifndef CLIB_DXTN_PROTOS_H
#define CLIB_DXTN_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/dxtn/dxtn.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


#include <GL/gl.h>


__BEGIN_DECLS


#if !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__)
AROS_LP7(void, DXTN_CompressTex,
         AROS_LPA(GLint, srccomps, D0),
         AROS_LPA(GLint, width, D1),
         AROS_LPA(GLint, height, D2),
         AROS_LPA(const GLubyte *, srcPixData, A0),
         AROS_LPA(GLenum, destformat, D3),
         AROS_LPA(GLubyte *, dest, A1),
         AROS_LPA(GLint, dstRowStride, D4),
         LIBBASETYPEPTR, DXTNBase, 5, DXTN
);

#endif /* !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__) */

#if !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__)
AROS_LP5(void, DXT1_Fetch2DRGBTexel,
         AROS_LPA(GLint, srcRowStride, D0),
         AROS_LPA(const GLubyte *, pixdata, A0),
         AROS_LPA(GLint, i, D1),
         AROS_LPA(GLint, j, D2),
         AROS_LPA(GLvoid *, texel, A1),
         LIBBASETYPEPTR, DXTNBase, 6, DXTN
);

#endif /* !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__) */

#if !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__)
AROS_LP5(void, DXT1_Fetch2DRGBATexel,
         AROS_LPA(GLint, srcRowStride, D0),
         AROS_LPA(const GLubyte *, pixdata, A0),
         AROS_LPA(GLint, i, D1),
         AROS_LPA(GLint, j, D2),
         AROS_LPA(GLvoid *, texel, A1),
         LIBBASETYPEPTR, DXTNBase, 7, DXTN
);

#endif /* !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__) */

#if !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__)
AROS_LP5(void, DXT3_Fetch2DRGBATexel,
         AROS_LPA(GLint, srcRowStride, D0),
         AROS_LPA(const GLubyte *, pixdata, A0),
         AROS_LPA(GLint, i, D1),
         AROS_LPA(GLint, j, D2),
         AROS_LPA(GLvoid *, texel, A1),
         LIBBASETYPEPTR, DXTNBase, 8, DXTN
);

#endif /* !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__) */

#if !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__)
AROS_LP5(void, DXT5_Fetch2DRGBATexel,
         AROS_LPA(GLint, srcRowStride, D0),
         AROS_LPA(const GLubyte *, pixdata, A0),
         AROS_LPA(GLint, i, D1),
         AROS_LPA(GLint, j, D2),
         AROS_LPA(GLvoid *, texel, A1),
         LIBBASETYPEPTR, DXTNBase, 9, DXTN
);

#endif /* !defined(__DXTN_LIBAPI__) || (1 <= __DXTN_LIBAPI__) */

__END_DECLS

#endif /* CLIB_DXTN_PROTOS_H */
