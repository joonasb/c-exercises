CC=g++
CFLAGS= -std=c++11 -Wall -w -g
INCLUDE:= -Iinclude/
SOURCE:= $(wildcard src/*.cpp) \
		  main.cpp
TARGET=KoeTehtava

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) $(INCLUDE) $(SOURCE) -o $(TARGET)
	
	
 clean:
	rm $(TARGET)
	
	