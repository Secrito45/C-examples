# Basic GNU compile command: gcc file1.c file2.c -o executable

.PHONY: all

CC = gcc
SRCS = app
FLAGS = Wall

all: utils.o
	$(CC) -$(FLAGS) utils.h utils.c $(SRCS).c -o $(SRCS).app
	./$(SRCS).app

# Creating object file from included library utils
# remember to use flag -c when building object files
utils.o: 
	$(CC) -$(FLAGS) -c utils.c

clean:
	rm *.o *.app