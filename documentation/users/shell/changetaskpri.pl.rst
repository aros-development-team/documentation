.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <cd>`_ `Next <copy>`_ 

---------------


=============
ChangeTaskPri
=============

Format
~~~~~~
::

	ChangeTaskPri <priority> [ PROCESS <process number> ]


Składnia
~~~~~~~~
::

	PRI=PRIORITY/A/N,PROCESS/K/N


Ścieżka
~~~~~~~
::

	Workbench:c


Funkcja
~~~~~~~
::

	Komenda ChangeTaskPri jest używana do zmiany aktualnego priorytetu
	zadania. Jako, że AROS jest wielozadaniowym systemem operacyjnym,
	możesz określić które zadanie będzie pobierało więcej mocy procesora,
	poprzez zmianę jego priorytetu.

	Wartość priorytetu może być w granicach od -128 do 127, jednak
	wartości większe od 4 nie są zalecane, jako że mogą one zakłócać
	ważne procesy systemowe. Większa wartość daje procesowi większe
	zasoby procesora CPU.

	Możesz używać komendy STATUS, aby sprawdzić listę zadań, które są
	uruchomione i ich numery procesów.
	

Przykład
~~~~~~~~
::

     
	1.SYS:> ChangeTaskPri 1 Process 1

	Ustawia proces 1 na priorytet 1.

	1.SYS:> ChangeTaskPri 1

        Aktualny proces ustawia na priorytet 1.


Zobacz także
~~~~~~~~~~~~
::

     Status


