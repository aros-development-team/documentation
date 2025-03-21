======
locale
======

.. This document is automatically generated. Don't edit it!

`Index <index>`_

----------

======================================= ======================================= ======================================= ======================================= 
`CloseCatalog()`_                       `CloseLocale()`_                        `ConvToLower()`_                        `ConvToUpper()`_                        
`FormatDate()`_                         `FormatString()`_                       `GetCatalogStr()`_                      `GetLocaleStr()`_                       
`IsXXXX()`_                             `OpenCatalogA()`_                       `OpenLocale()`_                         `ParseDate()`_                          
`RexxHost()`_                           `StrConvert()`_                         `StrnCmp()`_                            
======================================= ======================================= ======================================= ======================================= 

-----------

CloseCatalog()
==============

Synopsis
~~~~~~~~
::

 void CloseCatalog(
          struct Catalog * catalog );

Function
~~~~~~~~
::

     Conclude access to a message catalog, and decrement the use count.
     If this use count is 0, the catalog can be expunged when the
     system memory is running low.


Inputs
~~~~~~
::

     catalog        -        the message catalog to close, note that NULL is
                     a valid catalog.


Result
~~~~~~
::

     The catalog is closed, and should no longer be used by the
     application.



See also
~~~~~~~~

`GetCatalogStr()`_ `OpenCatalogA()`_ 

----------

CloseLocale()
=============

Synopsis
~~~~~~~~
::

 void CloseLocale(
          struct Locale * locale );

Function
~~~~~~~~
::

     Finish accessing a Locale.


Inputs
~~~~~~
::

     locale  -   An opened locale. Note that NULL is a valid
                 parameter here, and will simply be ignored.


Result
~~~~~~
::

     The locale is released back to the system.



See also
~~~~~~~~

`OpenLocale()`_ 

----------

ConvToLower()
=============

Synopsis
~~~~~~~~
::

 ULONG ConvToLower(
          const struct Locale * locale,
          ULONG character );

Function
~~~~~~~~
::

     This function determine if the character supplied is upper case,
     and if it is, the character will be converted to lower case.
     Otherwise, the original character will be returned.


Inputs
~~~~~~
::

     locale      - The Locale to use for this conversion or NULL for
                   the system default locale.
     character   - The character to convert to lower case.


Result
~~~~~~
::

     The possibly converted character.


Notes
~~~~~
::

     This function requires a full 32-bit character in order to
     support future multi-byte character sets.



----------

ConvToUpper()
=============

Synopsis
~~~~~~~~
::

 ULONG ConvToUpper(
          const struct Locale * locale,
          ULONG character );

Function
~~~~~~~~
::

     ConvToUpper() will determine if a character is a lower case
     character and if so convert it to the upper case equivalent.
     Otherwise it will return the original character.


Inputs
~~~~~~
::

     locale      - The Locale to use for this conversion or NULL for
                   the system default locale.
     character   - The character to convert.


Result
~~~~~~
::

     The possibly converted character.


Notes
~~~~~
::

     This function requires a full 32-bit character in order to support
     future multi-byte character sets.



See also
~~~~~~~~

`ConvToLower()`_ 

----------

FormatDate()
============

Synopsis
~~~~~~~~
::

 VOID FormatDate(
          const struct Locale    * locale,
          CONST_STRPTR formatString,
          const struct DateStamp * date,
          const struct Hook      * hook );

Function
~~~~~~~~
::


 Generate a date string based on a template. The bytes generated are sent
 to a user specified callback function.


Inputs
~~~~~~
::


 locale        --  the locale to use when formatting the string or NULL
                   for the system default locale.
 formatString  --  the formatting template string; this is much like the
                   printf() formatting style, i.e. a % followed by a
                   formatting command. The following commands exist:

                   %a -- abbreviated weekday name
                   %A -- weekday name
                   %b -- abbreviated month name
                   %B -- month name
                   %c -- the same as "%a %b %d %H:%M:%S %Y"
                   %C -- the same as "%a %b %e %T %Z %Y"
                   %d -- day number with leading zeros
                   %D -- the same as "%m/%d/%y"
                   %e -- day number with leading spaces
                   %h -- abbreviated month name
                   %H -- hour using 24 hour style with leading zeros
                   %I -- hour using 12 hour style with leading zeros
                   %j -- julian date
                   %m -- month number with leading zeros
                   %M -- the number of minutes with leading zeros
                   %n -- linefeed
                   %p -- AM or PM string
                   %q -- hour using 24 hour style
                   %Q -- hour using 12 hour style
                   %r -- the same as "%I:%M:%S %p"
                   %R -- the same as "%H:%M"
                   %S -- the number of seconds with leading zeros
                   %t -- tab
                   %T -- the same as "%H:%M:%S"
                   %U -- the week number, taking Sunday as the first day
                         of the week
                   %w -- the weekday number
                   %W -- the week number, taking Monday as the first day
                         of the week
                   %x -- the same as "%m/%d/%y"
                   %X -- the same as "%H:%M:%S"
                   %y -- the year using two digits with leading zeros
                   %Y -- the year using four digits with leading zeros

                   If the template parameter is NULL, a single null byte
                   is sent to the callback function.

 date          --  the current date
 hook          --  callback function; this is called for every character
                   generated with the following arguments:

                   * pointer to hook structure
                   * character
                   * pointer to locale



