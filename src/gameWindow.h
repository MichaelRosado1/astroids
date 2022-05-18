/*** gameWindow class to handle window creation and drawing characters on screen
 * 
 ***/
 
// include statements
#include <GL/glew.h>
#include <GLFW/glfw3.h>


#include "player.h"


class GameWindow {
	public:

		GameWindow(int, int, Player *player);

		~GameWindow();

		void handleKeyPress();

		int display();

		void drawObjects();


	private:
		int width;
		int length;
		GLFWwindow * window;
		Player *player;

};
