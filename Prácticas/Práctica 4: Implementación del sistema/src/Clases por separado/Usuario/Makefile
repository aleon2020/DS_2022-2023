CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Usuario.o
>$(CC) $(CFLAGS) -o main main.o Usuario.o

main.o: main.cpp Usuario.h
>$(CC) $(CFLAGS) -c main.cpp
 
Usuario.o: Usuario.h

clean:
>rm *.o main
