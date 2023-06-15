CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o SensorHumedad.o
>$(CC) $(CFLAGS) -o main main.o SensorHumedad.o

main.o: main.cpp SensorHumedad.h
>$(CC) $(CFLAGS) -c main.cpp
 
SensorHumedad.o: SensorHumedad.h

clean:
>rm *.o main
