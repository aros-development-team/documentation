.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <makelink>`_ `Next <path>`_ 

---------------


========
NewShell
========

Składnia
~~~~~~~~
::


	WINDOW,FROM


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	Tworzy nowe okno CLI w nowym oknie konsoli. To okno stanie się aktywne.
	Nowe CLI dziedziczy większość atrybutów poprzedniej konsoli jak aktualny
	katalog, rozmiar stosu, linię poleceń i inne. Jednak kolejne okno jest
	niezależne od poprzedniego.
	Okno należące do nowej konsoli może być określone dzięki słowu 
	kluczowemu WINDOW.
	


Parametr
~~~~~~~~
::


	WINDOW	--	Określenie okna konsoli

	X	--	liczba pikseli od lewej krawędzi ekranu                                
	Y	--	liczba pikseli od górnej krawędzi ekranu
	WIDTH	--	szerokość okna konsoli
	HEIGHT	--	wysokość okna konsoli
	TITLE	--	tekst, który pokazuje się w pasku tytułowym
	AUTO	--	okno automatycznie się pojawia, gdy program potrzebuje
			wyjścia lub wejścia
	ALT	--	okno uruchamia się o określonym rozmiarze i pozycji, gdy
			przycisk powiększania zostanie wciśnięty
	BACKDROP--	okno bez ramek
	CLOSE	--	załącza przycisk wyjścia
	INACTIVE--	okno nie jest aktywowane przy uruchomieniu
	NOBORDER--	okno bez ramek, tylko p. rozmiaru, głębi i powiększania 
			są dostępne
	NOCLOSE	--	okno nie posiada p. zamykania
	NODEPTH	--	okno nie posiada p. głębi
	NODRAG	--	okno nie może być przemieszczane; załącza NOCLOSE
	NOSIZE	--	okno nie posiada przycisku rozmiaru
	SCREEN	--	nazwa ekranu publicznego, na którym ma być otworzone 
			okno
	SIMPLE	--	tekst nie zostaje usunięty po zmianie rozmiaru
	SMART	--	tekst jest wymazywany przy zmianie rozmiaru
	WAIT	--	okno może zostać zamknięte po wciśnięciu p. zamykania
			lub po kombinacji CTRL-\
	FROM	--	plik do wykonania przed uruchomieniem konsoli,jeśli nic
			nie jest podane to S:Shell-Startup zostaje wykonany


Przykład
~~~~~~~~
::


	NewShell "CON:10/10/640/480/Moja własna konsola/CLOSE"


