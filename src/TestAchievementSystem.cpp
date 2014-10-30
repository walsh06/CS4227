/*#include "TestAchievementSystem.h"

TEST(AchievementTest, TestKillAchievements)
{
    AchievementSystem* achievements = new AchievementSystem();

    Player* testPlayer = new Player();

    testPlayer->addObserver(achievements);

    testPlayer->setKillCount(1);
    ASSERT_EQ(achievements->getNumUnlocked(), 0);

    testPlayer->setKillCount(5);
    ASSERT_EQ(achievements->getNumUnlocked(), 1);

    testPlayer->setKillCount(9);
    ASSERT_EQ(achievements->getNumUnlocked(), 1);

    testPlayer->setKillCount(10);
    ASSERT_EQ(achievements->getNumUnlocked(), 2);

    testPlayer->setKillCount(50);
    ASSERT_EQ(achievements->getNumUnlocked(), 3);

    delete testPlayer;
    delete achievements;
}

TEST(AchievementTest, TestPointAchievements)
{
    AchievementSystem* achievements = new AchievementSystem();

    Player* testPlayer = new Player();

    testPlayer->addObserver(achievements);

    testPlayer->setPoints(1);
    ASSERT_EQ(achievements->getNumUnlocked(), 0);

    testPlayer->setPoints(10);
    ASSERT_EQ(achievements->getNumUnlocked(), 1);

    testPlayer->setPoints(49);
    ASSERT_EQ(achievements->getNumUnlocked(), 1);

    testPlayer->setPoints(50);
    ASSERT_EQ(achievements->getNumUnlocked(), 2);

    testPlayer->setPoints(100);
    ASSERT_EQ(achievements->getNumUnlocked(), 3);

    testPlayer->setPoints(110);
    ASSERT_EQ(achievements->getNumUnlocked(), 3);
}*/
