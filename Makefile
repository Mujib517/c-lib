$(CC) = gcc
ODIR = obj

output: main.o stack.o
	$(CC) main.o stack.o -o output

main.o: main.c
	$(CC) -c main.c

stack.o: stack.c stack.h
	$(CC) -c stack.c

clean:
	rm *.o output