$(CC) = gcc
ODIR = obj

output: main.o stack.o linked_list.o
	$(CC) main.o stack.o linked_list.o -o output

main.o: main.c
	$(CC) -c main.c

stack.o: stack.c stack.h
	$(CC) -c stack.c

linked_list.o: linked_list.c linked_list.h
	$(CC) -c linked_list.c

clean:
	rm *.o output