=====================================
Respuestas a las Preguntas Frecuentes
=====================================

:Authors:   Aaron Digulla, Adam Chodorowski, Sergey Mineychev, AROS-Exec.org
:Copyright: Copyright (C) 1995-2026, The AROS Development Team
:Version:   $Revision$
:Date:      $Date$
:Status:    Done.

.. Contents::

Preguntas comunes
=================

¿Puedo hacer una pregunta?
--------------------------

Por supuesto. Hay varios lugares donde puedes hacer preguntas, hablar sobre
AROS y encontrar ayuda. Las listas de correo de desarrolladores de AROS y los
canales de Slack aparecen en el `wiki del repositorio Git de AROS
<https://github.com/aros-development-team/AROS/wiki>`__. También hay foros de la
comunidad y debates en diversos foros relacionados con Amiga, donde puedes
encontrar personas con experiencia en el uso de AROS y otros sistemas similares
a Amiga.

Además, hay disponible en línea una cantidad considerable de documentación y
literatura sobre AROS, AmigaOS y sistemas similares a Amiga relacionados, que
puede proporcionar información útil tanto de contexto como práctica.

Este FAQ se actualizará a medida que surjan preguntas y respuestas útiles, pero
es probable que los debates de la comunidad y los canales de desarrollo contengan
información más reciente.

¿Qué es AROS?
-------------

Por favor lee la introducción_.

.. _introducción: ../../introduction/index


¿Cuál es el estado legal de AROS?
---------------------------------

Las leyes europeas dicen que es legal usar técnicas de ingeniería inversa
para conseguir interoperatibilidad. También dice que es ilegal distribuir el 
conocimiento obtenido con esas técnicas. Esto básicamente significa que te 
está permitido desensamblar o resource cualquier software para escribir 
algo que sea compatible (por ejemplo, sería legal desensamblar Word para 
escribir un programa que convierte los documentos de Word en texto ASCII).

Por supuesto que hay limitaciones: no te está permitido desensamblar el 
software si la información que tú conseguirías por este proceso puede ser 
obtenida por otros medios. Además no debes contar lo que aprendiste. Un 
libro como "Windows por dentro" es por lo tanto ilegal o al menos legalmente dudoso.

Desde que nosotros evitamos las técnicas de desensamblado y en su lugar 
usamos el conocimiento común disponible (lo que incluye a los manuales de 
programación) que no cae dentro de ningún Acuerdo de No Divulgación, lo de 
arriba no se aplica directamente a AROS. Lo que cuenta aquí es la intención 
de la ley: es legal escribir software que sea compatible con algún otro software. 
Por lo tanto creemos que AROS está protegido por la ley.

Aunque las patentes y los archivos de cabecera son un asunto diferente. Podemos 
usar algoritmos patentados en Europa ya que las leyes europeas no permiten patentar 
los algoritmos. Sin embargo, el código que usa tales algoritmos que están patentados 
en EE.UU. no podría ser importado a EE.UU. Ejemplos de algoritmos patentados en 
AmigaOS incluyen el arrastrado en la pantalla y la manera específica en que funcionan 
los menús. Por otro lado, los archivos de cabecera deben ser compatibles pero tan 
diferentes como sea posible de los originales.

Para evitar cualquier problema nosotros solicitamos un oficial vistobueno de 
Amiga Inc. Ellos son muy positivos respecto del esfuerzo pero están muy preocupados
respecto a las implicaciones legales. Te sugerimos que tomes en cuenta el hecho 
que Amiga Inc. no nos envió ninguna carta "de cesar y desistir" como un signo 
positivo. Desafortunadamente, todavía no hubo ningún acuerdo que sonara legal, 
a pesar de las buenas intenciones de ambas partes.

¿Por qué solamente apuntan a ser compatibles con AmigaOS 3.1?
-------------------------------------------------------------

Ha habido discusiones sobre escribir un sistema operativo avanzado con las
características del AmigaOS. Esto se descartó por una buena razón. Primero,
todos estaban de acuerdo en que el AmigaOS actual tendría que mejorarse, pero
nadie sabía cómo hacerlo, ni siquiera se ponían de acuerdo en qué había que
mejorar o qué era importante. Por ejemplo, algunos querían protección de
memoria, pero no les gustaba su coste (una reescritura importante del software
disponible y una pérdida de velocidad).

Al final, las discusiones acababan en peleas o en la repetición de los mismos
argumentos. Así que decidimos empezar con algo que sabíamos manejar. Luego,
cuando tengamos la experiencia para ver qué es posible y qué no, podremos
decidir sobre las mejoras.

También queremos ser compatibles a nivel binario con el AmigaOS original en
los ordenadores Amiga. La razón es simplemente que un nuevo SO sin programas
que ejecutar tiene pocas posibilidades de sobrevivir. Por eso intentamos que el
cambio del SO original al nuestro sea lo menos doloroso posible (pero no hasta
el punto de que no podamos mejorar AROS después). Como siempre, todo tiene su
precio, e intentamos decidir con cuidado cuál puede ser ese precio y si
nosotros y todos los demás estaríamos dispuestos a pagarlo.


