# Práctica 7: Excepciones, Depuración y Documentación

En esta práctica se pide realizar 3 ejercicios, cada uno relacionado con diferentes conceptos vistos en la asignatura.

Estos tres conceptos son: Manejo de excepciones, Depuración con GDB y Documentación con Doxygen. A continuación se muestra una breve explicación de lo realizado en cada uno de ellos:

## Ejercicio 1: Manejo de excepciones

Las excepciones se han utilizado principalmente para mostrar un mensaje por pantalla en el caso de que la opción introducida sea incorrecta, o que los datos del usuario introducidos, tanto para entrar al sistema como para crearlos / eliminarlos en la gestión de usuarios, sean incorrectos.

## Ejercicio 2: Depuración con GDB

También se ha depurado el programa con GDB mediante el uso de breakpoints en algunos de los lugares que se indicaban en la práctica.

## Ejercicio 3: Documentación con Doxygen

A continuación se detallan los pasos a seguir para generar la documentación del sistema con Doxygen:

- Crea un directorio vacío llamado ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc) en el que se almacenará toda la documentación, tanto en html como en latex.

```bash
mkdir doxygen-doc
```

- Crea el fichero ['Doxyfile'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/Doxyfile), en el cual se han modificado las siguientes líneas de acuerdo a cómo quiere verse la documentación:

```bash
doxygen -g Doxyfile
```

Línea 35: PROJECT_NAME = “JULIO VEGANOS E HIJOS DOCUMENTATION”.

Línea 47: PROJECT_BRIEF = “Doxygen documentation of my system”.

Línea 61: OUTPUT_DIRECTORY = “doxygen-doc”.

Una vez hecho todo esto, debe ejecutarse doxygen en el directorio donde se tienen almacenados todos los ficheros fuente y de cabecera, generándose así dentro del directorio ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc) toda la documentación del sistema, tanto en html como en latex.

Para visualizar la documentación HTML: Dentro del repositorio [doxygen-doc/html](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc/html), debe ejecutarse en la terminal el siguiente comando.

```bash
firefox index.html
```

Para visualizar la documentación LATEX: Dentro del repositorio [doxygen-doc/latex](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc/latex) en el fichero ['refman.pdf'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%207%3A%20Excepciones%2C%20depuraci%C3%B3n%20y%20documentaci%C3%B3n/src/doxygen-doc/latex/refman.pdf), se encuentra la documentación del sistema en formato PDF.
