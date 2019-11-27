all: sep.o
	gcc -o sep sep.o

sep.o: sep.c
	gcc -c sep.c

run:
	./sep

clean:
	rm *.o
	rm sep