.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <execute>`_ `Next <fault>`_ 

---------------


======
FailAt
======

Format
~~~~~~
::

	FailAt <limit>


Składnia
~~~~~~~~
::

	RCLIM/N


Ścieżka
~~~~~~~
::

	C:


Funkcja
~~~~~~~
::

	FailAt ustawia limit kodu błędu w skrypcie. Jeśli jakaś komenda zwróci
	kod błędu większy bądź równy tej wartości to skrypt zostaje przerwany.

	Wspólne kody błędów:
         0   - Brak błędu
         5   - Ostrzeżenie
         10  - Błąd
         20  - Poważny błąd

	Standardowo limit wynosi 10.


Przykład
~~~~~~~~
::

	Jeśli mamy skrypt z komendami

         Copy RAM:PewienPlik DF0:
         Echo "Skończone!"

	i plik RAM:PewienPlik który nie istnieje

         Copy: object not found
         Copy: returned with error code 20

	skrypt się zatrzyma. Ale jeśli wcześniej zadeklarujesz komende

	FailAt 21
	
	wtedy skrypt zostaje wykonywany dalej dopóki nadal kody błędów będą
	niższe od limitu.



