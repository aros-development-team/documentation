.. This document is automatically generated. Don't edit it!

`Index <index>`_ `Prev <list>`_ `Next <makedir>`_ 

---------------

Hence the
     protection will be reset (to writable) on the next system reboot.

====
Lock
====

Format
~~~~~~
::

	Lock <drive> [ON|OFF] [<passkey>]


Składnia
~~~~~~~~
::

	DRIVE/A,ON/S,OFF/S,PASSKEY


Ścieżka
~~~~~~~
::

	Workbench:c


Funkcja
~~~~~~~
::

	Lock sprawi, że określone urządzenie lub partycja będą zabezpieczone
	przed zapisem lub odbezpieczone. To zabezpieczenie przed zapisem jest
	obsługiwane przez system plików woluminu. W związku z czym zapis będzie
	możliwy po ponownym restarcie.
	Jest także możliwe podanie hasła, które będzie chroniło przed zmianą
	stanu. To samo hasło, które zostało użyte do zabezpieczenia jest używane
	do odbezpieczania. Hasło może mieć dowolną długość.

	Wolumin MUSI być urządzeniem lub głównym woluminem, a nie przypisem.


Przykład
~~~~~~~~
::

     
	1.SYS:> Lock Work:

	To zablokuje przed zapisem wolumin Work, ale nie zabezpieczy go hasłem.
	

	1.SYS:> Lock Work:
	1.SYS:> MakeDir Work:SomeDir
	Can't create directory Work:Test
	MakeDir: Disk is write-protected

	Wolumin jest zablokowany, więc nie jest możliwe stworzenie katalogu.
	

	1.SYS:> Lock Work: OFF

	A to go odblokuje.
	

	1.SYS:> Lock Work: MojeHaslo

	Tutaj używamy hasła "MojeHaslo"


