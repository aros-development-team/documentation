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
Russian-language mappings for language-dependent features of
reStructuredText.
"""

__docformat__ = 'reStructuredText'

directives = {
 '\u0431\u043b\u043e\u043a-\u0441\u0442\u0440\u043e\u043a': 'line-block',
 'meta': 'meta',
 '\u043e\u0431\u0440\u0430\u0431\u043e\u0442\u0430\u043d\u043d\u044b\u0439-\u043b\u0438\u0442\u0435\u0440\u0430\u043b':
 'parsed-literal',
 '\u0432\u044b\u0434\u0435\u043b\u0435\u043d\u043d\u0430\u044f-\u0446\u0438\u0442\u0430\u0442\u0430':
 'pull-quote',
 'compound (translation required)': 'compound',
 'container (translation required)': 'container',
 'table (translation required)': 'table',
 'csv-table (translation required)': 'csv-table',
 'list-table (translation required)': 'list-table',
 '\u0441\u044b\u0440\u043e\u0439': 'raw',
 '\u0437\u0430\u043c\u0435\u043d\u0430': 'replace',
 '\u0442\u0435\u0441\u0442\u043e\u0432\u0430\u044f-\u0434\u0438\u0440\u0435\u043a\u0442\u0438\u0432\u0430-restructuredtext':
 'restructuredtext-test-directive',
 '\u0446\u0435\u043b\u0435\u0432\u044b\u0435-\u0441\u043d\u043e\u0441\u043a\u0438': 
 'target-notes',
 'unicode': 'unicode',
 '\u0434\u0430\u0442\u0430': 'date',
 '\u0431\u043e\u043a\u043e\u0432\u0430\u044f-\u043f\u043e\u043b\u043e\u0441\u0430':
 'sidebar',
 '\u0432\u0430\u0436\u043d\u043e': 'important',
 '\u0432\u043a\u043b\u044e\u0447\u0430\u0442\u044c': 'include',
 '\u0432\u043d\u0438\u043c\u0430\u043d\u0438\u0435': 'attention',
 '\u0432\u044b\u0434\u0435\u043b\u0435\u043d\u0438\u0435': 'highlights',
 '\u0437\u0430\u043c\u0435\u0447\u0430\u043d\u0438\u0435': 'admonition',
 '\u0438\u0437\u043e\u0431\u0440\u0430\u0436\u0435\u043d\u0438\u0435':
 'image',
 '\u043a\u043b\u0430\u0441\u0441': 'class',
 'role (translation required)': 'role',
 'default-role (translation required)': 'default-role',
 'title (translation required)': 'title',
 '\u043d\u043e\u043c\u0435\u0440-\u0440\u0430\u0437\u0434\u0435\u043b\u0430':
 'sectnum',
 '\u043d\u0443\u043c\u0435\u0440\u0430\u0446\u0438\u044f-\u0440\u0430\u0437'
 '\u0434\u0435\u043b\u043e\u0432': 'sectnum',
 '\u043e\u043f\u0430\u0441\u043d\u043e': 'danger',
 '\u043e\u0441\u0442\u043e\u0440\u043e\u0436\u043d\u043e': 'caution',
 '\u043e\u0448\u0438\u0431\u043a\u0430': 'error',
 '\u043f\u043e\u0434\u0441\u043a\u0430\u0437\u043a\u0430': 'tip',
 '\u043f\u0440\u0435\u0434\u0443\u043f\u0440\u0435\u0436\u0434\u0435\u043d'
 '\u0438\u0435': 'warning',
 '\u043f\u0440\u0438\u043c\u0435\u0447\u0430\u043d\u0438\u0435': 'note',
 '\u0440\u0438\u0441\u0443\u043d\u043e\u043a': 'figure',
 '\u0440\u0443\u0431\u0440\u0438\u043a\u0430': 'rubric',
 '\u0441\u043e\u0432\u0435\u0442': 'hint',
 '\u0441\u043e\u0434\u0435\u0440\u0436\u0430\u043d\u0438\u0435': 'contents',
 '\u0442\u0435\u043c\u0430': 'topic',
 '\u044d\u043f\u0438\u0433\u0440\u0430\u0444': 'epigraph',
 'header (translation required)': 'header',
 'footer (translation required)': 'footer',}
"""Russian name to registered (in directives/__init__.py) directive name
mapping."""

roles = {
 '\u0430\u043a\u0440\u043e\u043d\u0438\u043c': 'acronym',
 '\u0430\u043d\u043e\u043d\u0438\u043c\u043d\u0430\u044f-\u0441\u0441\u044b\u043b\u043a\u0430':
  'anonymous-reference',
 '\u0431\u0443\u043a\u0432\u0430\u043b\u044c\u043d\u043e': 'literal',
 '\u0432\u0435\u0440\u0445\u043d\u0438\u0439-\u0438\u043d\u0434\u0435\u043a\u0441':
  'superscript',
 '\u0432\u044b\u0434\u0435\u043b\u0435\u043d\u0438\u0435': 'emphasis',
 '\u0438\u043c\u0435\u043d\u043e\u0432\u0430\u043d\u043d\u0430\u044f-\u0441\u0441\u044b\u043b\u043a\u0430':
  'named-reference',
 '\u0438\u043d\u0434\u0435\u043a\u0441': 'index',
 '\u043d\u0438\u0436\u043d\u0438\u0439-\u0438\u043d\u0434\u0435\u043a\u0441':
  'subscript',
 '\u0441\u0438\u043b\u044c\u043d\u043e\u0435-\u0432\u044b\u0434\u0435\u043b\u0435\u043d\u0438\u0435':
  'strong',
 '\u0441\u043e\u043a\u0440\u0430\u0449\u0435\u043d\u0438\u0435':
  'abbreviation',
 '\u0441\u0441\u044b\u043b\u043a\u0430-\u0437\u0430\u043c\u0435\u043d\u0430':
  'substitution-reference',
 '\u0441\u0441\u044b\u043b\u043a\u0430-\u043d\u0430-pep': 'pep-reference',
 '\u0441\u0441\u044b\u043b\u043a\u0430-\u043d\u0430-rfc': 'rfc-reference',
 '\u0441\u0441\u044b\u043b\u043a\u0430-\u043d\u0430-uri': 'uri-reference',
 '\u0441\u0441\u044b\u043b\u043a\u0430-\u043d\u0430-\u0437\u0430\u0433\u043b\u0430\u0432\u0438\u0435':
  'title-reference',
 '\u0441\u0441\u044b\u043b\u043a\u0430-\u043d\u0430-\u0441\u043d\u043e\u0441\u043a\u0443':
  'footnote-reference',
 '\u0446\u0438\u0442\u0430\u0442\u043d\u0430\u044f-\u0441\u0441\u044b\u043b\u043a\u0430':
  'citation-reference',
 '\u0446\u0435\u043b\u044c': 'target',
 'raw (translation required)': 'raw',}
"""Mapping of Russian role names to canonical role names for interpreted text.
"""
