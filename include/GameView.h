#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include "string"

using namespace std;

class GameView
{
    public:
        GameView();
        virtual ~GameView();
        int checkButtonState();
        void setXY(int x, int y);
    protected:
    private:
        int posX;
        int posY;
};

#endif // GAMEVIEW_H
