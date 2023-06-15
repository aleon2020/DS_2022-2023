CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o EngineManager.o
>$(CC) $(CFLAGS) -o main main.o EngineManager.o

main.o: main.cpp EngineManager.h
>$(CC) $(CFLAGS) -c main.cpp

EngineManager.o: EngineManager.h

clean:
>rm *.o main
