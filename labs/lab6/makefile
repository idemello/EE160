CC = /usr/local/bin/gcc

all: myreadcmd mygrader mygrader2 countgrades clean

readcmd: myreadcmd.o
	${CC} myreadcmd.o -o readcmd

mygrader: mygrader.o assign_grade.o 
	${CC} mygrader.o assign_grade.o -o mygrader

mygrader2: mygrader2.o assign_grade2.o 
	${CC} mygrader2.o assign_grade2.o -o mygrader2

countgrades: countgrades.o 
	${CC} countgrades.o -o countgrades



readcmd.o: myreadcmd.c

mygrader.o: mygrader.c

mygrader2.o: mygrader2.c

countgrades.o: countgrades.c

assign_grade.o: assign_grade.c

assign_grade2.o: assign_grade2.c


clean:
	rm -rf *.o $(OBJS)

real_clean: clean
	rm -f driver1 driver2 driver3 datediff a.out