¿Puedes implementar la característica XYZ?
--------------------------------------------------

No, porque:

a) Si fuera realmente importante, ya estaría en el OS original. :-)
b) ¿Por qué no lo haces por tí mismo y nos envías un parche?

(Los parches son bienvenidos, pero consulta `AROS es de fuente abierta.
¿Significa eso que cualquiera puede cambiarlo como le parezca?`_ para saber
qué se espera de ellos.)

La razón para esta actitud es que hay mucha gente alrededor que cree que su 
característica es la más importante y que AROS no tiene futuro si esa 
característica no está integrada. Nuestra posición es que AmigaOS, el OS que 
AROS pretende implementar, puede hacer todo lo que un moderno OS debería hacer. 
Vemos que hay áreas donde AmigaOS podría mejorar, pero si hacemos eso, 
¿quién escribiría el resto del OS? Al final, tendríamos muchas agradables 
mejoras al original OS que romperían a la mayoría del software disponible y no 
valdrían nada, porque el resto del OS estaría faltando.

Por lo tanto, decidimos bloquear todo intento de implementar nuevas características 
mayores en el OS hasta que esté más o menos completo. Ahora estamos bastante cerca 
de esa meta, y ya han habido un par de innovaciones implementadas en AROS que 
no estaban disponibles en AmigaOS.

¿Cuán compatible es AROS con AmigaOS?
---------------------------------------

Muy compatible. Esperamos que AROS ejecutará el software existente sobre el 
Amiga sin problemas. Sobre otro hardware, el software existente debe ser 
recompilado. Ofreceremos un preprocesador que podrás usar en tu código que 
cambiará cualquier código que podría romper AROS y/o te advertirá sobre tal código.

Transferir programas de AmigaOS a AROS es hoy sobre todo un asunto de una simple 
recompilación, con el ocasional tweak aquí y allí. Por supuesto hay programas 
para los que esto no es verdad, aunque sí lo es para los más modernos.

¿Para qué arquitecturas de hardware AROS está disponible?
---------------------------------------------------------

Actualmente AROS está disponible en un estado bastante usable como nativo y
alojado (bajo Linux) para la arquitectura i386 (es decir, clones compatibles
con IBM PC AT) y para X86_64. Hay puertos en marcha, en distintos grados de
completitud, para los Amiga 68k y la Raspberry Pi.


¿Habrá un puerto de AROS a PowerPC?
-----------------------------------

Ya está disponible. Los puertos de AROS para PowerPC que se mantienen son
sam440-ppc y darwin-ppc.


¿Por qué están usando Linux y X11?
----------------------------------

Usamos Linux y X11 para acelerar el desarrollo. Por ejemplo, si implementas una
nueva función para abrir una ventana puedes simplemente escribir esa sóla función
y no tienes que escribir las centenares de las otras funciones en layers.library,
graphics.library, unos montón de controladores de dispositivos y lo demás que esa
función podría necesitar.

La meta para AROS es por supuesto ser independiente de Linux y X11 (aunque todavía
sería capaz de ejecutarse en ellos si la gente realmente quiere hacerlo), y eso
se está convirtiendo lentamente en una realidad con las versiones nativas de AROS.
Todavía necesitamos usar Linux para desarrollar, porque algunas herramientas de
desarrollo no han sido transferidas a AROS todavía.


¿Cómo pretendes hacer portátil a AROS?
--------------------------------------

Una de las mayores nuevas características en AROS comparadas con AmigaOS es el
sistema HIDD (Controladores de Dispositivo Independientes del Hardware), que
nos permitirá transferir AROS fácilmente a diferente hardware. Básicamente, las
bibliotecas centrales del OS no afectan el hardware directamente sino que pasan
a través de los HIDDs, que están codificados usando un sistema orientado a objetos
que hace fácil reemplazar los HIDDs y volver a usar el código.


¿Por qué piensas que AROS lo logrará?
-------------------------------------

Hemos oído todo el día de mucha gente que AROS no lo logrará. La mayoría no sabe
lo que estamos haciendo o creen que la Amiga ya está muerta. A los primeros, luego de que les 
explicamos lo que hacemos, la mayoría está de acuerdo en que es posible. Los últimos
hacen más problema. Bien, ¿está la Amiga muerta? Aquellos que todavía usan sus
Amigas probablemente te dirán que no lo está. ¿Tu A500 o A4000 explotó
cuando Commodore entró en bancarrota? ¿Lo hizo cuando a Amiga Technologies le pasó
lo mismo?

