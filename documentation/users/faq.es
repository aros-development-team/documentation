=====================================
Respuestas a las Preguntas Frecuentes
=====================================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright � 1995-2007, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Preguntas comunes
=================

�Puedo hacer una pregunta?
--------------------------

Por supuesto. Por favor ve al `foro de AROS-Exec 
<https://ae.amigalife.org/modules/newbb/viewtopic.php?topic_id=1636&start=0>`__ 
y lee los hilos y pregunta todo lo que quieras. Este FAQ se actualizar� con
las respuestas de los usuarios, aunque el foro permanece m�s actual. 

�Qu� es AROS?
-------------

Por favor lee la introducci�n_.

.. _introducci�n: ../../introduction/index


�Cu�l es el estado legal de AROS?
---------------------------------

Las leyes europeas dicen que es legal usar t�cnicas de ingenier�a inversa
para conseguir interoperatibilidad. Tambi�n dice que es ilegal distribuir el 
conocimiento obtenido con esas t�cnicas. Esto b�sicamente significa que te 
est� permitido desensamblar o resource cualquier software para escribir 
algo que sea compatible (por ejemplo, ser�a legal desensamblar Word para 
escribir un programa que convierte los documentos de Word en texto ASCII).

Por supuesto que hay limitaciones: no te est� permitido desensamblar el 
software si la informaci�n que t� conseguir�as por este proceso puede ser 
obtenida por otros medios. Adem�s no debes contar lo que aprendiste. Un 
libro como "Windows por dentro" es por lo tanto ilegal o al menos legalmente dudoso.

Desde que nosotros evitamos las t�cnicas de desensamblado y en su lugar 
usamos el conocimiento com�n disponible (lo que incluye a los manuales de 
programaci�n) que no cae dentro de ning�n Acuerdo de No Divulgaci�n, lo de 
arriba no se aplica directamente a AROS. Lo que cuenta aqu� es la intenci�n 
de la ley: es legal escribir software que sea compatible con alg�n otro software. 
Por lo tanto creemos que AROS est� protegido por la ley.

Aunque las patentes y los archivos de cabecera son un asunto diferente. Podemos 
usar algoritmos patentados en Europa ya que las leyes europeas no permiten patentar 
los algoritmos. Sin embargo, el c�digo que usa tales algoritmos que est�n patentados 
en EE.UU. no podr�a ser importado a EE.UU. Ejemplos de algoritmos patentados en 
AmigaOS incluyen el arrastrado en la pantalla y la manera espec�fica en que funcionan 
los men�s. Por otro lado, los archivos de cabecera deben ser compatibles pero tan 
diferentes como sea posible de los originales.

Para evitar cualquier problema nosotros solicitamos un oficial vistobueno de 
Amiga Inc. Ellos son muy positivos respecto del esfuerzo pero est�n muy preocupados
respecto a las implicaciones legales. Te sugerimos que tomes en cuenta el hecho 
que Amiga Inc. no nos envi� ninguna carta "de cesar y desistir" como un signo 
positivo. Desafortunadamente, todav�a no hubo ning�n acuerdo que sonara legal, 
a pesar de las buenas intenciones de ambas partes.

�Por qu� solamente apuntan a ser compatibles con AmigaOS 3.1?
-------------------------------------------------------------

Hubo discusiones acerca de escribir un avanzado OS con las caracter�stica de AmigaOS. 
Se ha dejado esto por una buena raz�n. Primero, todos est�n de acuerdo que el 
actual AmigaOS deber�a ser mejorado, pero nadie sabe c�mo hacerlo o se pone de 
acuerdo sobre qu� tiene que ser mejorado o qu� es importante. Por ejemplo, algunos 
quieren protecci�n de memoria, pero no quieren pagar el precio (una reescritura 
mayor del software disponible y una disminuci�n de la velocidad).

Al final, las discusiones terminaron en guerras de palabras o en la reiteraci�n 
de los mismos viejos argumentos una y otra vez. As� que decidimos empezar con 
algo que sab�amos c�mo manejar. Entonces, cuando tuvi�ramos la experiencia para 
ver qu� es posible y qu� no, decidir�amos sobre las mejoras.

