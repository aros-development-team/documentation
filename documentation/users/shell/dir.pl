.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <delete>`_ `Next <echo>`_ 

---------------


===
Dir
===

Składnia
~~~~~~~~
::


	DIR,OPT/K,ALL/S,DIRS/S,FILES/S,INTER/S


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	DIR wyświetla obiekty w aktualnym, bądź określonym katalogu. Katalogi
	są wyświetlane na początku, następnie w koljeności alfabetycznej, pliki
	są wyświetlane w dwóch kolumnach. Wciśnij CTRL-C aby anulować 
	odczytywanie katalogów.


Parametry
~~~~~~~~~
::


	ALL    --  Wyświetla rekursywnie obiekty.
	DIRS   --  Wyświetla tylko katalogi.
	FILES  --  Wyświetla tylko pliki.
	INTER  --  Tryb interaktywny.

	Tryb interaktywny zatrzymuje się przy każdej nazwie z zapytaniem,
	w którym możesz wpisać komendy, oto one:


	Return      --  Przejdź dalej, pomija obiekt i przechodzi do następnego.
	E/ENTER     --  Przejdź do katalogu.
	DEL/DELETE  --  Usuń plik lub pusty katalog.
	C/COM       --  Niech obiekt będzie argumentem dla programu (który jest 
			podany po C lub COM, albo podany osobno później).
	Q/QUIT      --  Zakończ tryb interaktywny.
	B/BACK      --  Wróć jeden poziom katalogu wyżej.