El hecho es que hay bastante poco software nuevo desarrollado para la Amiga
(aunque Aminet todavía resuena bastante bien) y que el hardware también
es desarrollado a una menor velocidad (pero los más asombrosos gadgets
parecen surgir ahora). La comunidad Amiga (que todavía vive) parece estar
sentada y esperando. Y si alguien presentara un producto que fuera un poco como 
la Amiga lo fue en 1984, entonces la máquina estará en auge de nuevo. Y quién
sabe, quizás obtengas un CD con la máquina etiquetado "AROS". :-)


¿Qué hago si AROS no quiere compilar?
-------------------------------------


Por favor, proporciona detalles del problema, incluyendo el comando que usaste
para construir AROS y cualquier mensaje de error que hayas recibido, y pide ayuda
en la `lista de correo de desarrolladores de AROS`__ o en el canal de Slack de
AROS. Estos son los lugares apropiados para tratar problemas de construcción y
otras cuestiones relacionadas con el desarrollo de AROS, y es donde los
desarrolladores y otras personas familiarizadas con el sistema de construcción
pueden ayudar a diagnosticar el problema.

No necesitas ser un desarrollador consolidado de AROS para pedir ayuda con un
problema de construcción. Si estás construyendo AROS desde el código fuente, ya
estás trabajando con el entorno de desarrollo.

__ https://www.aros.org/


¿AROS tendrá memoria protegida, SVM, RT, ...?
---------------------------------------------

Varios cientos de expertos en Amiga (y gente que se consideraba como tal)
intentaron durante tres años encontrar una forma de implementar la protección
de memoria (MP) para AmigaOS. No tuvieron éxito. Esto indica que es bastante
improbable que el AmigaOS normal tenga alguna vez MP como Unix o Windows NT.

Pero no todo está perdido. Hay planes para integrar en AROS una variante de MP
que permitirá proteger al menos los programas nuevos que la conozcan. Algunos
esfuerzos en esta área parecen realmente prometedores. Además, no es realmente
un problema que tu máquina se cuelgue. Más bien, el problema puede ser que:

1. No tienes una buena idea de por qué se colgó. Básicamente, acabas hurgando
   con un palo de treinta metros en un pantano cubierto de niebla espesa.
2. Pierdes tu trabajo.

Reiniciar la máquina no es realmente un problema.

Lo que podríamos intentar construir es un sistema que al menos avise si está
ocurriendo algo dudoso, que pueda decirte con gran detalle qué estaba pasando
cuando la máquina se colgó y que te permita guardar tu trabajo y *entonces*
colgarse. También necesitaría un medio para comprobar lo que se ha guardado,
para que puedas estar seguro de no continuar con datos corruptos.

Lo mismo ocurre con SVM (memoria virtual intercambiable), RT (seguimiento de
recursos) y SMP (multiprocesamiento simétrico). Actualmente estamos planeando
cómo implementarlos, asegurándonos de que añadir estas características sea
indoloro. Sin embargo, no tienen la máxima prioridad ahora mismo. Eso sí, ya se
ha añadido un RT muy básico.


¿Puedo convertirme en un probador beta?
--------------------------------------------

Seguro, no hay problema. De hecho, queremos tantos probadores beta como sea
posible, así que ¡todos son bienvenidos! Aunque no mantenemos una lista de 
los probadores beta, todo lo que tienes que hacer es descargar AROS, probar
lo que quieras y enviarnos un informe.


¿Cuál es la relación entre AROS y UAE?
--------------------------------------

UAE es un emulador de Amiga y, como tal, su objetivo es algo distinto del de
AROS. UAE quiere ser compatible a nivel binario incluso con juegos y código que
accede directamente al hardware, mientras que AROS quiere tener aplicaciones
nativas. Por eso AROS es mucho más rápido que UAE, pero bajo UAE puedes
ejecutar más software.

Estamos en contacto informal con el autor de UAE y hay muchas posibilidades de
que código de UAE aparezca en AROS y viceversa. Por ejemplo, los
desarrolladores de UAE están interesados en el código fuente del SO, porque UAE
podría ejecutar algunas aplicaciones mucho más rápido si algunas o todas las
funciones del SO se sustituyeran por código nativo. Por otro lado, AROS podría
beneficiarse de tener una emulación de Amiga integrada.

Como la mayoría de los programas no estarán disponibles en AROS desde el
principio, Fabio Alemagna ha portado UAE a AROS, de modo que puedas ejecutar
programas antiguos al menos en una caja de emulación.

También está disponible en Contrib `E-UAE`__, que es UAE mejorado con algunas
características de `WinUAE`__.

__ http://www.rcdrummond.net/uae/
__ https://www.winuae.net/


¿Cuál es la relación entre AROS y Haage & Partner?
--------------------------------------------------

