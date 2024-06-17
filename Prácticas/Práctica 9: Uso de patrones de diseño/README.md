# Práctica 9: Uso de patrones de diseño (VERSIÓN FINAL DEL SISTEMA)

## 1. Introducción

Esta es la última práctica del curso de la asignatura de Diseño Software del Grado de Ingeniería en Robótica Software en el curso 2022/2023.

A lo largo del curso se nos ha pedido implementar un sistema de monitorización de un invernadero creado por la empresa Julio Veganos e Hijos, en el cual tenemos la opción de ver los datos de los diferentes sensores que componen nuestro sistema. 

En cada una de las prácticas del curso hemos ido añadiendo nuevos conceptos y funcionalidades a nuestro sistema según íbamos avanzando con el temario de la asignatura.

A continuación se detalla una descripción general de todos los componentes del sistema y algunos de los métodos utilizados para su implementación.

En primer lugar, la versión final de mi sistema es muy diferente comparada con la primera versión que implementé en la práctica 4 de la asignatura, ya que por entonces desconocía muchos conceptos de diseño, y según he ido aprendiendo nuevos conceptos, he podido crear una versión más clara y mejor implementada de mi sistema, además de estar separada en varios ficheros .h y .cpp, algo que en la práctica 4 me fue complicado de conseguir y por ello la implementación del sistema en dicha práctica abarca solamente un fichero .cpp, además de que a la hora de ejecutar mi código se convertía en un “código castillo”, ya que prescindí del uso de herramientas que me permitieran limpiar la terminal cada vez que ejecutara el programa.

NOTA: También se han modificado los repositorios de la P7 y de la P8 añadiéndole esta versión del sistema en lugar de la anterior.

## 2. Detalles de implementación durante el curso

A continuación se detalla un breve resumen de cómo y dónde se han ido implementando cada uno de los conceptos vistos durante el curso en la versión final de mi sistema:

- Creación por separado de archivos de cabecera (.h) y archivos de código fuente (.cpp), algo que en mi primera versión de implementación en la práctica 4 estaba unido en un solo archivo fuente.

- Creación de un nuevo Makefile que tiene en cuenta todos y cada uno de los ficheros, tanto de cabecera como de código fuente.

- Herencia y polimorfismo: Uso de objetos de una clase dentro de otra clase, y que relacionan directamente a las clases hijas con su clase padre (por ejemplo, en la clase GestionUsuario se implementa la funcionalidad del menú de gestión de usuarios a través de los métodos de la clase Usuario; algo similar ocurre en el Dashboard, donde se llama a los objetos de las clases de los sensores para que así puedan llamara a sus propios métodos y realizar su funcionalidad).

- Mediante las clases Usuario y GestionUsuarios se ha implementado todo lo referente a contenedores y STL vistos durante el curso (para este sistema se ha utilizado uno de tipo Set), para así poder insertar nuevos usuarios, eliminarlos o visualizarlos.

- La creación del método escribir() dentro de la clase Usuario, que almacena en el fichero users.dat los usuarios que han entrado al sistema y que se han ido creando mediante el menú de gestión de usuarios.

- Y por último, todo lo relacionado con la práctica 7 de la asignatura (manejo de excepciones, depuración con GDB y creación de la documentación con Doxygen). Las excepciones se han utilizado principalmente para mostrar un mensaje por pantalla en el caso de que la opción introducida en un menú no sea correcta, o que los datos del usuario introducidos, tanto para entrar al sistema como para crearlos/eliminarlos en la gestión de usuarios sean incorrectos. También se ha depurado el programa con GDB mediante el uso de breakpoints en algunos de los lugares que se indicaban en la práctica 7. Y la documentación con Doxygen, donde se detalla al final de este README cómo crearla y en qué parte del directorio se encuentra.

## 3. Descripción final del sistema

Para mi versión final del sistema he utilizado 10 archivos de cabecera .h con su correspondiente fichero .cpp, además del fichero main.cpp, el cual ejecutará el programa.

Todos estos archivos de cabecera se pueden dividir en 5 grupos:

USUARIO:

Este grupo está formado únicamente por el fichero de cabecera Usuario, en el cual se incluyen los setters y getters referentes al nombre de usuario y al NIF de aquellos usuarios que accede al sistema, y el uso de varios operadores de sobrecarga (< y «).

DASHBOARD:

Este grupo está formado únicamente por el fichero de cabecera Dashboard, el cual se encarga de mostrar los menús genéricos del sistema.

Para implementar esta funcionalidad he utilizado los siguientes métodos:

entrarMenuRegistro(): Es lo primero que aparece una vez hayamos ejecutado el programa, donde se nos pide el nombre de usuario y el NIF de un usuario concreto que se ha determinado  para acceder al sistema por primera vez. Si hemos introducido los datos correctamente, accedemos al dashboard (los datos de este primer usuario ya están incluidos por defecto en un contenedor de tipo set).

EntrarMenuDashboard(): Muestra el menú del dashboard, en el cual se encuentran todos los sensores que forman nuestro sistema, una opción para crear nuevos usuarios, eliminarlos, y visualizarlos, y una opción SALIR para detener la ejecución del programa.

MostrarDatosDashboard(): Muestra el submenú de la opción del dashboard que hemos seleccionado previamente (opción DATOS y VOLVER para los sensores, INSERTAR/ELIMINAR/VER USUARIOS y VOLVER para la opción de gestión de usuarios).

