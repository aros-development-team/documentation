# -*- coding: iso-8859-1 -*-
# Copyright � 2002-2020, The AROS Development Team. All rights reserved.
# $Id$

import os, sys

from build import utility

from page import makePage
from ConfigParser import ConfigParser

def makeTemplates():
    # Deduce important paths
    HERE_DIR   = os.path.split( __file__ )[0]
    LANG_DIR   = 'targets/www/template/languages'
    DST_DIR    = 'targets/www'
    
    def makeTemplate( language, dst ):
        # Setup translation dictionaries
        config = ConfigParser()
        config.read( os.path.join( LANG_DIR, language ) )

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
        
        file( dst, 'w' ).write( makePage( _T, _N, _M, '', language, charset ) )

    for language in os.listdir( LANG_DIR ):
        if utility.ignore( language ): continue

        dst = os.path.join( DST_DIR, 'template.html.' + language )
       
        if utility.newer \
        ( 
            [ 
                __file__, 
                os.path.join( HERE_DIR, 'page.py' ),
                os.path.join( HERE_DIR, 'components.py' ), 
                os.path.join( LANG_DIR, language ) 
            ], 
            dst 
        ):
            utility.reportBuilding( dst )
            makeTemplate( language, dst )
        else:
            utility.reportSkipping( dst )
