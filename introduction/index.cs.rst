=================
Krátký úvod AROSu
=================

:Authors:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski 
:Copyright: Copyright Š 1995-2009, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Téměř hotovo, myslím...


.. Include:: index-abstract.cs.rst


Cíle
====

Cílem AROS projektu je vytvořit OS, který:

1. Je co možná nejvíce kompatibilní se operačním systémem AmigaOS 3.1.

2. Může být portován na různé druhy hardwarových architektur a
   procesorů, jako jsou x86, PowerPC, Alpha, Sparc, HPPA a další.

3. By měl být kompatibilní binárně na Amize a zdrojově na jakémkoli jiném
   hardwaru.

4. Může běžet jako samostatná verze, která bootuje přímo z pevného disku, i
   jako emulace, která otevře okno ve stávajícím OS pro vývoj softwaru a
   běh Amigy a nativních aplikací zároveň.

5. Vylepší funkčnost systému AmigaOS.

Pro dosažení tohoto cíle používáme řadu technik. V prvé řadě ve velké míře
využíváme internet. Na našem projektu se můžeš podílet, i když umíš napsat
pouze jednu jedinou funkci 0S. Poslední verze zdrojových kódů
je dostupná 24 hodin denně a opravy v nich mohou být kdykoli mergnuty.
Malá databáze s otevřenými úkoly (open tasks) zajišťuje, že práce není duplikována.


Historie
========

Nějaký čas zpátky (v roce 1993) vypadala situace pro Amigu poněkud hůř
než obvykle a někteří fanoušci Amigy se spojili a začali diskutovat, co by
se mělo udělat, aby se zvýšilo přijetí našeho milovaného stroje. Hlavní důvod
pro chybějící úspěch Amigy byl ihned jasný: byla to propagace,
tedy spíše její nedostatek. Amiga by měla získat širší základnu, aby
se stala atraktivnější pro všechny - uživatele i vývojáře. Proto byly
vytvořeny plány k dosažení tohoto cíle. Jedním z plánů bylo opravit chyby AmigaOS,
dalším bylo učinit z něj moderní operační systém. Zrodil se projekt AOS.

Ale co přesně jsou chyby? A jak by tyto chyby měly být opraveny? Jaké funkce
musí takzvaný *moderní* OS mít? A jak by měly být implementovány
do AmigaOS?

O dva roky později se o tom stále dohadovali a nebyl napsán
jediný řádek kódu (nebo alespoň nikdo nikdy žádný neviděl). Diskuze
byly stále o tom, že někdo řekl "musíme mít..." a
jiný odpověděl "přečti si staré maily" nebo "nejde to udělat, protože...",
což bylo krátce poté následováno "pleteš se, protože...", a tak dále.

V zimě roku 1995 byl už Aaron Digulla z této situace unaven a poslal
RFC (žádost o komentáře) do AOS mailing listu, ve které se ptal, jaké
by mělo být základní společné východisko. K dispozici bylo několik variant a závěr
byl, že téměř všichni by chtěli vidět otevřený OS, který je kompatibilní s
AmigaOS 3.1 (Kickstart 40.68). Na tomto základě se mohly stavět další diskuze,
aby se zjistilo, co je možné a co ne.

A tak začala práce a AROS se narodil.
