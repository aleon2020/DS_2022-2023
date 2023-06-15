CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Administrador.o
>$(CC) $(CFLAGS) -o main main.o Administrador.o

main.o: main.cpp Administrador.h
>$(CC) $(CFLAGS) -c main.cpp
 
Administrador.o: Administrador.h

clean:
>rm *.o main
