CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Coleccion.o
>$(CC) $(CFLAGS) -o main main.o Coleccion.o

main.o: main.cpp Coleccion.h
>$(CC) $(CFLAGS) -c main.cpp
 
Coleccion.o: Coleccion.h

clean:
>rm *.o main