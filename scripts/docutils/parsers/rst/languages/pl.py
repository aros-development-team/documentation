# Author: Tomasz Paul
# Contact: tpaul@wp.pl
# Revision: $Revision$
# Date: $Date$
# Copyright: This module has been placed in the public domain.

# New language mappings are welcome.  Before doing a new translation, please
# read <http://docutils.sf.net/docs/howto/i18n.html>.  Two files must be
# translated for each language: one in docutils/languages, the other in
# docutils/parsers/rst/languages.

"""
Polish-language mappings for language-dependent features of
reStructuredText.
"""

__docformat__ = 'reStructuredText'


directives = {
      'uwaga': 'attention',
      'ostrze\u017cenie': 'caution',
      'niebezpiecze\u0144stwo': 'danger',
      'b\u0142\u0105d': 'error',
      'wzmianka': 'hint',
      'wa\u017cne': 'important',
      'przypis': 'note',
      'wskaz\u00f3wka': 'tip',
      'ostrze\u017cenie': 'warning',
      'przestroga': 'admonition',
      'sidebar (translation required)': 'sidebar',
      'sidebar (translation required)': 'sidebar',
      'temat': 'topic',
      'line-block (translation required)': 'line-block',
      'parsed-literal (translation required)': 'parsed-literal',
      'rubryka': 'rubric',
      'epigraph (translation required)': 'epigraph',
      'highlights (translation required)': 'highlights',
      'pull-quote (translation required)': 'pull-quote', 
      'zusammengesetzt (translation required)': 'compound',
      'verbund (translation required)': 'compound',
      'container (translation required)': 'container',
      #'pytania': 'questions',
      'tabela': 'table',
      'tabela csv': 'csv-table',
      'list-table (translation required)': 'list-table',
      'meta': 'meta',
      #'imagemap (translation required)': 'imagemap',
      'obraz': 'image',
      'figure (translation required)': 'figure',
      'raw (translation required)': 'raw',
      'raw (translation required)': 'raw',
      'do\u0142\u0105cz': 'include',
      'zamiana': 'replace',
      'zamieni\u0107': 'replace',
      'zamie\u0144': 'replace',
      'unicode': 'unicode',
      'data': 'date',
      'klasa': 'class',
      'role (translation required)': 'role',
      'default-role (translation required)': 'default-role',
      'title (translation required)': 'title',
      'spis tre\u015bci': 'contents',
      'numeracja sekcji': 'sectnum',
      'sectnum (translation required)': 'sectnum',
      'target-notes (translation required)': 'target-notes',
      'header (translation required)': 'header',
      'footer (translation required)': 'footer',
      #u'footnotes': 'footnotes',
      #'cytat': 'citations',
      }
"""Polish name to registered (in directives/__init__.py) directive name
mapping."""

roles = {
      'abbreviation (translation required)': 'abbreviation',
      'akronim': 'acronym',
      'index': 'index',
      'indeks dolny': 'subscript',
      'indeks g\u00f32rny': 'superscript',
      'title-reference': 'title-reference',
      'pep-reference (translation required)': 'pep-reference',
      'rfc-reference (translation required)': 'rfc-reference',
      'emphasis (translation required)': 'emphasis',
      'pogrubienie': 'strong',
      'literal (translation required)': 'literal',
      'named-reference (translation required)': 'named-reference',
      'anonimowa referencja': 'anonymous-reference',
      'footnote-reference (translation required)': 'footnote-reference',
      'citation-reference (translation required)': 'citation-reference',
      'substitution-reference (translation required)': 'substitution-reference',
      'cel': 'target',
      'uri-reference (translation required)': 'uri-reference',
      'raw (translation required)': 'raw',
      'raw (translation required)': 'raw',}
"""Mapping of Polish role names to canonical role names for interpreted text.
"""