Haage & Partner usó partes de AROS en AmigaOS 3.5 y 3.9, por ejemplo los gadgets
rueda-de-colores y deslizador-de-gradiente y en el comando SetENV. Esto significa
que de una manera, AROS se ha vuelto parte del oficial AmigaOS. Esto no implica que
hay alguna relación formal entre AROS y Haage & Partner. AROS es un proyecto de 
fuente abierta, y cualquiera puede usar nuestro código en sus propios proyectos
con la estipulación de que cumplan la licencia.


¿Cuál es la relación entre AROS y MorphOS?
------------------------------------------

The relationship between AROS and MorphOS is basically the same as between AROS
and Haage & Partner. MorphOS uses parts of AROS to speed up their development
effort; under the terms of our license. As with Haage & Partner, this is good
for both the teams, since the MorphOS team gets a boost to their development
from AROS and AROS gets good improvements to our source code from the MorphOS
team. There is no formal relation between AROS and MorphOS; this is simply how
open source development works.
La relación entre AROS y MophOS es básicamente la misma que entre AROS y Haage
& Partner. MorhpOS usa partes de AROS para acelerar su esfuerzo de desarrollo;
bajo los términos de nuestra licencia. Como con Haage & Partner, esto es bueno
para ambos equipos, dado que el equipo de MorphOS obtiene de AROS estímulo
para su desarrollo y AROS consigue buenas mejoras para nuestro código fuente del
equipo de MorphOS. No hay una relación formal entre AROS y MorphOs; 
simplemente así es como funciona el desarrollo de fuente abierta.


¿Cuáles lenguajes de programación están disponibles?
----------------------------------------------------

GCC (C, C++) está disponible tanto como compilador nativo como cruzado.

Los lenguajes disponibles de forma nativa son Python_, Regina_, Lua_ y
Hollywood_:

+ Python es un lenguaje de guiones que se ha hecho bastante popular por su
  buen diseño y sus características (programación orientada a objetos, sistema
  de módulos, muchos módulos útiles incluidos, sintaxis limpia, ...). Se ha
  iniciado un proyecto aparte para el puerto a AROS, que puede encontrarse en
  https://pyaros.sourceforge.net/.

+ Regina es un intérprete de REXX portátil y conforme a ANSI. El objetivo del
  puerto a AROS es ser compatible con el intérprete ARexx del AmigaOS clásico.

+ Lua es un lenguaje de guiones potente, rápido, ligero e integrable. El
  puerto a AROS se ha ampliado con dos módulos: siamiga y zulu. El primero
  tiene algunos comandos gráficos sencillos, el segundo es una interfaz con
  Zune.

+ Hollywood es un lenguaje de programación comercial para aplicaciones
  multimedia, incluidos juegos. Puedes comprar una versión para i386-aros
  (ABI v0).

.. _Python: https://www.python.org/
.. _Regina: https://regina-rexx.sourceforge.io/
.. _Lua: https://www.lua.org/
.. _Hollywood: http://www.airsoftsoftwair.com/


¿Por qué no hay un emulador m68k en AROS?
-----------------------------------------

Ya hay un intento de integrar el emulador janus-uae.

Pero, ¿por qué no implementamos simplemente una CPU m68k virtual para ejecutar
software directamente en AROS? Bueno, el problema es que el software m68k
espera los datos en formato big-endian, mientras que AROS también se ejecuta
en CPUs little-endian. Las rutinas little-endian del núcleo de AROS tendrían
que trabajar con los datos big-endian de la emulación. La conversión
automática parece imposible (sólo un ejemplo: hay un campo en una estructura
del AmigaOS que a veces contiene un ULONG y a veces dos WORD) porque no
podemos saber cómo están codificados un par de bytes en la RAM.

.. _UAE: http://www.amigaemulator.org/


¿Habrá una ROM Kicktstart en AROS?
----------------------------------

Ya están disponibles en el paquete amiga-m68k-boot-iso, en el directorio
boot/amiga.


Organización y gobierno del proyecto
====================================

¿Quién dirige el proyecto AROS?
-------------------------------

AROS es un proyecto de voluntarios. No pertenece a ninguna empresa ni está
gestionado por ninguna, y el proyecto no paga a nadie por trabajar en él.

El proyecto fue iniciado en 1995 por Aaron Digulla. Hoy lo mantienen Nick
Andrews (Kalamatee) y Matthias Rustler (mazze). Ellos son responsables de la
dirección y las decisiones del proyecto, y son quienes responden en última
instancia de su desarrollo continuado, su infraestructura y su preservación.

Otros miembros veteranos del equipo de desarrollo siguen en contacto con el
proyecto, pero ya no participan activamente en su desarrollo diario. Michal
Schulz, anteriormente uno de los mantenedores, se apartó para concentrarse en
su trabajo de emulación de m68k.


¿En qué consiste la infraestructura del proyecto y quién la paga?
-----------------------------------------------------------------

+ **El código fuente** está alojado en GitHub, en la organización
  `aros-development-team`__.
