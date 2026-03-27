# The compiler for C is gcc for C++ is defined as g++

CC = gcc

# Compiles flags
# -g add debbugin information to the executable file
# -Wall turns on most, but not all, compiler warnings

CFLAGS = -g -Wall

# The Build target executable

TARGET = main

# Source code for linking files

SRC = src/main.c src/other.c

all: $(TARGET)

$(TARGET): src/$(TARGET).c
	$(CC) $(CFLAGS) -o build/$(TARGET) $(SRC) && ./build/$(TARGET)

clean: 
	rm -rf build/$(TARGET)
