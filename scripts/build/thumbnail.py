# Copyright (C) 2002-2017, The AROS Development Team. All rights reserved.
# $Id$

"""Create image thumbnails with Pillow for documentation galleries."""

import os.path
import PIL
from PIL import Image

def makeThumbnailPath( originalPath ):
    """Return the thumbnail pathname beside an original image."""
    head, tail = os.path.split( originalPath )
    return os.path.join( head, 'thumbnails', tail )

def makeThumbnail( src, dst, size ):
    """Write a resized RGB thumbnail from an image source.

    Constrain the image to ``size`` while preserving its aspect ratio, using
    Pillow's LANCZOS resampling method.
    """
    image = Image.open( src )
    image = image.convert( 'RGB' )
    image.thumbnail( size, Image.LANCZOS )
    image.save( dst )

