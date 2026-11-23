# Copyright (C) 2002, The AROS Development Team. All rights reserved.
# $Id$

"""Render implementation-status category pages as HTML."""

import sys, os
from xml.sax.saxutils import escape as _escape_html
from db.tasks.model import *
from html import *

# Settings

C_Completed             = 'green'
C_NeedsSomeWork         = 'yellow'
C_NotImplemented        = 'red'
C_Skipped               = 'green'
C_AmigaOnly             = 'tan'

def calculateCategoryScore( item ):
    """Return an integer completion percentage for a status category.

    Exclude Amiga-only entries from the denominator. Completed and skipped
    entries count fully; needs-work entries count halfway.
    """
    if isinstance( item, Category):
        if ( item.total - item.amigaonly ) != 0:
            return ( 100 * ( item.completed + item.skipped ) + 50 * item.needssomework ) \
                    // ( item.total - item.amigaonly )
    return 0

def _status_bar_widths(counts):
    """Allocate 100 integer percent units; keep every nonempty status visible."""
    total = sum(counts)
    if total == 0:
        return [0] * len(counts)
    active = [i for i, count in enumerate(counts) if count > 0]
    extra = 100 - len(active)
    quotas = [extra * count / total for count in counts]
    widths = [(1 if count else 0) + int(q) for count, q in zip(counts, quotas)]
    left = 100 - sum(widths)
    order = sorted(active, key=lambda i: (quotas[i] - int(quotas[i]), -i), reverse=True)
    for i in order[:left]:
        widths[i] += 1
    return widths


def formatRowCategoryStatus(array, width, color):
    """Append a proportional cell with a nonzero integer width."""
    if width:
        array.append(TD(bgcolor=color, width=str(width) + '%'))

def formatRowCategory( item, extension ):

    """Build a table row linking to a category and its status breakdown.

    Include the completeness score, last-update date, and proportional bar.
    """
    row = TR( bgcolor = '#dddddd' )

    # Dynamically build category status chart
    # The 'if' are needed here, because when sum(width != 100%) and there are
    # entries with 0%, they are still beeing drawn
    dyncontents = []

    counts = [item.completed, item.skipped, item.amigaonly,
              item.needssomework, item.notimplemented]
    colors = [C_Completed, C_Skipped, C_AmigaOnly,
              C_NeedsSomeWork, C_NotImplemented]
    for width, color in zip(_status_bar_widths(counts), colors):
        formatRowCategoryStatus(dyncontents, width, color)

    row.append \
    ( 
        TD( A( href = _escape_html(item.category + extension, {'"': '&quot;'}), contents = _escape_html(item.description) ) )
    )
    row.append \
    (
        TD \
        ( width = '15%', height = '100%', align = 'right', \
          contents = str( calculateCategoryScore( item ) ) + '% (' + item.lastupdated + ')' 
        )
    )
    row.append \
    (
        TD \
        (
            width = '65%', height = '100%',
            contents = Table \
            (
                bgcolor = 'black', width = '100%', height = '100%',
                cellspacing = 2, contents = TR \
                (
                    TD \
                    ( 
                        Table \
                        (
                            bgcolor = 'white', width = '100%', height = '100%',
                            cellspacing = 0, cellpadding = 0, contents = TR \
                            (
                                height = '100%',
                                contents = dyncontents
                            )
                        )
                    )
                )
            )
        )
    )

    return row

def formatRowCategoryItem( item, extension ):
    
    """Build an HTML table row for a tracked API item.

    Display the architecture when i386-specific and color by status.
    """
    row = TR( bgcolor = '#dddddd' )

    if   item.status == CategoryItem.STAT_Completed: color = C_Completed
    elif item.status == CategoryItem.STAT_NeedsSomeWork: color = C_NeedsSomeWork
    elif item.status == CategoryItem.STAT_NotImplemented: color = C_NotImplemented
    elif item.status == CategoryItem.STAT_Skipped: color = C_Skipped
    elif item.status == CategoryItem.STAT_AmigaOnly: color = C_AmigaOnly
    else: raise ValueError("Unknown API status: {}".format(item.status))
    
    description = _escape_html(item.description)
    if item.architecture == CategoryItem.ARCH_i386:
        description = description + ' (<i>i386</i>)'
        
    row.append( TD( description ) )
    row.append \
    ( 
        TD \
        (
            width = '75%', height = '100%',
            contents = Table \
            ( 
                bgcolor = 'black', width = '100%', height = '100%',
                cellspacing = 2,
                contents = TR \
                ( 
                    height = '100%',
                    contents = TD( height = '100%', bgcolor = color, width = '*' ) 
                )
            )
        )
    )
    
    return row

def formatHeader( root ):

    """Return a category heading and its calculated completion score."""
    header = Table \
             (
                bgcolor = '#999999', width = '40%', cellpadding = 2, \
                contents = TR \
                (
                    bgcolor = 'lightblue', style='font-size:medium;font-weight:bold',
                    contents = [
                    TD \
                    (
                        contents = 'Status: ' + _escape_html(root.description)
                    ),
                    TD \
                    (
                        width = '15%', align = 'right',
                        contents = str( calculateCategoryScore( root ) ) + '%'
                    )
                    ]
                )
             )
    return header

