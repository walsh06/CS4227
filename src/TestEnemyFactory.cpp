#include "TestEnemyFactory.h"

TEST(EnemyEnemyTest, EnemyEnemyDefaultTest)
{
    Enemy *Enemy = EnemyFactory::createEnemyEnemy();
    ASSERT_EQ(Enemy->getHealth(), 10);
}


TEST(EnemyEnemyTest, EnemyEnemyHealthTest)
{
    int newHealth = 11;

    Enemy *Enemy = EnemyFactory::createEnemyEnemyWithHealth(newHealth);
    ASSERT_EQ(Enemy->getHealth(), newHealth);
}


TEST(EnemyEnemyTest, EnemyEnemyPowerTest)
{
    int newPower = 11;

    Enemy *Enemy = EnemyFactory::createEnemyEnemyWithPower(newPower);
    ASSERT_EQ(Enemy->getHealth(), 10);
}

TEST(EnemyEnemyTest, EnemyEnemyHealthAndPowerTest)
{
    int newHealth = 11;
    int newPower = 11;

    Enemy *Enemy = EnemyFactory::createEnemyEnemyWithHealthAndPower(newHealth, newPower);
    ASSERT_EQ(Enemy->getHealth(), newHealth);
}

