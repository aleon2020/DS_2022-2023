# Práctica 9: Uso de Patrones de Diseño

## 1. Introducción

Esta es la última práctica del curso de la asignatura de Diseño Software del Grado de Ingeniería en Robótica Software en el curso 2022/2023.

La parte práctica de la asignatura ha consistido principalmente en implementar un sistema de monitorización de un invernadero creado por la empresa 'Julio Veganos e Hijos', en el cual se pueden ver datos de los diferentes sensores que componen el sistema. 

En cada una de las prácticas del curso se han ido añadiendo nuevas uncionalidades al sistema según se iba avanzando con el temario de la asignatura.

A continuación se detalla una descripción general de todos los componentes del sistema y algunos de los métodos utilizados para su implementación:

En primer lugar, es importante mencionar que la versión final del sistema es muy diferente comparada con la primera versión implementada en la Práctica 4, ya que por entonces se desconocían muchos conceptos de C++, por lo que según se han ido aprendiendo estos nuevos conceptos, se ha podido ir creando una versión mejorada del sistema, además de estar separada en varios ficheros .h y .cpp, algo que en la Práctica 4 era complicado de conseguir, motivo por el cual, la implementación del sistema en la Práctica 4 abarca un único fichero .cpp, además de que, a la hora de ejecutar el código, éste se convertía en un 'código castillo', ya que en esa versión no se usó ningún tipo de herramienta que permitiera limpiar la terminal cada vez que ejecutara el programa.

NOTA: También se han modificado los repositorios de las Prácticas 7 y 8, a los cuales se ha añadido esta versión del sistema en lugar de la que se tenía anteriormente.

## 2. Detalles de implementación

A continuación se detalla un breve resumen de cómo y dónde se han ido implementando cada uno de los conceptos vistos durante el curso en la versión final del sistema:

- Creación por separado de archivos de cabecera (.h) y archivos de código fuente (.cpp), algo que en la Práctica 4 estaba unido en un solo archivo fuente.

- Creación de un nuevo ['Makefile'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/Makefile) que tiene en cuenta todos y cada uno de los ficheros, tanto de cabecera como de código fuente.

- Herencia y polimorfismo: Uso de objetos de una clase dentro de otra clase, y que relacionan directamente a las clases hijas con su clase padre (por ejemplo, en la clase ['GestionUsuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp) se implementa la funcionalidad del menú de gestión de usuarios a través de los métodos de la clase ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp)). Algo similar ocurre en el ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp), donde se llama a los objetos de las clases de los sensores para que así puedan llamar a sus propios métodos y realizar su funcionalidad.

- En las clases ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp) y ['GestionUsuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp) se ha implementado todo lo referente a contenedores y STL visto durante el curso (para este sistema se ha utilizado uno de tipo Set), para así poder insertar nuevos usuarios, eliminarlos o visualizarlos.

- La creación de la función escribir() dentro de la clase ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp), la cual almacena en el fichero 'users.dat' los usuarios que han entrado al sistema y que se han ido creando mediante el menú de gestión de usuarios.

- Y por último, todo lo relacionado con la Práctica 7 de la asignatura (manejo de excepciones, depuración con GDB y creación de la documentación con Doxygen). Las excepciones se han utilizado principalmente para mostrar un mensaje por pantalla en el caso de que la opción introducida sea incorrecta, o que los datos del usuario introducidos, tanto para entrar al sistema como para crearlos / eliminarlos en la gestión de usuarios sean incorrectos. También se ha depurado el programa con GDB mediante el uso de breakpoints en algunos de los lugares que se indicaban en la Práctica 7. Y por último, la documentación con Doxygen.

## 3. Descripción final del sistema

Para la versión final del sistema se han utilizado diez archivos de cabecera .h con su correspondiente fichero .cpp, además del fichero main.cpp.

Todos estos archivos de cabecera pueden dividirse en cinco grupos:

USUARIO:

Este grupo está formado únicamente por el fichero de cabecera ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp), en el cual se incluyen los setters y getters referentes al nombre de usuario y al NIF de aquellos usuarios que acceden al sistema, además del uso de varios operadores de sobrecarga (< y «).

DASHBOARD:

Este grupo está formado únicamente por el fichero de cabecera ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp), el cual se encarga de mostrar los menús genéricos del sistema.