Tambi�n queremos ser compatible a nivel binario con el original AmigaOS sobre el Amiga.
La raz�n para esto es que un nuevo OS sin ning�n programa que ejecutar no tiene 
ninguna oportunidad de sobrevivir. Por lo tanto intentamos hacer el paso del OS 
original a uno nuevo tan indoloro como sea posible (pero no al extremo que no 
podamos mejorar AROS despu�s). Como es usual, todo tiene su precio y nosotros 
intentamos decidir cuidadosamente cu�l podr�a ser ese precio y si nosotros y todos 
los dem�s desearemos pagarlo.

�Puedes implementar la caracter�stica XYZ?
--------------------------------------------------

No, porque:

a) Si fuera realmente importante, ya estar�a en el OS original. :-)
b) �Por qu� no lo haces por t� mismo y nos env�as un parche?

La raz�n para esta actitud es que hay mucha gente alrededor que cree que su 
caracter�stica es la m�s importante y que AROS no tiene futuro si esa 
caracter�stica no est� integrada. Nuestra posici�n es que AmigaOS, el OS que 
AROS pretende implementar, puede hacer todo lo que un moderno OS deber�a hacer. 
Vemos que hay �reas donde AmigaOS podr�a mejorar, pero si hacemos eso, 
�qui�n escribir�a el resto del OS? Al final, tendr�amos muchas agradables 
mejoras al original OS que romper�an a la mayor�a del software disponible y no 
valdr�an nada, porque el resto del OS estar�a faltando.

Por lo tanto, decidimos bloquear todo intento de implementar nuevas caracter�sticas 
mayores en el OS hasta que est� m�s o menos completo. Ahora estamos bastante cerca 
de esa meta, y ya han habido un par de innovaciones implementadas en AROS que 
no estaban disponibles en AmigaOS.

�Cu�n compatible es AROS con AmigaOS?
---------------------------------------

Muy compatible. Esperamos que AROS ejecutar� el software existente sobre el 
Amiga sin problemas. Sobre otro hardware, el software existente debe ser 
recompilado. Ofreceremos un preprocesador que podr�s usar en tu c�digo que 
cambiar� cualquier c�digo que podr�a romper AROS y/o te advertir� sobre tal c�digo.

Transferir programas de AmigaOS a AROS es hoy sobre todo un asunto de una simple 
recompilaci�n, con el ocasional tweak aqu� y all�. Por supuesto hay programas 
para los que esto no es verdad, aunque s� lo es para los m�s modernos.

�Para qu� arquitecturas de hardware AROS est� disponible?
--------------------------------------------------------------

En la actualidad AROS est� disponible en un estado bastante usable en modo 
nativo y en modo alojado (en GNU/Linux, y FreeBSD) para la arquitectura i386 
(p.e. los clones compatibles con la IBM PC AT). Hay puertos en camino en 
variados grados de completitud para SUN SPARC (alojado bajo Solaris) y las 
computadoras de mano compatibles con la Palm (en modo nativo).

�Habr� un puerto de AROS a PPC?
------------------------------- 

Hay actualmente un esfuerzo en camino para adaptar AROS a PPC, inicialmente
alojado en Linux.

�Por qu� est�n usando Linux y X11?
----------------------------------

Usamos Linux y X11 para acelerar el desarrollo. Por ejemplo, si implementas una
nueva funci�n para abrir una ventana puedes simplemente escribir esa s�la funci�n
y no tienes que escribir las centenares de las otras funciones en layers.library,
graphics.library, unos mont�n de controladores de dispositivos y lo dem�s que esa
funci�n podr�a necesitar.

La meta para AROS es por supuesto ser independiente de Linux y X11 (aunque todav�a
ser�a capaz de ejecutarse en ellos si la gente realmente quiere hacerlo), y eso
se est� convirtiendo lentamente en una realidad con las versiones nativas de AROS.
Todav�a necesitamos usar Linux para desarrollar, porque algunas herramientas de
desarrollo no han sido transferidas a AROS todav�a.


�C�mo pretendes hacer port�til a AROS?
--------------------------------------

Una de las mayores nuevas caracter�sticas en AROS comparadas con AmigaOS es el
sistema HIDD (Controladores de Dispositivo Independientes del Hardware), que
nos permitir� transferir AROS f�cilmente a diferente hardware. B�sicamente, las
bibliotecas centrales del OS no afectan el hardware directamente sino que pasan
a trav�s de los HIDDs, que est�n codificados usando un sistema orientado a objetos
que hace f�cil reemplazar los HIDDs y volver a usar el c�digo.


