CC = g++
CFLAGS = -g -Wall -lglfw -framework Cocoa -framework OpenGL -framework IOKit -LGLEW -framework CoreVideo 
OBJFILES = main.o gameWindow.o player.o 
TARGET = game

game: main.o gameWindow.o player.o 
	g++ $(CFLAGS) main.o gameWindow.o player.o -o game

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.cpp 

gameWindow.o: gameWindow.cpp gameWindow.h
	$(CC) -c $(CFLAGS) gameWindow.cpp

player.o: player.cpp player.h
	$(CC) -c $(CFLAGS) player.cpp

clean:
	rm $(OBJFILES) $(TARGET)