+ **Las compilaciones**, incluidas las compilaciones nocturnas, se producen
  con Azure Pipelines.
+ **El sitio web** está alojado en SourceForge.
+ **El dominio aros.org** lo sigue pagando Aaron Digulla. Su DNS lo gestionan
  los mantenedores actuales.

El proyecto no tiene otros costes de funcionamiento, y no existe ningún fondo
del proyecto. Las donaciones realizadas a través de este sitio web van
directamente al desarrollador individual que el donante elige, no al proyecto.

__ https://github.com/aros-development-team


¿Cómo se toman las decisiones?
------------------------------

Los cambios se proponen, se debaten y se revisan abiertamente: en la lista de
correo de desarrolladores, en el canal de Slack de desarrollo, y en las
incidencias (issues) y pull requests de GitHub. Todo el mundo es bienvenido a
participar en esos debates, y se alientan las opiniones e ideas diferentes.

La decisión final sobre lo que se acepta en AROS, y sobre la dirección que
toma el proyecto, corresponde a los mantenedores. Las decisiones se toman
pensando en el proyecto en su conjunto: todas sus plataformas soportadas, sus
usuarios y su software existentes, y sus objetivos a largo plazo, y no en las
necesidades de un colaborador, una plataforma o una distribución en
particular.


AROS es de fuente abierta. ¿Significa eso que cualquiera puede cambiarlo como le parezca?
-----------------------------------------------------------------------------------------

Cualquiera puede usar, estudiar, modificar y redistribuir el código fuente de
AROS bajo los términos de la `AROS Public License`__, y cualquiera puede
proponer cambios.

Esa apertura no debería confundirse con una ausencia de supervisión, de
dirección o de normas. AROS no es un terreno donde todo vale. Las
contribuciones son bienvenidas, pero deben respetar el espíritu del proyecto,
sus objetivos y su dirección general, y se revisan antes de ser aceptadas.
Nadie debería esperar poder imponer su propia agenda al proyecto, ni usar su
apertura como justificación para hacerlo.

En particular, lo siguiente no es aceptable en AROS:

+ usar el proyecto o sus componentes para favorecer intereses privados o
  comerciales, por ejemplo introduciendo publicidad en los componentes;
+ orientar el desarrollo hacia una plataforma favorecida a expensas de las
  demás, o de los objetivos más amplios del proyecto;
+ cambios que sirvan a una distribución o bifurcación (fork) en detrimento de
  AROS en su conjunto.

__ ../../license.html


¿Por qué el control del proyecto está en manos de tan pocas personas?
---------------------------------------------------------------------

Hay dos razones.

La primera es simplemente la historia. La estructura actual ha evolucionado a
lo largo de un periodo prolongado y refleja quiénes han contribuido a AROS, lo
han apoyado y han mantenido su compromiso con él de forma constante. Durante
la mayor parte de los últimos quince años, y más, ha habido poco interés
sostenido por parte de otros en asumir la responsabilidad del proyecto, de
modo que el grupo de personas que cuida de él ha seguido siendo pequeño.

La segunda es la experiencia. En el pasado ha habido intentos, por parte de
individuos, de asumir posiciones de autoridad sobre el proyecto, de reorientar
su desarrollo y de usarlo como vehículo para su propio beneficio. Un proyecto,
su comunidad y el trabajo invertido en él tardan muchos años en construirse,
pero hace falta muy poco tiempo para que alguien les cause un daño
considerable.

El nivel de control que se mantiene es consecuencia directa de esto. No
pretende restringir la participación o la colaboración legítimas. Está ahí
para proteger el proyecto, y las contribuciones que muchas personas le han
hecho a lo largo de los años, de ser usurpados, desviados o explotados para
fines distintos de aquellos para los que se creó AROS.


¿Cómo puedo participar?
-----------------------

Que más personas participen activamente en AROS es algo que el proyecto quiere
ver. La vía de entrada es la misma para todos:

1. Haz una bifurcación (fork) del repositorio en GitHub y envía las mejoras
   como pull requests.
2. Únete a la lista de correo de desarrolladores o al canal de Slack y
   participa en el debate, sobre todo antes de empezar un cambio de mayor
   envergadura.
3. Lee y sigue las directrices de contribución, el proceso de pull requests y
   el código de conducta que están en el repositorio de código fuente
   (``CONTRIBUTING.md`` y ``PULL_REQUESTS.md``).

No necesitas ningún estatus especial para hacerlo. Consulta `Contribuir`__
para conocer otras formas de ayudar, como las pruebas, la documentación y la
traducción.

__ ../developers/contribute


¿Cómo consigo acceso de commit, o voz en la dirección del proyecto?
-------------------------------------------------------------------

El acceso directo al repositorio, y cualquier nivel mayor de responsabilidad o
influencia, se basan en una confianza y una fiabilidad demostradas y en un
compromiso sostenido con el proyecto. En la práctica eso significa un
historial de buenas contribuciones, hechas a lo largo del tiempo, que respeten
los objetivos del proyecto y a las personas que trabajan en él.

