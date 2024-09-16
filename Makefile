
all: main

main:
	mkdir -p bin
	gcc -Wall src/main.c -Iinclude -o bin/main


clean:
	rm -rf bin