#include "TestCommand.h"

#include <iostream>
TestCommand::TestCommand()
{
    ///default set to r as error when left blank.
    //char input = 'r';

    //Creating the player movement.
    //Player* pMove = new Player();

  /*  MoveLeftCommand* moveLeft = new MoveLeftCommand(pMove);
    DeviceButton* ifApressed = new DeviceButton(moveLeft);

    MoveUpCommand* moveUp = new MoveUpCommand(pMove);
    DeviceButton* ifWpressed = new DeviceButton(moveUp);

    MoveRightCommand* moveRight = new MoveRightCommand(pMove);
    DeviceButton* ifDpressed = new DeviceButton(moveRight);

    MoveDownCommand* moveDown = new MoveDownCommand(pMove);
    DeviceButton* ifSpressed = new DeviceButton(moveDown);

    while(true){
        cout<< "Move left, right, up or down with a,d,w,s respectively. q to quit"<<endl;
        cin>>input;
        if(input == 'a' or input == 'A'){
            ifApressed->press();
        }else if(input == 'w' or input == 'W'){
            ifWpressed->press();
        }else if(input == 'D' or input == 'd'){
            ifDpressed->press();
        }else  if(input == 's' or input == 's'){
            ifSpressed->press();
        }else  if(input == 'q' or input == 'Q'){
            cout<<"Closing.....not";
        }
    }*/
}

TestCommand::~TestCommand()
{
    //dtor
}

TEST(CommandTest, TestMoveKeys)
{
    Player* testPlayer = new Player();

    MoveLeftCommand* moveLeft = new MoveLeftCommand(testPlayer);
    DeviceButton leftPressed (moveLeft);

    MoveUpCommand* moveUp = new MoveUpCommand(testPlayer);
    DeviceButton upPressed(moveUp);

    MoveRightCommand* moveRight = new MoveRightCommand(testPlayer);
    DeviceButton rightPressed(moveRight);

    MoveDownCommand* moveDown = new MoveDownCommand(testPlayer);
    DeviceButton downPressed(moveDown);

    //test initial state of the player
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    rightPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 1);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    leftPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    upPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 1);

    downPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    delete testPlayer;
}

TEST(CommandTest, TestMoveSequence)
{
    Player* testPlayer = new Player();

    MoveLeftCommand* moveLeft = new MoveLeftCommand(testPlayer);
    DeviceButton leftPressed (moveLeft);

    MoveUpCommand* moveUp = new MoveUpCommand(testPlayer);
    DeviceButton upPressed(moveUp);

    MoveRightCommand* moveRight = new MoveRightCommand(testPlayer);
    DeviceButton rightPressed(moveRight);

    MoveDownCommand* moveDown = new MoveDownCommand(testPlayer);
    DeviceButton downPressed(moveDown);

    //test initial state of the player
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    rightPressed.press();
    upPressed.press();
    upPressed.press();
    rightPressed.press();
    upPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 2);
    ASSERT_EQ(testPlayer->getYPosition(), 3);

    rightPressed.press();
    downPressed.press();
    leftPressed.press();
    downPressed.press();
    leftPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 1);
    ASSERT_EQ(testPlayer->getYPosition(), 1);

    delete testPlayer;
}

