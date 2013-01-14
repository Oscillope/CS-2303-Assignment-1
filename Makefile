CC = gcc
CFLAGS = -Wall

all: assig1
assig1: assig1.o
	$(CC) $(CFLAGS) assig1.o -o assig1
assig1.o:
	$(CC) $(CFLAGS) -c assig1.c
clean:
	rm -fv *~ *.o
