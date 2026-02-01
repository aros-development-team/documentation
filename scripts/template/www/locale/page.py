# Copyright (C) 2002-2025, The AROS Development Team. All rights reserved.

import os
import jinja2

def makePage( _T, _N, _M, lang, charset ):
    """
    Generates an HTML page using Jinja2 templating engine.
    (CONTENT) and (BASE) are filled by buildit.py.
    Args:
        _T (dict): Dictionary containing title strings.
        _N (dict): Dictionary containing navigation labels.
        _M (dict): Dictionary containing misc. strings such as copyright and trademarks.
        lang (str): Language code for the page.
        charset (str): Character set for the HTML content.
    Returns:
        str: Rendered HTML content as a string.
    """

    environment = jinja2.Environment()
    environment.globals['makeURL'] = makeURL
    template = environment.from_string('''
<!DOCTYPE html>
<html>
    <head>
        <title>AROS Research Operating System - Localization Documentation and Resources</title>
        <meta http-equiv="Content-Type" content="text/html; charset={{ charset }}">
        <link rel="stylesheet" type="text/css" href="/aros.css?v=1.6">
        <link rel="stylesheet" type="text/css" href="/print.css?v=1.0" media="print">
        <link rel="icon" type="image/x-icon" href="/aros.ico">
        <meta name="keywords" content="AROS Localization, Localization, translations">
        <meta name="viewport" content="width=device-width, initial-scale=1">
    </head>

    <body>
        <header>
            <img src="/images/toplogo.png?v=1.0" alt="top logo menu" class=leftimage>
            <img src="/images/kittymascot.png?v=1.0" alt="kitty mascot" class="rightimage">
            <div class="topmenu">
                <a href="http://www.aros.org/">AROS.ORG</a>
                <a href="http://developers.aros.org/">Developers</a>
                <a href="/">Localization</a>
                <a href="https://power2people.org/">Bounties</a>
            </div><!-- topmenu -->
        </header>

        <div id="menusidebar">
            <nav class="tree">
                <ul class="tree-head">
                    <li><a href="/">{{ n['home'] }}</a>
                        <ul class="tree-entry">    
                            <li>                       
                                <img src="/images/czechlogo.png" width = 16 height = 10 alt = "czech logo">
                                <a href="/cs/">&#268;esky</a>
                            </li>
                            <li>
                                <img src="/images/germanylogo.png" width = 16 height = 10 alt = "germany logo">
                                <a href="/de/">Deutsch</a>
                            </li>
                            <li>
                                <img src="/images/greecelogo.png" width = 16 height = 10 alt = "greece logo">
                                <a href="/el/">&#917;&#955;&#955;&#951;&#957;&#953;&#954;&#940;</a>
                            </li>
                            <li>
                                <img src="/images/englishlogo.png" width = 16 height = 10 alt = "english logo">
                                <a href="/">English</a>
                            </li>
                            <li>
                                <img src="/images/spanishlogo.png" width = 16 height = 10 alt = "spanish logo">
                                <a href="/es/">Espa&#241;ol</a>
                            </li>
                            <li>
                                <img src="/images/francelogo.png" width = 16 height = 10 alt = "france logo">
                                <a href="/fr/">Fran&#231;ais</a>
                            </li>
                            <li>
                                <img src="/images/italylogo.png" width = 16 height = 10 alt = "italy logo">
                                <a href="/it/">Italiano</a>
                            </li>
                            <li>
                                <img src="/images/netherlandslogo.png" width = 16 height = 10 alt = "netherlands logo">
                                <a href="/nl/">Nederlands</a>
                            </li>
                            <li>
                                <img src="/images/polandlogo.png" width = 16 height = 10 alt = "poland logo">
                                <a href="/pl/">Polski</a>
                            </li>
                            <li>
                                <img src="/images/portugallogo.png" width = 16 height = 10 alt = "portugal logo">
                                <a href="/pt/">Portugu&#234;s</a>
                            </li>
                            <li>
                                <img src="/images/russialogo.png" width = 16 height = 10 alt = "russian logo">
                                <a href="/ru/">&#1056;&#1091;&#1089;&#1089;&#1082;&#1080;&#1081;</a>
                            </li>
                            <li>
                                <img src="/images/finlandlogo.png" width = 16 height = 10 alt = "finland logo">
                                <a href="/fi/">Suomi</a>
                            </li>
                            <li>
                                <img src="/images/swedenlogo.png" width = 16 height = 10 alt = "sweden logo">
                                <a href="/sv/">Svenska</a>
                            </li>
                        </ul>
                    </li>
                </ul>
                <ul class="tree-head">
                    <li><a href="http://www.aros.org/">{{ n['users'] }}</a></li>
                </ul>
                <ul class="tree-head">
                    <li><a href="/">{{ n['translators'] }}</a>
                        <ul class="tree-head">
                            <li>{{ n['documentation'] }}
                                <ul class="tree-entry">
                                    <li><a href="{{ makeURL( 'documentation/issues/index', lang) }}">{{ n['contribute'] }}</a></li>
                                    <li><a href="{{ makeURL( 'documentation/getting_started', lang) }}">Getting Started</a></li>
                                    <li><a href="{{ makeURL( 'documentation/projects', lang) }}">Active Projects</a></li>
                                    <li><a href="{{ makeURL( 'documentation/resources', lang) }}">Translator Resources</a></li>
                                    <li><a href="{{ makeURL( 'documentation/progress', lang) }}">OS Translation Progress</a></li>
                                    <li><a href="{{ makeURL( 'documentation/websites', lang) }}">Translating the Websites</a></li>
                                    <li><a href="{{ makeURL( 'documentation/changelog', lang) }}">Changelog</a></li>
                                    <li><a href="{{ makeURL( 'documentation/contact', lang) }}">{{ n['community'] }}</a></li>
                                </ul>
                            </li>
                        </ul>
                    </li>
                </ul>
                <ul class="tree-head">
                    <li>
                        <a href="http://developers.aros.org/">{{ n['developers'] }}</a>
                    </li>
                </ul>
            </nav>
            <div class="image-container">
                <a href = 'https://www.trustsec.de/'><img src = '/images/trustec-small.png' alt = 'Trustsec'></a><br>
                <a href = 'https://genesi.company/'><img src = '/images/genesi-small.gif' alt = 'Genesi USA'></a><br>
                <a href = 'https://sourceforge.net/projects/aros/'>
                    <img src = 'https://sourceforge.net/sflogo.php?group_id=43586&amp;type=10' width = 88 height = 16
                    alt = 'Get AROS Research Operating System at SourceForge.net. Fast, secure and Free Open Source software downloads'>
                </a><br>
                <a href = 'https://endsoftwarepatents.org/'><img src = '/images/noeupatents-small.png' alt = 'No EU patents'></a>
            </div><!-- image-container -->
        </div><!-- menusidebar -->

        <main>
            <!-- before CONTENT -->
            %(CONTENT)s
            <!-- after CONTENT -->
        </main>
        <footer>
            {{ m['copyright'] }}<br>{{ m['trademarks'] }}
        </footer>
    </body>
</html>
'''
    )
    return template.render(n=_N, m=_M, lang=lang, charset=charset)


# makeURL
# -------
# Create an internal link.

def makeURL( file, lang, section='' ):

    # Create the URL
    if file != '.' and file[-1] != '/':
        file += '.html'
    if lang != 'en':
        file = lang + '/' + file
    url = '%(BASE)s' + file

    # Add the section, if any
    if section != '':
        url += '#' + section

    return url

