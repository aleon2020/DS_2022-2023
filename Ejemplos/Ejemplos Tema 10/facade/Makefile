CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o
>$(CC) $(CFLAGS) -o main main.o

main.o: main.cpp
>$(CC) $(CFLAGS) -c main.cpp

clean:
>rm *.o main
