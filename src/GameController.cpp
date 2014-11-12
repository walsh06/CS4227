#include "GameController.h"
#include <windows.h>
#include "Player.h"
#include "DeviceButton.h"
#include "MoveUpCommand.h"
#include "MoveDownCommand.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "AttackCommand.h"

#define SPACE 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5
#define NONE 0

using namespace std;

GameController::GameController(GameView* gameView, Player* player)
{
    this->gameView = gameView;
    this->player = player;
    this->moveUp = new MoveUpCommand(player);
    this->moveDown = new MoveDownCommand(player);
    this->moveLeft = new MoveLeftCommand(player);
    this->moveRight = new MoveRightCommand(player);
    this->attack = new AttackCommand(player);
}

GameController::~GameController()
{
    delete gameView;
    delete moveDown;
    delete moveUp;
    delete moveRight;
    delete moveLeft;
    delete attack;
}

void GameController::runGame()
{
    int type;
    deviceAt = new DeviceButton(attack);
    deviceU = new DeviceButton(moveUp);
    deviceL = new DeviceButton(moveLeft);
    deviceD = new DeviceButton(moveDown);
    deviceR = new DeviceButton(moveRight);
    while(1){

        Sleep(100);//sleepFor; // loop will only start again after sleepFor has timed out.
        //vector<int> position = {player->getXPosition(),player->getYPosition()};
        //return position;
        //i++;
    }
}
