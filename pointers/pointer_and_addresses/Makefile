# Basic GNU compile command: gcc file1.c file2.c -o executable
# https://opensource.com/article/18/8/what-how-makefile
# https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html

CC := g++

SRCS := ${wildcard *.c*}
BINS := ${SRCS:%.cpp=%.o}
EXE  := app

all: ${BINS}
	$(CC) -Wall ${BINS} -o ${EXE}


%: ${%:.o=.cpp}
	@echo $<
	@echo $@
	$(CC) -o $<


PHONY: clean

clean:
	rm *.o
