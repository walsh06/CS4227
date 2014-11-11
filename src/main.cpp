#include <gtest/gtest.h>
#include <iostream>
#include <windows.h>
#include "Player.h"
#include "GameController.h"
#include "GameView.h"
#include "DeviceButton.h"

using namespace std;

int main(int argc, char** argv)
{
    std::cout<<"Working fine"<<endl;

    Player* p = new Player();
    //p->setXPosition(2);
    //p->setYPosition(2);
    GameView* gw = new GameView();
    //DeviceButton* device = new DeviceButton();
    GameController* gc = new GameController(gw,p);
    gc->runGame();
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
