#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include "string"
#include <termios.h>
#include <unistd.h>
#include <stdio.h>


using namespace std;

class GameView
{
    public:
        GameView();
        virtual ~GameView();
        int checkButtonState();
        void setXY(int x, int y);

        //Taken from http://zobayer.blogspot.ie/2010/12/getch-getche-in-gccg.html
        int getch(void);
    protected:
    private:
};

#endif // GAMEVIEW_H
