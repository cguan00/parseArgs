all: parseArgs.o
	gcc -o parseTest parseArgs.o

main.o: parseArgs.c
	gcc -c parseArgs.c

run:
		./parseTest	

clean:
	rm *.o
	rm *~