�Por qu� piensas que AROS lo lograr�?
-------------------------------------

Hemos o�do todo el d�a de mucha gente que AROS no lo lograr�. La mayor�a no sabe
lo que estamos haciendo o creen que la Amiga ya est� muerta. A los primeros, luego de que les 
explicamos lo que hacemos, la mayor�a est� de acuerdo en que es posible. Los �ltimos
hacen m�s problema. Bien, �est� la Amiga muerta? Aquellos que todav�a usan sus
Amigas probablemente te dir�n que no lo est�. �Tu A500 o A4000 explot�
cuando Commodore entr� en bancarrota? �Lo hizo cuando a Amiga Technologies le pas�
lo mismo?

El hecho es que hay bastante poco software nuevo desarrollado para la Amiga
(aunque Aminet todav�a resuena bastante bien) y que el hardware tambi�n
es desarrollado a una menor velocidad (pero los m�s asombrosos gadgets
parecen surgir ahora). La comunidad Amiga (que todav�a vive) parece estar
sentada y esperando. Y si alguien presentara un producto que fuera un poco como 
la Amiga lo fue en 1984, entonces la m�quina estar� en auge de nuevo. Y qui�n
sabe, quiz�s obtengas un CD con la m�quina etiquetado "AROS". :-)


�Qu� hago si AROS no quiere compilar?
-------------------------------------


Por favor pon un mensaje con detalles (por ejemplo, los mensajes de error
que obtuviste) en el foro de Ayuda en `AROSWorld`__ o convi�rte en un
desarrollador y suscr�bete a la lista AROS Developer y p�nlo all�, y
alguien intentar� ayudarte.

__ https://www.arosworld.org/


�AROS tendr� memoria protegida, SVM, RT, ...?
---------------------------------------------


Varios centenares de expertos Amiga (eso es lo que ellos piensan de s� mismos
al menos) intentaron por tres a�os encontrar una manera de implementar memoria
protegida (MP) para el AmigaOS. Fallaron. Deber�as tomar como un hecho que un
normal AmigaOS nunca tendr� MP como Unix o Windows NT.

Pero no est� todo perdido. Hay planes para integrar una variante de MP en AROS
que permitir� la protecci�n de al menos los nuevos programas que lo conozcan.
Algunos esfuerzos en esta �rea se ven realmente prometedores. Tambi�n, �es 
realmente un problema si tu m�quina se cuelga? D�jame explicartelo, antes de
que t� me claves a un �rbol. :-) El problema no es que la m�quina se cuelgue,
sino que:

1. No tienes una buena idea de por qu� se colg�. B�sicamente, terminas
   empujando un poste de 100 pies en un pantano con niebla densa.
2. Perdiste tu trabajo. Reiniciar la m�quina no es realmente un problema.

Lo que podr�amos intentar construir es un sistema que al menos te alerte si algo
dudosos est� pasando y que diga con mucho detalle qu� suceder� cuando la 
m�quina se cuelgue y que permitir� guardar tu trabajo y *reci�n entonces* se cuelgue.
Habr� tambi�n medios para revisar lo que se guard� as� puedas estar seguro que no
sigues con datos corruptos.

La misma cosa va para la SVM (la memoria virtual intercambiable), el RT (el rastreo
de los recursos) y el SMP (el multiprocesamiento sim�trico). Estamos planeando
c�mo implementarlas, asegur�ndonos que agregar estas caracter�sticas ser� indoloro.
Sin embargo, ahora no tienen la prioridad m�s alta. Aunque se ha agregado un muy
b�sico RT.


�Puedo convertirme en un probador beta?
--------------------------------------------

Seguro, no hay problema. De hecho, queremos tantos probadores beta como sea
posible, as� que �todos son bienvenidos! Aunque no mantenemos una lista de 
los probadores beta, todo lo que tienes que hacer es descargar AROS, probar
lo que quieras y enviarnos un informe.


�Cu�l es la relaci�n entre AROS y UAE?
--------------------------------------

UAE es un emulador de la Amiga, y como tal tiene metas algo diferentes que AROS.
UAE quiere ser compatible con los binarios incluso para los juegos y el c�digo
que afecta al hardware, mientras que AROS quiere tener aplicaciones nativas. Por
lo tanto AROS es mucho m�s r�pido que UAE, pero en UAE puedes ejecutar m�s 
software.

