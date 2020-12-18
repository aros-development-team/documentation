# -*- coding: iso-8859-1 -*-
# Copyright (C) 2002-2020, The AROS Development Team. All rights reserved.
# $Id$

import os

from html import *
from components import *

def makePage( _T, _N, _M, MIRRORS_DATA, lang, charset ):
    navigation = Tree \
    ( [
    P ( contents = [
    Img( src = '%(ROOT)simages/pointer.png', alt = ''),
    A( '<b>' + _N['home'] + '</b>', href=makeURL( '.', lang ))]
    ),
        Tree \
        ( [
        P ( contents = [
            Img( src = '%(ROOT)simages/czechlogo.png', width = 16, height = 10, alt = 'czech logo'),
            A( '&#268;esky', href='%(BASE)scs/' )]),
        P ( contents = [
            Img( src = '%(ROOT)simages/germanylogo.png', width = 16, height = 10, alt = 'germany logo'),
            A( 'Deutsch', href='%(BASE)sde/' )]),
            P ( contents = [
            Img( src = '%(ROOT)simages/greecelogo.png', width = 16, height = 10, alt = 'greece logo'),
            A( '&#917;&#955;&#955;&#951;&#965;&#953;&#954;&#940;', href='%(BASE)sel/' )]),
        P ( contents = [
            Img( src = '%(ROOT)simages/englishlogo.png', width = 16, height = 10, alt = 'english logo'),
            A( 'English', href='%(BASE)s.' )]),
        P ( contents = [
            Img( src = '%(ROOT)simages/spanishlogo.png', width = 16, height = 10, alt = 'spanish logo'),
            A( 'Espa&#241;ol', href='%(BASE)ses/' )]),
            P ( contents = [
            Img( src = '%(ROOT)simages/francelogo.png', width = 16, height = 10, alt = 'france logo'),
            A( 'Fran&#231;ais', href='%(BASE)sfr/' )]),
            P ( contents = [
            Img( src = '%(ROOT)simages/italylogo.png', width = 16, height = 10, alt = 'italy logo'),
            A( 'Italiano', href='%(BASE)sit/' )]),
            P ( contents = [
            Img( src = '%(ROOT)simages/netherlandslogo.png', width = 16, height = 10, alt = 'netherlands logo'),
            A( 'Nederlands', href='%(BASE)snl/' )]),
        P ( contents = [
            Img( src = '%(ROOT)simages/polandlogo.png', width = 16, height = 10, alt = 'poland logo'),
            A( 'Polski', href='%(BASE)spl/' )]),
            P ( contents = [
            Img( src = '%(ROOT)simages/portugallogo.png', width = 16, height = 10, alt = 'portugal logo'),
            A( 'Portugu&#234;s', href='%(BASE)spt/' )]),
            P ( contents = [
            Img( src = '%(ROOT)simages/russialogo.png', width = 16, height = 10, alt = 'russian logo'),
            A( '&#1056;&#1091;&#1089;&#1089;&#1082;&#1080;&#1081;', href='%(BASE)sru/' )]),
        P ( contents = [
            Img( src = '%(ROOT)simages/finlandlogo.png', width = 16, height = 10, alt = 'finland logo'),
            A( 'Suomi', href='%(BASE)sfi/' )]),
        P ( contents = [
            Img( src = '%(ROOT)simages/swedenlogo.png', width = 16, height = 10, alt = 'sweden logo'),
            A( 'Svenska', href='%(BASE)ssv/' )])
        ] ),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['news'] + '</b>', href=makeURL( 'news/', lang ) )]),
        Tree ( A( _N['archive'], href=makeURL( 'news/archive/', lang ) ) ),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['introduction'] + '</b>', href=makeURL( 'introduction/', lang ) ) ]),

        Tree \
        ( [
            A( _N['status'], href=makeURL('introduction/status/everything', lang ) ),
            A( _N['ports'], href=makeURL( 'introduction/ports', lang ) ),
            A( _N['license'], href='%(BASE)slicense.html' )
        ] ),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['download'] + '</b>', href=makeURL( 'download', lang ) )]),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        '<b>' + _N['pictures'] + '</b>']),
        Tree \
        ( [
            A( _N['screenshots'], href=makeURL( 'pictures/screenshots/', lang) ),
            A( _N['developers'], href=makeURL( 'pictures/developers/', lang ) ),
        ] ),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        '<b>' + _N['documentation'] + '</b>']),
        Tree \
        ( [
            A( '<b>' + _N['users'] + '</b>', href=makeURL( 'documentation/users/', lang ) ),
            Tree \
            ( [
                A( _N['installation'], href=makeURL( 'documentation/users/installation', lang ) ),
                A( _N['using'], href=makeURL( 'documentation/users/using', lang ) ),
                A( _N['shell'], href=makeURL( 'documentation/users/shell/index', lang ) ),
                A( _N['applications'], href=makeURL( 'documentation/users/applications/index', lang ) ),
                A( _N['faq'], href=makeURL( 'documentation/users/faq', lang ) ),
                A( _N['howto'], href=makeURL( 'documentation/users/howto', lang ) ),
                A( _N['hwcompat'], href=makeURL( 'documentation/users/hardware', lang ) ),
            ] ),
            A( '<b>' + _N['translators'] + '</b>', href=makeURL( 'documentation/translating/index', lang ) ),
            A( '<b>' + _N['developers'] + '</b>', href=makeURL( 'documentation/developers/index', lang ) ),
            Tree \
            ( [
                A( _N['contribute'], href=makeURL( 'documentation/developers/contribute', lang ) ),
                A( _N['roadmap'], href=makeURL( 'documentation/developers/roadmap', lang ) ),
                A( _N['bug-tracker'], href='http://sourceforge.net/p/aros/bugs/' ),
                A( _N['feature-requests'], href='http://sourceforge.net/p/aros/feature-requests/' ),
                A( _N['working-with-git'], href=makeURL( 'documentation/developers/git', lang ) ),
                A( _N['compiling'],  href=makeURL( 'documentation/developers/compiling', lang ) ),
                A( _N['application-development-manual'], href=makeURL( 'documentation/developers/app-dev/index', lang ) ),
                A( _N['zune-application-development-manual'], href=makeURL( 'documentation/developers/zune-dev/index', lang ) ),
                A( _N['system-development-manual'], href=makeURL( 'documentation/developers/sys-dev/index', lang ) ),
                A( _N['debugging-manual'], href=makeURL( 'documentation/developers/debugging', lang ) ),
                A( _N['reference'], href=makeURL( 'documentation/developers/autodocs/index', lang ) ),
                A( _N['specifications'], href=makeURL( 'documentation/developers/specifications/', lang ) ),
                A( _N['ui-style-guide'], href=makeURL( 'documentation/developers/ui', lang ) ),
                A( _N['testing'], href=makeURL( 'documentation/developers/testing/', lang ) ),
                A( _N['documenting'], href=makeURL( 'documentation/developers/documenting', lang ) ),
                A( _N['porting'], href=makeURL( 'documentation/developers/porting', lang ) ),
                A( _N['summaries'], href=makeURL( 'documentation/developers/summaries/', lang ) ),
                A( _N['links'], href=makeURL( 'documentation/developers/links', lang ) )
            ] )
        ] ),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['contact'] + '</b>', href=makeURL( 'contact', lang ) )]),
        Tree \
        ( [
            A( _N['slack'], href=makeURL( 'contact', lang, 'slack' ) ),
            A( _N['mailing-lists'], href=makeURL( 'contact', lang, 'mailing-lists' ) ),
        ] ),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['community'] + '</b>', href=makeURL( 'contact', lang, 'community-resources' ) )]),
        Tree \
        ( [
            #A( _N['forums'], href=makeURL( 'contact', lang, 'forums' ) ),
            A( _N['irc-channels'], href=makeURL( 'contact', lang, 'irc-channels' ) )
        ] ),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['credits'] + '</b>', href=makeURL( 'credits', lang ) )]),
     P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['acknowledgements'] + '</b>', href=makeURL( 'acknowledgements', lang ) )]),
        BR(),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['sponsors'] + '</b>', href=makeURL( 'sponsors', lang ) )]),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['linking'] + '</b>', href=makeURL( 'linking', lang ) )]),
    P ( contents = [
        Img( src = '%(ROOT)simages/pointer.png', alt = '' ),
        A( '<b>' + _N['links'] + '</b>', href=makeURL( 'links', lang ) )])
    ] )

    sponsors = Table\
    (
        cellspacing = 5, cellpadding = 0,
        contents =
        [
            TR
            (
                TD
                (
                    A
                    (
                        Img( src = '%(ROOT)simages/trustec-small.png', border = 0, alt = 'Trustsec' ),
                        href = 'http://www.trustsec.de/'
                    )
                )
            ),
            TR
            (
                TD
                (
                    A
                    (
                        Img( src = '%(ROOT)simages/genesi-small.gif', border = 0, alt = 'Genesi USA' ),
                        href = 'https://genesi.company/'
                    )
                )
            ),
            TR
            (
                TD
                (
                    A \
                    (
                        Img \
                        (
                            src = 'https://sourceforge.net/sflogo.php?group_id=43586&amp;type=10',
                            width = 88, height = 16, border = 0, alt = 'Get AROS Research Operating System at SourceForge.net. '
                                'Fast, secure and Free Open Source software downloads'
                        ),
                        href = 'https://sourceforge.net/projects/aros/'
                    )
                )
            )
        ]
    )

    bar = Table(
        border = 0, cellpadding = 2, cellspacing = 2, width = 171,
        contents = [
            TR(
                valign = 'top', contents = [
                    TD( rowspan = 8, width=15 ),
                    TD()
                ]
            ),
            TR( valign = 'top', contents = TD( navigation ) ),
            TR( TD() ),
            TR( valign = 'top', contents = TD( align = 'center', contents = sponsors ) ),
            TR( TD()),
            TR \
            (
                valign = 'top', contents = TD \
                (
                    align = 'center', contents = A \
                    (
                        Img \
                        (
                            src = '%(ROOT)simages/noeupatents-small.png', alt = 'No EU patents',
                            border = 0
                        ),
                        href = 'http://stopsoftwarepatents.eu/'
                    )
                )
            )
        ]
    )

    statsPHP5= '''
    <?php
        require_once( '%(ROOT)srsfeed/browserdetect.php');
        $win_ie56 = (browser_detection('browser') == 'ie' ) &&

          (browser_detection('number') >= 5 ) &&

                (browser_detection('number') < 7  );
    if ($win_ie56) {

    echo \"<img src=\\"/images/kittymascot.gif\\"
        alt=\\"kitty mascot\\"
        style=\\"float:right\\" border=\\"0\\"><img
        src=\\"/images/toplogomenu.gif\\" border=\\"0\\"
        alt=\\"top logo menu\\"
        usemap=\\"#map\\">";

        }
        else {
        echo \"<img src=\\"/images/kittymascot.png\\"
        alt=\\"kitty mascot\\"
        style=\\"float:right\\"
        border=\\"0\\"><img src=\\"/images/toplogomenu.png\\"
        alt=\\"top logo menu\\"
        border=\\"0\\" usemap=\\"#map\\">";
        } ?>
    '''

    page = HTML( charset, [
        Head( [
            Charset( charset ),
            Title( 'AROS Research Operating System' ),
            Link( href = '%(ROOT)saros.css?v=1.3', type = 'text/css', rel = 'stylesheet' ),
            Link( href = '%(ROOT)sprint.css', type = 'text/css', rel = 'stylesheet', media = 'print' ),
            Meta(
                name    = 'keywords',
                content = 'AROS, OS, operating system, research, open source, portage'
            )
        ] ),
        Body(
            style = 'margin: 0px;',
            bgcolor = '#ffffff', contents = [
                Map(
                    name = 'map',
                    contents = [
                        Area(shape = 'rect', coords = '25,78,85,95',   alt = 'http://www.aros.org', href = 'http://aros.sourceforge.net/'),
                        Area(shape = 'rect', coords = '100,78,168,95', alt = 'AROS-Exec',           href = 'https://ae.amigalife.org'),
                        Area(shape = 'rect', coords = '180,78,240,95', alt = 'AROS-Exec Archives',  href = 'http://archives.aros-exec.org'),
                        Area(shape = 'rect', coords = '260,78,350,95', alt = 'Power2People',        href = 'https://power2people.org/')
                    ]
                ),
                Table(
                    border = 0, cellspacing = 0, cellpadding = 0,
                    style="background-image:url('%(ROOT)simages/backgroundtop.png'); background-repeat:repeat-x;",
                    width = '100%%', contents = [
                        TR( [
                            TD(
                                valign = 'top', width = '100%%', height = 109,
                                contents = statsPHP5)
                        ] ),

                        TR(
                            TD(
                                Table(
                                    border = 0, cellspacing = 0, cellpadding = 0,
                                    width = '100%%', contents = [
                                        TR( contents = [
                                            TD(
                                                width = 171, contents = [ bar ], id = 'menusidebar'
                                            ),
                                            TD( width="100%%",
                                                contents =  '%(CONTENT)s'
                                            ),
                                        ]),
                                    ]
                                )
                            )
                        ),
                        TR( [
                            TD(
                                width = '100%%', valign = 'bottom', align = 'center',
                                contents = [
                                    BR(),
                                    Table(width = '100%%', contents = [
                                        TR( contents = [
                                            TD( contents = [
                                                Div( style = 'text-align: right', contents = [
                                                    Font( color = '#aaaaaa', size = '-1', contents = [
                                                        _M['copyright'],
                                                        BR(),
                                                        _M['trademarks'],
                                                        BR(),
                                                        BR()
                                                    ] )
                                                ] )
                                            ] )
                                        ] )
                                    ] )
                                ]
                            )
                        ] )
                    ]
                )
            ]
        )
    ] )

    return str( page )


# makeURL
# -------
# Create an internal link.

def makeURL( file, lang, section='' ):

    # Create the URL
    if file != '.' and file[-1] != '/':
        file += '.php'
    if lang != 'en':
        file = lang + '/' + file
    url = '%(BASE)s' + file

    # Add the section, if any
    if section != '':
        url += '#' + section

    return url

