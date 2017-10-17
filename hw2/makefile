CC = /usr/local/bin/gcc

all: driver1 driver2 driver3 datediff clean

driver1: driver1.o leap.o
	${CC} driver1.o leap.o -o driver1

driver2: driver2.o leap.o days.o
	${CC} driver2.o leap.o days.o -o driver2

driver3: driver3.o leap.o days.o julian.o
	${CC} driver3.o leap.o days.o julian.o -o driver3

datediff: datediff.o leap.o days.o julian.o
	${CC} datediff.o leap.o days.o julian.o -o datediff



driver1.o: driver1.c

driver2.o: driver2.c

driver3.o: driver3.c

datediff.o: datediff.c

leap.o: leap.c

days.o: days.c

julian.o: julian.c

clean:
	rm -rf *.o $(OBJS)

real_clean: clean
	rm -f driver1 driver2 driver3 datediff a.out