Tenemos cierto contacto con el autor de UAE y hay una buena oportunidad de que 
el c�digo de UAE aparecer� en AROS y viceversa. Por ejemplo, los desarrolladores
de UAE est�n interesados en el c�digo fuente del OS porque UAE podr�a ejecutar
algunas aplicaciones mucho m�s r�pido si alguna o todas las funciones del OS
pueden ser reemplazados con c�digo nativo. Por otra parte, AROS se podr�a 
beneficiar con tener una emulaci�n del Amiga integrada.

Puesto que la mayor�a de los programas no estar�n disponibles en AROS desde el 
inicio, Fabio Alemagna ha transferido UAE para AROS para que puedas ejecutar los viejos
programas al menos en una caja de emulaci�n.


�Cu�l es la relaci�n entre AROS y Haage & Partner?
--------------------------------------------------

Haage & Partner us� partes de AROS en AmigaOS 3.5 y 3.9, por ejemplo los gadgets
rueda-de-colores y deslizador-de-gradiente y en el comando SetENV. Esto significa
que de una manera, AROS se ha vuelto parte del oficial AmigaOS. Esto no implica que
hay alguna relaci�n formal entre AROS y Haage & Partner. AROS es un proyecto de 
fuente abierta, y cualquiera puede usar nuestro c�digo en sus propios proyectos
con la estipulaci�n de que cumplan la licencia.


�Cu�l es la relaci�n entre AROS y MorphOS?
------------------------------------------

The relationship between AROS and MorphOS is basically the same as between AROS
and Haage & Partner. MorphOS uses parts of AROS to speed up their development
effort; under the terms of our license. As with Haage & Partner, this is good
for both the teams, since the MorphOS team gets a boost to their development
from AROS and AROS gets good improvements to our source code from the MorphOS
team. There is no formal relation between AROS and MorphOS; this is simply how
open source development works.
La relaci�n entre AROS y MophOS es b�sicamente la misma que entre AROS y Haage
& Partner. MorhpOS usa partes de AROS para acelerar su esfuerzo de desarrollo;
bajo los t�rminos de nuestra licencia. Como con Haage & Partner, esto es bueno
para ambos equipos, dado que el equipo de MorphOS obtiene de AROS est�mulo
para su desarrollo y AROS consigue buenas mejoras para nuestro c�digo fuente del
equipo de MorphOS. No hay una relaci�n formal entre AROS y MorphOs; 
simplemente as� es como funciona el desarrollo de fuente abierta.


�Cu�les lenguajes de programaci�n est�n disponibles?
----------------------------------------------------

La mayor�a del desarrollo de AROS se hace usando ANSI C por compilaci�n
cruzada bajo un OS diferente, p. e. Linux o FreeBSD. Fabio Alemagna ha
completado un puerto inicial de GCC para i386 nativo. Sin embargo, no 
est� actualmente en la ISO o incorporado en el build system.

Los lenguajes que est�n disponibles nativamente son Python_, Regina_ y False_:

+ Python es un lenguaje de scripting que se ha vuelto bastante popular, debido
  a su buen dise�o y caracter�sticas (programaci�n orientada a objetos, sistema
  de m�dulos, muchos m�dulos �tiles incluidos, una sintaxix limpia,...). Se ha 
  iniciado un proyecto separado para el puerto para AROS que se puede encontrar en
  http://pyaros.sourceforge.net/.
  
+ Regina es un interpretador port�til compatible con REXX. La meta para el puerto
  para AROS es ser compatible con el interpretador ARexx del cl�sico AmigaOS.
  
+ False se puede clasificar como un lenguaje ex�tico, as� que probablemente no
  ser� usado para el desarrollo serio, aunque puede ser bastante divertido. :-)

.. _Python: http://www.python.org/
.. _Regina: http://regina-rexx.sourceforge.net/
.. _False:  http://strlen.com/false-language


�Por qu� no hay un emulador m68k en AROS?
-----------------------------------------

