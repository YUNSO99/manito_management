all: input.c output.c  main.c search.c
	gcc -c main.c 
	gcc -c input.c
	gcc -c output.c
	gcc -c search.c
	gcc input.o output.o  main.o search.o -o app
	./app
clean:
	rm *.o app