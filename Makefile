CC = gcc
CFLAGS = -Wall

all: assig1
assig1: assig1.o gradeStats.o
	$(CC) $(CFLAGS) assig1.o gradeStats.o -o assig1
assig1.o:
	$(CC) $(CFLAGS) -c assig1.c
gradeStats.o:
	$(CC) $(CFLAGS) -c gradeStats.c
clean:
	rm -fv *~ *.o
