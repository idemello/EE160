CC = /usr/local/bin/gcc

all: driver1 spchk clean

driver1: driver1.o letters.o
	${CC} driver1.o letters.o -o driver1

spchk: spchk.o letters.o 
	${CC} spchk.o letters.o -o spchk

driver1.o: driver1.c

spchk.o: spchk.c

letters.o: letters.c

clean:
	rm -rf *.o $(OBJS)


