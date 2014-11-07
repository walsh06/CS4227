#include "TestEnemyFactory.h"

TEST(EnemyTest, BasicEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    Enemy *enemy = EnemyFactory::createEnemy(moveStrategy);
    ASSERT_EQ(enemy->getHealth(), 10);
}

TEST(EnemyTest, EnemyWithHealthTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newHealth = 15;
    Enemy *enemy = EnemyFactory::createEnemyWithHealth(moveStrategy, newHealth);
    ASSERT_EQ(enemy->getHealth(), newHealth);
    ASSERT_EQ(enemy->getAttack(), 1);
    ASSERT_EQ(enemy->getDefense(), 1);
    ASSERT_EQ(enemy->getSpeed(), 1);
}

TEST(EnemyTest, SpeedEnemyTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createSpeedEnemy(moveStrategy);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);
}

TEST(EnemyTest, AttackEnemyTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newAttack = 3;

    Enemy *enemy = EnemyFactory::createAttackEnemy(moveStrategy);
    ASSERT_EQ(enemy->getAttack(), newAttack);
}

TEST(EnemyTest, DefenseEnemyTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newDefense = 3;

    Enemy *enemy = EnemyFactory::createDefenseEnemy(moveStrategy);
    ASSERT_EQ(enemy->getDefense(), newDefense);
}

TEST(EnemyTest, AttackDefenseEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newDefense = 3;
    int newAttack = 3;

    Enemy *enemy = EnemyFactory::createAttackDefenseEnemy(moveStrategy);
    ASSERT_EQ(enemy->getDefense(), newDefense);
    ASSERT_EQ(enemy->getAttack(), newAttack);
}

TEST(EnemyTest, SpeedDefenseEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newDefense = 3;
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createSpeedDefenseEnemy(moveStrategy);
    ASSERT_EQ(enemy->getDefense(), newDefense);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);
}

TEST(EnemyTest, SpeedAttackEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newAttack = 3;
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createAttackSpeedEnemy(moveStrategy);
    ASSERT_EQ(enemy->getAttack(), newAttack);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);
}
