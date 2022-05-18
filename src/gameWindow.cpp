#include "gameWindow.h"
#include <iostream>

GameWindow::GameWindow(int width, int length, Player *player) {
	//we need to set window width and length
	this->width = width; 
	this->length = length;
	this->display();
	this->player = player;
}


GameWindow::~GameWindow() {
	delete this->window;

	glfwTerminate();

}


int GameWindow::display() {
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
		drawObjects();
		glfwPollEvents();
		
	}

	glfwTerminate();
	return 0;
}

void GameWindow::drawObjects() {
	float points[] = {
		0.0f, 0.5f, 0.0f,
		0.5f, -0.5f, 0.0f, 
		-0.5f, -0.5f, 0.0f
	};

	unsigned int vbo;
	glGenBuffers(1, &vbo);
	glBlindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(points), points, GL_STATIC_DRAW);

		


}



