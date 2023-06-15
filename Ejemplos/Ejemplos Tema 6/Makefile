# *****************************************************
# Julio Vega
# Example of Makefile
# *****************************************************
# NOTES: it uses '>' as prefix of my recipes (.RECIPEPREFIX is set in line 11)
# since all actions of every Makefile's rule are identified by tabs and I do not
# use tabs in my file editor. Otherwise, I will get the 'missing separator' error.
#
# To check whether a tab character is used, run: cat -e -t -v Makefile
# It shows the presence of tabs (-t) with ^I and line endings (-e) with $
# *****************************************************

CC = g++
CFLAGS = -Wall -g
.RECIPEPREFIX = >

main: main.o CommissionProgrammer.o SalariedProgrammer.o
>$(CC) $(CFLAGS) -o main main.o CommissionProgrammer.o SalariedProgrammer.o

main.o: main.cpp CommissionProgrammer.h SalariedProgrammer.h
>$(CC) $(CFLAGS) -c main.cpp
 
CommissionProgrammer.o: CommissionProgrammer.h
 
SalariedProgrammer.o: SalariedProgrammer.h CommissionProgrammer.h 

clean:
>rm *.o main

