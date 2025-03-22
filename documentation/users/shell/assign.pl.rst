.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <ask>`_ `Next <avail>`_ 

---------------


======
Assign
======

Składnia
~~~~~~~~
::


	NAME, TARGET/M, LIST/S, EXISTS/S, DISMOUNT/S, DEFER/S, PATH/S, ADD/S,
	REMOVE/S, VOLS/S, DIRS/S, DEVICES/S


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::
	ASSIGN tworzy odnośnik do pliku lub katalogu. Odnośnik jest
	logiczną nazwą dysku, co sprawia, że bardzo wygodnie można
	przypisać obiekty używając przypisów zamiast ścieżek do tych
	katalogów.
	
	Jeśli argumenty NAME i TARGET są podane, ASSIGN przypisze
	logiczną nazwę do określonej ścieżki. Jeśli NAME jest już przypisane
	do pliku lub katalogu to nowy przypis zmieni poprzednią ścieżkę.
	Dwukropek musi być podany po argumencie NAME.

	Jeśli tylko argument NAME jest podany, to każde przypisanie do
	tego NAME jest usuwane. Jeśli brak jest argumentów, to zostaną
	wyświetlone wszystkie przypisy.
	


Parametry
~~~~~~~~~
::


	NAME		--	nazwa, która powinna być przypisana do pliku lub katalogu
	TARGET		--	jeden lub więcej katalogów podanych jako ścieżka
	LIST		--	lista wszystkich stworzonych przypisów
	EXISTS		--	jeśli nazwa NAME już występuje, to zostanie zwrócony kod WARN
	DISMOUNT	--	usuń wolumin lub nazwę urządzenia NAME z dos listy
	DEFER		--	stwórz przypis do nieistniejącej (w chwili tworzenia) ścieżki
	PATH		--	stwórz przypis do nieistniejącej (w chwili tworzenia) ścieżki	
	ADD		--	dodaje kolejną ścieżkę do nazwy przypisu NAME
	REMOVE		--	usuwa przypis
	VOLS		--	wyświetla przypisane woluminy
	DIRS		--	wyświetla przypisane katalogi
	DEVICES		--	wyświetla przypisane urządzenia
     


