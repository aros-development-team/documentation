===========
Avustaminen
===========

:Authors:   Adam Chodorowski 
:Copyright: Copyright © 1995-2020, The AROS Development Team
:Status:    Done. 

.. Contents::


Tarvitsemme apuasi!
===================

Meillä on vähänlaisesti kehittäjiä, joka ikävä kyllä tarkoittaa sitä, että
edistyminen on melko hidasta. Me yksinkertaisesti tarvitsemme enemmän ihmisiä
apuun! Tehtäviä joissa tarvitaan antaumuksellisia kehittäjiä on valtava lista.
Ne ulottuvat pienistä projekteista suuriin, raudan tasolta korkeamman tason
järjestelmän kautta ohjelmistojen koodaamiseen. Tehtävää on periaatteessa
kaikille jotka tahtovat ottaa kehitystyöhön osaa, riippumatta siitä kuinka
taitava olet ohjelmoimaan!

Teille jotka ette ole ohjelmoijia, on teillekin runsaasti tehtäviä joissa
voitte avustaa! Tämä sisältää esim. dokumentaation kirjoittamista, ohjelmien
ja dokumenttien kääntämistä eri kielille, kauniin grafiikan luomista, sekä
bugien metsästystä. Nämä tehtävät ovat aivan yhtä tärkeitä kuin ohjelmointikin!


Avoinna olevat tehtävät
=======================

Tämä on lista joistain tehtävistä joissa tarvitsemme apua ja joiden parissa
kukaan ei ole tällä hetkellä työskentelemässä. Lista ei ole millään muotoa
täydellinen, sisältäen vain tärkeimmät asiat joissa apua AROS:issa
tarvitsemme.


Ohjelmointi
-----------

+ Puuttuvien kirjastojen, resurssien, laitteiden taikka näiden osien toteutus.
  Tarkista yksityiskohtaisesta status raportista tieto siitä mitä osia
  puuttuu.

+ Rauta-ajureiden toteutus taikka parantelu:
  
  - AROS/m68k-pp:
    
    + Grafiikka
    + Syöte (kosketusnäyttö, näppäimet)
    + Ääni
 
  - AROS/i386-pc:
    
    + Erityiset ajurit näyttökorteille (olemassa on vain yleiset, ei kovinkaan
	  erikoisesti kiihdytetyt versiot). Lyhyt toivelista:
      
      - nVidia TNT/TNT2/GeForce (aloitettu mutta keskeneräinen) 
      - S3 Virge
      - Matrox Millenium
    
    + USB
    + SCSI
    + Erityiset IDE piirisarjat
    + Ääni
    + ... ja mitä tahansa muuta mikä mieleen tulee.

  - Yleinen tulostin tuki.
 
  - Yleinen äänituki.

+ Porttaus muille arkkitehtuureille. Muutamia esimerkkejä raudata joille
  meillä ei ole ylläpidettyä AROS porttia tai joille ei sellaista ole
  aloitettu:

  - Amiga, sekä m68k että PPC.
  - Atari.
  - HP 300 sarja.
  - SUN Sparc.
  - iPaq.
  - Macintosh, sekä m68k että PPC.

+ Puuttuvien Preferences muokkaimien toteutus:

  - IControl
  - Overscan
  - Palette
  - Pointer
  - Printer
  - ScreenMode
  - Sound
  - WBPattern
  - Workbench 
 
+ C linkityskirjaston parantelu

  Tämä tarkoittaa clib:istä puuttuvien ANSI- (ja joidenkin POSIX-) funktioiden
  toteuttamista UNIX ohjelmien (esim. GCC, make ja binutils) porttauksen
  helpottamiseksi. Suurin puute on POSIX-tyyppisen signaloinnin puute, mutta
  joitain muitakin funktioita uupuu.

+ Uusien datatyyppien (datatype) toteuttaminen ja olemassa olevien parantelu

  AROS:ille olemassa olevien datatyyppien määrä on melko pieni. Joitain
  esimerkkejä datatyypeistä jotka tarvitsevat parantelua ollakseen
  käyttökelpoisia tai jotka tarvitsevat alusta saakka toteuttamisen:

  - amigaguide.datatype
  - sound.datatype
    
    + 8svx.datatype

  - animation.datatype
    
    + anim.datatype
    + cdxl.datatype
    
  
