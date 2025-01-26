.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <run>`_ `Next <set>`_ 

---------------


======
Search
======

Składnia
~~~~~~~~
::


	Search [FROM] {(name | pattern} [SEARCH] (string | pattern) [ALL] 
		[NONUM] [QUIET] [QUICK] [FILE] [PATTERN] [LINES=Number]


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	Search przeszukuje pliki zawarte w katalogu określonym w FROM, dla
	określonego ciągu (SEARCH); w przypadku gdy opcja ALL jest określona,
	podkatalogi także zostają przeszukiwane. Nazwy wszystkich plików 
	zawierających ciąg SEARCH, są wyświetlane, razem z numerami linii,
	gdzie ciąg został znaleziony.
	Jeśli CTRL-C został wciśnięty, przeszukiwanie zostanie przerwane. CTRL-D
	przerwie przeszukiwanie aktualnego pliku.


Parametry
~~~~~~~~~
::


	NONUM	--	numery linii nie zostaną wyświetlane
	QUIET	--	nie wyświetlaj nazwy przeszukiwanego pliku
	QUICK	--	bardziej ograniczone wyjście
	FILE	--	wyszukuje ciągu w określonym pliku
	PATTERN	--	użyj wzorców przy wyszukiwaniu
	CASE	--	z uwzględnieniem małych i wielkich liter
	LINES	--	dodatkowe linie po pasującym ciągu


Wynik
~~~~~
::

	Jeśli obiekt jest znaleziony, stan jest zwracany jako 0. W przeciwnym
	wypadku, jest WARN/Ostrzeżenie.

