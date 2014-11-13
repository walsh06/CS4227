#include "GameView.h"

#define ATTACK 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5
#define QUIT 6
#define NONE 0

using namespace std;

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
 Checks which button the player is pressing
 and determines the correct #define to return.
*/
int GameView::checkButtonState()
{
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
 Draws the object to the screen
 at the new x and y.
*/
void GameView::draw(int x, int y)
{
        cout<<"X = ";
        cout<<x<<endl;
        cout<<"Y = ";
        cout<<y<<endl;
}