+ Ulkoisten ohjelmien porttaus:

  - Tekstieditorit kuten ViM ja Emacs.
  - Kehitysympäristö joka sisältää GCC:n, make:n, binutils:in ja muut GNU
	kehitystyökalut.


Dokumentointi
-------------

+ Käyttäjille suunnatun dokumentaation kirjoitus. Tämä käsittää yleisen
  käyttöoppaan kirjoittamisen niin aloittelijoille kuin experteillekin, sekä
  referenssidokumentaation kaikille standardeille AROS ohjelmille.

+ Kehittäjille suunnatun dokumentaation kirjoitus. Vaikka tämä onkin hieman
  paremmalla mallilla kuin käyttäjille tarkoitettu dokumentaation, on silti
  paljon tehtävää jäljellä. Esimerkiksi, olemassa ei ole hyvää oppimateriaalia
  aloitteleville ohjelmoijille. ROM Kernel Manual:eja vastaavien saaminen
  AROS:ille olisi erittäin mukavaa.


Käännökset
----------

+ AROS:in kääntäminen useammille kielille. Tällä hetkellä vain seuraavat
  kielet ovat enemmän taikka vähemmän tuettuja:

  - English
  - Deutsch
  - Svenska
  - Norsk
  - Italiano

+ Dokumentaation ja web sivuston kääntö useammille kielille. Tällä hetkellä
  sivusto on kokonaisuudessaan saatavilla vain englanniksi. Osia on käännetty
  norjaksi ja suomeksi, mutta paljon on vielä tehtävää.


Muuta
-----

+ AROS:in GUI-suunnittelun koordinointi, kuten prefs ohjelma ja työkalut.


Tiimiin liittyminen
===================

Tahdotko ottaa osaa kehitystyöhön? Mahtavaa! Liity niille `kehittäjien
postituslistoille`__ jotka kiinnostavat (ainakin päälistalle liittyminen on
*erittäin* suositeltavaa) ja pyydä käyttöoikeudet Subversion varastoon. Siinä
se. :-)

Kehotamme kirjoittamaan lyhyen mailin kehityslistalle joka sisältää esittelyn
itsestäsi ja jotain tietoa siitä miten tahdot avustaa. Jos jotain ongelmia
ilmenee, älä epäröi postittaa listalle tai kysellä `IRC kanavilla`__. Ennen
kuin alat työskentelemään jonkin määrätyn asian kimpussa, ilmoita listalle
mitä aiot tehdä tai päivitä tehtävätietokantaan. Näin voimme varmistua
etteivät useat tee vahingossa yhtä ja samaa.

__ ../../contact#mailing-lists
__ ../../contact#irc-channels


Subversion varasto
------------------

AROS:in säilytyspaikka pyörii salasanalla suojatussa Subversion palvelimessa,
joka tarkoittaa sitä että sinun on pyydettävä käyttöoikeus sille jotta voit
ottaa osaa kehitystyöhön. Salasanat ovat salatussa muodossa, jonka voit
generoida `online password encryption tool`__:illamme. 

Lähetä koodattu salasanasi yhdessä käyttäjä- ja oikean nimesi kanssa `Aaron
Digulla`__:lle ja odota vastausta. Nopeuttaaksesi prosessia aseta viestisi
aiheeksi "Access to the AROS CVS server" ja viestin rungoksi "Please add
<username> <password>", esim.::

    Please add digulla xx1LtbDbOY4/E

Koska Aaron on melkoisen kiireinen, voi vastaukseen mennä pari päivää, joten
ole kärsivällinen.

Saadaksesi tietoon miten AROS Subversion palvelinta käytetään, lue `CVS:n
kanssa työskentely`__ lävitse kertaalleen. Vaikka tietäisit kuinka
Subversion:ia käytetään, on silti hyödyllistä käydä mainittu dokumentti
lävitse sillä se sisältää tietoa ja vinkkejä koskien eritoten AROS:ia (esim.
kuinka järjestelmään kirjaudutaan).

__ http://aros.sourceforge.net/tools/password.html 
__ mailto:digulla@aros.org?subject=[AROS]
__ cvs
 
