.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Next <alias>`_ 

---------------


==========
AddBuffers
==========

Składnia
~~~~~~~~
::


	DRIVE/A, BUFFERS/N


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	Dodaje bufory do listy dostępnych buforów dla określonego
	dysku. Dodawanie buforów przyśpiesza dostęp do dysku, ale
	zwiększa ilość zajętej pamięci systemowej (512 bajtów na
	bufor). Określając negatywną liczbę buforów zmniejsza się
	liczbę buforów dysku.
		Jeśli podany jest tylko argument DRIVE, to zostanie
	podana liczba buforów dysku, bez zmiany jego wartości.



Parametry
~~~~~~~~~
::


	DRIVE	--	parametr określający nazwę dysku
	BUFFERS	--	liczba dodawanych buforów (lub odejmowanych
			w przypadku ujemnej wartości) dysku

