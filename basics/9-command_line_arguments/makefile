
CC=g++

all:
	${CC} -o example $(wildcard *.c)

PHONY: run clean

run: example
	@echo running following program
	@./example one two three four

clean:
	rm *.o