No hay un número fijo de parches ni un periodo de tiempo que cualifique a
alguien. Las decisiones sobre ampliar el acceso, la responsabilidad o el
control las toman los mantenedores y, dada la historia del proyecto, no se
toman a la ligera. Una manifestación de interés es bienvenida, pero por sí
sola no sustituye a la participación.


¿Quién posee el copyright de AROS?
----------------------------------

El código escrito para AROS se aporta al proyecto en su conjunto. Lleva el
aviso de copyright de The AROS Development Team y se licencia bajo la AROS
Public License. Los colaboradores no añaden avisos de copyright personales ni
sus propios términos de licencia al código escrito para AROS.

El código que procede de otros lugares conserva su aviso de copyright y su
licencia originales, y se usa en AROS bajo los términos de esa licencia.


¿Puedo hacer mi propia bifurcación (fork) o distribución de AROS?
-----------------------------------------------------------------

Sí. Las bifurcaciones y las distribuciones están permitidas por la AROS Public
License, y los mantenedores de las distribuciones son libres de decidir qué
contiene su distribución y qué aspecto tiene.

A cambio, se espera que una bifurcación o distribución atribuya de forma clara
y exacta el desarrollo del proyecto principal de AROS (upstream), que se
distinga claramente del proyecto principal y que sea transparente sobre
cualquier incompatibilidad binaria con el AROS del proyecto principal. El
sitio web de AROS no enlaza a bifurcaciones, distribuciones o recursos de la
comunidad que tergiversen la procedencia del trabajo. La declaración completa
está en la `página principal`__ de este sitio.

Las bifurcaciones y las distribuciones son independientes del proyecto AROS.
Las mantienen sus propios autores, que no hablan en nombre de AROS, y lo mejor
es dirigir las preguntas sobre ellas a esos autores.

Una distribución basada en la línea principal de AROS puede usar "AROS" en su
nombre; una bifurcación no. Consulta `¿Puedo usar el nombre "AROS" para mi
propio proyecto o producto?`_.

__ ../../index


¿Puedo usar el nombre "AROS" para mi propio proyecto o producto?
----------------------------------------------------------------

Depende de qué sea el proyecto.

=======================================================  =====================
Tipo de proyecto                                         "AROS" en su nombre
=======================================================  =====================
Una distribución basada en la línea principal de AROS    Permitido
Una bifurcación de AROS                                  No permitido
Software que se ejecuta en AROS                          No permitido
=======================================================  =====================

Todo el mundo puede usar el nombre para *referirse* a AROS: para decir con
veracidad que su software se ejecuta en AROS, fue escrito para AROS o está
basado en AROS. Las restricciones se refieren al uso del nombre, o de un
nombre derivado de él, para *identificar* otra cosa.

Distribuciones basadas en la línea principal de AROS
    Una distribución que empaqueta el sistema operativo tal como se desarrolla
    en el repositorio principal de AROS, junto con una selección de software y
    de ajustes, *es* AROS, y puede usar "AROS" en su nombre. Aun así debería
    tener un nombre que la distinga del proyecto principal y de otras
    distribuciones.

Bifurcaciones (forks)
    Una bifurcación es una versión del código fuente desarrollada por separado
    que se ha apartado de la línea principal de AROS. Ya no es el sistema
    operativo que este proyecto desarrolla, y puede no ser compatible con él.
    Por lo tanto, una bifurcación no debe usar "AROS" en su nombre. Puede, y
    debería, decir que deriva de AROS.

Software que se ejecuta en AROS
    Las aplicaciones, bibliotecas, frameworks, entornos de ejecución y otras
    capas que se ejecutan sobre AROS no son AROS, y no deben usar "AROS", ni
    un nombre derivado de él, como nombre propio.

"AROS" ha sido el nombre de este sistema operativo, y del proyecto que lo
desarrolla, desde los años noventa. Un proyecto diferente que lleve el mismo
nombre, o uno que se confunda fácilmente con él, sugiere una conexión que no
existe.

Para las bifurcaciones y para el software que se ejecuta en AROS, esto excluye
en particular los nombres que:

+ consistan en "AROS" con letras o palabras añadidas, o que se diferencien de
  él en sólo una o dos letras;
+ puedan leerse como una versión, edición, rama, componente o sucesor de AROS;
+ sugieran de cualquier otro modo que el proyecto es oficial, o que está
  avalado o mantenido por The AROS Development Team.

No importa lo que signifique tal nombre. Dar a un nombre un desarrollo
distinto como acrónimo no cambia su aspecto ni cómo suena, ni lo que la gente
supondrá al verlo.


¿No me permite la licencia usar el nombre?
------------------------------------------

