CC=gcc
CFLAGS=-O2
EXE=exe

all: main.c morning.o afternoon.o night.o
	$(CC) main.c morning.o afternoon.o night.o -o $(EXE)

morning.o: morning.c
	$(CC) -c morning.c
	
afternoon.o: afternoon.c
	$(CC) -c afternoon.c
	
night.o: night.c
	$(CC) -c night.c

clean:
	rm -f *.o
	rm -f $(EXE)