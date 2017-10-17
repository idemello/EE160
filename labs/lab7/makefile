CC = /usr/local/bin/gcc

all: swap swapbig reorder clean

swap: swap.o swaptest.o
	${CC} swaptest.o swap.o -o swaptest

swapbig: swapbig.o swap.o 
	${CC} swapbig.o swap.o  -o swapbig

reorder: reorder_driver.o reorder.o 
	${CC} reorder_driver.o reorder.o -o reorder_driver




swaptest.o: swaptest.c

swap.o: swap.c

swapbig.o: swapbig.c

reorder_driver.o: reorder_driver.c

reorder.o: reorder.c


clean:
	rm -rf *.o $(OBJS)


