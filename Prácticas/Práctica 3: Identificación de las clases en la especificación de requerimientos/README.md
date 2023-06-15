# Práctica 3: Identificación de las clases en la especificación de requerimientos

En esta tercera práctica se incluye una nueva versión mejorada y digitalizada del diagrama de clases que realizamos en la práctica 2, esta vez desarrollada con la aplicación UMLet y añadiendo muchas más funciones de las que se incluían en el diagrama anterior.

El funcionamiento es el siguiente: Se muestra por pantalla un mensaje de bienvenida que pide un número de empleado (5 dígitos), si se introduce un número de usuario incorrecto vuelve a la pantalla de bienvenida. Si el número usuario introducido es correcto nos pedirá un NIF (8 dígitos),y al igual que en el caso anterior, si el NIF es incorrecto volvemos a la pantalla de bienvenida.

En caso de que tanto número de usuario como NIF sean correctos, nos muestra el dashboard, es decir, todos los sensores que tenemos disponibles para consultar sus datos de registro en la última hora, y una opción de salir que nos regresa a la pantalla de bienvenida.

Si seleccionamos una opción correcta de las disponibles en el dashboard, podremos ver todos sus cambios en la última hora, con una opción de volver al menú principal donde nos aparecerán de nuevo todas las opciones disponibles. Si la opción que hemos seleccionado es incorrecta, vuelve a mostrarnos todas las posibles (numeradas del 1 al 7, del 1 al 6 son para acceder a los registros de cada sensor y el número 7 es la opción de salir del sistema).
