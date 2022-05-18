#include <iostream>
#include "gameWindow.h"

#pragma once

int main() {
	Player* player1 = new Player(300, 300);
	GameWindow *game = new GameWindow(600,600, player1);
	
		
}
