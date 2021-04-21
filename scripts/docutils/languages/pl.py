# Authors:   Tomasz Paul
# Contact:   tpaul@wp.pl
# Revision:  $Revision$
# Date:      $Date$
# Copyright: This module has been placed in the public domain.

# New language mappings are welcome.  Before doing a new translation, please
# read <http://docutils.sf.net/docs/howto/i18n.html>.  Two files must be
# translated for each language: one in docutils/languages, the other in
# docutils/parsers/rst/languages.

"""
Polish language mappings for language-dependent features of Docutils.
"""

__docformat__ = 'reStructuredText'

labels = {
    'author': 'autor',
    'authors': 'autorzy',
    'organization': 'organizacja',
    'address': 'adres',
    'contact': 'kontakt',
    'version': 'wersja',
    'revision': 'rewizja',
    'status': 'status',
    'date': 'data',
    'dedication': 'dedykacja',
    'copyright': 'prawa autorskie',
    'abstract': 'streszczenie',
    'attention': 'uwaga!',
    'caution': 'ostrze\u017cenie!',
    'danger': 'niebezpiecze\u0144stwo!',
    'error': 'b\u0142\u0105d',
    'hint': 'wzmianka',
    'important': 'wa\u017cne',
    'note': 'przypis',
    'tip': 'wskaz\u00f3wka',
    'warning': 'ostrze\u017cenie',
    'contents': 'spis tre\u015bci'}
"""Mapping of node class name to label text."""

bibliographic_fields = {
    'autor': 'author',
    'autorzy': 'authors',
    'organizacja': 'organization',
    'adres': 'address',
    'kontakt': 'contact',
    'wersja': 'version',
    'rewizja': 'revision',
    'status': 'status',
    'data': 'date',
    'prawa autorskie': 'copyright',
    'dedykacja': 'dedication',
    'streszczenie': 'abstract'}
"""Polish (lowcased) to canonical name mapping for bibliographic fields."""

author_separators = [';', ',']
"""List of separator strings for the 'Authors' bibliographic field. Tried in
order."""
