#include "GameView.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <conio.h>

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
