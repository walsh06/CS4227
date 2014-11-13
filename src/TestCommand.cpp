#include "TestCommand.h"
TestCommand::TestCommand()
{
}

TestCommand::~TestCommand()
{
    //dtor
}

///test single key presses
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
    std::cout << "Check Initial Position" << std::endl;
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    std::cout << "Move Right" << std::endl;
    rightPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 1);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    std::cout << "Move Left" << std::endl;
    leftPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    std::cout << "Move Up" << std::endl;
    upPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 1);

    std::cout << "Move Down" << std::endl;
    downPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    delete testPlayer;
}

///Test a sequence of commands
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
    std::cout << "Check Initial Position" << std::endl;
    ASSERT_EQ(testPlayer->getXPosition(), 0);
    ASSERT_EQ(testPlayer->getYPosition(), 0);

    std::cout << "Test Sequence: R-U-U-R-U" << std::endl;
    rightPressed.press();
    upPressed.press();
    upPressed.press();
    rightPressed.press();
    upPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 2);
    ASSERT_EQ(testPlayer->getYPosition(), 3);

    std::cout << "Test Sequence: R-D-L-D-L" << std::endl;
    rightPressed.press();
    downPressed.press();
    leftPressed.press();
    downPressed.press();
    leftPressed.press();
    ASSERT_EQ(testPlayer->getXPosition(), 1);
    ASSERT_EQ(testPlayer->getYPosition(), 1);

    delete testPlayer;
}

