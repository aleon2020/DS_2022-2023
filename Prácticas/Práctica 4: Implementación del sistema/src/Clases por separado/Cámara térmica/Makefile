CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o CamaraTermica.o
>$(CC) $(CFLAGS) -o main main.o CamaraTermica.o

main.o: main.cpp CamaraTermica.h
>$(CC) $(CFLAGS) -c main.cpp
 
CamaraTermica.o: CamaraTermica.h

clean:
>rm *.o main
