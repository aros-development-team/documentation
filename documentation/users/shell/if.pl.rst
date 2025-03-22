.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <getenv>`_ `Next <info>`_ 

---------------


==
If
==

Składnia
~~~~~~~~
::


	NOT/S,WARN/S,ERROR/S,FAIL/S,,EQ/K,GT/K,GE/K,VAL/S,EXISTS/K


Ścieżka
~~~~~~~
::


	Workbench:C


Funkcja
~~~~~~~
::

	Uruchamia sekwencję komend wydanych po sobie, jeśli wartość jest true.
	(sekwencja następująca po If to linie komend zakończone Else lub EndIf).
	Dla każdej komendy If musi być EndIf. Jeśli jednak stan jest false to
	wtedy wykonywanie przeskoczy do Else lub EndIf.


Parametry
~~~~~~~~~
::


	NOT		--	neguje wartość stanu

	WARN		--	True jeśli wartość jest większa bądź równa 5.
	ERROR		--	True jeśli wartość jest większa bądź równa 10.
	FAIL		--	True jeśli wartość jest większa bądź równa 20.

	EQ, GE, GT	--	True jeśli pierwsza wartość jest równa, większa
				lub równa kolejno większa od drugiej.

	VAL		--	Wskazuje, że porównanie powinno zmieniać ciągi
				w wartości numeryczne.

	EXISTS <ciąg>	--	True jeśli obiekt <ciąg> występuje.



Przykład
~~~~~~~~
::


     If 500 GT 200 VAL
         echo "500 to więcej niż 200"
     Else
         If EXISTS S:User-Startup
             echo "Skrypt User-Startup znaleziony w S:"
             Execute S:User-Startup
         EndIf
     EndIf


Opis
~~~~
::

	ERROR oraz FAIL będzie odpowiednie dopiero wtedy jeśli poziom błędu
	jest ustawiony przez FailAt (normalnie stopień ten wynosi 10, i jeśli
	jakiś błąd przekroczy lub będzie równy tej wartości, to skrypt zostanie
	przerwany).


Zobacz także
~~~~~~~~~~~~
::


     Else, EndIf, FailAt


