CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o CalidadDelAire.o
>$(CC) $(CFLAGS) -o main main.o CalidadDelAire.o

main.o: main.cpp CalidadDelAire.h
>$(CC) $(CFLAGS) -c main.cpp
 
CalidadDelAire.o: CalidadDelAire.h

clean:
>rm *.o main
