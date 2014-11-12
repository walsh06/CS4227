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
        void draw(int x, int y);
    protected:
    private:
};

#endif // GAMEVIEW_H
