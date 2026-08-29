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
