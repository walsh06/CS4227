#include <gtest/gtest.h>
#include <iostream>
#include <windows.h>
#include "Player.h"
#include "GameController.h"
#include "GameView.h"
#include "DeviceButton.h"
#include "Game.h"
#include <iostream>


using namespace std;

int main(int argc, char** argv)
{

    /*Player* p = new Player();
    //p->setXPosition(2);
    //p->setYPosition(2);
    GameView* gw = new GameView();
    //DeviceButton* device = new DeviceButton();
    GameController* gc = new GameController(gw,p);
    gc->runGame();
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();*/
    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();

    Game* game = new Game();
    game->update();
}
