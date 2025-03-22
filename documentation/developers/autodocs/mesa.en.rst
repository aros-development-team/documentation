====
mesa
====

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`GetOpenGLStateTrackerApi()`_           `glACreateContext()`_                   `glADestroyContext()`_                  `glAGetConfig()`_                       
`glAGetCurrentContext()`_               `glAGetProcAddress()`_                  `glAMakeCurrent()`_                     `glASetRast()`_                         
`glASwapBuffers()`_                     
======================================= ======================================= ======================================= ======================================= 

-----------

GetOpenGLStateTrackerApi()
==========================

Synopsis
~~~~~~~~
::

  APTR GetOpenGLStateTrackerApi(
   )


Function
~~~~~~~~
::

     This is a PRIVATE function used by egl.library to receive pointer to
     api structure of OpenGL. Do not use this function in your application.



----------

glACreateContext()
==================

Synopsis
~~~~~~~~
::

  GLAContext glACreateContext(
   struct TagItem *tagList)


Function
~~~~~~~~
::


     Crates a GL rendering context that can be later used in subsequent
     calls.


Inputs
~~~~~~
::


     tagList - a pointer to tags to be used during creation.


Tags
~~~~
::


     GLA_Left   - specifies the left rendering offset on the rastport.
                  Typically equals to window->BorderLeft.

     GLA_Top    - specifies the top rendering offset on the rastport.
                  Typically equals to window->BorderTop.

     GLA_Right  - specifies the right rendering offset on the rastport.
                  Typically equals to window->BorderRight.

     GLA_Bottom - specifies the bottom rendering offset on the rastport.
                  Typically equals to window->BorderBottom.
 
     GLA_Width  - specifies the width of the rendering area.
                  GLA_Width + GLA_Left + GLA_Right should equal the width of
                  the rastport. The GLA_Width is interchangable at cration
                  time with GLA_Right. Later durring window resizing, width
                  is calculated from scalled left, righ and window width.

     GLA_Height - specifies the height of the rendering area.
                  GLA_Height + GLA_Top + GLA_Bottom should equal the height
                  of the rastport. The GLA_Height is interchangable at
                  cration time with GLA_Bottom. Later durring window resizing
                  , height is calculated from scalled top, bottom and window
                  height.

     GLA_Screen - pointer to Screen onto which scene is to be rendered. When
                  selecting RastPort has lower priority than GLA_Window.

     GLA_Window - pointer to Window onto which scene is to be rendered. Must
                  be provided.

     GLA_RastPort - ignored. Use GLA_Window.

     GLA_DoubleBuf - ignored. All rendering is always double buffered.

     GLA_RGBMode - ignored. All rendering is done in RGB. Indexed modes are
                   not supported.

     GLA_AlphaFlag - ignored. All rendering is done with alpha channel.

     GLA_NoDepth - disables the depth/Z buffer. Depth buffer is enabled by
                   default and is 16 or 24 bit based on rendering
                   capabilities.

     GLA_NoStencil - disables the stencil buffer. Stencil buffer is enabled
                     by default.

     GLA_NoAccum - disables the accumulation buffer. Accumulation buffer is
                   enabled by default.


Result
~~~~~~
::


     A valid GL context or NULL of creation was not succesfull.



----------

glADestroyContext()
===================

Synopsis
~~~~~~~~
::

  void glADestroyContext(
   GLAContext ctx)


Function
~~~~~~~~
::

     Destroys the GL rendering context and frees all resoureces.


Inputs
~~~~~~
::

     ctx - pointer to GL rendering context. A NULL pointer will be
             ignored.


Result
~~~~~~
::

     The GL context is destroyed. Do no use it anymore.



----------

glAGetConfig()
==============

Synopsis
~~~~~~~~
::

  void glAGetConfig(
   GLAContext ctx,
   GLenum pname,
   GLint * params)


Function
~~~~~~~~
::


     Gets value of selected parameter


Inputs
~~~~~~
::


     pname - enum value of parameter

     params - pointer to integer where the value is to be put


Result
~~~~~~
::


     None



----------

glAGetCurrentContext()
======================

Synopsis
~~~~~~~~
::

  GLAContext glAGetCurrentContext(
   )


Function
~~~~~~~~
::

     Returns the currently selected GL rendering context.


Result
~~~~~~
::

     The GL rendering context which is currently active.



----------

glAGetProcAddress()
===================

Synopsis
~~~~~~~~
::

  GLAProc glAGetProcAddress(
   const GLubyte * procname)


Result
~~~~~~
::

   Pointer to procname function or NULL if function is not supported




----------

glAMakeCurrent()
================

Synopsis
~~~~~~~~
::

  void glAMakeCurrent(
   GLAContext ctx)


Function
~~~~~~~~
::

     Make the selected GL rendering context active.


Inputs
~~~~~~
::

     ctx - GL rendering context to be made active for all following GL
             calls.



----------

glASetRast()
============

Synopsis
~~~~~~~~
::

  void glASetRast(
   GLAContext ctx,
   struct TagItem * tagList)


Function
~~~~~~~~
::


     Sets a new rendering target for an existing context


Inputs
~~~~~~
::


     ctx -
     tagList - a pointer to tags to be used during creation.


Tags
~~~~
::


     GLA_Window - pointer to Window onto which scene is to be rendered. Must
                  be provided.


Result
~~~~~~
::


     None



----------

glASwapBuffers()
================

Synopsis
~~~~~~~~
::

  void glASwapBuffers(
   GLAContext ctx)


Function
~~~~~~~~
::

     Swaps the back with front buffers. MUST BE used to display the effect
     of rendering onto the target RastPort, since GLA always work in
     double buffer mode.


Inputs
~~~~~~
::

     ctx - GL rendering context on which swap is to be performed.



