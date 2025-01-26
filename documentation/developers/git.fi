================================
Subversion:in kanssa työskentely
================================

:Authors:   Aaron Digulla, Adam Chodorowski 
:Copyright: Copyright (C) 1995-2002, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.
:Abstract:
    Subversion (lyhyesti SVN) on versionhallinta työkalu joka ylläpitää
    tietokantaa projektin tiedostoista. SVN:n kanssa on mahdollista tutkia ja
    kontrolloida tiedostoihin tapahtuneita muutoksia: mitä muutoksia tehtiin
    ja milloin, kuka muutokset teki, mikä oli muutoksen syy (jos kirjoitettu
    kuvaus löytyy), mahdollisesti palauttaen aiemman tilanteen huonon
    muutoksen jälkeen, yhdistää useiden henkilöiden tekemät muutokset ja
    paljon enemmän.
    
    Olennaistan on että se tekee ryhmätyöskentelyn *paljon* helpommaksi
    yhteisen projektin piirissä, antaen kaikkien tietää mitä tiedostoille on
    tapahtumassa ja varmistaen että kukaan ei vahingossa tuhoa jonkun toisen
    tekemiä muutoksia, sekä huolehtii siitä että tämä voidaan tehdä
    Internetissä. Luonnollisestikkin käytämme sitä yhteistyössämme AROS:ille.


.. Contents::



Esittely
========

Palvelin ylläpitää nk. "keskusvarastoa", päätietokantaa joka sisältää projektin
yleisen julkaistun koodipohjan. Yksittäisillä kehittäjillä on omat
"työkopionsa", jotka ovat tietokannan paikallisia kopioita joltain hetkeltä ja
sisältävät paikalliset muutokset joita kehittäjä ei ole vielä siirtänyt
palvelimelle. Kun kehittäjä haluaa jakaa tekemänsä muutokset muiden tiimin
jäsenten kanssa, hän tekee muutokset ("commit") palvelimelle käyttäen
asiakasohjelmaa joka huolehtii tiedon siirtämisestä ja liittämisestä yhteen
muiden tekemien muutosten kanssa.



Ohjelmisto
==========

UNIX
----

Jos käytät Linux:ia, FreeBSD:tä tai jotain muuta modernia UNIX kloonia niin
sinun ei tarvitse tehdä muuta kuin asentaa järjestelmääsi virallinen SVN
ohjelmisto, versio 1.0 tai uudempi. Kaikki yleiset Linux jakelut sisältävät
SVN paketin.

.. Note:: Palvelin pyörittää Subversion 1.1:tä jota voi käyttää
          asiakasohjelman versioilla 1.0, 1.1 ja 1.2.


AmigaOS
-------

Jos käytät AmigaOS:ia, tarvitset TCP/IP stack:in ja asentaa jonkin SVN
käännöksen. Yksi vaihtoehto on Olaf Barthel:in tekemä porttaus SVN:stä
Amigalle joka löytyy AmiNET__ (etsi "subversion").

__ http://main.aminet.net/



Palvelimelle kirjautuminen
==========================

Toisin kuin CVS:llä ei sinun tarvitse erikseen kirjautua palvelimelle vaan SVN
kysyy tarvittaessa käyttäjänimeä ja salasanaa.

.. Note:: 

    AROS varasto toimii salasanalla suojatussa SVN palvelimessa, joka
    tarkoittaa sitä että sinun täytyy `hakea käyttöoikeutta`__ sille
    voidaksesi ottaa osaa kehitystyöhön. Amiga Inc.:in vaatimuksesta on
    anonyymi lukuoikeus evätty.

__ contribute#joining-the-team



AROS:in lähdekoodin hankkiminen
===============================

Käytä "checkout" komentoa hakeaksesi AROS:in lähdekoodit::

    > svn checkout https://svn.aros.org/svn/aros/trunk/AROS