No. La licencia de derechos de autor y el uso de nombres son asuntos
distintos.

La AROS Public License regula el uso, la modificación y la redistribución del
*código fuente*. Expresamente no concede derechos de marca. Por tanto, el
permiso para construir sobre AROS, para bifurcarlo o para escribir software
para él no es un permiso para usar el nombre o los logotipos de AROS de una
manera que implique el aval del proyecto AROS o una afiliación con él.

La misma distinción la hace la mayoría de los proyectos de fuente abierta, y
por la misma razón: los usuarios, desarrolladores y colaboradores necesitan
poder saber de dónde procede un programa, quién es responsable de él y adónde
acudir para obtener soporte.


¿Cómo debo nombrar y describir el software construido sobre AROS o para AROS?
-----------------------------------------------------------------------------

Dale un nombre propio e indica la conexión con AROS en su descripción. Por
ejemplo:

+ "*Nombre*, un framework de aplicaciones para AROS"
+ "*Nombre*, un entorno de ejecución para AROS"
+ "*Nombre*, un sistema operativo derivado de AROS" (para una bifurcación)

Esto reconoce el sistema operativo sobre el que se ejecuta el software sin
tomar prestada su identidad. No se pierde nada al hacerlo: el software escrito
para otros sistemas operativos se describe diciendo que se ejecuta en ellos,
sin tomar sus nombres.

Un nombre distinto es especialmente importante cuando el software es algo que
no es un sistema operativo, como una biblioteca, un framework o una capa de
aplicación que se ejecuta sobre AROS. Un nombre casi idéntico al del sistema
operativo hace difícil que nadie pueda saber dónde termina uno y empieza el
otro: qué documentación es aplicable, dónde debería notificarse un fallo y
quién es responsable de corregirlo.

Un proyecto independiente también debería decir que es independiente, por
ejemplo: "Este es un proyecto independiente y no está afiliado a The AROS
Development Team". Un descargo de responsabilidad es una buena práctica, pero
no compensa un nombre que ya de entrada induce a confusión.

Si no estás seguro de si un nombre es aceptable, pregunta en la lista de
correo de desarrolladores antes de publicar con él. Es mucho más fácil cambiar
un nombre antes de que un proyecto esté consolidado que después.


¿Quién habla en nombre del proyecto AROS?
-----------------------------------------

Los mantenedores nombrados en `¿Quién dirige el proyecto AROS?`_ hablan en
nombre del proyecto. La información oficial se publica en este sitio web, en
el repositorio de código fuente y a través de la lista de correo de
desarrolladores y los canales de desarrollo del proyecto.

Se habla de AROS en muchos otros lugares, incluidos foros y redes sociales,
por parte de personas que lo usan, escriben software para él o simplemente
tienen interés en él. Esos debates son bienvenidos, pero las personas que
participan en ellos hablan por sí mismas. Las afirmaciones que se hagan allí
sobre la posición, los planes o las políticas del proyecto, o sobre su
relación con otros proyectos, son opiniones personales y no representan a
AROS, por mucha seguridad con que se expresen, a menos que procedan de los
mantenedores.

Si necesitas conocer la posición del proyecto sobre algo, pregunta a través de
los canales oficiales.


Compilaciones nocturnas (nightly builds)
========================================

¿Qué son las compilaciones nocturnas?
-------------------------------------

Las compilaciones nocturnas de AROS son compilaciones de desarrollo producidas a
partir del estado actual del árbol de código fuente de AROS. Están destinadas
principalmente a desarrolladores, probadores y personas que quieren seguir y
experimentar con los últimos avances de AROS. Como tales, deben considerarse una
instantánea de desarrollo en constante cambio y no una versión pulida orientada
al usuario final. Por tanto, su configuración pretende proporcionar un entorno
coherente para probar el desarrollo actual de AROS, y no representar una elección
definitiva de la apariencia del escritorio o de la experiencia de usuario.

¿Por qué las compilaciones nocturnas no usan temas "bonitos"?
-------------------------------------------------------------

El problema es que "bonito" es subjetivo. No hay ningún tema por defecto que
satisfaga a todo el mundo, y cambiar el valor predeterminado del proyecto cada vez
que a alguien no le gusta sólo convierte la estética en un ciclo interminable de
"volved a dejarlo como estaba".

Por eso importa la distinción entre AROS en sí y las distribuciones individuales.
Los mantenedores de las distribuciones son libres de decidir qué aspecto tiene su
distribución concreta y con qué valores predeterminados se entrega.

Las compilaciones nocturnas no pretenden ser un producto de escritorio pulido y con
criterio propio; son un entorno coherente para el desarrollo y las pruebas. Si
prefieres otro aspecto, personalízalo o construye una distribución en torno a esa
preferencia.

La preferencia personal es una razón perfectamente legítima para personalizar tu
propio sistema, pero no es una base especialmente buena para cambiar los valores
predeterminados del proyecto principal.


