# Basic GNU compile command: gcc file1.c file2.c -o executable

.PHONY: all

CC = gcc
SRCS = pointers_and_adresses
FLAGS = Wall

all:
	$(CC) -$(FLAGS) $(SRCS).c -o $(SRCS).app
	./$(SRCS).app

clean:
	rm *.o *.app