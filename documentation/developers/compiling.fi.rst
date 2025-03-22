===============================
AROS:in kääntäminen ajettavaksi
===============================

:Authors:   + Flavio Stanchina
            + Henning Kiel
            + Bernardo Innocenti
            + Lennard voor den Dag
            + Aaron Digulla
            + Adam Chodorowski
:Copyright: Copyright (C) 2001-2008, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.
:Abstract:
  Tämä dokumentti selventää kuinka AROS käännetään ajettavaan muotoon. AROS:in
  kehitys ei ole vielä tällä hetkellä toimintakuntoinen puhtaasti natiivin
  AROS:in alaisuudessa, eli et voi kääntää AROS:ia itseään AROS:in
  alaisuudessa. Kääntääksesi ja kehittääksesi AROS:ille, tarvitset Linux tai
  FreeBSD/NetBSD järjestelmän.


.. Contents::


Vaatimukset
===========

Tarvitset seuraavan litanian ohjelmia AROS:in kääntöön:

+ GCC 3.2.2+ (4.0.0 köhii pahasti; viimeisin toimivaksi testattu on 3.4.x)
+ GNU Binutils
+ GNU Make
+ GNU AWK (GAWK) 3.1.2+ - muutkin awk:it saattavat sopia
+ Python 2.2.1+
+ Bison
+ pngtopnm and ppmtoilbm (kuuluvat netpbm pakettiin)
+ Autoconf
+ Automake
+ Yleiset komennot kuten cp, mv, sort, uniq, head, ...

Jos tahdot kääntää isännöidyn version i386-linux tai i386-freebsd:stä,
tarvitset vielä seuraavat:

+ X11 development otsikot ja kirjastot


Lähdekoodi
==========

Voit ladata AROS:in lähdekoodin joko `lataussivulta`__ tai Subversion:ia
käyttäen (joka tosin vaatii että `hankit käyttöoikeuden`__). Ensin mainitussa
tapauksessa ``source`` paketin hankkiminen riittää (ellet tahdo kääntää myös
"contrib" ohjelmia). Jälkimmäisessä tapauksessa sinun tulee kuitata ulos
(checkout) ``AROS`` moduuli sekä ``necessary`` moduuli jos tahdot kääntää
i386-pc portin.

__ ../../download
__ ../../documentation/developers/contribute#the-subversion-repository


Rakentaminen
============

Konfigurointi
-------------

Kaikkein ensimmäisenä sinun tulee ajaa ``configure`` skripti joka sijaitsee
AROS:in lähdekoodin juurihakemistossa::

    > cd AROS
    > ./configure

Voit määrittää useita eri optioita configure:lle. Seuraavat optiot ovat
kaikkien kohteiden käytettävissä:

``--enable-debug=LIST [default: none]``
  Asettaa eri tyyppisiä debug optioita käyttöön. Pilkkuja ja välejä (välilyönti
  taikka tabulaattori, siinä tapauksessa että optiot ympäröidään sitaatein)
  voidaan käyttää erottimina eri tyyppien välillä. Jos mitään tyyppejä ei
  anneta, otetaan oletusarvoisesti käyttöön ``all``. Jos ``--enable-debug``
  jätetään kokonaan pois, käytetään oletusarvoisesti moodia ``none``. Käytössä
  olevat tyypit:
    
  ``none``
     Poistaa debuggauksen käytöstä kokonaan.
  
  ``all``
     Kytkee kaikki alla mainitut tyypit käyttöön.
  
  ``stack``
     Kytkee pinon (stack) debuggauksen käyttöön.
  
  ``mungwall``
     Kytkee nk. mungwall muistin debuggauksen käyttöön.
  
  ``modules``
     Kytkee moduulien debuggauksen käyttöön.


Isännöity AROS/i386-linux taikka AROS/i386-freebsd
""""""""""""""""""""""""""""""""""""""""""""""""""

Sinun ei tarvitse määrittää ``--target`` optiota näille kohteille. Seuraavat
optiot ovat käytettävissä isännöidyille käännöksille:

``--with-resolution=WIDTHxHEIGHTxDEPTH [default: 800x600x8]``
    Asettaa oletus resoluution ja värisyvyyden jota AROS käyttää.
    
``--enable-xshm-extension [default: enabled]``
    Ottaa käyttöön X11 MIT-SHM laajennuksen. Ollessaan käytössä tämä antaa
	huomattavasti enemmän suorituskykyä, mutta ei toimi kovinkaan hyvin jos
	olet käyttämässä etänäyttöä/-päätettä.

Et voi ristiin kääntää näitä kohteita.


Natiivi AROS/i386-pc
""""""""""""""""""""

Kääntääksesi i386-pc portin, täytyy sinun antaa ``--target=pc-i386``
configure:lle. i386-pc:lle spesifisiä optioita ovat:

``--with-serial-debug=N [default: disabled]``
    Ottaa käyttöön sarjaportin kautta toimivan debuggauksen, lähettäen
	tulosteet porttiin ``N``.

Et voi ristiin kääntää tätä kohdetta.


Käännös
-------

Aloittaaksesi kääntämisen, aja::

    > make

Jos käytät FreeBSD:tä tai jotain muuta järjestelmää joka ei käytä GNU Make:a
järjestelmän make komentona, siinä tapauksessa tulee sinun käyttää GNU Make:n
komentoa yllämainitun sijaan. Esimerkiksi FreeBSD:ssä sinun tulee asentaa GNU
Make ja ajaa komento::

    > gmake


Isännöity AROS/i386-linux tai AROS/i386-freebsd
"""""""""""""""""""""""""""""""""""""""""""""""

Jos olet rakentamassa isännöityä i386-linux tai i386-freebsd käännöstä, tulisi
sinun ajaa seuraava jotta saat asianmukaisen näppäimistötuen käyttöön::

    > make default-x11keymaptable


Natiivi AROS/i386-pc
""""""""""""""""""""

Jos olet rakentamassa natiivia i386-pc käännöstä, on käynnistysdisketin
image ``bin/pc-i386/gen/rom/boot/aros.bin`` kunhan käännös on valmis. Sen
lisäksi voit tehdä käynnistys-CD:n ISO imagen ajamalla::

    > make bootiso-pc-i386

ISO image löytyy ``distfiles/aros-pc-i386.iso``:na.


Liitteet
========

Useiden kohteiden rakentaminen samasta lähdekoodista
----------------------------------------------------

Jos aiot kääntää useita eri kohteita samasta hakemistopuusta niin täytyy sinun
konfiguroida jokainen käännösmalli erikseen. Voit lisätä kohteita milloin
tahansa. Viimeinen konfiguroitavaksi määritetty kohde tulee peruskohteeksi.

Valitaksesi jonkin määrätyn kohteen käännettäväksi, aja make näin::

    > AROS_TARGET_ARCH=$ARCH AROS_TARGET_CPU=$CPU make

Missä ``$ARCH`` on haluamasi arkkitehtuuri ja ``$CPU`` sen prosessorin tyyppi.
Esim. kääntääksesi AROS/i386-pc version, aja::

    > AROS_TARGET_ARCH=pc AROS_TARGET_CPU=i386 make

Jos käännät useita versioita jotka kaikki käyttävät samaa CPU:ta, ei sinun
tarvitse määritellä muita kuin ``AROS_TARGET_ARCH`` koska CPU pysyy samana.
