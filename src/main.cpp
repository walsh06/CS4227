#include <gtest/gtest.h>
#include <iostream>
#include "Player.h"
#include "GameView.h"
#include "DeviceButton.h"
#include "GameDemo.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{

    int choice;
    string testName;
    cout << "1) Run Demo" << endl;
    cout << "2) Run Tests" << endl;
    cout << "3) Run specific test" << endl;
    cin >> choice;

    if(choice  == 1)
    {
        GameDemo demo;
        demo.runDemo();
    }
    else if(choice == 2)
    {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
    else if(choice == 3)
    {
        cout << "Enter Test Name: ";
        cin >> testName;
        ::testing::GTEST_FLAG(filter) = testName;
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
}
