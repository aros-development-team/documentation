#ifndef CLIB_GL_PROTOS_H
#define CLIB_GL_PROTOS_H

/*
    *** Automatically generated from '/home/mazze/projects/aros-src/workbench/libs/gl/gl.conf'. Edits will be lost. ***
    Copyright (C) 1995-2026, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <GL/gla.h>

__BEGIN_DECLS

GLAContext glACreateContextTags(Tag Tag1, ...);

__END_DECLS


__BEGIN_DECLS


#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glACreateContext
GLAContext glACreateContext(struct TagItem *tagList);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glADestroyContext
void glADestroyContext(GLAContext ctx);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glAMakeCurrent
void glAMakeCurrent(GLAContext ctx);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glASwapBuffers
void glASwapBuffers(GLAContext ctx);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glAGetCurrentContext
GLAContext glAGetCurrentContext();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef GetOpenGLStateTrackerApi
APTR GetOpenGLStateTrackerApi();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glASetRast
void glASetRast(GLAContext ctx, struct TagItem *tagList);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glAGetConfig
void glAGetConfig(GLAContext ctx, GLenum pname, GLint* params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glAGetProcAddress
GLAProc glAGetProcAddress(const GLubyte * procname);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glASwapInterval
void glASwapInterval(GLAContext ctx, GLint interval);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClearIndex
void glClearIndex(GLfloat c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClearColor
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClear
void glClear(GLbitfield mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexMask
void glIndexMask(GLuint mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColorMask
void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glAlphaFunc
void glAlphaFunc(GLenum func, GLclampf ref);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glBlendFunc
void glBlendFunc(GLenum sfactor, GLenum dfactor);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLogicOp
void glLogicOp(GLenum opcode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCullFace
void glCullFace(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFrontFace
void glFrontFace(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPointSize
void glPointSize(GLfloat size);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLineWidth
void glLineWidth(GLfloat width);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLineStipple
void glLineStipple(GLint factor, GLushort pattern);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPolygonMode
void glPolygonMode(GLenum face, GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPolygonOffset
void glPolygonOffset(GLfloat factor, GLfloat units);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPolygonStipple
void glPolygonStipple(const GLubyte * mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetPolygonStipple
void glGetPolygonStipple(GLubyte * mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEdgeFlag
void glEdgeFlag(GLboolean flag);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEdgeFlagv
void glEdgeFlagv(const GLboolean * flag);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glScissor
void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClipPlane
void glClipPlane(GLenum plane, const GLdouble * equation);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetClipPlane
void glGetClipPlane(GLenum plane, GLdouble * equation);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDrawBuffer
void glDrawBuffer(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glReadBuffer
void glReadBuffer(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEnable
void glEnable(GLenum cap);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDisable
void glDisable(GLenum cap);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIsEnabled
GLboolean glIsEnabled(GLenum cap);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEnableClientState
void glEnableClientState(GLenum cap);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDisableClientState
void glDisableClientState(GLenum cap);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetBooleanv
void glGetBooleanv(GLenum pname, GLboolean * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetDoublev
void glGetDoublev(GLenum pname, GLdouble * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetFloatv
void glGetFloatv(GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetIntegerv
void glGetIntegerv(GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPushAttrib
void glPushAttrib(GLbitfield mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPopAttrib
void glPopAttrib();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPushClientAttrib
void glPushClientAttrib(GLbitfield mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPopClientAttrib
void glPopClientAttrib();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRenderMode
GLint glRenderMode(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetError
GLenum glGetError();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetString
const GLubyte * glGetString(GLenum name);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFinish
void glFinish();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFlush
void glFlush();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glHint
void glHint(GLenum target, GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClearDepth
void glClearDepth(GLclampd depth);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDepthFunc
void glDepthFunc(GLenum func);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDepthMask
void glDepthMask(GLboolean flag);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDepthRange
void glDepthRange(GLclampd near_val, GLclampd far_val);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClearAccum
void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glAccum
void glAccum(GLenum op, GLfloat value);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMatrixMode
void glMatrixMode(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glOrtho
void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFrustum
void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glViewport
void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPushMatrix
void glPushMatrix();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPopMatrix
void glPopMatrix();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLoadIdentity
void glLoadIdentity();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLoadMatrixd
void glLoadMatrixd(const GLdouble * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLoadMatrixf
void glLoadMatrixf(const GLfloat * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultMatrixd
void glMultMatrixd(const GLdouble * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultMatrixf
void glMultMatrixf(const GLfloat * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRotated
void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRotatef
void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glScaled
void glScaled(GLdouble x, GLdouble y, GLdouble z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glScalef
void glScalef(GLfloat x, GLfloat y, GLfloat z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTranslated
void glTranslated(GLdouble x, GLdouble y, GLdouble z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTranslatef
void glTranslatef(GLfloat x, GLfloat y, GLfloat z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIsList
GLboolean glIsList(GLuint list);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDeleteLists
void glDeleteLists(GLuint list, GLsizei range);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGenLists
GLuint glGenLists(GLsizei range);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNewList
void glNewList(GLuint list, GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEndList
void glEndList();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCallList
void glCallList(GLuint list);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCallLists
void glCallLists(GLsizei n, GLenum type, const GLvoid * lists);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glListBase
void glListBase(GLuint base);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glBegin
void glBegin(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEnd
void glEnd();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2d
void glVertex2d(GLdouble x, GLdouble y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2f
void glVertex2f(GLfloat x, GLfloat y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2i
void glVertex2i(GLint x, GLint y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2s
void glVertex2s(GLshort x, GLshort y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3d
void glVertex3d(GLdouble x, GLdouble y, GLdouble z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3f
void glVertex3f(GLfloat x, GLfloat y, GLfloat z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3i
void glVertex3i(GLint x, GLint y, GLint z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3s
void glVertex3s(GLshort x, GLshort y, GLshort z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4d
void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4f
void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4i
void glVertex4i(GLint x, GLint y, GLint z, GLint w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4s
void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2dv
void glVertex2dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2fv
void glVertex2fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2iv
void glVertex2iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex2sv
void glVertex2sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3dv
void glVertex3dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3fv
void glVertex3fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3iv
void glVertex3iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex3sv
void glVertex3sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4dv
void glVertex4dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4fv
void glVertex4fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4iv
void glVertex4iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertex4sv
void glVertex4sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3b
void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3d
void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3f
void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3i
void glNormal3i(GLint nx, GLint ny, GLint nz);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3s
void glNormal3s(GLshort nx, GLshort ny, GLshort nz);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3bv
void glNormal3bv(const GLbyte * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3dv
void glNormal3dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3fv
void glNormal3fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3iv
void glNormal3iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormal3sv
void glNormal3sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexd
void glIndexd(GLdouble c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexf
void glIndexf(GLfloat c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexi
void glIndexi(GLint c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexs
void glIndexs(GLshort c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexub
void glIndexub(GLubyte c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexdv
void glIndexdv(const GLdouble * c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexfv
void glIndexfv(const GLfloat * c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexiv
void glIndexiv(const GLint * c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexsv
void glIndexsv(const GLshort * c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexubv
void glIndexubv(const GLubyte * c);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3b
void glColor3b(GLbyte red, GLbyte green, GLbyte blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3d
void glColor3d(GLdouble red, GLdouble green, GLdouble blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3f
void glColor3f(GLfloat red, GLfloat green, GLfloat blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3i
void glColor3i(GLint red, GLint green, GLint blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3s
void glColor3s(GLshort red, GLshort green, GLshort blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3ub
void glColor3ub(GLubyte red, GLubyte green, GLubyte blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3ui
void glColor3ui(GLuint red, GLuint green, GLuint blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3us
void glColor3us(GLushort red, GLushort green, GLushort blue);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4b
void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4d
void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4f
void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4i
void glColor4i(GLint red, GLint green, GLint blue, GLint alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4s
void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4ub
void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4ui
void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4us
void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3bv
void glColor3bv(const GLbyte * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3dv
void glColor3dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3fv
void glColor3fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3iv
void glColor3iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3sv
void glColor3sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3ubv
void glColor3ubv(const GLubyte * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3uiv
void glColor3uiv(const GLuint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor3usv
void glColor3usv(const GLushort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4bv
void glColor4bv(const GLbyte * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4dv
void glColor4dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4fv
void glColor4fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4iv
void glColor4iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4sv
void glColor4sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4ubv
void glColor4ubv(const GLubyte * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4uiv
void glColor4uiv(const GLuint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColor4usv
void glColor4usv(const GLushort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1d
void glTexCoord1d(GLdouble s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1f
void glTexCoord1f(GLfloat s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1i
void glTexCoord1i(GLint s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1s
void glTexCoord1s(GLshort s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2d
void glTexCoord2d(GLdouble s, GLdouble t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2f
void glTexCoord2f(GLfloat s, GLfloat t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2i
void glTexCoord2i(GLint s, GLint t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2s
void glTexCoord2s(GLshort s, GLshort t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3d
void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3f
void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3i
void glTexCoord3i(GLint s, GLint t, GLint r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3s
void glTexCoord3s(GLshort s, GLshort t, GLshort r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4d
void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4f
void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4i
void glTexCoord4i(GLint s, GLint t, GLint r, GLint q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4s
void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1dv
void glTexCoord1dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1fv
void glTexCoord1fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1iv
void glTexCoord1iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord1sv
void glTexCoord1sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2dv
void glTexCoord2dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2fv
void glTexCoord2fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2iv
void glTexCoord2iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord2sv
void glTexCoord2sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3dv
void glTexCoord3dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3fv
void glTexCoord3fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3iv
void glTexCoord3iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord3sv
void glTexCoord3sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4dv
void glTexCoord4dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4fv
void glTexCoord4fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4iv
void glTexCoord4iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoord4sv
void glTexCoord4sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2d
void glRasterPos2d(GLdouble x, GLdouble y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2f
void glRasterPos2f(GLfloat x, GLfloat y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2i
void glRasterPos2i(GLint x, GLint y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2s
void glRasterPos2s(GLshort x, GLshort y);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3d
void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3f
void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3i
void glRasterPos3i(GLint x, GLint y, GLint z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3s
void glRasterPos3s(GLshort x, GLshort y, GLshort z);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4d
void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4f
void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4i
void glRasterPos4i(GLint x, GLint y, GLint z, GLint w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4s
void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2dv
void glRasterPos2dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2fv
void glRasterPos2fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2iv
void glRasterPos2iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos2sv
void glRasterPos2sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3dv
void glRasterPos3dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3fv
void glRasterPos3fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3iv
void glRasterPos3iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos3sv
void glRasterPos3sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4dv
void glRasterPos4dv(const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4fv
void glRasterPos4fv(const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4iv
void glRasterPos4iv(const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRasterPos4sv
void glRasterPos4sv(const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRectd
void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRectf
void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRecti
void glRecti(GLint x1, GLint y1, GLint x2, GLint y2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRects
void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRectdv
void glRectdv(const GLdouble * v1, const GLdouble * v2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRectfv
void glRectfv(const GLfloat * v1, const GLfloat * v2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRectiv
void glRectiv(const GLint * v1, const GLint * v2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glRectsv
void glRectsv(const GLshort * v1, const GLshort * v2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glVertexPointer
void glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glNormalPointer
void glNormalPointer(GLenum type, GLsizei stride, const GLvoid * ptr);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColorPointer
void glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIndexPointer
void glIndexPointer(GLenum type, GLsizei stride, const GLvoid * ptr);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexCoordPointer
void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEdgeFlagPointer
void glEdgeFlagPointer(GLsizei stride, const GLvoid * ptr);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetPointerv
void glGetPointerv(GLenum pname, GLvoid * * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glArrayElement
void glArrayElement(GLint i);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDrawArrays
void glDrawArrays(GLenum mode, GLint first, GLsizei count);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDrawElements
void glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glInterleavedArrays
void glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid * pointer);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glShadeModel
void glShadeModel(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLightf
void glLightf(GLenum light, GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLighti
void glLighti(GLenum light, GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLightfv
void glLightfv(GLenum light, GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLightiv
void glLightiv(GLenum light, GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetLightfv
void glGetLightfv(GLenum light, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetLightiv
void glGetLightiv(GLenum light, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLightModelf
void glLightModelf(GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLightModeli
void glLightModeli(GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLightModelfv
void glLightModelfv(GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLightModeliv
void glLightModeliv(GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMaterialf
void glMaterialf(GLenum face, GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMateriali
void glMateriali(GLenum face, GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMaterialfv
void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMaterialiv
void glMaterialiv(GLenum face, GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMaterialfv
void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMaterialiv
void glGetMaterialiv(GLenum face, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColorMaterial
void glColorMaterial(GLenum face, GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelZoom
void glPixelZoom(GLfloat xfactor, GLfloat yfactor);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelStoref
void glPixelStoref(GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelStorei
void glPixelStorei(GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelTransferf
void glPixelTransferf(GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelTransferi
void glPixelTransferi(GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelMapfv
void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelMapuiv
void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPixelMapusv
void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetPixelMapfv
void glGetPixelMapfv(GLenum map, GLfloat * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetPixelMapuiv
void glGetPixelMapuiv(GLenum map, GLuint * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetPixelMapusv
void glGetPixelMapusv(GLenum map, GLushort * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glBitmap
void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glReadPixels
void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDrawPixels
void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyPixels
void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glStencilFunc
void glStencilFunc(GLenum func, GLint ref, GLuint mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glStencilMask
void glStencilMask(GLuint mask);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glStencilOp
void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClearStencil
void glClearStencil(GLint s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexGend
void glTexGend(GLenum coord, GLenum pname, GLdouble param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexGenf
void glTexGenf(GLenum coord, GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexGeni
void glTexGeni(GLenum coord, GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexGendv
void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexGenfv
void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexGeniv
void glTexGeniv(GLenum coord, GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexGendv
void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexGenfv
void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexGeniv
void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexEnvf
void glTexEnvf(GLenum target, GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexEnvi
void glTexEnvi(GLenum target, GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexEnvfv
void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexEnviv
void glTexEnviv(GLenum target, GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexEnvfv
void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexEnviv
void glGetTexEnviv(GLenum target, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexParameterf
void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexParameteri
void glTexParameteri(GLenum target, GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexParameterfv
void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexParameteriv
void glTexParameteriv(GLenum target, GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexParameterfv
void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexParameteriv
void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexLevelParameterfv
void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexLevelParameteriv
void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexImage1D
void glTexImage1D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexImage2D
void glTexImage2D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetTexImage
void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGenTextures
void glGenTextures(GLsizei n, GLuint * textures);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDeleteTextures
void glDeleteTextures(GLsizei n, const GLuint * textures);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glBindTexture
void glBindTexture(GLenum target, GLuint texture);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPrioritizeTextures
void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLclampf * priorities);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glAreTexturesResident
GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glIsTexture
GLboolean glIsTexture(GLuint texture);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexSubImage1D
void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexSubImage2D
void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyTexImage1D
void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyTexImage2D
void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyTexSubImage1D
void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyTexSubImage2D
void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMap1d
void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMap1f
void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMap2d
void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMap2f
void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMapdv
void glGetMapdv(GLenum target, GLenum query, GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMapfv
void glGetMapfv(GLenum target, GLenum query, GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMapiv
void glGetMapiv(GLenum target, GLenum query, GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord1d
void glEvalCoord1d(GLdouble u);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord1f
void glEvalCoord1f(GLfloat u);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord1dv
void glEvalCoord1dv(const GLdouble * u);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord1fv
void glEvalCoord1fv(const GLfloat * u);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord2d
void glEvalCoord2d(GLdouble u, GLdouble v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord2f
void glEvalCoord2f(GLfloat u, GLfloat v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord2dv
void glEvalCoord2dv(const GLdouble * u);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalCoord2fv
void glEvalCoord2fv(const GLfloat * u);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMapGrid1d
void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMapGrid1f
void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMapGrid2d
void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMapGrid2f
void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalPoint1
void glEvalPoint1(GLint i);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalPoint2
void glEvalPoint2(GLint i, GLint j);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalMesh1
void glEvalMesh1(GLenum mode, GLint i1, GLint i2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glEvalMesh2
void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFogf
void glFogf(GLenum pname, GLfloat param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFogi
void glFogi(GLenum pname, GLint param);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFogfv
void glFogfv(GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFogiv
void glFogiv(GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glFeedbackBuffer
void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPassThrough
void glPassThrough(GLfloat token);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glSelectBuffer
void glSelectBuffer(GLsizei size, GLuint * buffer);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glInitNames
void glInitNames();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLoadName
void glLoadName(GLuint name);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPushName
void glPushName(GLuint name);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glPopName
void glPopName();
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glDrawRangeElements
void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexImage3D
void glTexImage3D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glTexSubImage3D
void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyTexSubImage3D
void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColorTable
void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColorSubTable
void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColorTableParameteriv
void glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glColorTableParameterfv
void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyColorSubTable
void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyColorTable
void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetColorTable
void glGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid * table);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetColorTableParameterfv
void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetColorTableParameteriv
void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glBlendEquation
void glBlendEquation(GLenum mode);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glBlendColor
void glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glHistogram
void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glResetHistogram
void glResetHistogram(GLenum target);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetHistogram
void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetHistogramParameterfv
void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetHistogramParameteriv
void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMinmax
void glMinmax(GLenum target, GLenum internalformat, GLboolean sink);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glResetMinmax
void glResetMinmax(GLenum target);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMinmax
void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid * values);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMinmaxParameterfv
void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetMinmaxParameteriv
void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glConvolutionFilter1D
void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glConvolutionFilter2D
void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glConvolutionParameterf
void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glConvolutionParameterfv
void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glConvolutionParameteri
void glConvolutionParameteri(GLenum target, GLenum pname, GLint params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glConvolutionParameteriv
void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyConvolutionFilter1D
void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCopyConvolutionFilter2D
void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetConvolutionFilter
void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid * image);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetConvolutionParameterfv
void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetConvolutionParameteriv
void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glSeparableFilter2D
void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetSeparableFilter
void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glActiveTexture
void glActiveTexture(GLenum texture);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClientActiveTexture
void glClientActiveTexture(GLenum texture);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCompressedTexImage1D
void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCompressedTexImage2D
void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCompressedTexImage3D
void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCompressedTexSubImage1D
void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCompressedTexSubImage2D
void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glCompressedTexSubImage3D
void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glGetCompressedTexImage
void glGetCompressedTexImage(GLenum target, GLint lod, GLvoid * img);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1d
void glMultiTexCoord1d(GLenum target, GLdouble s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1dv
void glMultiTexCoord1dv(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1f
void glMultiTexCoord1f(GLenum target, GLfloat s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1fv
void glMultiTexCoord1fv(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1i
void glMultiTexCoord1i(GLenum target, GLint s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1iv
void glMultiTexCoord1iv(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1s
void glMultiTexCoord1s(GLenum target, GLshort s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1sv
void glMultiTexCoord1sv(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2d
void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2dv
void glMultiTexCoord2dv(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2f
void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2fv
void glMultiTexCoord2fv(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2i
void glMultiTexCoord2i(GLenum target, GLint s, GLint t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2iv
void glMultiTexCoord2iv(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2s
void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2sv
void glMultiTexCoord2sv(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3d
void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3dv
void glMultiTexCoord3dv(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3f
void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3fv
void glMultiTexCoord3fv(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3i
void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3iv
void glMultiTexCoord3iv(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3s
void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3sv
void glMultiTexCoord3sv(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4d
void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4dv
void glMultiTexCoord4dv(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4f
void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4fv
void glMultiTexCoord4fv(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4i
void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4iv
void glMultiTexCoord4iv(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4s
void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4sv
void glMultiTexCoord4sv(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLoadTransposeMatrixd
void glLoadTransposeMatrixd(const GLdouble * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glLoadTransposeMatrixf
void glLoadTransposeMatrixf(const GLfloat * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultTransposeMatrixd
void glMultTransposeMatrixd(const GLdouble * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultTransposeMatrixf
void glMultTransposeMatrixf(const GLfloat * m);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glSampleCoverage
void glSampleCoverage(GLclampf value, GLboolean invert);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glActiveTextureARB
void glActiveTextureARB(GLenum texture);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glClientActiveTextureARB
void glClientActiveTextureARB(GLenum texture);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1dARB
void glMultiTexCoord1dARB(GLenum target, GLdouble s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1dvARB
void glMultiTexCoord1dvARB(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1fARB
void glMultiTexCoord1fARB(GLenum target, GLfloat s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1fvARB
void glMultiTexCoord1fvARB(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1iARB
void glMultiTexCoord1iARB(GLenum target, GLint s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1ivARB
void glMultiTexCoord1ivARB(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1sARB
void glMultiTexCoord1sARB(GLenum target, GLshort s);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord1svARB
void glMultiTexCoord1svARB(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2dARB
void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2dvARB
void glMultiTexCoord2dvARB(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2fARB
void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2fvARB
void glMultiTexCoord2fvARB(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2iARB
void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2ivARB
void glMultiTexCoord2ivARB(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2sARB
void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord2svARB
void glMultiTexCoord2svARB(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3dARB
void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3dvARB
void glMultiTexCoord3dvARB(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3fARB
void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3fvARB
void glMultiTexCoord3fvARB(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3iARB
void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3ivARB
void glMultiTexCoord3ivARB(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3sARB
void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord3svARB
void glMultiTexCoord3svARB(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4dARB
void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4dvARB
void glMultiTexCoord4dvARB(GLenum target, const GLdouble * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4fARB
void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4fvARB
void glMultiTexCoord4fvARB(GLenum target, const GLfloat * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4iARB
void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4ivARB
void glMultiTexCoord4ivARB(GLenum target, const GLint * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4sARB
void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

#if !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__)
#ifndef glMultiTexCoord4svARB
void glMultiTexCoord4svARB(GLenum target, const GLshort * v);
#endif

#endif /* !defined(__GL_LIBAPI__) || (20 <= __GL_LIBAPI__) */

__END_DECLS

#endif /* CLIB_GL_PROTOS_H */
