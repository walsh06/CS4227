#include "TestCommand.h"

TestCommand::TestCommand()
{
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

