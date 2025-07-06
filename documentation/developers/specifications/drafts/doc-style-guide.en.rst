=========================
Documentation Style guide
=========================

.. Contents::

Introduction
============

Ideally, all AROS documentation should share a common style, regardless of the
intended audience of a specific document. While first-time contributors can't
be expected to adhere closely to the style in use, all documentation should
eventually be made to implement a single style.

This document lists a number of guidelines for our documentation, both in
text form and for the web site. To the new contributor they should give an
overview of issues that could influence the style of his text; for those
regularly involved with documentation and translation they should provide a
mould that documents could be formed with. Hopefully, it will in time grow to
be a full-fledged style guide for AROS documents.

This document focusses on the English language versions of the documentation,
as that language is used as the AROS default. It's expected that eventually
translators for other languages not just translate this document, but
substitute and add language-specific guidelines that suit the needs for their
language.



Characters
==========

We have to take care to create documentation that can, in it's text form,
easily be read by all who work on it. This influences the characters we can
use, until AROS gets Unicode-support, as well as the text width used.


ISO character set
-----------------

Our English language web-pages are encoded as ISO 8859-15. It'll probably make
life easier all around if you set your editor to that same set when working on
English documentation, if possible. Of course, if you have no need for
characters beyond the ASCII set, any ISO 8859 set will likely suffice, just
don't forget that limitation. For other languages, the same will holds, though
in some cases with a different character set.


Apostrophe
----------

Several characters are available that could be used as apostrophes in our
texts. To avoid a chaos of apostrophes, we've settled on using the ``'``
(decimal ASCII code 39) only. Other possibilities, like accents, tend to be
asymmetrical, which doesn't work well for punctuation that should hang in
between two letters. Don't use those.

On the other hand, ReST uses back ticks for a number of purposes. Do not
confuse the two.

If you use a word processor, rather than a text editor, check that it doesn't
change the apostrophes automatically to accents or non-supported characters.
Also, take care not to use asymmetrical aligned quotes as apostrophes.


Spaces
------
+ Spacing is 1 space, also between sentences.

+ Don't fill out lines with spaces between the words. It makes the lines 
  less readable in the text, and on the final page they'll likely be ignored.

+ Trailing spaces on a line are not visible, and can only confuse editing.
  They should be removed.

+ As with code, indentation is 4 spaces per level. An exception is made for
  lists, where indentation of four spaces would separate the leading symbol
  too much from the text it introduces. Lists therefore have their natural
  indentation.

Alternative
    + Spacing between sentences could be set to 2 or 3 spaces. Note that this
      is only for the readability of the text version; it doesn't influence
      the final pages.
    + We could use 4 spaces for lists as well, if ReST can handle it, and
      accept the distance for "+   The text".


Tabs
----

Tabs, tabulator stops, do have some functions in text, but can also cause
problems.

+ Tabs are not used for indentation. Even when including code that requires
  indentation by tabs (Make files), those tabs are replaced by spaces in the
  text, so there will be no side effects when the text is processed into a
  web-page.

+ Trailing tabs on a line are not visible, and can only confuse editing.
  They should be removed.


Discuss
    Do tabs have a function in our documentation at all, or is it better not to
    confuse ReST processing with them?



Spelling
========

Ideally, the spelling of each new document and each revision would be correct
to begin with, and most contributors will have spell checkers to help make
that a reality. Perfection is hard to come by, however, and we should expect
corrections made to the language of documents. In this case, differences of
opinion are possible about what is correct.


Dialects
--------

With people from different locations contributing, it's nigh-unavoidable that
different dialects of the same language will be used in the same document. At
least where spelling is concerned, try to adhere to the spelling that was used
when the document was created or, when viewing just the current document, the
spelling that most of the document adheres to.

Alternative:
    Decide on a standard dialect for each language. This would preferably be
    the same choice as for the locale languages, if this has been done there.
    Each writer would have to try, to the best of his ability, to match that
    standard, even when that dialect is not native to him and even when he is
    the first and therefore only contributor to a document.


Corrections
-----------

Language corrections should ideally be done separately from content changes,
but we shouldn't be too religious about that. Writers who disagree with
language corrections are advised to take the matter up with the person who
made that correction, rather than start commit wars.



Words
=====

Pronouns
--------

Each language will have its own problems with pronouns; the issues addressed
here are those stemming from the fact that AROS is created by a collective,
and those stemming from the multiple meanings of "you" in English and its
equivalents in other languages.

+ "I" is the 9th letter of the alphabet. As a pronoun it can't be used in a
  document, as that would be the document itself speaking. The writers of each
  document are supposed to be the AROS Team, and they, as a collective can't
  refer to themselves as "I". There are a few exceptions to this, like a draft
  a or a commentary, as the assumption there is that the writer himself
  addresses the reader. Note, however, that after a draft has been revised
  a few times by other contributors, this quickly becomes impractical.