Para hacer que los viejos programas del Amiga funcionen en AROS, hemos trasferido
UAE_ a AROS. La versi�n de UAE en AROS probablemente ser� un poco m�s r�pida que
las otras versiones de UAE ya que AROS necesita menos recursos que otros sistemas
operativos (lo que significa que UAE tendr� m�s tiempo de CPU), e intentaremos
parchar la ROM Kickstart en UAE para que llame a las funciones de AROS, lo que
dar� otra peque�a mejora. Por supuesto, esto solamente se aplica a los sabores
nativos de AROS y no a los sabores alojados.

Pero, �por qu� no simplemente implementamos una CPU m68k virtual para ejecutar
el software directamente en AROS? Bien, el problema es que el software m68k espera
que los datos est�n en formato big endian mientras que AROS tambi�n funciona 
en las CPU little endian. El problema es que las rutinas little endian en el 
n�cleo de AROS tendr�an que funcionar con los datos big endian en la emulaci�n. 
La conversi�n autom�tica parece ser imposible (s�lo un ejemplo: hay un 
campo en una estructura en el AmigaOS que a veces contiene un ULONG y 
a veces dos WORDS) porque no podemos decir c�mo est�n codificados en la 
RAM un par de bytes.

.. _UAE: http://www.amigaemulator.org/


�Habr� una ROM Kicktstart en AROS?
----------------------------------

Podr�a ser, si alguien crea un puerto nativo Amiga de AROS y hace todo el otro
trabajo necesario para crear una ROM Kickstart. Actualmente, nadie ha solicitado
el trabajo.


Preguntas de software
=====================

�C�mo accedo a los discos de imagen de AROS desde UAE?
------------------------------------------------------

La imagen de un disquete se puede montar como un archivo de disco duro y despu�s
ser usado como un disco duro de 1,4 MB dentro de UAE. Despu�s que hayas puesto 
los archivos que quieres en la imagen de disco duro (o lo que sea que quieras
hacer), puedes escribirla a un disquete.

La geometr�a de un archivo de disco duro es la siguiente::

    Sectors    = 32
    Surfaces   = 1
    Reserved   = 2
    Block Size = 90


�C�mo accedo a las im�genes de disco de AROS desde los sabores alojados de AROS?
-----------------------------------------------------------------------------------

Copia la imagen de disco al directorio DiskImages en AROS (SYS:DiskImages, por ej.
bin/linux-i386/AROS/DiskImages) y c�mbiale el nombre a "Unit0". Despu�s de iniciar 
AROS, puedes montar la imagen de disco con::

    > mount AFD0: 


�Qu� es Zune?
-------------

En el caso que leas acerca de Zune en este sitio, es simplemente una reimplementaci�n
fuente abierta de MUI, que es una poderosa biblioteca de GUI shareware orientada a objetos
y la norma de hecho en AmigaOS. Zune es la biblioteca de GUI preferida para desarrollar
aplicaciones nativas de AROS. Respecto al nombre, no significa nada, pero suena bien.

�C�mo puedo restaurar mis Prefs a las que ten�a predeterminadas?
----------------------------------------------------------------

En AROS, abre el shell CLI, ve al Envarc: y borra los archivos que son relevates 
a la preferencia (pref) que quieres restaurar.

�En el Wanderer, qu� es la Graphical Memory y la Other Memory?
---------------------------------------------------------------

Esta divisi�n de la memoria es sobre todo una reliquia del pasado del AmigaOS,
cuando la memoria gr�fica era la memoria de aplicaci�n antes que t� agregabas otra
llamada FAST RAM, una memoria adonde terminaban las aplicaciones, mientras que los
gr�ficos, los sonidos y algunas estructuras del sistema quedaban en la memoria gr�fica.

En AROS alojado, no hay tal tipo de memoria Other (la FAST), sino solamente GFX,
mientras que en AROS nativo, GFX puede tener un m�ximo de 16 MB, aunque no refleja
el estado de la memoria del adaptador gr�fico... No tiene relaci�n con la cantidad de 
memoria en tu tarjeta gr�fica.

*La respuesta m�s larga*
La memoria gr�fica en i386-native se refiere a los 16 MB inferiores de la memoria del
sistema. Esos 16 MB inferiores es el �rea donde las tarjetas ISA pueden hacer el 
DMA. La asignaci�n de memoria con MEMF_DMA o MEMF_CHIP se har� de all�, la restante
en la otra (FAST) memoria.

Use el comando C:Avail HUMAN para tener informaci�n sobre la memoria.

