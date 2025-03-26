# Copyright (C) 2002-2025, The AROS Development Team. All rights reserved.

import os
import jinja2
from configparser import ConfigParser

def makePicture( path, description, language ):
    LANG_DIR   = 'targets/www/template/languages'

    if language == 'en':
        root = '../../'
    else:
        root = '../../../'

    config = ConfigParser()
    with open(os.path.join( LANG_DIR, language + '.txt' ), 'rb') as configfile:
        config.read(configfile)

    filename  = os.path.basename( path )
    directory = os.path.dirname( path )
    thumbnail = root + os.path.join( directory, 'thumbnails', filename )
    path      = root + path

    environment = jinja2.Environment()
    result = environment.from_string('''
<div class="gallery">
    <a href="{{ path }}">
        <img src="{{ thumbnail }}">
    </a>
    <div class="gallerydesc">{{ description }}</div>
</div>
''').render( thumbnail=thumbnail, path=path, description=description )

    return str( result )
