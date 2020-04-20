CC=gcc
CFLAGS=-O2
EXE=exe

all: main.c morning.o afternoon.o night.o
	$(CC) $(CFLAGS) main.c morning.o afternoon.o night.o -o $(EXE)

morning.o: morning.c
	$(CC) $(CFLAGS) -c morning.c
	
afternoon.o: afternoon.c
	$(CC) $(CFLAGS) -c afternoon.c
	
night.o: night.c
	$(CC) $(CFLAGS) -c night.c

clean:
	rm -f *.o
	rm -f $(EXE)