See also
~~~~~~~~

`ParseDate()`_ `libraries/locale.h </documentation/developers/headerfiles/libraries/locale.h>`_ 

----------

FormatString()
==============

Synopsis
~~~~~~~~
::

 APTR FormatString(
          const struct Locale * locale,
          CONST_STRPTR fmtTemplate,
          RAWARG dataStream,
          const struct Hook * putCharFunc );


----------

GetCatalogStr()
===============

Synopsis
~~~~~~~~
::

 CONST_STRPTR GetCatalogStr(
          const struct Catalog * catalog,
          ULONG stringNum,
          CONST_STRPTR defaultString );

Function
~~~~~~~~
::

     This function will return the string specified by the
     stringNum from the given message catalog, or the defaultString
     if the string could not be found.

     If the catalog == NULL, then the defaultString will also be
     returned.


Inputs
~~~~~~
::

     catalog -        Message catalog to search. May be NULL.
     stringNum -        ID of the string to find.
     defaultString - String to return in case catalog is NULL or
                     string could not be found.


Result
~~~~~~
::

     A pointer to a READ ONLY NULL terminated string. This string
     pointer is valid as long as the catalog remains open.



See also
~~~~~~~~

`OpenCatalogA()`_ `CloseCatalog()`_ 

----------

GetLocaleStr()
==============

Synopsis
~~~~~~~~
::

 CONST_STRPTR GetLocaleStr(
          const struct Locale * locale,
          ULONG stringNum );

Function
~~~~~~~~
::

     This function will return a system standard string from
     the current Locale.


Inputs
~~~~~~
::

     locale      - The current locale.
     stringNum   - The number of the string to get a pointer to.
                   See the include file <libraries/locale.h>
                   for a list of possible values.


Result
~~~~~~
::

     A pointer to a NULL-terminated string, or NULL if the string
     requested was unknown. The returned string is READ-ONLY and
     is valid only as long as the Locale remains open.



----------

IsXXXX()
========

Synopsis
~~~~~~~~
::

 BOOL IsXXXX(
          const struct Locale * locale,
          ULONG character );

Function
~~~~~~~~
::

     These functions allow you to find out whether a character
     matches a certain type according to the current Locale
     settings.

     The functions available are:

     IsAlNum()  - is this an alphanumeric character
     IsAlpha()  - is this an alphabet character
     IsCntrl()  - is this a control character
     IsDigit()  - is this a decimal digit character
     IsGraph()  - is this a graphical character
     IsLower()  - is this a lowercase character
     IsPrint()  - is this a printable character
     IsPunct()  - is this a punctuation character
     IsSpace()  - is this a whitespace character
     IsUpper()  - is this an uppercase character
     IsXDigit() - is this a hexadecimal digit


Inputs
~~~~~~
::

     locale      - The Locale to use for this function or NULL
                   for the system default locale.
     character   - the character to test


Result
~~~~~~
::

     ind - An indication of whether the character matches the type.
         TRUE - if the character is of the required type,
         FALSE - otherwise


Notes
~~~~~
::

     These functions require a 32-bit character to support future
     multi-byte character sets.



----------

OpenCatalogA()
==============

Synopsis
~~~~~~~~
::

 struct Catalog * OpenCatalogA(
          const struct Locale  * locale,
          CONST_STRPTR name,
          const struct TagItem * tags );
 
 struct Catalog * OpenCatalog(
          const struct Locale  * locale,
          CONST_STRPTR name,
          TAG tag, ... );


----------

OpenLocale()
============

Synopsis
~~~~~~~~
::

 struct Locale * OpenLocale(
          CONST_STRPTR name );

Function
~~~~~~~~
::

     This function will open for use a named locale. A locale is a
     data structure that contains many different parameters that
     an application needs in order to localise itself. Using this
     information, an application can dynamically adapt to the user's
     environment.

     Locales are created using the Locale Preferences Editor. If
     you pass NULL instead of a name, then you will receive the
     current default Locale. This is the normal procedure.


Inputs
~~~~~~
::

     name    -   The name of the locale you wish opened, or NULL
                 to open the current default locale. This will
                 be an IFF PREF file which contains both LCLE
                 and CTRY chunks.


Result
~~~~~~
::

     A pointer to an initialised Locale structure, or NULL if none
     could be opened. If NULL is returned you can use IoErr()
     to find out what caused this error.

     If you pass NULL, you will always succeed.



See also
~~~~~~~~

`CloseLocale()`_ 

----------

ParseDate()
===========

