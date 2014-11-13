#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "Player.h"
#include "GameView.h"
#include "DeviceButton.h"
#include "MoveUpCommand.h"
#include "MoveDownCommand.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "AttackCommand.h"

using namespace std;

class GameController
{
    public:
        GameController(Player* player);
        virtual ~GameController();
        void run();
    protected:
    private:
        Player* player;
        GameView* gameView;
        DeviceButton* deviceAt;
        DeviceButton* deviceL;
        DeviceButton* deviceR;
        DeviceButton* deviceU;
        DeviceButton* deviceD;
        MoveUpCommand* moveUp;
        MoveDownCommand* moveDown;
        MoveLeftCommand* moveLeft;
        MoveRightCommand* moveRight;
        AttackCommand* attack;
};

#endif // GAMECONTROLLER_H
