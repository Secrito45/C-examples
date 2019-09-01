# @ sympol at start of line can be used to mute the echoing function of that line
#
#$()

CC = gcc
#CFLAG = -g -Wall
CFLAG = 

TARGET = main

all: $(TARGET).c
	@echo "Compiling..."
	@$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
	@echo "Starting Program:\n"
	@./$(TARGET)