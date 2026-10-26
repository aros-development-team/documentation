# Copyright (C) 2002, The AROS Development Team. All rights reserved.
# $Id$

"""Provide the legacy HTML node types for the status-page renderer.

Element attributes and literal content are rendered without HTML escaping.
"""

# The core framework classes
# ==========================

class Node:
    """Base node storing its parent in the legacy HTML tree."""
    def __init__( self ):
        """Initialize a node without a parent."""
        self.parent = None


class Container( Node, list ):
    """Hold and render a sequence of HTML child nodes."""
    def __init__( self, contents=None ):
        """Initialize a child list and attach supplied node children.

        Wrap strings in ``String`` nodes only when the initial contents are a
        plain list; other single values are appended without conversion.
        """
        Node.__init__( self )
        list.__init__( self )

        if contents is None: return
        
        if contents.__class__ is list:
            for child in contents:
                if child.__class__ is str:
                    child = String( child )

                child.parent = self
                self.append( child )
        else:
            self.append( contents )

    def __str__( self ):
        """Concatenate the rendered strings of all child nodes."""
        result = ''
        for child in self:
            result += child.__str__()

        return result


class String( Node ):
    """Wrap a literal text value as an HTML tree node."""
    def __init__( self, value ):
        """Store a literal text value."""
        Node.__init__( self )
        self.value = value

    def __str__( self ):
        """Return the stored text without HTML escaping."""
        return self.value

class Standard( Container ):
    """Render an HTML element with attributes and children."""
    def __init__( self, name, attributes, contents=None, defaults=None ):
        """Initialize a named HTML element, its children, and attributes.

        Translate uppercase ``CLASS`` into ``class`` and fill in missing
        default attributes without overwriting explicit values.
        """
        Container.__init__( self, contents )

        self.name       = name
        self.attributes = attributes

        if 'CLASS' in self.attributes:
            self.attributes['class'] = self.attributes['CLASS']
            del self.attributes['CLASS']
            
        if defaults:
            for key in list(defaults.keys()):
                if key not in self.attributes: 
                    self.attributes[key] = defaults[key]

    def __str__( self ):
        """Render the element opening tag, children, and closing tag."""
        result  = '<' + self.name
        for name in list(self.attributes.keys()):
            result += ' ' + name + '="' + str( self.attributes[name] ) + '"'
        result += '>'
        result += Container.__str__( self )
        result += '</' + self.name + '>'

        return result

class StandardEmpty( Node ):
    """Render an HTML element with attributes and no children."""
    def __init__( self, name, attributes, defaults=None ):
        """Initialize an attribute-only HTML element and its defaults.

        Translate uppercase ``CLASS`` into ``class`` and preserve explicit
        attributes over defaults.
        """
        Node.__init__( self )

        self.name       = name
        self.attributes = attributes

        if 'CLASS' in self.attributes:
            self.attributes['class'] = self.attributes['CLASS']
            del self.attributes['CLASS']
        
        if defaults:
            for key in list(defaults.keys()):
                if key not in self.attributes:
                    self.attributes[key] = defaults[key]
                    
    def __str__( self ):
        """Render only the element opening tag and attributes."""
        result  = '<' + self.name
        for name in list(self.attributes.keys()):
            result += ' ' + name + '="' + str( self.attributes[name] ) + '"'
        result += '>'

        return result


# Document related classes
# ========================

class HTML( Standard ):
    """Render the root HTML element with an HTML 4.01 doctype."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the root HTML element and its children."""
        Standard.__init__( self, 'html', attributes, contents )

    def __str__( self ):
        """Prepend the HTML 4.01 Transitional doctype to the root element."""
        result  = '<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">'
        result += Standard.__str__( self )

        return result 

class Head( Standard ):
    """Represent an HTML document head."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'head', attributes, contents )

class Title( Standard ):
    """Represent an HTML document title."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'title', attributes, contents )

class Meta( StandardEmpty ):
    """Represent an HTML metadata element."""
    def __init__( self, **attributes ):
        """Initialize this attribute-only HTML element."""
        StandardEmpty.__init__( self, 'meta', attributes )

class Link( StandardEmpty ):
    """Represent an HTML link element."""
    def __init__( self, **attributes ):
        """Initialize this attribute-only HTML element."""
        StandardEmpty.__init__( self, 'link', attributes )

class Body( Standard ):
    """Represent the HTML document body."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'body', attributes, contents )


# Style related classes
# =====================

class B( Standard ):
    """Represent a bold-text HTML element."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'b', attributes, contents )

class I( Standard ):
    """Represent an italic-text HTML element."""
    def __init__( self, contents=None, **attributes ):  
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'i', attributes, contents )

class Font( Standard ):
    """Represent an HTML font element."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'font', attributes, contents )


# Table related classes
# =====================

class Table( Standard ):
    """Represent an HTML layout table with default styling."""
    def __init__( self, contents=None, **attributes ):
        """Initialize a table with optional children and layout defaults."""
        Standard.__init__( 
            self, 'table', attributes, contents,
            { 'border' : 0, 'class' : 'layout' }
        )

class TR( Standard ):
    """Represent an HTML table row with default layout styling."""
    def __init__( self, contents=None, **attributes ):
        """Initialize a table row with default layout styling."""
        Standard.__init__( 
            self, 'tr', attributes, contents,
            { 'class' : 'layout' }
        )

class TD( Standard ):
    """Represent an HTML table cell with default layout styling."""
    def __init__( self, contents=None, **attributes ):
        """Initialize a table cell with default alignment and layout styling."""
        Standard.__init__(
            self, 'td', attributes, contents,
            { 'valign': 'top', 'class' : 'layout' }
        )


# Form related classes
# ====================

class Form( Standard ):
    """Represent an HTML form element."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'form', attributes, contents )

class Input( Standard ):
    """Represent an HTML input element in the legacy tree."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'input', attributes, contents )


# Miscellaneous classes
# ====================

class A( Standard ):
    """Represent an HTML anchor element."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'a', attributes, contents )

class Img( Standard ):
    """Represent an HTML image element in the legacy tree."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'img', attributes, contents )

class P( Standard ):
    """Represent an HTML paragraph element."""
    def __init__( self, contents=None, **attributes ):
        """Initialize the element with optional contents and attributes."""
        Standard.__init__( self, 'p', attributes, contents )

class BR( Node ):
    """Represent an HTML line break."""
    def __str__( self ):
        """Return a literal HTML line-break tag."""
        return '<br>'
