# Práctica 2: Introducción al Diseño Software

En esta segunda práctica se nos ha pedido diseñar a mano un diagrama de clases para una interfaz de usuario que utilizaremos para una empresa.

El funcionamiento es el siguiente: Se muestra por pantalla un mensaje de bienvenida que pide un número de usuario de 5 dígitos, aunque si éste es incorrecto, se vuelve a la pantalla de bienvenida. Si el número de usuario introducido es correcto, pedirá un NIF de 8 dígitos y, al igual que en el caso anterior, si el NIF es incorrecto, se volverá a la pantalla de bienvenida.

En caso de que el NIF sea correcto, se mostrará el dashboard, es decir, todas las opciones disponibles para consultar los datos de registro de la última hora, y la opción 'salir', que regresa a la pantalla de bienvenida.

Si se selecciona una de las opciones disponibles en el dashboard, se podrán ver todos los cambios de la última hora, con una opción 'volver', donde aparecerán de nuevo todas las opciones disponibles. Si la opción seleccionada es incorrecta, volverán a mostrarse todas las opciones posibles numeradas del 1 al 7 (del 1 al 6 son los registros de cada elemento y el número 7 es la opción de salir del sistema).

DIAGRAMA DE CLASES PRÁCTICA 2

<p align="center">
  <img src="https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%202:%20Introducci%C3%B3n%20al%20Dise%C3%B1o%20Software/media/Diagrama%20de%20Clases%20Pr%C3%A1ctica%202.jpg?raw=true">
</p>

DIAGRAMA DE EJECUCIÓN PRÁCTICA 2

<p align="center">
  <img src="https://github.com/aleon2020/DS_2022-2023/blob/main/Pr%C3%A1cticas/Pr%C3%A1ctica%202:%20Introducci%C3%B3n%20al%20Dise%C3%B1o%20Software/media/Diagrama%20de%20Ejecuci%C3%B3n%20Pr%C3%A1ctica%202.jpg?raw=true">
</p>
