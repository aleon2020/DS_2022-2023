# Práctica 9: Uso de Patrones de Diseño

## 1. Introduction

This is the final practical exercise for the Software Design course in the Bachelor's Degree in Software Robotics Engineering for the 2022/2023 academic year.

The practical part of the course consisted primarily of implementing a greenhouse monitoring system created by the company Julio Veganos e Hijos, which displays data from the various sensors that make up the system.

In each of the course's practical exercises, new functionalities were added to the system as progress was made through the course syllabus.

The following is a general description of all the system components and some of the methods used for its implementation:

First, it's important to mention that the final version of the system is very different from the first version implemented in Practice 4, as many C++ concepts were unknown at the time. Therefore, as these new concepts were learned, it was possible to create an improved version of the system. It is also separated into several .h and .cpp files, something that was difficult to achieve in Practice 4. For this reason, the implementation of the system in Practice 4 encompasses a single .cpp file. Furthermore, when the code was executed, it became a "castle code," since in that version, no tool was used to clear the terminal each time the program was run.

**NOTE**: The repositories for Practices 7 and 8 have also been modified, with this version of the system added instead of the previous one.

## 2. Implementation details

Below is a brief summary of how and where each of the concepts discussed during the course have been implemented in the final version of the system:

- Separate creation of header files (.h) and source code files (.cpp), something that in Practice 4 was united in a single source file.

- Creation of a new ['Makefile'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/Makefile) that takes into account each and every one of the files, both header and source code.

- Inheritance and polymorphism: Use of objects of a class within another class, and that directly relate the child classes with their parent class (for example, in the ['GestionUsuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp) class, the functionality of the user management menu is implemented through the class methods ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp)). Something similar happens in the ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp), where objects of the sensor classes are called so that they can call their own methods and perform their functionality.

- In the classes ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp) and ['GestionUsuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp) everything related to containers and STL seen during the course has been implemented (for this one system has been used, one of type Set), in order to be able to insert new users, delete them or view them.

- The creation of the escribir() function within the ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp) class, which stores in the 'users.dat' file the users who have entered the system and who have been created through the user management menu.

- And finally, everything related to Practice 7 of the course (exception handling, debugging with GDB, and creating documentation with Doxygen). Exceptions were primarily used to display a message on the screen if the option entered was incorrect, or if the user data entered, both for logging in and for creating/deleting user data in user management, was incorrect. The program was also debugged with GDB by using breakpoints in some of the places indicated in Practice 7. And finally, the documentation was created with Doxygen.

## 3. Final System Description

For the final version of the system, ten .h header files with their corresponding .cpp files were used, in addition to the main.cpp file.

All these header files can be divided into five groups:

**USUARIO**

This group is made up solely of the header file ['Usuario'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Usuario.cpp), which includes the setters and getters referring to the username and NIF of those users who access the system, in addition to the use of several overload operators (< and «).

**DASHBOARD**

This group consists only of the header file ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp), which is responsible for displaying the generic menus of the system.

To implement this functionality the following functions have been used:

entrarMenuRegistro(): This is the first thing that appears once the program has been executed. It asks for a specific user's username and ID number to access the system for the first time. If the data has been entered correctly, the dashboard will open.

entrarMenuDashboard(): It displays the dashboard menu, which contains all the sensors that make up the system, an option to create new users, delete them, or view them, and an EXIT option to stop the program from running.

mostrarDatosDashboard(): Displays the submenu of the selected dashboard option (DATA and BACK options for sensors, and INSERT/DELETE/VIEW USERS and BACK options for user management).

**SENSORES**

This group is made up of the header files ['CalidadDelAire'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CalidadDelAire.cpp), ['CamaraRGB'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraRGB.cpp), ['CamaraTermica'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraTermica.cpp), ['SensorHumedad'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/HumiditySensor.cpp), ['SensorTemperatura'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/SensorTemperatura.cpp) and ['NivelDeIluminacion'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/NivelDeIluminacion.cpp). These six files follow the same structure in terms of functions.

Once you've accessed the Dashboard and selected one of the six options mentioned above, you'll see a submenu with two options: DATA, which displays the data for each sensor; and BACK, which returns you to the Dashboard.

To implement this new functionality the following functions have been used:

