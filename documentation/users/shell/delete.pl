.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <date>`_ `Next <dir>`_ 

---------------


======
Delete
======

Składnia
~~~~~~~~
::

 
	Delete { (name | pattern) } [ALL] [QUIET] [FORCE]


Ścieżka
~~~~~~~
::


	Workbench/c


Funkcja
~~~~~~~
::

	Usuwa pliki i katalogi. Możesz usuwać kilka plików i katalogów, 
	określając je osobno lub poprzez użycie wzorców. Aby anulować
	usuwanie, po prostu wciśnij CTRL-C. Komenda poinformuje użytkownika
	jeśli ten usuwa pliki z bitami ochronnymi.
	Delete nie może usuwać katalogów, które nie są puste, chyba, że opcja
	ALL jest załączona. Aby powstrzymać wyświetlanie usuwanych plików należy
	użyć opcji QUIET. Jeśli bit ochronny jest zniesiony dla pliku
	lub katalogu wtedy nie może zostać on usunięty, ale można wymusić
	usunięcie dzięki podaniu opcji FORCE.



Parametry
~~~~~~~~~
::


	FILE/M/A  --  pliki lub katalogi do usunięcia (mogą zawierać wzorce)
	ALL/S     --  rekurencyjne usuwanie katalogów
	QUIET/S   --  nie wyświetlaj, które obiekty są usuwane
	FORCE/S   --  usuń obiekty, nawet wtedy, gdy są chronione


Przykład
~~~~~~~~
::


	Delete RAM:T/#? ALL FORCE

	Usuwa wszystkie obiekty rekurencyjnie (ALL) z RAM:T/ i nie zwraca uwagi 
	na bity ochrony (FORCE).
