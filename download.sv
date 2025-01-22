===========
Nerladdning
===========

.. Note::

   Om du vill **testa AROS** s� rekommenderar vi att du laddar ner
   **distributioner**, vilka �r fullt utrustade och testade AROS-paket.
   "Nightly builds" (nattkompilationer), som du hittar l�ngst ner, �r enbart
   till f�r utvecklare och testare. Nightly builds �r inte enkla att anv�nda,
   �r inte alltid stabila och de saknar de flesta program som en vanlig
   anv�ndare troligen skulle efterfr�ga.


.. Contents::

.. Include:: download-abstract.sv


Icaros Desktop LIVE!
--------------------

.. image:: /images/icaroslive_logo.png
   :align: left

`Icaros`__ �r en v�lfylld distribution riktad till kraftfullare
skrivbordsdatorer. Den kan antingen k�ras via en Live DVD (eller CD f�r den
nedbantade versionen) utan att installeras p� din dator (den m�ste dock
fortfarande ha AROS-st�dd h�rdvara), via en datorsimulator som VMWare eller
`VirtualBox`__ eller s� kan man installera den p� en h�rddisk. Den kan �ven
installeras parallellt med andra OS som Microsoft Windows p� en egen partition
(kr�ver kunskap i GRUB). Inkluderas g�r �ven en anv�ndarhandbok i PDF-format.

__ http://live.icarosdesktop.org/
__ https://www.virtualbox.org/


AspireOS
--------

.. image:: /images/aspireos_logo.png
   :align: left

`AspireOS`__ �r en resurseffektiv distribution, ursprungligen gjord med
netbooks s�som Acer Aspire One i �tanke. Dess filosofi �r att vara s� simpel
och nerbantad som m�jligt. Alla inkluderade program �r v�l testade.

__ https://www.aspireos.com/


AROS Broadway
-------------

`AROS Broadway`__ �r den distribution som medf�ljer ARES-datorerna som
standard, men det fungerar lika p� p� andra AROS-kompatibla datorer.

__ http://www.aros-broadway.de/index.html


AROS Vision
-----------

`AROS Vision`__ �r distributionen f�r M68K-Amigor. F�r att fungera
tillfredsst�llande kr�vs antingen en kraftig Amiga eller en emulator som
Win UAE.

__ http://www.aros-platform.de/download.htm



Snapshots
=========

`Snapshots`__ �r icke regelbundet utgivna och icke automatiserade versioner
av AROS. De �r skapade av utvecklare som av n�gon anledning inte kan anv�nda
sig av vanliga nightly builds.

Dessa versioner �r inte �vergivna, s� anv�nd den vanliga kanalen f�r att
rapportera buggar (`bug tracker`__).

__ snapshots
__ http://sourceforge.net/p/aros/bugs/



Nightly Builds
==============

`Nightly builds`__ betyder "nattkompilationer" och, precis som namnet antyder,
skapas varje kv�ll direkt fr�n "Subversion tree" och inneh�ller den senaste
koden. Men de �r inte testade och kan inneh�lla of�rutsedda buggar. Oftast
fungerar de utm�rkt dock.

Var sn�ll och rapportera alla buggar du hittar via buggrapportkanalen
(`bug tracker`__). F�r andra viktiga �renden kan du kontakta oss via
`AROSWorld`__-forumet.

__ nightly
__ http://sourceforge.net/p/aros/bugs/
__ https://www.arosworld.org/



Nightly Builds (ABIv1)
======================

AROS h�ller p� att �verg� till en ny `ABI`__. En egen upps�ttning nightly
builds har skapats f�r denna experimentella k�llkod, men `dessa`__ �r bara
anv�ndbara f�r utvecklare som vill h�lla sig uppdaterade om ABI-�verg�ngen.
**AVIv1 �r inte kompatibel med n�gon distribution eller AROS-mjukvara fr�n
AROS Archives eller Aminet.** Anv�ndare som vill testa nyheter och buggfixade
versioner av AROS som �nnu inte implementerats i distributionerna b�r endast
anv�nda de vanliga nightly builds.

__ http://en.wikipedia.org/wiki/Application_binary_interface
__ nightly1

