#include "player.h"

Player::Player(int xPos, int yPos) {
	this->xPos = xPos;
	this->yPos = yPos;
	this->score = 0;
	this->yAcc = 0;
	this->xAcc = 0;
}
