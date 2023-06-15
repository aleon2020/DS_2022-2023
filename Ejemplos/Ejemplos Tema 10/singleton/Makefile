CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Ball.o
>$(CC) $(CFLAGS) -o main main.o Ball.o

main.o: main.cpp Ball.h
>$(CC) $(CFLAGS) -c main.cpp

Ball.o: Ball.h

clean:
>rm *.o main
