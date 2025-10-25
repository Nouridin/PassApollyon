CC = gcc
CFLAGS = -Wall -O2 -Iinclude
SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=build/%.o)
TARGET = passapollyon

all: $(TARGET)

build:
	mkdir -p build

$(TARGET): build $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build $(TARGET)