Tämä luo hakemiston nimeltä AROS ja asuttaa sen kaikella AROS:in alaisuuteen
kuuluvalla lähdekoodilla, missä voikin vierähtää jokunen tovi jos
verkkoyhteytesi on hidas. "necessary" moduuli contrib:ista on nyt pakollinen
kaikille AROS versioille kun se aiemmin tarvittiin vain i386-pc portille::

    > cd AROS
    > svn checkout https://svn.aros.org/svn/aros/trunk/contrib

.. Tip:: 

    "checkout":in jälkeen SVN muistaa mistä lähdekoodi on peräisin.



Lisäkoodin hankinta
===================

AROS:in pääkoodin lisäksi, jonka aiemmin haimme, SVN palvelimella on muutakin
tavaraa joka ei suoraan liity käyttöjärjestelmän ytimeen. Tämä tarkoittaa
esimerkiksi "contrib" moduulia joka sisältää kolmannen osapuolen ohjelmia
jotka on portattu AROS:ille, "binaries" moduulia joka sisältää
ruutukaappauksia, taustakuvia ja muuta sellaista, sekä "docs" moduulia joka
sisältää web sivuston lähdemateriaalin. Contrib moduuli on jaettu pienempiin
osiin jotta sinun ei tarvitse hakea kaikkea mahdollista tahtoessasi vain yhden
ohjelman.

Saatavilla olevat moduulit voit listata näin::

    > svn ls https://svn.aros.org/svn/aros/trunk/



Lähdekoodin päivitys
====================

Haettuasi lähdekoodin saatat haluta päivittää ne ajoittain viimeisimmillä
muutoksilla joita muut ovat tehneet. Käytä tähän "update" komentoa::

    > cd AROS
    > svn update

Tämä liittää muiden tekemät muutokset omiisi ja hakee lisätyt uudet hakemistot
ja tiedostot. Jos joku on muuttanut tiedostoa jota olet itsekin muokannut,
yrittää SVN yhdistää muutokset automaattisesti. Jos te molemmat olette
muokanneet samoja rivejä, SVN saattaa epäonnistua tehtävässään. Kun näin
tapahtuu, SVN varoittaa siitä ja liittää **molemmat** versiot tiedostoon
erotimenaan ``<<<<``. Sinun täytyy ongelman korjaamiseksi muokata tiedostoa
käsin.

.. Warning:: 

    Vaikka SVN onnistuisikin liittämään muiden muutokset omiisi, ei se
    välttämättä tarkoita että kaikki olisi hyvin. SVN välittää ainoastaa
    *tekstistä*; *loogisia* ristiriitoja voi silti esiintyä liitoksen jälkeen
    (esim. joku on muuttanut jonkin käyttämäsi funktion semantiikkaa). Sinun
    tulisi aina tarkistaa yhdistetyt tiedostot ongelmia välttääksesi.



Muutosten teko
==============

Jos olet tehnyt joitain muutoksia ja tunnet että tahdot jakaa työsi muille,
käytä "commit" komentoa::

    > svn commit

Voit antaa listan tiedostoja; muussa tapauksessa SVN kulkee tämänhetkisen
hakemiston ja sen alihakemistojen läpi löytääkseen muuttuneet tiedostot ja
lähettää ne. Ennen palvelimelle lähettämistä SVN pyytää sinulta lokimerkintää.
Tämän tulisi sisältää lyhyen kuvauksen siitä mitä olet muuttanut ja joissain
tapauksissa muutosten perusteen. Hyvin kirjoitetut merkinnät ovat oleellisen
tärkeitä sillä ne helpottavat huomattavasti muiden huomata mitä olet tehnyt ja
ehkä myös miksi. Lokimerkinnät kootaan ja lähetetään päivittäin postituslistan
välityksellä jotta kaikki pysyvät muutosten kyydissä.

