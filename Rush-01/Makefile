CC := gcc 
CC := ${CC}
CFLAGS = -Wall -Wextra -Werror

all: rush01

rush01: main.o util.o grid.o draw.o print.o
	$(CC) $(CFLAGS) -o rush01 main.o util.o grid.o draw.o print.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

util.o: util/util.c util/util.h
	$(CC) $(CFLAGS) -c util/util.c

grid.o: grid/grid.c grid/grid.h
	$(CC) $(CFLAGS) -c grid/grid.c

draw.o: grid/draw.c grid/draw.h
	$(CC) $(CFLAGS) -c grid/draw.c
	
print.o: grid/print.c grid/print.h
	$(CC) $(CFLAGS) -c grid/print.c

clean: 
	$(RM) *.o 
