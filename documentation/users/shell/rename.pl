.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <relabel>`_ `Next <requestchoice>`_ 

---------------


======
Rename
======

Składnia
~~~~~~~~
::


	Rename [{FROM}] <nazwa> [TO|AS] <nazwa> [QUIET]

	FROM/A/M,TO=AS/A,QUIET/S


Ścieżka
~~~~~~~
::


	Workbench/c


Funkcja
~~~~~~~
::

	Zmienia nazwę obiektu. Rename może być użyty tak jak UNIX'owy mv,
	który przenosi plik/pliki do innej lokacji na dysku.


Parametry
~~~~~~~~~
::


	FROM	--	Nazwa(y) pliku(ów) do przeniesienia. Może być podanych 
			wiele plików.


	TO|AS	--	Nazwa jaką chcemy przypisać nowemu plikowi.

	QUIET	--	Brak wyjścia do konsoli.


Wynik
~~~~~
::


	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	Rename list1.doc list2.doc listy
	
	Przenosi list1.doc i list2.doc do katalogu listy.
     

	Rename ram:a ram:b quiet
	Rename from ram:a to ram:b quiet
	Rename from=ram:a to=ram:b quiet

	Wszystkie wersje, zmiana nazwy z "a" do "b", i brak jest wyjścia do
	konsoli(QUIET).

