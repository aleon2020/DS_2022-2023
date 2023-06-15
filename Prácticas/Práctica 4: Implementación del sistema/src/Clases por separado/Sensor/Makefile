CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Sensor.o
>$(CC) $(CFLAGS) -o main main.o Sensor.o

main.o: main.cpp Sensor.h
>$(CC) $(CFLAGS) -c main.cpp
 
Sensor.o: Sensor.h

clean:
>rm *.o main