entrarMenu”NOMBRE_SENSOR/CAMARA”(): Enter the “SENSOR_NAME/CAMERA” options menu.

mostrarDatos”NOMBRE_SENSOR/CAMARA”(): DATA option (1) of the “SENSOR_NAME/CAMERA” options menu.

salirMenu”NOMBRE_SENSOR/CAMARA”(): RETURN option (2) of the “SENSOR_NAME/CAMERA” options menu.

**GESTIÓN DE USUARIOS**

This group is made up solely of the header file ['GestionUsuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp), whose operation consists, like the sensors, of a submenu that is accessed through a new option created in the Dashboard (option 7 of the Dashboard).

To implement this functionality the following functions have been used:

entrarMenuGestionUsuarios(): Displays the user management menu.

mostrarDatosGestionUsuarios(int): It shows the data of each of the options in the user management menu, and in turn includes the functionality of each of the options (INSERT (1), DELETE (2) and VIEW USERS (3)), which will be carried out thanks to the use of a set type container, which is responsible for storing all the new users that are created.

salirMenuGestionUsuarios(): RETURN option (4) in the user management menu.

**EXCEPCIÓN**

This group consists solely of the header file ['Excepcion'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/include/Excepcion.h), which is responsible for throwing exceptions with a configurable message depending on the error situation that occurs in the system, such as entering user data in an incorrect format, or entering an option number that does not exist (for example, entering a 5 in a menu with two options).

## 4. Description of the chosen and implemented design pattern

For the implementation of the system, according to the concepts seen in the theory, it could be indicated that two design patterns have been used that share similarities, but also some differences:

For files related to options of the ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp) (['CalidadDelAire'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CalidadDelAire.cpp), ['NivelDeIluminacion'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/NivelDeIluminacion.cpp), ['SensorTemperatura'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/SensorTemperatura.cpp), ['SensorHumedad'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/SensorHumedad.cpp), ['CamaraRGB'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraRGB.cpp), ['CamaraTermica'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/CamaraTermica.cpp) and ['Gestionusuarios'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/GestionUsuarios.cpp) a "generic elemental" design pattern has been used (calls are made from one function to another, and sometimes one function depends on the other => method-method relationship). A brief summary of each function is shown below:

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

The other design pattern that I have implemented is quite similar to the previous one, which has only been implemented in the ['Dashboard'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/src/Dashboard.cpp) class, where the creation of objects of each of the classes that cover the previous pattern has been added so that they call each of their methods and thus can perform all the functionality mentioned above:

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

## 5. Description of the steps to follow for proper compilation and execution of the program

Since the written version would be quite lengthy and in some cases even somewhat incomprehensible, a video is attached explaining the steps to properly compile and execute the program.

https://github.com/aleon2020/DS_2022-2023/assets/90764564/f6ab057f-dfe8-4f3b-a19a-191a1e07702e

## 6. Description of the steps to follow to view the documentation generated by Doxygen

First, all .h and .cpp files are placed in a single directory so that the documentation is created correctly.

The steps to follow to generate system documentation with Doxygen are detailed below:

- Create an empty directory called ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc), in which all the documentation will be stored, both in html and latex.

```bash
 mkdir doxygen-doc
```

- Create the file ['Doxyfile'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/Doxyfile), in which the following lines have been modified according to how you want to see them in the documentation:

```bash
doxygen -g Doxyfile
```

Line 35: PROJECT_NAME = “JULIO VEGANOS E HIJOS DOCUMENTATION”.

Line 47: PROJECT_BRIEF = “Doxygen documentation of my system”.

Line 61: OUTPUT_DIRECTORY = “doxygen-doc”.

Once all this is done, doxygen will be run in the directory where all the source and header files are stored, thus generating the complete system documentation in both HTML and LaTeX within the ['doxygen-doc'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc) directory.

To view the HTML documentation: Within the repository ['doxygen-doc/html'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc/html), the following command must be run in a terminal.

```bash
firefox index.html
```

To view LATEX documentation: Inside the repository ['doxygen-doc/latex'](https://github.com/aleon2020/DS_2022-2023/tree/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc/latex), in the file ['refman.pdf'](https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%209%3A%20Uso%20de%20patrones%20de%20dise%C3%B1o/doc/doxygen-doc/latex/refman.pdf), finds the system documentation in PDF format.
