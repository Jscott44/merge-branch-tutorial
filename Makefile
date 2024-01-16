CC = g++
CFLAGS = -g -Wall
TARGET = main

output: $(TARGET).o
	g++ $(TARGET).o -o output 
	
$(TARGET).o: $(TARGET).cpp
	$(CC) -c $(TARGET).cpp

clean: 
	rm -r *.o output
