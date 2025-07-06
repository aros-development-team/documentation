# Copyright (C) 2002-2025, The AROS Development Team. All rights reserved.

import importlib.util
import os
import codecs

from build import utility

from configparser import ConfigParser

def load_makePage(tmpltgt):
    module_name = "page"
    module_path = os.path.join(tmpltgt, "page.py")

    spec = importlib.util.spec_from_file_location(module_name, module_path)
    if spec is None:
        raise ImportError(f"Cannot load {module_name} from {module_path}")

    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)

    return module.makePage

def makeTemplates(tmpltgt):
    """
    Creates the template files for the WWW target in all languages.
    The templates are created in the targets/www directory.
    The configuration files are read from the targets/www/template/languages directory.
    """

    # Deduce important paths
    HERE_DIR   = os.path.split( __file__ )[0]
    LANG_DIR   = 'targets/www/template/languages'
    DST_DIR    = os.path.join('targets','www', tmpltgt)
    TMPLT_TGT = os.path.join(HERE_DIR, tmpltgt)

    def makeTemplate( language, dst ):
        # Setup translation dictionaries
        config = ConfigParser()
        with codecs.open(os.path.join( LANG_DIR, language + '.txt'), 'r', encoding='utf-8') as configfile:
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
        
        makePage = load_makePage(TMPLT_TGT)
        utility.makedir(os.path.dirname(dst))
        open( dst, 'w' ).write( makePage( _T, _N, _M, language, charset ) )

    for langfile in os.listdir( LANG_DIR ):
        language = langfile.split( '.' )[0] # strip '.txt'
        if utility.ignore( language ): continue

        dst = os.path.join( DST_DIR, 'template.html.' + language )
       
        if utility.newer \
        ( 
            [ 
                __file__, 
                os.path.join( TMPLT_TGT, 'page.py' ),
                os.path.join( LANG_DIR, langfile ) 
            ], 
            dst 
        ):
            utility.reportBuilding( dst )
            makeTemplate( language, dst )
        else:
            utility.reportSkipping( dst )
