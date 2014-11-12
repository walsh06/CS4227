#include "TestAchievementSystem.h"
#include "GameEvent.h"

TEST(AchievementTest, TestKillAchievements)
{
    AchievementSystem achievements;

    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 0));
    ASSERT_EQ(achievements.getNumUnlocked(), 0);

    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 1));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 49));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 50));
    ASSERT_EQ(achievements.getNumUnlocked(), 2);

    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 100));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);

    achievements.update(GameEvent(GameEvent::TYPE_KILLS, 110));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);
}

TEST(AchievementTest, TestPointAchievements)
{

    AchievementSystem achievements;

    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 0));
    ASSERT_EQ(achievements.getNumUnlocked(), 0);

    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 10));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 49));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 50));
    ASSERT_EQ(achievements.getNumUnlocked(), 2);

    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 100));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);

    achievements.update(GameEvent(GameEvent::TYPE_POINTS, 110));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);
}

TEST(AchievementTest, TestMoneyAchievements)
{
    AchievementSystem achievements;

    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 0));
    ASSERT_EQ(achievements.getNumUnlocked(), 0);

    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 20));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 499));
    ASSERT_EQ(achievements.getNumUnlocked(), 1);

    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 500));
    ASSERT_EQ(achievements.getNumUnlocked(), 2);

    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 1000));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);

    achievements.update(GameEvent(GameEvent::TYPE_MONEY, 1100));
    ASSERT_EQ(achievements.getNumUnlocked(), 3);
}
