# Pi Pico como controlador MIDI
## Finalmente puedo hacer mi propio MIDI con la Pi Pico

- [Resumen](#resumen)
- [Introducción](#introducción)
- [Desarrollo](#desarollo)
    - [Circuito](#circuito)
    - [Código Arduino IDE](#código-arduino-ide)
    - [Los programas que hacen posible lo MIDI](#los-programas-que-hacen-posible-lo-midi)
- [Resultados](#resultados)
- [Descargar proyecto](#descargar-proyecto)
- [Referencias](#referencias)

# Resumen
Proyecto en el que la Pi Pico manda mensajes MIDI mediante serial, hairless se encarga de convertir esos mensajes en datos MIDI a un puerto MIDI creado en loopmidi y de esta forma utilizar a la Pi Pico como un controlador MIDI.

# Introducción
Contro-Surface es una libería que facilita el envío de mensajes por serial y que sean convertidos en MIDI, y al igual este también permite leer mensajes MIDI y enviarlos al dispositivo. El programa hairless lee mensajes enviados por un dispositivo en la serial y los convierte en información MIDI, y al igual información que envíe un puerto MIDI y mandarlos a la serial. LoopMIDI es un programa que permite crear puertos MIDI los cuales pueden ser usados en cualquier programa. MIDI OX la neta sepa pero lo utilizo para leer los mensajes enviados en puertos MIDI, jeje.

# Desarrollo
## Circuito
Primero pondré las conexiones realizadas para el código;
![circuito](/imgs/circuito.drawio.png)
Como es seguido, lo hice en el [draw.io](https://app.diagrams.net/). La neta no he buscado otro programa para graficar circuitos y que sea sencillo y rapido, por lo aún usaré este programa hasta que encuentre otro de cuasilidad.

## Código Arduino IDE
La verdad es que solamente copié y pegué el código de Control-Surface, jeje. Pero igual añadí los demás botónes y descubrí que la nota F no la nombraron F, sino que la nombraron F_, ¡¿POR QUÉ?! 💢💢💢💢💢. No entiendo pero bueno, al principio que era un error de código bien grave pero era solamente eso y encontré como nombraban las notas en ésta página: https://tttapa.github.io/Control-Surface-doc/Doxygen/d7/d78/namespaceMIDI__Notes.html.


## Los programas que hacen posible lo MIDI
Contro-Surface es una libería que facilita el envío de mensajes por serial y que sean convertidos en MIDI, hairless abre el puerto de esa serial para poder leer esos mensajes (y poder mandarle mensajes también al dispositivo), ya teniendo esos mensajes convertidos en MIDI podemos mandarselos a un puerto MIDI creado en loopmidi. MIDI OX abre el puerto del loopmidi y ahí se pueden revisar los mensajes enviados por la Pi Pico.

# Resultados
Realicé un [video](https://www.youtube.com/watch?v=r7j6lUtO4Sw) para demostrar el funcionamiento de la Pi Pico como MIDI, utilicé LMMS porque ese programa tá bien chilo; me gusta mucho que puede usar VSTs de 32 y 64 bits. También gracias al uso de esta librería, podré terminar mi proyecto de comunicación entre Godot Engine y la Pi Pico (así es, mediante MIDI). Y eso sería todo.

# Descargar proyecto
Archivo: [proyecto.7z](/proyecto.7z)


# Referencias
- Libreria Control-Surface: https://github.com/tttapa/Control-Surface
- El nombre de las Notas en el Control-Surface: https://tttapa.github.io/Control-Surface-doc/Doxygen/d7/d78/namespaceMIDI__Notes.html
- MIDI OX: http://www.midiox.com/
- LoopMIDI: https://www.tobias-erichsen.de/software/loopmidi.html
- Hairless MIDI: https://projectgus.github.io/hairless-midiserial/