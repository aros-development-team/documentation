.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <requestchoice>`_ `Next <run>`_ 

---------------


===========
RequestFile
===========

Składnia
~~~~~~~~
::


	DRAWER,FILE/K,PATTERN/K,TITLE/K,POSITIVE/K,NEGATIVE/K,
	ACCEPTPATTERN/K,REJECTPATTERN/K,SAVEMODE/S,MULTISELECT/S,
	DRAWERSONLY/S,NOICONS/S,PUBSCREEN/K,INITIALVOLUMES/S


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::
	
	Tworzy okno zapytania o plik. Wybrane pliki zostaną wyświetlone i 
	oddzielone spacjami. Jeśli żaden plik nie został wybrany, wtedy zostanie
	zwrócony kod błędu 5 (WARN/Ostrzeżenie).
 

Parametry
~~~~~~~~~
::

	DRAWER		--	początkowa zawartość pola katalogu
	FILE		--	początkowa zawartość pola pliku
	PATTERN		--	początkowa zawartość pola wzorca (np. #?.c)
	TITLE		--	tytuł okna
	POSITIVE	--	ciąg tekstowy lewego przycisku
	NEGATIVE	--	ciąg tekstowy prawego przycisku
	ACCEPTPATTERN	--	wyświetlane pliki, które pasują do wzorca
	REJECTPATTERN	--	pliki, które pasują do wzorca nie są wyświetlane
	SAVEMODE	--	okno zapytanie zostaje uruchomione jako zapisu
	MULTISELECT	--	więcej niż jeden plik może być zaznaczony
	DRAWERSONLY	--	tylko katalogi są wyświetlane
	NOICONS		--	ikony (#?.info) nie są wyświetlane
	PUBSCREEN	--	okno zapytania otwierane jest na podanym ekranie
				publicznym
	INITIALVOLUMES	--	pokazuje woluminy
     

Wynik
~~~~~
::


	Standardowe kody błędów.


