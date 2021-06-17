
all: main

main: main.c *.o
	gcc *.o -o main

*.o: *.c
	gcc -c *.c

clean:
	rm main
	rm *.o

