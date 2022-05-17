CC = g++
CFLAGS = -g -Wall -lglfw -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo
OBJFILES = main.o gameWindow.o
TARGET = game

game: main.o gameWindow.o 
	g++ $(CFLAGS) main.o gameWindow.o -o game

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.cpp 

gameWindow.o: gameWindow.cpp gameWindow.h
	$(CC) -c $(CFLAGS) gameWindow.cpp

clean:
	rm $(OBJFILES) $(TARGET)