+ "You" is the reader, when the reader is supposed to follow steps. In other
  contexts it's usually unnecessary to address the reader directly. Especially
  try to avoid inventing facts about "you", as in: "You as a tester won't know
  this implementation detail:". The same message can usually written without
  excluding part of the audience: "If you're a tester, you might not know this
  implementation detail:" or simply "This is an implementation detail testers
  might not know:".

+ "We" is the "AROS (Development/Documentation/Testing) Team", as appropriate.
  It does not refer to "You and I" (see "I" and "You", above). Writers who
  like to take the reader by the hand will find that this can also be done in
  ways that are less confusing, and easier on the reader.

+ "He" is the user/reader etc., referred to in the third person. We can jump
  high and low, but our users and readers are most likely male, and it's a
  simple choice to just accept that as our single third person reference,
  rather than having to take care to use  "she", "(s)he", "they" in the
  singular, "she/he", etc. consistently.

  Often, there's no reason to use a pronoun at all, but don't artificially
  write about "the user" five times in a row.

+ "It" can be many things. (Well, one thing at a time.) This makes it easy to
  use for avoiding reusing the same term over and over, but do take care that
  the reference is a clear one. "I laid my hat next to the cushion and sat
  down on it" is not the kind of structure you would like use while trying to
  explain some intricate AROS detail. The same holds for "this", "that",
  "these", "there", and a few more words of a similar nature, that all may or
  may not refer to what you intended to write about.

Alternative
    Pick a different style instead of "he".


Abbreviations
-------------

Don't use jargon abbreviations like "abbrevs", "apps", "dirs", "docs", and
"params" unless they happen to be names of directories or similar. For now,
we'll assume our documents will only exist in digital form, hence writing out
a few words more is not going to bloat the book on your desk. Using common
abbreviations from the field you're treating is o.k., but do write them out in
parentheses the first time you use them. Using common abbreviations from the
language in general is acceptable, if you do remember that they tend to use
dots: e.g., i.e., etc., and a few more like them. Try to avoid using those at
the end of the sentence, as the skipping of the full stop in those cases tends
can be confusing.


Jargon
------

If you use a term which you expect to be unknown to a considerable part of the
readers, give a short description as part of the introduction. If possible,
link to a page that treats the subject in more detail, and if not, remember
there's always the glossary. At least:


Glossary
--------

There are quite a few terms in this project that either have specific meanings
in their field or are Amiga- or AROS-specific. It would be a good thing to
build a glossary for such words, giving short explanations and, where
possible, linking to pages where more information can be found.


File system
-----------

Names in the AROS-DOS file system are case-insensitive. This allows the user
to write them with any capitalization he chooses. That doesn't mean, however,
that we ourselves can take that freedom and write "DEVS:", "Devs:", "devs:"
and maybe even "dEvS:" as we see fit. We should stick to a single pattern as
well as we can.

These are names, of files, directories and devices, and they should get a
leading capital; current practice appears to be that each word gets such a
leading capital, if necessary ignoring that spaces have been omitted from the
name. However, if part of the name is text that would normally be written
entirely in capitals, then it's written that way in these cases as well.
E.g. "Assign", "Libs:", "AddDataTypes", but "AROSMonDrvs".

In a number of cases, however, the case is fixed, probably because the names
are passed though case-sensitive Exec. These cases should be documented,
together with their general patterns and exceptions to those.

Discuss
    This would also mean "Env:" and "EnvArc:", although here custom seems to
    be to write "ENV:" and "ENVARC:". Is this acceptable, or do we need an
    exception? And should we need one, what would be its scope?


Representation
--------------

Some names and abbreviations are so familiar to us that we sometimes forget
that they are not ordinary words. Other words apparently seem so special that
we create abbreviations or capitalizations. As the mixed spelling this causes
is rather confusing for the reader, we should try to limit ourselves to
writing such words in only one way. An exception are the occurrences in
filenames etc., where other conventions govern the way names are written.

Try to write the following words written out like this and/or using this
capitalization:

+ AROS (rather than "a.r.o.s" or "Aros"), AROS' (for "of AROS"), but Aros.org
  (the name of the website);
+ Amiga, Amigas, AmigaOS (rather than "AOS", except for that project);
+ BOOPSI;
+ RAM, ROM, ROMs, CD-ROM;
+ hard disk, floppy disk, floppy drive (rather than "HD", "HDD", "FD", "FDD");
+ PowerPC (rather than "PPC");
+ ATA, SATA, USB, IDE, PCI, VGA, VESA;
+ CLI;
+ Multics, Unix, Linux, POSIX (the latter being the only acronym);
+ Alt, Shift, Caps Lock, Ctrl, Delete, Backspace, Page Up, Page Down, Home,
  End, Insert, Enter (numeric keypad), Return (main keypad); or Alt key,
  Shift key, etc. to indicate it's a key.