Synopsis
~~~~~~~~
::

 BOOL ParseDate(
          const struct Locale    * locale,
          struct DateStamp * date,
          CONST_STRPTR fmtTemplate,
          const struct Hook      * getCharFunc );

Function
~~~~~~~~
::

     This function will convert a stream of characters into an AmigaDOS
     DateStamp structure. It will obtain its characters from the
     getCharFunc callback hook, and the given formatting template will
     be used to direct the parse.


Inputs
~~~~~~
::

     locale      -   the locale to use for the formatting or NULL for
                     the system default locale.
     date        -   where to put the converted date. If this is NULL,
                     then this function can be used to verify a date
                     string.
     fmtTemplate -   the date template used to direct the parse of the
                     data. The following FormatDate() formatting
                     controls can be used:
                       %a %A %b %B %d %e %h %H %I %m %M %p %S %y %Y

                     See FormatDate() autodoc for more information.
     getCharFunc -   A callback Hook which is used to read the data
                     from a stream. The hook is called with:

                     A0 - address of the Hook structure
                     A2 - locale pointer
                     A1 - NULL

                                 BTW: The AmigaOS autodocs which state that A1
                     gets locale pointer and A2 NULL are wrong!!

                     The read character should be returned in D0. Note
                     that this is a 32 bit character not an 8 bit
                     character. Return a NULL character if you reach the
                     end of the stream.


Result
~~~~~~
::

     TRUE    -   If the parse could be performed.
     FALSE   -   If the format of the data did not match the formatting
                 string.


Notes
~~~~~
::

     This has a few differences from the implementation in locale.library
     v38. In particular:
         - %p does not have to be at the end of the line.
         - %d and %e are not effectively the same: leading spaces are
           allowed before %e, but not before %d.


Bugs
~~~~
::

     %p, %b, %A and probably others accept substrings and superstrings of
     valid strings.



See also
~~~~~~~~

`FormatDate()`_ 

----------

RexxHost()
==========

Synopsis
~~~~~~~~
::

 ULONG RexxHost(
          struct RexxMsg * rxmsg );

Function
~~~~~~~~
::

     locale.library rexxhost interface



----------

StrConvert()
============

Synopsis
~~~~~~~~
::

 ULONG StrConvert(
          const struct Locale * locale,
          CONST_STRPTR string,
          APTR buffer,
          ULONG bufferSize,
          ULONG type );

Function
~~~~~~~~
::

     This function will transform the string given and place the
     result in the supplied buffers, copying at most bufferSize
     bytes.

     The transformation is such that if the C strcmp() function
     was called on two strings transformed by this function then
     the result will be the same as calling the Locale StrnCmp()
     function on the two strings.


Inputs
~~~~~~
::

     locale      -   the Locale to use for the transformation or
                     NULL for the system default locale.
     string      -   the string to be transformed
     buffer      -   the destination for the transformed string.
                     This buffer may need to be larger than the
                     untransformed string.
     bufferSize  -   the maximum number of bytes to place in
                     buffer.
     type        -   how to transform the string. See the
                     StrnCmp() function for possible values.


Result
~~~~~~
::

     Length of the number of BYTES placed in the buffer by
     the transformation process minus 1 (for NULL termination).



See also
~~~~~~~~

`StrnCmp()`_ 

----------

StrnCmp()
=========

Synopsis
~~~~~~~~
::

 LONG StrnCmp(
          const struct Locale * locale,
          CONST_STRPTR string1,
          CONST_STRPTR string2,
          LONG length,
          ULONG type );

Function
~~~~~~~~
::

     StrnCmp() will compare two strings, up to a maximum length
     of length using a specific kind of collation information
     according to the locale.

     The result will be less than zero, zero, or greater than zero
     depending upon whether the string string1 is less than, equal
     to, or greater than the string pointed to string2.


Inputs
~~~~~~
::

     locale      -   Which locale to use for this comparison or
                     NULL for the system default locale.
     string1     -   NULL terminated string.
     string2     -   NULL terminated string.
     length      -   Maximum length of string to compare, or -1 to
         compare entire strings.
     type        -   How to compare the strings, values are:

         SC_ASCII
             Perform a simple ASCII case-insensitive comparison.
             This is the fastest comparison, but considers that
             accented characters are different to non-accented
             characters.

         SC_COLLATE1
             This sorts using the "primary sorting order". This
             means that characters such as 'e' and 'é' will be
             considered the same. This method also ignores
             case.

         SC_COLLATE2
             This will sort using both the primary and secondary
             sorting order. This is the slowest sorting method
             and should be used when presenting data to a user.

             The first pass is the same as SC_COLLATE1, meaning
             that two strings such as "role" and "rôle" would
             be sorted identically. The second pass will
             compare the diacritical marks.


Result
~~~~~~
::

     The relationship between the two strings.

         < 0 means   string1 < string2
         = 0 means   string1 == string2
         > 0 means   string1 > string2



See also
~~~~~~~~

`OpenLocale()`_ `CloseLocale()`_ `StrConvert()`_ 

