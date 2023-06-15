CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o CamaraRGB.o
>$(CC) $(CFLAGS) -o main main.o CamaraRGB.o

main.o: main.cpp CamaraRGB.h
>$(CC) $(CFLAGS) -c main.cpp
 
CamaraRGB.o: CamaraRGB.h

clean:
>rm *.o main
