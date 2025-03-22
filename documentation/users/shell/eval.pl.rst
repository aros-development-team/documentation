.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <endskip>`_ `Next <execute>`_ 

---------------


====
Eval
====

Składnia
~~~~~~~~
::


	VALUE1/A,OP,VALUE2/M,TO/K,LFORMAT/K


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::
	
	Oblicza wartości liczbowe i wyświetla wynik. Wynik jest wyświetlany na
	standardowe wyjście, jeśli argument TO nie jest podany, który zapisuje
	wyjście do pliku. Dzięki LFORMAT możliwe jest określenie rodzaju 
	wyjścia. Liczby oznaczone 0x lub #x są rozumiane jako hex, a te # lub 0,
	jako ósemkowe. Znaki alfabetu są rozpoznawane przez znak apostrofy
	('), i są obliczane jak ich oznaczenia w ASCII.


Parametry
~~~~~~~~~
::


	VALUE1,
	OP,
	VALUE2      --  Wyrażenie do obliczenia, oto dozwolone operatory:

		Operator              Symbol
		----------------------------------
		dodawanie		+
		odejmowanie		-
		mnożenie		*
		dzielenie		/
		moduł			mod, M, m, %
		logiczne i		&
		logiczne lub		|
		zaprzeczenie logiczne	~
		lewy shift		lsh, L, l
		prawy shift		rsh, R, r
		wartość ujemna		-
		alternatywa rozłączna	xor, X, x
		***wartość bitu		eqv, E, e

	TO          --  Plik w którym zostanie zapisane wyjście
	LFORMAT     --  Rodzaje parametrów takie jak w printf().
			Oto możliwe opcje:
                      
			%x  --  wyjście hex
			%o  --  wyjście ósemkowe
			%n  --  wyjście dziesiętne
			%c  --  wyjście znakowe (znak ANSI)
                             
			Ustawiając *n w LFORMAT, nowa linia będzie utoworzona.


