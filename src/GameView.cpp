#include "GameView.h"
#include <iostream>
#include <string>

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
    //ctor
}

GameView::~GameView()
{
    //dtor
}


/* reads from keypress, doesn't echo */
int GameView::getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

int GameView::checkButtonState()
{
    char c = getch();
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

void GameView::setXY(int x, int y)
{
        cout<<"X = ";
        cout<<x<<endl;
        cout<<"Y = ";
        cout<<y<<endl;
}