�Qu� hace en realidad la acci�n Snapshot <all/window> del Wanderer?
-------------------------------------------------------------------

Este comando recuerda la ubicaci�n del �cono de una (o todas) las ventanas.

�C�mo puedo cambiar el salvapantallas/fondo?
------------------------------------------------

At the moment the only way to change screensaver is to write your one.
Blanker commodity could be tuned with Exchange, but it is able to do only 
"starfield" with given amount of stars.
Background of Wanderer is set by Pref tool Prefs/Wanderer.
Background of Zune Windows is set by Zune prefs Prefs/Zune. You can also set 
your chosen application preferences by using the Zune <application> command.
En este momento la �nica manera para cambiar el salvapantallas es escribir
el propio. El commodity Blanker podr�a ser ajustado con Exchange, pero s�lo
es capaz de hacer un "campo de estrellas" con una cantidad dada de estrellas.
El Fondo del Wanderer se establece con la herramienta Pref en Prefs/Wanderer.

Al lanzar el AROS alojado fall�
-------------------------------

Probablemente esto se podr�a arreglar creando un directorio WBStartup en el
directorio AROS. Si eres root y AROS se cuelga en el lanzamiento, haz
"xhost +" antes que "sudo && ./aros -m 20". Tambi�n debes darle algo de 
memoria con la opci�n -m como se mostr�. No te olvides de la opci�n
BackingStore en la secci�n Device de tu archivo xorg.conf.

�Cu�les son las opciones de l�nea de comandos para el ejecutable del AROS alojado?
----------------------------------------------------------------------------------

Puedes obtener una lista escribiendo el comando ./aros -h.

�C�mo puedo hacer que las ventanas se refresquen en el AROS alojado?
--------------------------------------------------------------------

Debes proporcionar la siguiene cadena (�como est�!) a tu /etc/X11/xorg.conf (o XFree.conf)::
    
    Option  "BackingStore"

�Cu�les son las opciones del n�cleo de AROS nativo usadas en la l�nea de GRUB?
------------------------------------------------------------------------------

Aqu� est�n algunas::

    nofdc - Deshabilita por completo el controlador de la disquetera.
    noclick - Deshabilita la detecci�n del cambio de disquete (y el clicking).
    ATA=32bit - Habilita la E/S de 32 bit en el controlador de disco duro (seguro).
    forcedma - Fuerza el DMA activo en el controlador de disco duro (deber�a ser
	           seguro pero podr�a no serlo).
    gfx=<nombre del hidd> - Usa el hidd nombrado como el controlador gfx.
    lib=<nombre> - Carga e inicia la biblioteca/hidd nombrado.

Por favor advierte que son sensibles a las may�sculas.

�C�mo puedo transferir los archivos a la m�quina virtual con AROS?
------------------------------------------------------------------

Primero y lo m�s f�cil es poner los archivos en la imagen ISO y conectarla a la 
MV (m�quina virtual). Hay bastante programas capaces de crear/editar ISOs como 
UltraISO, WinImage, o mkisofs. Segundo, puedes configurar la red en AROS y un 
servidor FTP en tu m�quina anfitriona. Entonces puedes usar el cliente FTP de 
AROS y transferir los archivos (busca MarranoFTP). �ste es suficientemente 
dif�cil para detenerse en este punto. La documentaci�n del usuario contiene un 
cap�tulo sobre redes, v� por �l. Tambi�n, ahora hay una prometedora utilidad 
(AFS Util), que permite leer (todav�a no tiene soporte para escribir) archivos 
desde los discos y disquetes AROS AFFS/OFS.

Errores de compilaci�n
----------------------

P: He compilado AROS con gcc4 pero encontr� fallas de segmento con -m > 20 en
AROS alojado y si compilo AROS nativo no empieza (la pantalla est� negra).
R: Agrega -fno-strict-aliasing al archivo scripts/aros-gcc.in y prueba de nuevo.

�Es posible hacer un gui�n DOS que autom�ticamente se ejecute cuando se instala un paquete?
-------------------------------------------------------------------------------------------

Este gui�n deber�a hacer algunas asignaciones y agrega la cadena a la variable PATH.

1) Crea un subdirectorio S y agrega un archivo con el nombre 'Package-Startup' con los
comandos DOS.

2) Crea una variable en el archivo Envarc:SYS/packages que contenga la ruta al directorio
S de tu paquete.