Para implementar esta funcionalidad se han utilizado las siguientes funciones:

entrarMenuRegistro(): Es lo primero que aparece una vez se haya ejecutado el programa, donde se pide el nombre de usuario y el NIF de un usuario concreto para poder acceder al sistema por primera vez. Si se han introducido los datos correctamente, se accederá al dashboard.

entrarMenuDashboard(): Muestra el menú del dashboard, en el cual se encuentran todos los sensores que forman el sistema, una opción para crear nuevos usuarios, eliminarlos o visualizarlos, y una opción SALIR para detener la ejecución del programa.

mostrarDatosDashboard(): Muestra el submenú de la opción del dashboard que se haya seleccionado (opciones DATOS y VOLVER para los sensores, y las opciones INSERTAR/ELIMINAR/VER USUARIOS y VOLVER para la gestión de usuarios).

SENSORES:

Este grupo está formado por los ficheros de cabecera ['CalidadDelAire'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CalidadDelAire.cpp), ['CamaraRGB'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraRGB.cpp), ['CamaraTermica'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraTermica.cpp), ['SensorHumedad'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/SensorHumedad.cpp), ['SensorTemperatura'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/SensorTemperatura.cpp) y ['NivelDeIluminacion'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/NivelDeIluminacion.cpp). Estos seis archivos siguen la misma estructura en cuanto a funciones se refiere.

Una vez se ha accedido al Dashboard y se ha seleccionado una de las seis opciones mencionadas anteriormente, podemos observar un submenú con dos opciones: La opción DATOS, que muestra los datos de cada sensor; y la opción VOLVER, que regresa al Dashboard.

Para implementar esta nueva funcionalidad se han utilizado las siguientes funciones:

entrarMenu”NOMBRE_SENSOR/CAMARA”(): Entra en el menú de opciones del ”NOMBRE_SENSOR/CAMARA”.

mostrarDatos”NOMBRE_SENSOR/CAMARA”(): Opción DATOS (1) del menú de opciones del ”NOMBRE_SENSOR/CAMARA”.

salirMenu”NOMBRE_SENSOR/CAMARA”(): Opción VOLVER (2) del menú de opciones del ”NOMBRE_SENSOR/CAMARA”.

GESTIÓN DE USUARIOS:

Este grupo está formado únicamente por el fichero de cabecera ['GestionUsuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp), cuyo funcionamiento consiste, al igual que los sensores, en un submenú al cual se accede mediante una nueva opción creada en el Dashboard (opción 7 del Dashboard).

Para implementar esta funcionalidad se han utilizado las siguientes funciones:

entrarMenuGestionUsuarios(): Muestra el menú de la gestión de usuarios.

mostrarDatosGestionUsuarios(int): Muestra los datos de cada una de las opciones del menú de la gestión de usuarios, y a su vez incluye la funcionalidad de cada una de las opciones (INSERTAR (1), ELIMINAR (2) y VER USUARIOS (3)), las cuales se llevarán a cabo gracias al uso de un contenedor de tipo set, el cual se encarga de almacenar todos los nuevos usuarios que se vayan creando.

salirMenuGestionUsuarios(): Opción VOLVER (4) del menú de la gestión de usuarios.

EXCEPCIÓN:

Este grupo está formado únicamente por el fichero de cabecera ['Excepcion'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/include/Excepcion.h), el cual se encarga de lanzar excepciones con un mensaje configurable según la situación de error que se dé en el sistema, como introducir datos de usuario en un formato incorrecto, o introducir un número de opción que no exista (por ejemplo, introducir un 5 en un menú con dos opciones).

## 4. Descripción del patrón de diseño elegido e implementado

Para la implementación del sistema, según los conceptos vistos en la teoría, se podría indicar que se han usado dos patrones de diseño que comparten similitudes, pero también, algunas diferencias:

Para los ficheros relacionados con las opciones del ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp) (['CalidadDelAire'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CalidadDelAire.cpp), ['NivelDeIluminacion'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/NivelDeIluminacion.cpp), ['SensorTemperatura'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/SensorTemperatura.cpp), ['SensorHumedad'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/SensorHumedad.cpp), ['CamaraRGB'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraRGB.cpp), ['CamaraTermica'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraTermica.cpp) y ['Gestionusuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp) se ha usado un patrón de diseño "elemental genérico" (se llama desde una función a otra función, y en ocasiones una función depende de la otra => relación method-method). A continuación se muestra un breve resumen de cada una de las funciones:

```
entrarMenuSENSOR(){
	¿acción dentro del rango?: VÁLIDO
	¿acción fuera del rango?: NO VÁLIDO (LLAMADA A CLASE EXCEPCIÓN)
	return accion;
}
mostrarDatosSENSOR(accion){
	¿accion == 1?: Mostrar datos del sensor 1 segundo y vuelve
	Esperar siguiente acción: entrarMenuSENSOR()
}
salirMenuSENSOR(){
	Esperar siguiente accion: entrarMenuSENSOR()
	¿accion == 2?: break, vuelve al Dashboard
	¿accion != 2?: 
		¿accion == 1?: mostrarDatosSensor()
		¿accion != 1 y 2?: NO VÁLIDO (LLAMADA A CLASE EXCEPCIÓN)
}
```

El otro patrón de diseño que he implementado es bastante similar al anterior, el cual sólo se ha implementado en la clase ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp), donde se ha añadido la creación de objetos de cada una de las clases que abarcan el patrón anterior para que éstas llamen a cada uno de sus métodos y así puedan realizar toda la funcionalidad anteriormente mencionada:

```
Dashboard(){Incluye el nombre de usuario y el NIF para entrar en el sistema}
entrarMenuRegistro(){
	¿Usuario y NIF correctos?: entrarMenuDashboard()
		¿accion == 8?: break, sale del programa
	¿Usuario y NIF incorrectos?: Vuelve a ejecutar el programa
}
entrarMenuDashboard(){
	¿acción dentro del rango?: VÁLIDO
	¿acción fuera del rango?: NO VÁLIDO (LLAMADA A CLASE EXCEPCIÓN)
	return accion;	
}
mostrarDatosDashboard(accion){
	Comprende las 7 opciones del dashboard (6 sensores y el set de usuarios)
	Conjunto de 7 bucles if que siguen la siguiente estructura:
	Objeto objeto = ConstructorObjeto();
	int accion = objeto.entrarMenuSENSOR();
	objeto.mostrarDatosSENSOR();
}
```

## 5. Descripción de los pasos a seguir para la correcta compilación y ejecución del programa

Ya que de forma escrita sería bastante extenso y en algunos casos puede que hasta algo incomprensible de entender, se adjunta un vídeo en el que se explican los pasos para realizar correctamente la compilación y ejecución del programa.

https://github.com/aleon2020/DS_2022-2023/assets/90764564/f6ab057f-dfe8-4f3b-a19a-191a1e07702e

## 6. Descripción de los pasos a seguir para visualizar la documentación generada por Doxygen

En primer lugar, se han introducido todos los ficheros .h y .cpp dentro de un mismo directorio, para que la documentación sea creada correctamente.

A continuación se detallan los pasos a seguir para generar la documentación del sistema con Doxygen:

- Crea un directorio vacío llamado ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc), en el cual se almacenará toda la documentación, tanto en html como en latex.

```bash
 mkdir doxygen-doc
```

- Crea el fichero ['Doxyfile'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/Doxyfile), en el cual se han modificado las siguientes líneas de acuerdo acordes a cómo se quieran ver en la documentación:

```bash
doxygen -g Doxyfile
```

Línea 35: PROJECT_NAME = “JULIO VEGANOS E HIJOS DOCUMENTATION”.

Línea 47: PROJECT_BRIEF = “Doxygen documentation of my system”.

Línea 61: OUTPUT_DIRECTORY = “doxygen-doc”.

Una vez hecho todo esto, se ejecutará doxygen en el directorio donde se tengan almacenados todos los ficheros fuente y de cabecera, generándose así dentro del directorio ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc) la documentación completa del sistema, tanto en html como en latex.

Para visualizar la documentación HTML: Dentro del repositorio ['doxygen-doc/html'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc/html), se debe ejecutar en una terminal el siguiente comando.

```bash
firefox index.html
```

Para visualizar la documentación LATEX: Dentro del repositorio ['doxygen-doc/latex'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc/latex), en el fichero ['refman.pdf'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc/latex/refman.pdf), se encuentra la documentación del sistema en formato PDF.