Preguntas de software
=====================

¿Qué es Zune?
-------------

En el caso que leas acerca de Zune en este sitio, es simplemente una reimplementación
fuente abierta de MUI, que es una poderosa biblioteca de GUI shareware orientada a objetos
y la norma de hecho en AmigaOS. Zune es la biblioteca de GUI preferida para desarrollar
aplicaciones nativas de AROS. Respecto al nombre, no significa nada, pero suena bien.

¿En el Wanderer, qué es la Graphical Memory y la Other Memory?
---------------------------------------------------------------

Esta división de la memoria es sobre todo una reliquia del pasado del AmigaOS,
cuando la memoria gráfica era la memoria de aplicación antes que tú agregabas otra
llamada FAST RAM, una memoria adonde terminaban las aplicaciones, mientras que los
gráficos, los sonidos y algunas estructuras del sistema quedaban en la memoria gráfica.

En AROS alojado, no hay tal tipo de memoria Other (la FAST), sino solamente GFX,
mientras que en AROS nativo, GFX puede tener un máximo de 16 MB, aunque no refleja
el estado de la memoria del adaptador gráfico... No tiene relación con la cantidad de 
memoria en tu tarjeta gráfica.

*La respuesta más larga*
La memoria gráfica en i386-native se refiere a los 16 MB inferiores de la memoria del
sistema. Esos 16 MB inferiores es el área donde las tarjetas ISA pueden hacer el 
DMA. La asignación de memoria con MEMF_DMA o MEMF_CHIP se hará de allí, la restante
en la otra (FAST) memoria.

Use el comando C:Avail HUMAN para tener información sobre la memoria.

¿Qué hace en realidad la acción Snapshot <all/window> del Wanderer?
-------------------------------------------------------------------

Este comando recuerda la colocación de los iconos de todas las ventanas (o de
una sola ventana).


¿Cuáles son las opciones de línea de comandos para el ejecutable del AROS alojado?
----------------------------------------------------------------------------------

Puedes obtener una lista escribiendo el comando ./aros -h.

¿Cuáles son las opciones del núcleo de AROS nativo usadas en la línea de GRUB?
------------------------------------------------------------------------------

Aquí están algunas::

    floppy=<disabled/nomount>   Establece las opciones del dispositivo trackdisk
        disabled                - deshabilita por completo la inicialización de
                                  trackdisk.device
        nomount                 - inicializa trackdisk.device pero no crea
                                  dispositivos DOS

    ATA=32bit           - Habilita la E/S de 32 bits en el controlador de disco
                          duro (seguro)
    forcedma            - Fuerza el DMA activo en el controlador de disco duro
                          (debería ser seguro, pero podría no serlo)
    gfx=<nombre del hidd> - Usa el hidd nombrado como el controlador gfx
    lib=<nombre>        - Carga e inicia la biblioteca/hidd nombrado

Por favor advierte que son sensibles a las mayúsculas.


¿Cómo hago un guión DOS que se ejecute automáticamente para un paquete instalado?
---------------------------------------------------------------------------------

1) Crea un subdirectorio S y añade un archivo llamado 'Package-Startup' con el
   guión DOS de ese paquete que quieras ejecutar en cada arranque.

2) Crea una variable en el archivo envarc:sys/packages que contenga la ruta al
   subdirectorio S de tu paquete.

Ejemplo de estructura de directorios::

    sys:Extras/myappdir
    sys:Extras/myappdir/S
    sys:Extras/myappdir/S/Package-Startup

La variable en envarc:sys/packages podría llamarse 'myapp' (el nombre es un
ejemplo); el contenido sería entonces 'sys:extras/myappdir'.

El guión Package-Startup sería llamado entonces por la startup-sequence.


Preguntas sobre el hardware
===========================

¿Dónde puedo encontrar una Lista de Compatibilidad de Hardware para AROS?
-------------------------------------------------------------------------

Puedes encontrar una en la página `AROS Wiki <https://en.wikibooks.org/wiki/Aros/Platforms/x86_support>`__.
Puede haber otras listas hechas por los usuarios de AROS.

¿Por qué AROS no puede arrancar de mi conjunto de unidades como SLAVE en el canal IDE?
--------------------------------------------------------------------------------------

Bueno, AROS debería arrancar si la unidad es SLAVE pero solamente si hay una 
unidad MASTER también. Eso parece ser una conexión correcta respetando la especificación
IDE, y AROS la sigue.

Mi sistema se cuelga con un cursor rojo en la pantalla o con una pantalla negra
-------------------------------------------------------------------------------

Una razón para esto puede ser el uso de un ratón serie (todavía no está
soportado). Por el momento debes usar un ratón PS/2 con AROS. Otra causa puede
ser que hayas elegido en el menú de arranque un modo de vídeo que tu hardware
no soporta. Reinicia y prueba con otro.