Ejemplo::
    Distribuci�n del directorio:

    sys:Extras/miappdir
    sys:Extras/miappdir/S
    sys:Extras/miappdir/S/Package-Startup
    
La variable en Envarc:sys/packages podr�a tener el nombre 'miapp' (el nombre no importa),
el contenido ser�a entonces 'sys:extras/miappdir'.

El gui�n Package-Startup ser�a entonces llamado por la startup-sequence (secuencia de inicio).

As� se ve donde es llamado::

    If EXISTS ENV:SYS/Packages
        List ENV:SYS/Packages NOHEAD FILES TO T:P LFORMAT="If EXISTS $SYS/Packages/%s*NCD $SYS/Packages/%s*NIf EXISTS S/Package-Startup*NExecute S/Package-Startup*NEndif*NEndif*N"
        Execute T:P
        Delete T:P QUIET
        CD SYS:
    EndIf
    
�C�mo puedo limpiar la ventana del shell? �C�mo puedo hacerlo de modo permanente?
---------------------------------------------------------------------------------

En el shell tipea este comando::

    Echo "*E[0;0H*E[J* "
    
Puedes editar tu S:Shell-Startup e insertar este rengl�n en alguna parte,
as� tendr�s un nuevo comando "Cls"::

    Alias Cls "Echo *"*E[0;0H*E[J*" "

A prop�sito, aqu� est� mi nuevo S:Shell-Startup modificado para iniciar el shell
en blanco y con un prompt modificado::

    Alias Edit SYS:Tools/Editor
    Alias Cls "Echo *"*E[0;0H*E[J*" "
    Echo "*e[>1m*e[32;41m*e[0;0H*e[J"
    Prompt "*n*e[>1m*e[33;41m*e[1m%N/%R - *e[30;41m%S>*e[0m*e[32;41m "
    date

M�s acerca de las secuencias de escape de la impresora::

    Esc[0m
    Standard Set

    Esc[1m and Esc[22m
    Negrita

    Esc[3m and Esc[23m
    Cursiva

    Esc[4m and Esc[24m
    Subrayado

    Esc[30m to Esc[39m
    Establecer el color de primer plano

    Esc[40m to Esc[49m
    Establecer el color de fondo

Valores significativos::

    30 grey char -- 40 grey cell -- >0 grey background ---- 0 all attributes off
    31 black char - 41 black cell - >1 black background --- 1 boldface
    32 white char - 42 white cell - >2 white background --- 2 faint
    33 blue char -- 43 blue cell -- >3 blue background ---- 3 italic
    34 grey char -- 44 grey cell -- >4 grey background ---- 4 underscore
    35 black char - 45 black cell - >5 black background --- 7 reverse video
    36 white char - 46 white cell - >6 white background --- 8 invisible
    37 blue char -- 47 blue cell -- >7 blue background

Los c�digos puedes ser combinados separ�ndolos con un punto y coma.

�C�mo lanzo AROS alojado a pantalla completa?
---------------------------------------------

En un shell llama "exporte AROS_X11_FULLSCREEN=1". Inicia AROS y cambia la 
resoluci�n de la pantalla en las preferencias de modo de pantalla (screenmode).
Sal de AROS e in�cialo de nuevo.

�C�mo hago los �conos AROS de dos estados?
------------------------------------------

Los �conos de AROS son en realidad archivos PNG renombrados. Pero si quieres �conos
en dos estados (libre/apretado) usa este comando::

    join img_1.png img_2.png TO img.info
    
�C�mo monto una imagen ISO en AROS? Y �puedo puedo poner al d�a mi nightly build de esta manera?
------------------------------------------------------------------------------------------------

Consigue la ISO en el sitio web de AROS (por medio de wget o de otra manera).
Copia la ISO en sys:DiskImages (el caj�n debe ser creado si no existe).
Renombra la ISO a Unit0 en ese directorio.
Debes a�adir esto a tu Devs:Mountlist ::

    ISO:
    FileSystem = cdrom.handler
    Device = fdsk.device
    Unit = 0

Despu�s monta la ISO:
Puedes copiar algo desde ISO: 
Por ejemplo, haz un gui�n para actualizar tu nightly build as�::

    *Copy ISO:boot/aros-pc-i386.gz sys:boot/
    *copy ISO:C sys:C all quiet
    *copy ISO:Classes sys:Classes all quiet
    *copy *copy ISO:Demos sys:Demos all quiet

y as� para cada directorio excepto Prefs, Extras:Networking/Stacks, y devs:mountlist.
Prefs tiene que ser mantenido si lo quieres. Tambi�n puedes poner AROSTCP para
mantener sus configuraciones en un directorio separado.

Si quieres escribir por todas partes, haz::

    copy ISO:C sys:C all quiet newer  
    
�C�mo desmonto un volumen?
--------------------------

En el CLI lanza estos comandos::
    
    assign DOSVOLUME: dismount
    assign DOSVOLUME: remove

donde DOSVOLUME es DH0:, DF0:, etc.

�C�mo monto un disquete FAT con el FAT.handler?
-----------------------------------------------

Crea un archivo de montaje (un archivo de texto) con los
tres renglones m�gicos::

    device = trackdisk.device
    filesystem = fat.handler
    unit = 0

Ll�malo de alg�n modo, PC0 por ejemplo.  Establece en las propiedades de la 
herramienta predeterminada (default tool) de este archivo a C:mount
(o pon el archivo de montaje en devs:dosdrivers o sys:storage/dosdrivers).
Aprieta dos veces en �l.
Inserta un disquete formateado a FAT.
Mira aparecer su �cono en el escritorio del Wanderer.

�C�mo monto una real partici�n FAT con el FAT.handler?
------------------------------------------------------

Primero necesitas leer la geometr�a de la unidad y escribir algunos valores.
Puedes usar el HDToolbox o el fdisk de Linux para eso. El valor BlocksPerTrack
se toma del valor sectores/pista. Advierte que no tiene nada que ver con la 
geometr�a f�sica del disco - FAT solamente lo usa como un multiplicador.

    sudo fdisk -u -l /dev/hda, 
    
Despu�s necesitar�s establecer BlocksPerTracks=63.
Para asegurarte que tienes los n�meros en cilindros busca en la salida
Units=Cylinders. Si tienes la salida de fdisk en sectores (Units=sectors),
establecer BlocksPerTracks=1.

LowCyl y HighCyl son los cilindros de la partici�n y se ven algo as�::

    mark@ubuntu:~$ sudo fdisk -l -u /dev/hda
    ...
    /dev/hda1 * 63 20980889 10490413+ c W95 FAT32 (LBA)

Entonces, LowCyl es 63, y HighCyl es 20980889, blockspertrack=1

Crea un archivo de montaje (un archivo de texto) con estos renglones::

    
    device = ata.device
    filesystem = fat.handler,
    Unit = 0

    BlocksPerTrack = 1
    LowCyl = 63
    HighCyl = 20980889
    Blocksize=512

Ll�malo de alg�n modo, FAT0 por ejemplo.
Pon c:mount en las propiedades de la herramienta predeterminada del archivo
(o pon el archivo de montaje en devs:dosdrivers o en sys:storage/dosdrivers).
Aprieta dos veces.
Mira aparecer el �cono en el escritorio del Wanderer

Nota: F�rmula para contar los bloques
block = ((highcyl - lowcyl) x surfaces + head) x blockspertrack + sec

Preguntas sobre el hardware
===========================

�D�nde puedo encontrar una Lista de Compatibilidad de Hardware para AROS?
-------------------------------------------------------------------------

Puedes encontrar una en la p�gina `AROS Wiki <http://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__.
Puede haber otras listas hechas por los usuarios de AROS.

�Por qu� AROS no puede arrancar de mi conjunto de unidades como SLAVE en el canal IDE?
--------------------------------------------------------------------------------------

Bueno, AROS deber�a arrancar si la unidad es SLAVE pero solamente si hay una 
unidad MASTER tambi�n. Eso parece ser una conexi�n correcta respetando la especificaci�n
IDE, y AROS la sigue.

Mi sistema se cuelga con un cursor rojo en la pantalla o con una pantalla negra
--------------------------------------------------------------------------------

Una raz�n para esto puede ser el uso de un rat�n serial (�stos no est�n soportados
todav�a). Debes usar un rat�n ps/2 con AROS en este momento. Otra puede que hayas
escogido un modo de video que no est� soportado por tu hardware en el men� de arranque.
Reinicia y prueba uno diferente.