SENSORES:

Este grupo está formado por los ficheros de cabecera CalidadDelAire, CamaraRGB, CamaraTermica, SensorHumedad, SensorTemperatura y NivelDeIluminacion. Estos 6 archivos siguen la misma estructura en cuanto a métodos se refiere.

Una vez hemos accedido al Dashboard y hemos seleccionado una de las 6 opciones mencionadas anteriormente, podemos observar un submenú con 2 opciones (DATOS, que muestra los datos de cada sensor; y VOLVER, que nos regresa de nuevo al Dashboard).

Para implementar esta nueva funcionalidad he utilizado los siguientes métodos:

entrarMenu”NOMBRE_SENSOR/CAMARA”(): Entra en el menú de opciones del ”NOMBRE_SENSOR/CAMARA”.

mostrarDatos”NOMBRE_SENSOR/CAMARA”(): Opción DATOS (1) del menú de opciones del ”NOMBRE_SENSOR/CAMARA”.

salirMenu”NOMBRE_SENSOR/CAMARA”(): Opción VOLVER (2) del menú de opciones del ”NOMBRE_SENSOR/CAMARA”.

GESTIÓN DE USUARIOS:

Este grupo está formado únicamente por el fichero de cabecera GestionUsuarios, cuyo funcionamiento consiste, al igual que los sensores, en un submenú el cual accedemos mediante una nueva opción creada en el Dashboard (opción 7 del Dashboard).

Para implementar esta funcionalidad he utilizado los siguientes métodos:

entrarMenuGestionUsuarios(): Muestra el menú de la gestión de usuarios.

mostrarDatosGestionUsuarios(int): Muestra los datos de cada una de las opciones del menú de la gestión de usuarios, y a su vez incluye la funcionalidad de cada una de las opciones (insertar (1), eliminar (2) y ver usuarios (3)) que se llevarán a cabo gracias al uso de un contenedor de tipo set, el cual almacena los neuvos usuarios que se vayan creando.

SalirMenuGestionUsuarios(): Opción VOLVER (4) del menú de la gestión de usuarios.

EXCEPCIÓN:

Este grupo está formado únicamente por el fichero de cabecera Excepcion, el cual se encarga de lanzar excepciones con un mensaje configurable según la situación de error que se dé en el sistema, como introducir datos de usuario en un formato incorrecto, o introducir un número de opción que no existe (menú con 2 opciones e introducir un 5, por ejemplo).

## 4. Descripción del patrón de diseño elegido e implementado

Para la implementación del sistema, basándome en los conceptos vistos en la teoría, se podría indicar que hemos usado dos patrones de diseño que comparten similitudes, pero también, algunas diferencias:

Para los ficheros relacionados con las opciones del Dashboard (CalidadDelAire, NivelDeIluminacion, SensorTemperatura, SensorHumedad, CamaraRGB, CamaraTermica y Gestionusuarios) he usado un caso de patrón de diseño elemental “genérico” (se llama desde un método a otro método, y en ocasiones un método depende del otro => relación method-method). A continuación se muestra un breve resumen de cada uno de los métodos:

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

El otro patrón de diseño que he implementado es bastante similar al anterior, solo se ha implementado en la clase Dashboard, donde se le añade la creación de objetos de cada una de las clases que abarcan el patrón anterior para que llamen a cada uno de sus métodos y así puedan realizar toda la funcionalidad anteriormente mencionada:

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

Ya que de forma escrita sería bastante extenso y en algunos casos puede que hasta algo incomprensible de entender, he decidido grabar un vídeo explicando los pasos para realizar correctamente la compilación y ejecución del programa.

[Video Ejecución Práctica 9](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/media/Video%20Ejecuci%C3%B3n%20Pr%C3%A1ctica%209.mp4)

## 6. Descripción de los pasos a seguir para visualizar la documentación generada por Doxygen

En primer lugar, he introducido todos los ficheros .h y .cpp dentro de un mismo directorio, para que la documentación sea creada correctamente.

A continuación se detallan los pasos a seguir para generar la documentación del sistema con Doxygen:

- Crear un directorio vacío llamado doxygen-doc (mkdir doxygen-doc), aquí se almacenará la documentación tanto en html como en latex.

- Crear el fichero Doxyfile (doxygen -g Doxyfile), en el cual he modificado las siguientes líneas acordes a cómo quiero que se vean dentro de mi documentación:

Línea 35: PROJECT_NAME = “JULIO VEGANOS E HIJOS DOCUMENTATION”.

Línea 47: PROJECT_BRIEF = “Doxygen documentation of my system”.

Línea 61: OUTPUT_DIRECTORY = “doxygen-doc”.

Una vez realizado esto, ejecutamos doxygen en el directorio donde tenemos almacenados todos nuestros ficheros fuente y de cabecera, y así se generará dentro del directorio doxygen-doc la documentación del sistema en html y latex).

Para visualizar la documentación HTML: Dentro del repositorio HTML (doxygen-doc/html), ejecutamos en la terminal firefox index.html

Para visualizar la documentación LATEX: Dentro del repositorio LATEX (doxygen-doc/latex), en el fichero refman.pdf se encuentra la documentación del sistema en formato pdf.