Ennen lähettämistä tulisi sinun tehdä "update" varmistaaksesi ettei viime
hetken muutoksia ole tapahtunut niissä tiedostoissa joita olet lähettämässä.
Jos näin kuitenkin käy, täytyy sinun ratkoa mahdolliset ongelmat ennen omien
muutostesi lähettämistä. Varmista myös että olet testannut muutoksesi ennen
kuin lähetät ne; ainakin niin etteivät ne riko käännösvaihetta.



Uusien tiedostojen ja hakemistojen lisääminen
=============================================

Lisätäksesi tiedostoja ja hakemistoja varastoon, käytä "add" komentoa::

    > svn add file.c
    > svn add dir

SVN ei matkaa automaattisesti uusien hakemistojen lävitse ja lisää niiden
sisältöä; sinun täytyy tehdä tämä itse. Kun olet lisännyt tiedostosi ja
hakemistosi, täytyy ne liittää kokonaisuuteen "commit" komennolla.



Tuonti
======

Kun tahdot lisätä suuremman määrän tiedostoja, esim. jonkin olemassaolevan
ohjelmiston lähdekoodin, "svn add" osoittautuu nopeasti rasittavaksi tavaksi
lisätä tiedostoja varastoon. Tähän sinun tulisi käyttää "svn import" komentoa.
Ikävä kyllä osio jossa kyseisen komennon toiminta on kuvattu SVN:n manuaalissa
on surkeasti kirjoitettu, joten esimerkki taitaa olla paikallaan:

1. Sijoita tiedostot ja hakemistot jotka tahdot importata sinne minne
   tahdotkin, kunhan ne **eivät** sijaitse työkopiosi polulla. "import"
   komennon käyttäminen olemassaolevan SVN työkopion sisällä voi johtaa mitä
   kummallisempiin tuloksiin, jotenka tätä tulee välttää.

2. Siirry siihen hakemistoon joka sisältää tiedostot ja hakemistot jotka
   tahdot importoida, esim.::

       > cd name-1.2.3

3. Importoi tiedostot "svn import" komennolla::

       > svn import -m <logMessage> <destinationPath>

   Tämä importoi rekursiivisesti kaikki tiedostot ja hakemistot jotka löytyvät
   tämän hetkisestä hakemistosta kohde polkuun varustettuna annetulla
   lokimerkinnällä. Tosiasiassa aivan kaikkia tiedostoja *ei* lisätä: SVN
   ohittaa tiedostot jotka ovat yleisesti tunnettuja varmuuskopio tyyppejä
   sekä kaikki piilotiedostot, kuten ``#?.bak``, ``.#?`` ja ``#?~``.
   
   Tästä huolimatta tulisi sinun etukäteen poistaa kaikki sellaiset tiedostot
   joiden et tahdo päätyvän varastoon. On turha koettaa keskeyttää SVN
   toimintaa jos näet jonkin turhanpäiväisen tiedoston joutuvan pakettiin
   mukaan. Pistä vain nimi merkille ja poista se jälkeenpäin.
   
   Jos esimerkiksi tahdot lisätä SVN 1.1.3 lähdekoodin
   "contrib/development/versioning/svn" hakemistoon::

      > cd subversion-1.1.3
      > svn import -m "Initial import of SVN 1.11.12" 
      \ https://svn.aros.org/svn/aros/trunk/contrib/development/versioning/svn



Lisälukemista
=============

Tarkempaa tietoa SVN:stä löytyy tottakai sen manuaalisivuilta ja
info-tiedostoista jotka seuraavat SVN:n mukana. Monilla sivustoilla on
hyödyllisiä oppaita jotka voivat olla helppotajuisempia kuin manuaalisivut.
Seuraavat sivut ovat erityisen suositeltavia:

+ `Version Control with Subversion`_
+ `Subversion Home`_

.. _`Version Control with Subversion`: http://svnbook.red-bean.com/
.. _`Subversion Home`:		       http://subversion.apache.org/

