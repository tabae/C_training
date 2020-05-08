CC=gcc
CFLAGS=-O2 -mavx -lm
SRC=main.c
EXE=exe

default: $(SRC)
	$(CC) -o $(EXE) $(SRC) $(CFLAGS)

clean:
	rm -f $(EXE)