Alternative
    + Select different representations in cases where there's a good reason to
      do so.
    + Require "key" for the name of a key, except in combinations.


Compounds
---------

Language being rather organic, the way compounds are written can rarely be
described with fixed rules. The Amiga User's Guide - AmigaDOS (1992), uses
"file system", but "filename". Though we may be able to use sources like
that to determine whether a space or hyphen should be used or not, and whether
the word should have one or more capitals, the only way to do so consistently
would be to create a compounds list, adding to it as we determine the way
these should be written.



Text style
==========

In some cases, it's necessary to pay special attention to the exact way to
represent text, to avoid possible confusion.


End of quote
------------

In cases where the contents of a quote have to be copied verbatim, counter to
English usage do not include trailing punctuation (full stops, question
marks, etc.) inside the quotes, but let them trail behind::

    Type in the shell "MakeDir Ram:Test".

In other cases, the convention does apply. Likewise, other languages should
follow the conventions for quoting in those languages, except where they would
cause problems with the purpose of the quotes.

Alternative
    Be consistent and never include trailing punctuation, yet suffer the scorn
    of the language buffs.


Object names
--------------

Object names, be they function names, method names, etc., are used throughout
the documentation. Some of those names start with a lower-case letter or with
punctuation, which is rather confusing at the start of the sentence, as only
upper-case letters are expected there. In such cases, and wherever it's
unclear what type of object you're talking about, add the type in front of it:
"The macro __small__ ...".



Headings
========

By using ReST to represent our texts, we give ourselves plenty of rope
regarding sections and headings. This is also plenty of rope to hang
ourselves. Some constraints on the amount and type of headings, and the
characters they are indicated with, would be a good thing.


Table of content
----------------

ReST allows gathering the headings of a document in a table of content.
For a document of non-trivial length such a table should be added, near
the top of the document. In the location where you would want the table of
content to appear, add a line with the ReST directive ".. Contents::".
Normally, no title is specified for the table: this guarantees the default
title for tables of content, together with its translation into each
language, is used throughout the documentation.


Number of heading types
-----------------------

A page should not need more than four types of headings: One for the page
title, and three for main sections, sections and subsections. More levels of
sectioning usually means the document is too specific in the parts where
extra sectioning is used; try to split off the details to a details page.
If there is a really good reason to use more levels, at least limit the depth
of the table of contents, so it won't jump all over the place. This is done by
adding "    :depth: 3" on the line below the contents directive. This can also
be used, with a lower depth, when a document includes a large number of small
subsections, e.g. a library documentation, including for each function the
same group of documentation fields.


Page title
----------

+ The page title is typically indicated with over- and underscored text.
+ The type of heading used for the page title is not repeated in the text. If
  you feel you should, you're likely trying to fit two topics into one page.
+ If a document is a chapter of a larger document, the titles of document and
  chapter are concatenated with a " -- " to form the page title. Don't repeat
  the chapter title as a separate heading.
+ A heading that is the first in the document and the only one of its type,
  with all other headings hierarchically below it, most likely should be
  (part of) the page title.
+ Page titles are written with the start of each word capitalized. This is
  possible because they will not include the source code names, but rather the
  descriptive names: Not "exec.library" but "The Exec Library".

Discuss
    Should combined "work -- chapter" page titles be required, so we force
    ourselves to think in larger units than single files? Can we stop at two
    levels?


Underscore
----------

+ Though ReST allows quite a bit of variation in underscoring a section
  heading, don't use actual underscore characters. Since they appear at the
  very bottom of the line, they give the impression that the text above them
  is just free-standing text. (That underscore character is intended for
  over-striking, where the underscore is added on the same line as the
  original text.)

+ ReST allows any length of underscoring and overscoring, provided they are at
  least as long as the text. This could be used to create page-wide
  separators, but this the focus away from their actual purpose: Stressing the
  heading itself. It's preferable to have lines that are not much longer than
  the heading.

Alternatives
    + Don't just note that one character is not suitable, but select fixed
      characters for the each depth of heading.
    + Always exactly match the length of the headings.


Upper-case
----------

Headings, other than page titles, get letters in upper-case like a sentence
would. Taking care of hierarchical style differences is the domain of the
generation scripts; it's not done by writing a heading completely in capitals.


Trailing punctuation
--------------------

Headings are a form of title. As with all titles, they do not end in
punctuation other than question or exclamation marks, and then only when
there is a very good reason for them.


