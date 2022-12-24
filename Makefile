CC=gcc
CFLAGS=-I math
DEPS = inie.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

inie: inie.o 
	$(CC) -o inie inie.o 
