#include "GameView.h"

#define ATTACK 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5
#define QUIT 6
#define NONE 0

using namespace std;

/**
 The game view is part of the MVC.
 In the constructor the view determines
 which keyboard setup to use.
*/
GameView::GameView()
{
    #ifdef _WIN32
        keyboard  = new WindowsKeyboard();
    #endif // _WIN32

    #ifdef __linux__
        keyboard = new LinuxKeyboard();
    #endif // __linux__
}

/**
 Returns a #define depending on which
 buttons/keys are pressed in the view.
*/
int GameView::checkButtonState()
{
    // Keyboard decided in constructor.
    char c = keyboard->getKey();
    if(c == 's' || c =='S')
    {
        return DOWN;
    }
    if(c == 'w' || c =='W')
    {
        return UP;
    }
    if(c == 'a' || c =='A')
    {
        return LEFT;
    }
    if(c == 'D' || c =='d')
    {
        return RIGHT;
    }
    if(c == 'q' || c =='Q')
    {
        return QUIT;
    }
    if(c == ' ')
    {
        return ATTACK;
    }

    return NONE;
}

/**
 Draws the coordinates to the screen.
*/
void GameView::draw(string name, int x, int y)
{
        cout << name << " | (x, y) : (" << x << ", " << y << ")" << endl;
}

