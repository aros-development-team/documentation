# Author: Roman Suzi
# Contact: rnd@onego.ru
# Revision: $Revision$
# Date: $Date$
# Copyright: This module has been placed in the public domain.

# New language mappings are welcome.  Before doing a new translation, please
# read <http://docutils.sf.net/docs/howto/i18n.html>.  Two files must be
# translated for each language: one in docutils/languages, the other in
# docutils/parsers/rst/languages.

"""
Russian-language mappings for language-dependent features of Docutils.
"""

__docformat__ = 'reStructuredText'

labels = {
      'abstract': '\u0410\u043d\u043d\u043e\u0442\u0430\u0446\u0438\u044f',
      'address': '\u0410\u0434\u0440\u0435\u0441',
      'attention': '\u0412\u043d\u0438\u043c\u0430\u043d\u0438\u0435!',
      'author': '\u0410\u0432\u0442\u043e\u0440',
      'authors': '\u0410\u0432\u0442\u043e\u0440\u044b',
      'caution': '\u041e\u0441\u0442\u043e\u0440\u043e\u0436\u043d\u043e!',
      'contact': '\u041a\u043e\u043d\u0442\u0430\u043a\u0442',
      'contents':
      '\u0421\u043e\u0434\u0435\u0440\u0436\u0430\u043d\u0438\u0435',
      'copyright': '\u041f\u0440\u0430\u0432\u0430 '
      '\u043a\u043e\u043f\u0438\u0440\u043e\u0432\u0430\u043d\u0438\u044f',
      'danger': '\u041e\u041f\u0410\u0421\u041d\u041e!',
      'date': '\u0414\u0430\u0442\u0430',
      'dedication':
      '\u041f\u043e\u0441\u0432\u044f\u0449\u0435\u043d\u0438\u0435',
      'error': '\u041e\u0448\u0438\u0431\u043a\u0430',
      'hint': '\u0421\u043e\u0432\u0435\u0442',
      'important': '\u0412\u0430\u0436\u043d\u043e',
      'note': '\u041f\u0440\u0438\u043c\u0435\u0447\u0430\u043d\u0438\u0435',
      'organization':
      '\u041e\u0440\u0433\u0430\u043d\u0438\u0437\u0430\u0446\u0438\u044f',
      'revision': '\u0420\u0435\u0434\u0430\u043a\u0446\u0438\u044f',
      'status': '\u0421\u0442\u0430\u0442\u0443\u0441',
      'tip': '\u041f\u043e\u0434\u0441\u043a\u0430\u0437\u043a\u0430',
      'version': '\u0412\u0435\u0440\u0441\u0438\u044f',
      'warning': '\u041f\u0440\u0435\u0434\u0443\u043f\u0440\u0435\u0436'
      '\u0434\u0435\u043d\u0438\u0435'}
"""Mapping of node class name to label text."""

bibliographic_fields = {
      '\u0430\u043d\u043d\u043e\u0442\u0430\u0446\u0438\u044f': 'abstract',
      '\u0430\u0434\u0440\u0435\u0441': 'address',
      '\u0430\u0432\u0442\u043e\u0440': 'author',
      '\u0430\u0432\u0442\u043e\u0440\u044b': 'authors',
      '\u043a\u043e\u043d\u0442\u0430\u043a\u0442': 'contact',
      '\u043f\u0440\u0430\u0432\u0430 \u043a\u043e\u043f\u0438\u0440\u043e'
      '\u0432\u0430\u043d\u0438\u044f': 'copyright',
      '\u0434\u0430\u0442\u0430': 'date',
      '\u043f\u043e\u0441\u0432\u044f\u0449\u0435\u043d\u0438\u0435':
      'dedication',
      '\u043e\u0440\u0433\u0430\u043d\u0438\u0437\u0430\u0446\u0438\u044f':
      'organization',
      '\u0440\u0435\u0434\u0430\u043a\u0446\u0438\u044f': 'revision',
      '\u0441\u0442\u0430\u0442\u0443\u0441': 'status',
      '\u0432\u0435\u0440\u0441\u0438\u044f': 'version'}
"""Russian (lowcased) to canonical name mapping for bibliographic fields."""

author_separators =  [';', ',']
"""List of separator strings for the 'Authors' bibliographic field. Tried in
order."""
