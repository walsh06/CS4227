#include "TestEnemyFactory.h"

TEST(EnemyTest, BasicEnemyTest)
{
    Enemy *enemy = EnemyFactory::createEnemy();
    ASSERT_EQ(enemy->getHealth(), 10);
}

TEST(EnemyTest, EnemyWithHealthTest)
{
    int newHealth = 15;
    Enemy *enemy = EnemyFactory::createEnemyWithHealth(newHealth);
    ASSERT_EQ(enemy->getHealth(), newHealth);
    ASSERT_EQ(enemy->getAttack(), 1);
    ASSERT_EQ(enemy->getDefense(), 1);
    ASSERT_EQ(enemy->getSpeed(), 1);
}

TEST(EnemyTest, SpeedEnemyTest)
{
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createSpeedEnemy();
    ASSERT_EQ(enemy->getSpeed(), newSpeed);
}

TEST(EnemyTest, AttackEnemyTest)
{
    int newAttack = 3;

    Enemy *enemy = EnemyFactory::createAttackEnemy();
    ASSERT_EQ(enemy->getAttack(), newAttack);
}

TEST(EnemyTest, DefenseEnemyTest)
{
    int newDefense = 3;

    Enemy *enemy = EnemyFactory::createDefenseEnemy();
    ASSERT_EQ(enemy->getDefense(), newDefense);
}

TEST(EnemyTest, AttackDefenseEnemyTest)
{
    int newDefense = 3;
    int newAttack = 3;

    Enemy *enemy = EnemyFactory::createAttackDefenseEnemy();
    ASSERT_EQ(enemy->getDefense(), newDefense);
    ASSERT_EQ(enemy->getAttack(), newAttack);
}

TEST(EnemyTest, SpeedDefenseEnemyTest)
{
    int newDefense = 3;
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createSpeedDefenseEnemy();
    ASSERT_EQ(enemy->getDefense(), newDefense);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);
}

TEST(EnemyTest, SpeedAttackEnemyTest)
{
    int newAttack = 3;
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createAttackSpeedEnemy();
    ASSERT_EQ(enemy->getAttack(), newAttack);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);
}
