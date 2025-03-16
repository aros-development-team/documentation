# Copyright (C) 2002-2025, The AROS Development Team. All rights reserved.

import os
# , sys
import codecs

from build import utility

from .page import makePage
from configparser import ConfigParser

def makeTemplates():
    """
    Creates the template files for the WWW target in all languages.
    The templates are created in the targets/www directory.
    The configuration files are read from the targets/www/template/languages directory.
    """

    # Deduce important paths
    HERE_DIR   = os.path.split( __file__ )[0]
    LANG_DIR   = 'targets/www/template/languages'
    DST_DIR    = 'targets/www'
    
    def makeTemplate( language, dst ):
        # Setup translation dictionaries
        config = ConfigParser()
        with codecs.open(os.path.join( LANG_DIR, language ), 'r', encoding='utf-8') as configfile:
            config.read_file(configfile)

        charset = config.get( 'meta', 'charset' )

        _T = {}
        for option in config.options( 'titles' ):
            _T[option] = config.get( 'titles', option )

        _N = {}
        for option in config.options( 'navigation' ):
            _N[option] = config.get( 'navigation', option )

        _M = {}
        for option in config.options( 'misc' ):
            _M[option] = config.get( 'misc', option )
        
        open( dst, 'w' ).write( makePage( _T, _N, _M, language, charset ) )

    for language in os.listdir( LANG_DIR ):
        if utility.ignore( language ): continue

        dst = os.path.join( DST_DIR, 'template.html.' + language )
       
        if utility.newer \
        ( 
            [ 
                __file__, 
                os.path.join( HERE_DIR, 'page.py' ),
                os.path.join( LANG_DIR, language ) 
            ], 
            dst 
        ):
            utility.reportBuilding( dst )
            makeTemplate( language, dst )
        else:
            utility.reportSkipping( dst )
