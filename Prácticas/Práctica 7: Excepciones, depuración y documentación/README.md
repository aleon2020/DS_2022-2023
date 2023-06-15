# Práctica 7: Excepciones, depuración y documentación

En esta práctica se nos ha pedido realizar 3 ejercicios, cada uno relacionado con diferentes conceptos que hemos estado viendo en la asignatura.

Estos tres conceptos son: Manejo de excepciones, depuración con GDB y documentación con Doxygen. A continuación se ve una breve explicación de lo que he realizado en cada uno de ellos:

## Ejercicio 1: Manejo de excepciones

Las excepciones se han utilizado principalmente para mostrar un mensaje por pantalla en el caso de que la opción introducida en un menú no sea correcta, o que los datos del usuario introducidos, tanto para entrar al sistema como para crearlos/eliminarlos en la gestión de usuarios sean incorrectos.

## Ejercicio 2: Depuración con GDB

También se ha depurado el programa con GDB mediante el uso de breakpoints en algunos de los lugares que se indicaban en la práctica.

## Ejercicio 3: Documentación con Doxygen

Y la documentación con Doxygen, donde se detalla al final de este README cómo crearla y en qué parte del directorio se encuentra.

A continuación se detallan los pasos a seguir para generar la documentación del sistema con Doxygen:

- Crear un directorio vacío llamado doxygen-doc (mkdir doxygen-doc), aquí se almacenará la documentación tanto en html como en latex.

- Crear el fichero Doxyfile (doxygen -g Doxyfile), en el cual he modificado las siguientes líneas acordes a cómo quiero que se vean dentro de mi documentación:

Línea 35: PROJECT_NAME = “JULIO VEGANOS E HIJOS DOCUMENTATION”.

Línea 47: PROJECT_BRIEF = “Doxygen documentation of my system”.

Línea 61: OUTPUT_DIRECTORY = “doxygen-doc”.

Una vez realizado esto, ejecutamos doxygen en el directorio donde tenemos almacenados todos nuestros ficheros fuente y de cabecera, y así se generará dentro del directorio doxygen-doc la documentación del sistema en html y latex).

Para visualizar la documentación HTML: Dentro del repositorio HTML (doxygen-doc/html), ejecutamos en la terminal firefox index.html

Para visualizar la documentación LATEX: Dentro del repositorio LATEX (doxygen-doc/latex), en el fichero refman.pdf se encuentra la documentación del sistema en formato pdf.
