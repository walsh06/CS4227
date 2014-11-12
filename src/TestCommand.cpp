#include "TestCommand.h"

#include <iostream>
TestCommand::TestCommand()
{
    ///default set to r as error when left blank.
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

    delete moveDown;
    delete moveUp;
    delete moveLeft;
    delete moveRight;
    delete testPlayer;
}
/*
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

    std::cout << "1" << std::endl;
    //test initial state of the player
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);
    std::cout << "2" << std::endl;
    rightPressed.press();
    std::cout << "4" << testPlayer->getYPosition() << std::endl;
    upPressed.press();
    std::cout << "4" << testPlayer->getYPosition() << std::endl;
    upPressed.press();
    std::cout << "4" << testPlayer->getYPosition() << std::endl;
    rightPressed.press();
    std::cout << "4" << testPlayer->getYPosition() << std::endl;
    upPressed.press();
    std::cout << "3" << std::endl;
    ASSERT_EQ(testPlayer->getXPosition(), 2);
    std::cout << "4" << testPlayer->getYPosition() << std::endl;
    ASSERT_EQ(testPlayer->getYPosition(), -3);

    rightPressed.press();
    downPressed.press();
    leftPressed.press();
    downPressed.press();
    leftPressed.press();
std::cout << "5" << std::endl;
    ASSERT_EQ(testPlayer->getXPosition(), 1);
    ASSERT_EQ(testPlayer->getYPosition(), 1);
std::cout << "6" << std::endl;

    delete moveDown;
    delete moveUp;
    delete moveLeft;
    delete moveRight;
    delete testPlayer;
}
*/
