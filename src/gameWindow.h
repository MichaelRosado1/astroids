/*** gameWindow class to handle window creation and drawing characters on screen
 * 
 ***/
 
// include statements
#include <GLFW/glfw3.h>

class GameWindow {
	public:
		GameWindow(int, int);
		~GameWindow();
		int SetWindow();


	private:
		int width;
		int length;
		GLFWwindow * window;
};