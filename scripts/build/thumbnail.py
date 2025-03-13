# Copyright (C) 2002-2017, The AROS Development Team. All rights reserved.
# $Id$

import os.path
import PIL
from PIL import Image

def makeThumbnailPath( originalPath ):
    head, tail = os.path.split( originalPath )
    return os.path.join( head, 'thumbnails', tail )

def makeThumbnail( src, dst, size ):
    image = Image.open( src )
    image = image.convert( 'RGB' )
    image.thumbnail( size, Image.LANCZOS )
    image.save( dst )

