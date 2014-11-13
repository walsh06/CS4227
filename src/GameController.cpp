#include "GameController.h"
#include <cstdlib>
#include "Player.h"
#include "GameView.h"
#include "DeviceButton.h"
#include "MoveUpCommand.h"
#include "MoveDownCommand.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "AttackCommand.h"

#define ATTACK 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5
#define QUIT 6
#define NONE 0

using namespace std;

GameController::GameController(Player* player, GameView* gameView)
{
    this->player = player;
    this->gameView = gameView;
    this->moveUp = new MoveUpCommand(player);
    this->moveDown = new MoveDownCommand(player);
    this->moveLeft = new MoveLeftCommand(player);
    this->moveRight = new MoveRightCommand(player);
    this->attack = new AttackCommand(player);
}

GameController::~GameController()
{
    //dtor
}

void GameController::run()
{
    bool running = true;
    int type;
    deviceAt = new DeviceButton(attack);
    deviceU = new DeviceButton(moveUp);
    deviceL = new DeviceButton(moveLeft);
    deviceD = new DeviceButton(moveDown);
    deviceR = new DeviceButton(moveRight);
    //DeviceButton* device = new DeviceButton();
    //GameController* gc = new GameController(gw,p);
    while(running)
    {
        type = gameView->checkButtonState();

        if(type == ATTACK){
            deviceAt->press();
        }
        if(type == UP){
            deviceU->press();
        }
        if(type == DOWN){
            deviceD->press();
        }
        if(type == LEFT){
            deviceL->press();
        }
        if(type == RIGHT){
            deviceR->press();
        }
        if(type == QUIT)
        {
            std::cout<<"Exiting game"<<std::endl;
            running = false;
        }
        type = NONE;
        gameView->setXY(player->getXPosition(),player->getYPosition());
        usleep(1000);
    }
}
