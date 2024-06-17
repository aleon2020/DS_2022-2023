# Práctica 2: Introducción al Diseño Software

En esta segunda práctica se nos ha pedido diseñar a mano un diagrama de clases para una interfaz de usuario que utilizaremos para una empresa.

El funcionamiento es el siguiente: Se muestra por pantalla un mensaje de bienvenida que pide un número de empleado (5 dígitos), si se introduce un número de usuario incorrecto se vuelve a la pantalla de bienvenida. Si el número usuario introducido es correcto nos pedirá un NIF (8 dígitos),y al igual que en el caso anterior, si el NIF es incorrecto volvemos a la pantalla de bienvenida.

En caso de que el NIF sea correcto, nos muestra el dashboard, es decir, todas las opciones que tenemos disponibles para consultar sus datos de registro en la última hora, y una opción de salir que nos regresa a la pantalla de bienvenida.

Si seleccionamos una opción correcta de las disponibles en el dashboard, podremos ver todos sus cambios en la última hora, con una opción de volver al menú principal donde nos aparecerán de nuevo todas las opciones disponibles. Si la opción que hemos seleccionado es incorrecta, vuelve a mostrarnos todas las posibles (numeradas del 1 al 7, del 1 al 6 son los registros de cada elemento y el número 7 es laopción de salir del sistema).

Diagrama de clases realizado a mano:

<p align="center">
  <img src="https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%202:%20Introducci%C3%B3n%20al%20Dise%C3%B1o%20Software/media/Diagrama%20de%20Clases%20Pr%C3%A1ctica%202.jpg?raw=true">
</p>

Diagrama de ejecución realizado a mano:

<p align="center">
  <img src="https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%202:%20Introducci%C3%B3n%20al%20Dise%C3%B1o%20Software/media/Diagrama%20de%20Ejecuci%C3%B3n%20Pr%C3%A1ctica%202.jpg?raw=true">
</p>
