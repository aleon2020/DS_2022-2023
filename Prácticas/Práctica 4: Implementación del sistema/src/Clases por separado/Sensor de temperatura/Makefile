CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o SensorTemperatura.o
>$(CC) $(CFLAGS) -o main main.o SensorTemperatura.o

main.o: main.cpp SensorTemperatura.h
>$(CC) $(CFLAGS) -c main.cpp
 
SensorTemperatura.o: SensorTemperatura.h

clean:
>rm *.o main
