.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <fault>`_ `Next <get>`_ 

---------------


========
Filenote
========

Składnia
~~~~~~~~
::


	FILE/A,COMMENT,ALL/S,QUIET/S


Ścieżka
~~~~~~~
::


	Workbench:c


Funkcja
~~~~~~~
::

	Dodaje komentarz do obiektu.

	Filenote obsługuje rekurencyjne przeszukiwanie katalogów i dodaje 
	komentarze do każdego pliku/katalogu, a dzięki wzorcom można określić
	pliki.



Parametry
~~~~~~~~~
::


	FILE	-	Zawsze musi być podane. Może to być plik z pełną ścieżką 
			albo może być wzorzec.

	COMMENT	-	Tekst ASCII, który może być dodany jako komentarz do 
			obiektu.
			
			Aby stworzyć komentarz z zamkniętymi cudzysłowami
			należy poprzedzić cudzysłów gwiazdką.

			Np.
			Filenote FILE=RAM:test.txt COMMENT=*"witaj*"

	ALL     -	Przeszukiwanie rekurencyjne.

	QUIET   -	Cisza, brak wyjścia.


Wynik
~~~~~
::


	Standardowe kody błędów.


Przykład
~~~~~~~~
::


	Filenote ram: witaj all

	
	Przeszukuje cały katalog w RAM: i dodaje "witaj" jako komentarz do
	każdego obiektu.


Opis
~~~~
::

	Wyjście z AROS'owego Filenote jest staranne i strukturalne, niż ze
	standardowej komendy Filenote.
	
	Nie obsługuje jeszcze wieoprzypisowości.


Zobacz także
~~~~~~~~~~~~
::


	dos.library/SetComment()


