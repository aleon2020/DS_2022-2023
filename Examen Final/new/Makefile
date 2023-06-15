CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o CalidadDelAire.o CamaraRGB.o CamaraTermica.o Dashboard.o  GestionUsuarios.o NivelDeIluminacion.o SensorHumedad.o SensorTemperatura.o Usuario.o
>$(CC) $(CFLAGS) -o main main.o CalidadDelAire.o CamaraRGB.o CamaraTermica.o Dashboard.o GestionUsuarios.o NivelDeIluminacion.o SensorHumedad.o SensorTemperatura.o Usuario.o

main.o: main.cpp
>$(CC) $(CFLAGS) -c main.cpp

CalidadDelAire.o: CalidadDelAire.cpp CalidadDelAire.h
>$(CC) $(CFLAGS) -c CalidadDelAire.cpp

CamaraRGB.o: CamaraRGB.cpp CamaraRGB.h
>$(CC) $(CFLAGS) -c CamaraRGB.cpp

CamaraTermica.o: CamaraTermica.cpp CamaraTermica.h
>$(CC) $(CFLAGS) -c CamaraTermica.cpp

Dashboard.o: Dashboard.cpp Dashboard.h
>$(CC) $(CFLAGS) -c Dashboard.cpp

GestionUsuarios.o: GestionUsuarios.cpp GestionUsuarios.h
>$(CC) $(CFLAGS) -c GestionUsuarios.cpp

NivelDeIluminacion.o: NivelDeIluminacion.cpp NivelDeIluminacion.h
>$(CC) $(CFLAGS) -c NivelDeIluminacion.cpp

SensorHumedad.o: SensorHumedad.cpp SensorHumedad.h
>$(CC) $(CFLAGS) -c SensorHumedad.cpp

SensorTemperatura.o: SensorTemperatura.cpp SensorTemperatura.h
>$(CC) $(CFLAGS) -c SensorTemperatura.cpp

Usuario.o: Usuario.cpp Usuario.h
>$(CC) $(CFLAGS) -c Usuario.cpp

clean:
>rm *.o main