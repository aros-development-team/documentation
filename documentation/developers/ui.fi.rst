=======================
Käyttöliittymätyyliopas
=======================

:Authors:   Adam Chodorowski
:Copyright: Copyright © 2003, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$

.. FIXME: Esittely tähän ...

.. Warning::

   Tämä dokumentti ei ole valmis! Jos tahdot korjata tilanteen, ota yhteyttä.

.. Contents::


-------
Ikkunat
-------

Preferences
===========

Preferences ikkunat ovat ulkonäöltään samankaltaisia dialogi-ikkunoiden kanssa
siinä mielessä että alareunassa on rivi nappeja eikä otsikkopalkissa ole
sulkunappia.

.. Figure:: /documentation/developers/ui/images/windows-prefs-titlebar.png

   Esimerkki preferences ikkunan otsikkopalkista. Huomaa sulkunapin puute.

.. Topic:: Peruste

   Sulkunappia ei ole koska sen merkitys olisi epämääräinen. Toisin sanoen
   käyttäjälle ei olisi selvää mitä sivuefektejä ikkunan sulkemisella on.
   Tallentaako se asetukset vaiko hylkää ne?

Seuraava nappisetti on aina paikalla, asemoitu vaakatasoon ikkunan alareunalla
(järjestyksessä vasemmalta oikealle):

    Test
        Soveltaa asetukset ikkunaan siten että niiden vaikutus on välitön. Ei
        sulje ikkunaa.
        
    Revert
        Palauttaa asetukset sellaisiksi kuin ne olivat kun ikkuna avattiin ja
        soveltaa ne välittömästi käyttöön. Ei sulje ikkunaa.
        
    Save
        Soveltaa asetukset välittömästi käyttöön ja tallentaa ne [#]_. Sulkee
        ikkunan. Jos asetuksia ei voi tallentaa (koska esim. levy on
        kirjoitussuojattu) on tämä nappi varjostettu.
        
    Use
        Soveltaa asetukset käyttöön ja tallentaa ne väliaikaisesti [#]_.
        Sulkee ikkunan.
        
    Cancel
        Palauttaa arvot sellaisiksi kuin ne olivat ikkunan avaamisen
        yhteydessä ja soveltaa ne käyttöön. Sulkee ikkunan.

.. Topic:: Ulkoasu

   Napit on jaettu kahteen ryhmään, Test ja Revert yhdessä ja Save, Use sekä
   Cancel toisessa, joista ensimmäinen ryhmä on kohdistettu vasempaan reunaan
   ja toinen oikealle. Ryhmien välillä on havaittava väli erottamassa ne
   toisistaan [#]_. Kaikkien nappien leveys on sama ja jonka pitäisi olla
   pienin mahdollinen (kun ikkunan kokoa muutetaan, ainoastaan ryhmien välillä
   olevaa tyhjää tilaa kasvatetaan eikä nappien kokoon puututa).

.. Figure:: /documentation/developers/ui/images/windows-prefs-buttons.png

   Esimerkki preferences ikkunan nappirivistöstä.

.. [#] Tallentaa sekä molempiin ``ENVARC:`` ja ``ENV:``.
.. [#] Tallentaa vain ``ENV:``.
.. [#] Huomaa että vasemman ryhmän napit eivät sulje ikkunaa, kun taas oikean
       ryhmän napit tekevät niin.
