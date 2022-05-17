CC = g++
CFLAGS = -g -Wall -lglfw -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

game: main.o 
	g++ $(CFLAGS) main.o -o game 

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o game 