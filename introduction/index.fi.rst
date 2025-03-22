=======================
Lyhyt johdanto AROS:iin
=======================

:Authors:   Aaron Digulla, Stefan Rieken, Matt Parsons, Adam Chodorowski 
:Copyright: Copyright © 1995-2009, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Almost finished, I think...


.. Include:: index-abstract.fi


Päämäärät
=========

AROS projektin päämääränä on luoda käyttöjärjestelmä joka:

1. On niin yhteensopiva AmigaOS 3.1:n kanssa kuin vain on mahdollista.

2. Voidaan siirtää eri arkkitehtuureille ja prosessoreille kuten x86, PowerPC,
   Alpha, Sparc, HPPA, sekä muille.

3. Tulisi olla binääriyhteensopiva Amigassa ja lähdekoodiltaan yhteensopivan
   mille tahansa muulle raudalle.

4. Voidaan käyttää itsenäisenä versiona joka käynnistyy suoraan kovalevyltä ja
   emulaationa joka avaa olemassaolevalla käyttöjärjestelmällä mahdollisuuden
   tuottaa ohjelmia ja ajaa Amigan sekä natiiveja ohjelmia saman aikaisesti.

5. Parantaa AmigaOS:in toiminnallisuutta.

Tämän päämäärän saavuttamiseksi käytämme lukuisia tekniikoita. Kaikkein
ensinnä käytämme erittäin paljon internettiä. Voit ottaa osaa projektiin
vaikket osaisi kirjoittaa kuin yhden käyttöjärjestelmäfunktion. Kaikkein
tuorein versio lähdekoodista on saatavilla 24h vuorokaudessa ja korjauksia
voidaan liittää siihen milloin tahansa. Pieni avointen tehtävien tietokanta
varmistaa ettei työtä tehdä päällekkäin.


Historia
========

Jossain vaiheessa vuoden 1993 tienoilla Amigan tilanne näytti tavallista
huonommalta ja muutamat Amiga fanit kokoontuivat keskustelemaan mitä pitäisi
tehdä rakastetun koneen suosion kasvattamiseksi. Välittömästi selvisi pääsyy
Amigan menestyksen puutteelle: lisääntyminen, tai siis sen puute. Amigan
tulisi saada laajemmalle levinnyt pohja jotta siitä tulisi enemmän jokaista
kiinnostavan käyttää ja jolle tuottaa ohjelmia. Täten suunnitelmia tehtiin
kuinka saavuttaa tuo päämäärä. Yksi suunnitelmista oli korjata AmigaOS:in viat
ja toinen oli luoda moderni käyttöjärjestelmä. AOS projekti syntyi.

Mutta mikä täsmälleen ottaen luettiin viaksi? Ja kuinka ne korjata? Mitä ovat
ne ominaisuudet joita nk. *modernin* käyttöjärjestelmän tulisi omata? Ja
kuinka ne toteutettaisiin AmigaOS:iin?

Kaksi vuotta myöhemmin olivat ihmiset yhä kiistelemässä tästä eikä edes yhtä
riviä koodia oltu saatu kasaan (tai ainakaan kukaan ei ollut sitä koodia
nähnyt). Keskustelut seurasivat yhä tuttua kaavaa jossa joku sanoi että
"meillä tulee olla ..." johon joku toinen vastasi "lue vanhat mailit" tai
"tämä on mahdoton toteuttaa, koska ..." johon pikaisesti tuli vastaus "olet
väärässä koska ..." ja niin edelleen.

Talvella 1995 Aaron Digulla tympääntyi tilanteeseen ja postitti RFC:n (request
for comments) AOS:in postituslistalle jossa kysyttiin mikä olisi yleinen
lähtökohta. Useita vaihtoehtoja annettiin ja päätelmä oli että lähes kaikki
tahtoivat nähdä avoimen käyttöjärjestelmän joka oli AmigaOS 3.1 yhteensopiva
(Kickstart 40.68) mihin tulevat keskustelut voitiin pohjata ja katsoa mikä on
mahdollista ja mikä ei.

Työskentely alkoi ja AROS oli syntynyt.
