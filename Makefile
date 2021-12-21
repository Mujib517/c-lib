output: prime.o main.o
	gcc main.o prime.o -o output

main.o: main.c
	gcc -c main.c

prime.o: prime.c prime.h
	gcc -c prime.c

clean:
	rm *.o output