#ifndef CLIB_GLU_PROTOS_H
#define CLIB_GLU_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/glu/glu.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <GL/glu.h>

__BEGIN_DECLS


#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBeginCurve
void gluBeginCurve(GLUnurbs * nurb);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBeginPolygon
void gluBeginPolygon(GLUtesselator * tess);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBeginSurface
void gluBeginSurface(GLUnurbs * nurb);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBeginTrim
void gluBeginTrim(GLUnurbs * nurb);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBuild1DMipmapLevels
GLint gluBuild1DMipmapLevels(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBuild1DMipmaps
GLint gluBuild1DMipmaps(GLenum target, GLint internalFormat, GLsizei width, GLenum format, GLenum type, const void * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBuild2DMipmapLevels
GLint gluBuild2DMipmapLevels(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBuild2DMipmaps
GLint gluBuild2DMipmaps(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBuild3DMipmapLevels
GLint gluBuild3DMipmapLevels(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLint level, GLint base, GLint max, const void * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluBuild3DMipmaps
GLint gluBuild3DMipmaps(GLenum target, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluCheckExtension
GLboolean gluCheckExtension(const GLubyte * extName, const GLubyte * extString);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluCylinder
void gluCylinder(GLUquadric * quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluDeleteNurbsRenderer
void gluDeleteNurbsRenderer(GLUnurbs * nurb);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluDeleteQuadric
void gluDeleteQuadric(GLUquadric * quad);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluDeleteTess
void gluDeleteTess(GLUtesselator * tess);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluDisk
void gluDisk(GLUquadric * quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluEndCurve
void gluEndCurve(GLUnurbs * nurb);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluEndPolygon
void gluEndPolygon(GLUtesselator * tess);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluEndSurface
void gluEndSurface(GLUnurbs * nurb);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluEndTrim
void gluEndTrim(GLUnurbs * nurb);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluErrorString
const GLubyte * gluErrorString(GLenum error);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluGetNurbsProperty
void gluGetNurbsProperty(GLUnurbs * nurb, GLenum property, GLfloat * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluGetString
const GLubyte * gluGetString(GLenum name);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluGetTessProperty
void gluGetTessProperty(GLUtesselator * tess, GLenum which, GLdouble * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluLoadSamplingMatrices
void gluLoadSamplingMatrices(GLUnurbs * nurb, const GLfloat * model, const GLfloat * perspective, const GLint * view);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluLookAt
void gluLookAt(GLdouble eyeX, GLdouble eyeY, GLdouble eyeZ, GLdouble centerX, GLdouble centerY, GLdouble centerZ, GLdouble upX, GLdouble upY, GLdouble upZ);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNewNurbsRenderer
GLUnurbs* gluNewNurbsRenderer();
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNewQuadric
GLUquadric* gluNewQuadric();
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNewTess
GLUtesselator* gluNewTess();
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNextContour
void gluNextContour(GLUtesselator * tess, GLenum type);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNurbsCallback
void gluNurbsCallback(GLUnurbs * nurb, GLenum which, _GLUfuncptr CallBackFunc);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNurbsCallbackData
void gluNurbsCallbackData(GLUnurbs * nurb, GLvoid * userData);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNurbsCallbackDataEXT
void gluNurbsCallbackDataEXT(GLUnurbs * nurb, GLvoid * userData);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNurbsCurve
void gluNurbsCurve(GLUnurbs * nurb, GLint knotCount, GLfloat * knots, GLint stride, GLfloat * control, GLint order, GLenum type);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNurbsProperty
void gluNurbsProperty(GLUnurbs * nurb, GLenum property, GLfloat value);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluNurbsSurface
void gluNurbsSurface(GLUnurbs * nurb, GLint sKnotCount, GLfloat * sKnots, GLint tKnotCount, GLfloat * tKnots, GLint sStride, GLint tStride, GLfloat * control, GLint sOrder, GLint tOrder, GLenum type);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluOrtho2D
void gluOrtho2D(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluPartialDisk
void gluPartialDisk(GLUquadric * quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops, GLdouble start, GLdouble sweep);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluPerspective
void gluPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluPickMatrix
void gluPickMatrix(GLdouble x, GLdouble y, GLdouble delX, GLdouble delY, GLint * viewport);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluProject
GLint gluProject(GLdouble objX, GLdouble objY, GLdouble objZ, const GLdouble * model, const GLdouble * proj, const GLint * view, GLdouble * winX, GLdouble * winY, GLdouble * winZ);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluPwlCurve
void gluPwlCurve(GLUnurbs * nurb, GLint count, GLfloat * data, GLint stride, GLenum type);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluQuadricCallback
void gluQuadricCallback(GLUquadric * quad, GLenum which, _GLUfuncptr CallBackFunc);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluQuadricDrawStyle
void gluQuadricDrawStyle(GLUquadric * quad, GLenum draw);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluQuadricNormals
void gluQuadricNormals(GLUquadric * quad, GLenum normal);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluQuadricOrientation
void gluQuadricOrientation(GLUquadric * quad, GLenum orientation);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluQuadricTexture
void gluQuadricTexture(GLUquadric * quad, GLboolean texture);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluScaleImage
GLint gluScaleImage(GLenum format, GLsizei wIn, GLsizei hIn, GLenum typeIn, const void * dataIn, GLsizei wOut, GLsizei hOut, GLenum typeOut, GLvoid * dataOut);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluSphere
void gluSphere(GLUquadric * quad, GLdouble radius, GLint slices, GLint stacks);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessBeginContour
void gluTessBeginContour(GLUtesselator * tess);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessBeginPolygon
void gluTessBeginPolygon(GLUtesselator * tess, GLvoid * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessCallback
void gluTessCallback(GLUtesselator * tess, GLenum which, _GLUfuncptr CallBackFunc);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessEndContour
void gluTessEndContour(GLUtesselator * tess);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessEndPolygon
void gluTessEndPolygon(GLUtesselator * tess);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessNormal
void gluTessNormal(GLUtesselator * tess, GLdouble valueX, GLdouble valueY, GLdouble valueZ);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessProperty
void gluTessProperty(GLUtesselator * tess, GLenum which, GLdouble data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluTessVertex
void gluTessVertex(GLUtesselator * tess, GLdouble * location, GLvoid * data);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluUnProject
GLint gluUnProject(GLdouble winX, GLdouble winY, GLdouble winZ, const GLdouble * model, const GLdouble * proj, const GLint * view, GLdouble * objX, GLdouble * objY, GLdouble * objZ);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

#if !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__)
#ifndef gluUnProject4
GLint gluUnProject4(GLdouble winX, GLdouble winY, GLdouble winZ, GLdouble clipW, const GLdouble * model, const GLdouble * proj, const GLint * view, GLdouble nearVal, GLdouble farVal, GLdouble * objX, GLdouble * objY, GLdouble * objZ, GLdouble * objW);
#endif

#endif /* !defined(__GLU_LIBAPI__) || (2 <= __GLU_LIBAPI__) */

__END_DECLS

#endif /* CLIB_GLU_PROTOS_H */