def formatLegendColorTable( color ):

    """Build a colored HTML swatch for the status legend."""
    legendColorTable = Table \
                     ( 
                        bgcolor = '#999999', width = '20px', height = '20px', cellpadding = 2,
                        contents = TR \
                        (
                            bgcolor = '#dddddd',
                            contents = TD \
                            (
                                Table \
                                (
                                    bgcolor = 'black', width = '100%', height = '100%',
                                    cellspacing = 2, contents = TR \
                                    (
                                        height = '100%',
                                        contents = TD \
                                        (
                                            bgcolor = color,
                                        )
                                    )
                                )
                            )
                        )
                     )

    return legendColorTable

def formatReturnLink( parent, extension ):
    """Return a parent-category navigation link, or an empty string."""
    if parent is not None:
        return 'Return to ' + str( A( href = _escape_html(parent.category + extension, {'"': '&quot;'}), contents = _escape_html(parent.description) ) ) +'<br/>'
    else:
        return ''

def formatLegend( ):
    """Build the HTML table explaining the status categories."""
    legend = Table \
             (
                contents =
                [
                TR \
                (
                    contents =
                    [
                    TD( formatLegendColorTable( C_Completed ) ), TD( ' - Completed,' ),
                    TD( formatLegendColorTable( C_NeedsSomeWork ) ), TD( ' - Needs some work,' ),
                    TD( formatLegendColorTable( C_NotImplemented ) ), TD( ' - Not implemented,' ),
                    TD( formatLegendColorTable( C_AmigaOnly ) ), TD( ' - Amiga only' )
                    ]
                ),
                TR \
                (
                    contents = 
                    [
                    TD \
                    (
                        colspan = 8,
                        contents = Table \
                        (
                            TR \
                            (
                                contents =
                                [
                                TD
                                (
                                    contents = Table \
                                    ( 
                                        bgcolor = '#999999',
                                        contents = TR \
                                        (
                                            bgcolor = '#dddddd',
                                            contents = TD \
                                            (
                                                contents = '100% (2008-07-31)'
                                            )
                                        )
                                    )
                                ),
                                TD
                                (
                                    style = 'padding-top: 4px',
                                    contents = '- 100% = completeness score, 2008-07-31 = date of last update'
                                )
                                ]
                            )
                        )
                    )
                    ]
                )
                ]
            )             

    return legend

def format( root, directory, template, lang, extension, parent = None ):
    
    # First, format this category.

    """Write a category's HTML status page and recurse into subcategories.

    Render the selected category, its API entries, comments, and child links
    using ``template``; emit one file per category in ``directory``.
    """
    content_CategoryItemsOriginalAPI = Table( bgcolor = '#999999', width = '98%', cellpadding = 2 )
    content_CategoryItemsExtensionAPI = Table( bgcolor = '#999999', width = '98%', cellpadding = 2 )
    #FIXME: GRRR: how do you create UL in html_?
    content_Comments = '<ul>'

    # Format category items
    for item in root.categoryitems:
        row = formatRowCategoryItem( item, extension )
        if item.apiversion == CategoryItem.API_Original:
            content_CategoryItemsOriginalAPI.append( row )
        elif item.apiversion == CategoryItem.API_Extension:
            content_CategoryItemsExtensionAPI.append( row )

    # Format category comments                
    for item in root.comments:
       content_Comments += '<li>' + _escape_html(item.comment) + '</li>'
    content_Comments += '</ul>'

    contentstr = '<h2 align="center" style="font-size:large">AROS implementation status</h2>'

    if parent is not None:
        contentstr += str( formatReturnLink( parent, extension ) )

        contentstr += '\n<br/>' + str( formatHeader( root ) )

        contentstr += '\n<br/>' + str( formatLegend( ) )

        content_Categories = Table( bgcolor = '#999999', width = '98%', cellpadding = 2 )

        # Format subcategories
        for item in root.subcategories:
            row = formatRowCategory( item, extension )
            content_Categories.append( row )
        
        if len( content_Categories ) > 0:
            contentstr += '\n<br>' + str ( content_Categories )
            
    else:
        # Different formatting for main page (show two levels of subcategories)
        
        # Format subcategories

        for item in root.subcategories:
            contentstr += '\n<br/>' + str( formatHeader( item ) )
            content_Categories = Table( bgcolor = '#999999', width = '98%', cellpadding = 2 )

            for subitem in item.subcategories:
                row = formatRowCategory( subitem, extension )
                content_Categories.append( row )
            
            if len( content_Categories ) > 0:
                contentstr += '\n<br>' + str ( content_Categories )

    # Add category items
    if len( content_CategoryItemsOriginalAPI ) > 0:
        contentstr += '\n<h2 align="center">Original API</h2>' + str( content_CategoryItemsOriginalAPI )

    if len( content_CategoryItemsExtensionAPI ) > 0:
        contentstr += '\n<h2 align="center">Extensions API</h2>' + str( content_CategoryItemsExtensionAPI )


    # Add comments
    if content_Comments != '<ul></ul>':
        contentstr += '\n<h2 align="left">Comments</h2>' + str( content_Comments )



    if lang == 'en':
        strings = {
            'ROOT'    : '../../',
            'BASE'    : '../../',
            'CONTENT' : contentstr
        }
    else:
        strings = {
            'ROOT'    : '../../../',
            'BASE'    : '../../../',
            'CONTENT' : contentstr
        }

    output = open( os.path.join( directory, root.category + extension ), 'w' )
    output.write( template % strings )
    output.close()

    # Second, recurse down.
    for item in root.subcategories:
        format( item, directory, template, lang, extension, root )


