CC=gcc
CFLAGS=-O3 -fopenmp -mavx
EXE=exe

stream: stream.c
	$(CC) $(CFLAGS) -o $(EXE) stream.c

clean:
	rm -f $(EXE)