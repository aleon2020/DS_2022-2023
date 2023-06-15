CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Camara.o
>$(CC) $(CFLAGS) -o main main.o Camara.o

main.o: main.cpp Camara.h
>$(CC) $(CFLAGS) -c main.cpp
 
Camara.o: Camara.h

clean:
>rm *.o main
