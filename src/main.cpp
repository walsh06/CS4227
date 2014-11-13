#include <gtest/gtest.h>
#include "Game.h"
#include <iostream>



using namespace std;

int main(int argc, char** argv)
{
    int choice;
    cout << "1) Run Demo" << endl;
    cout << "2) Run Tests" << endl;
    cin >> choice;

    if(choice  == 1)
    {
        //Game* game = new Game();
        //game->update();
    }
    else if(choice == 2)
    {
         testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }

}
