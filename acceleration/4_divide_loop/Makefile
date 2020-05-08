CC=gcc
CFLAGS=-O3 -mavx -ffast-math -lm
SRC=main.c
EXE=exe

default: $(SRC)
	$(CC) -o $(EXE) $(SRC) $(CFLAGS)

clean:
	rm -f $(EXE)