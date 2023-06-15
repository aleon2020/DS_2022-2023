CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o Model.o View.o Controller.o
>$(CC) $(CFLAGS) -o main main.o Model.o View.o Controller.o

main.o: main.cpp Model.h View.h Controller.h
>$(CC) $(CFLAGS) -c main.cpp

Controller.o: Controller.h

Model.o: Model.h

View.o: View.h

clean:
>rm *.o main
