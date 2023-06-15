CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Engine.o
>$(CC) $(CFLAGS) -o main main.o Engine.o

main.o: main.cpp Engine.h
>$(CC) $(CFLAGS) -c main.cpp

Engine.o: Engine.h

clean:
>rm *.o main
