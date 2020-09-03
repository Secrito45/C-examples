##
#	Under "all" you difine the main task or the final product of program compilation
# 	In this case the final product is a executable named example
# 
# 	After "all" is needed to list all the dependensies that are needed in compile.

# Main make rule
all: my_lib.o
	@echo Example makefile by Konsta S.

	g++ -o example main.c my_lib.o
	
	@echo 
	@echo Program compile was succesful!
	@echo Use command make run to launch this program.

# Compile my_lib to object file. 
# Collection of object files can be combined to a library file
# Object file is created with the "-c" option
my_lib.o: my_lib.c my_lib.h
	g++ -c my_lib.c

##
#	Check this webpage for more info:
#	https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
# 	https://www.linux.fi/wiki/Makefile
# 	https://www.gnu.org/software/make/manual/html_node/Simple-Makefile.html
# 	https://makefiletutorial.com/
#
#	Also recommended to study about GCC (GNU Compiler Collection)

# 	You can also use PHONY to create rule to use make
#	start the program after succesful compile
#
#	Run command make run to launch the program

PHONY: run clean

run: example
	./example

#	clean is a standard rule to for make and it's usually created
#	to clean files that were created on the program compile but are
#	no more needed.

#	It can be used with command make clean
clean:
	rm *.o