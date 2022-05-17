#include "gameWindow.h"
#include <iostream>
GameWindow::GameWindow(int width, int length) {
	//we need to set window width and length
	this->width = width; 
	this->length = length;
}

int GameWindow::SetWindow() {
	std::cout<<"width: "<<this->width<<" length: "<<this->length<<std::endl;
	if (!glfwInit()) {
		return -1;
	}

	this->window = glfwCreateWindow(this->width, this->length, "Astroids", NULL, NULL);

	if (!this->window) {
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(this->window);

	while (!glfwWindowShouldClose(this->window)) {
		glfwSwapBuffers(this->window);
		glfwPollEvents();
		
	}

	glfwTerminate();
	return 0;
}

