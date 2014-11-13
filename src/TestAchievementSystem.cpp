#include "TestAchievementSystem.h"
#include "GameEvent.h"

/**
 Test if the kill achievements unlock
*/
TEST(AchievementTest, TestKillAchievements)
{
    AchievementSystem achievements;
    std::cout << "Created Achievement System" << std::endl;

    std::cout << "Check Initial Achievement System" << std::endl;
    ASSERT_EQ(achievements.getNumUnlocked(), 0);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 1));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 49));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 50));
    ASSERT_EQ(achievements.getNumUnlocked(), 2);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 100));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 110));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);
}


/**
 Test if the point achievements unlock.
*/
TEST(AchievementTest, TestPointAchievements)
{

    AchievementSystem achievements;
    std::cout << "Created Achievement System" << std::endl;

    std::cout << "Check Initial Achievement System" << std::endl;
    ASSERT_EQ(achievements.getNumUnlocked(), 0);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 10));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 49));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 50));
    ASSERT_EQ(achievements.getNumUnlocked(), 2);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 100));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 110));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);
}

/**
 Test if the money achievements unlock
*/
TEST(AchievementTest, TestMoneyAchievements)
{
    AchievementSystem achievements;
    std::cout << "Created Achievement System" << std::endl;

    std::cout << "Check Initial Achievement System" << std::endl;
    ASSERT_EQ(achievements.getNumUnlocked(), 0);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 20));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 499));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 500));
    ASSERT_EQ(achievements.getNumUnlocked(), 2);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 1000));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);

    std::cout << "Update Achievement System" << std::endl;
    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 1100));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);
}