Transitions
-----------

Separators without text, transitions, have less indication of their function
than headings. It's therefore preferable to give them the same look throughout
the text.

+ Always use the "-" as the repeated character, unless there's a need to
  distinguish between different types of transition.

+ Skip a single line on each side of the punctuation line.

Alternative
    Select a different character for transitions.


Section terms
-------------

To allow referring to text further away than in the next or previous
paragraph, we need terms for the different types of heading with the content
following them. Such names may also create a bit more uniformity in the amount
of information included in such a section. Where several file combine into a
larger document, these files too will need such a term, and that larger
document may group files together into even larger units.

Discuss
    Which terms to select for what.



Document structure
==================

A clear representation of the text has no direct influence on the resulting
page, but it should improve readability for those working on the
documentation.


Lines
-----

+ Try to keep your lines short. Insert line breaks; they will not cause any
  problems in the pages, but in the text they keep the width manageable.

+ The end of the line is a newline character, no carriage return character is
  involved. If the OS you document on disagrees, take care to set line-endings
  separately, or convert documents before committing them to the repository.

+ Limit lines to 80 characters. Considering that the final character will be
  a newline, that will be 79 printable characters. No need to be religious
  about it, but if your lines are at a slightly different length, don't
  make a fuss if someone does reformat them to the standard length.

+ If your headings don't fit into 80 characters, give some thought to shorter
  headings; they are meant to be short indicators of content, after all.

+ It doesn't make sense to use hyphens to fill a line with half a word, as on
  the page the text will reflow, likely leaving us with a hyphened word in the
  middle of a line.

Alternative:
    The width of a line could be 81 characters in length, with 80 printable
    characters. On the other hand, some prefer a narrower style, like 72
    characters, e.g. because they are more likely to pass through the forum
    without reformatting.

Discuss:
    What if code is included, which might be wider than 80 characters? What if
    the code is less than 80 characters, but indenting it would make it cross
    the boundary?


Vertical spacing
----------------

In the text, skipping single lines is used as separation. Separating sections
will therefore require at least two skipped lines to make the separation stand
out. Below the heading, skip one line to make the heading stand out from the
content below it.

Discuss:
    Personally, I would skip two line for smallest section type, and one more
    for each larger type. With just one type of section, that would mean two
    lines skipped between them; with three types of section it would mean
    skipping four lines for main sections, three lines for normal sections and
    two lines for subsections.

Alternative:
    Use a high character for the subsection underscore, say ^^^^, with the
    space within that character functioning as the separation from the
    following text instead of a skipped line, thus using a smaller separation
    for a less important section-type.


End of document
---------------

Allow the text some space; put a newline character at the end of the document,
so there will be one empty line at the end in most readers. This give
paragraphs a consistent look, always ending in an empty line.

Alternatives:
    + Use as few characters as possible; as soon as the text stops, so does
      the file.
    + Use two or more blank lines; indicating the end of the section. For
      example, one could add one more line than between main sections, to
      indicate all sections ended. This also creates a bit of a bottom margin
      similar to the end of a paper page, but some might not like that.



Autodocs
========

Style
-----

Autodocs have some style issues that are particular to those documents, which
are described in {{ devdocpath }}documenting.en. Apart from those,
their style should follow this style guide.


Languages
---------

As autodocs support just a single language, the current assumptions are that
all source code contributed to AROS is in English, and that all developers
have a reading skill in English. This suffices for system development.
A complete AROS documentation, on the other hand, would include documentation
written in each supported language.

Discuss
    How to get from autodocs to multilingual documentation. E.g. the
    C-commands obviously will have to be documented in such a way. How can we
    structure that so all such documents get created, and that a change in an
    autodoc really does end up in all language versions?



Translating
===========

Normally, all documents are translated from English, with the consequence that
this section is rather small, here. For other languages it's likely to contain
more guidelines on e.g. deciding whether a term should be translated or
borrowed.

Discuss
    Would it be advisable to always list the source of a translation, as part
    of the page header, including the last revision of the original
    incorporated in the translation?



To-Do
=====

Steps to take after publication of this document, not necessarily in this
order:

+ Discuss the indicated open issues (and probably some not indicated);
+ Choose between the alternatives, where indicated or following from the
  discussions;
+ Adapt the document accordingly;
+ Sanction the document in some way;
+ Find a place for the document, and its offspring, in the document tree;
+ Start a Glossary;
+ Start a Word list, containing words that for various reasons mentioned in
  this document need a documented preferred way to write them;
+ Create different-language versions of this document, translations edited for
  language-specific issues, with those versions going through these same steps
  for their language communities. Some of those communities will be bigger
  than others, though.

