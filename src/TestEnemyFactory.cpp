#include "TestEnemyFactory.h"

/// Tests BasicEnemy
/// Checks if health is 10, defense is 1, attack is 1, speed is 1
TEST(EnemyTest, BasicEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    Enemy *enemy = EnemyFactory::createEnemy(moveStrategy);
    ASSERT_EQ(enemy->getHealth(), 10);
    ASSERT_EQ(enemy->getAttack(), 1);
    ASSERT_EQ(enemy->getDefense(), 1);
    ASSERT_EQ(enemy->getSpeed(), 1);

    delete enemy;
}

/// Tests BasicEnemy
/// Checks if health is 10, defense is 1, attack is 1, speed is 1
TEST(EnemyTest, EnemyWithHealthTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newHealth = 15;
    Enemy *enemy = EnemyFactory::createEnemyWithHealth(moveStrategy, newHealth);
    ASSERT_EQ(enemy->getHealth(), newHealth);
    ASSERT_EQ(enemy->getAttack(), 1);
    ASSERT_EQ(enemy->getDefense(), 1);
    ASSERT_EQ(enemy->getSpeed(), 1);

    delete enemy;
}

/// Tests SpeedEnemy
/// Checks if speed is 3
TEST(EnemyTest, SpeedEnemyTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createSpeedEnemy(moveStrategy);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);

    delete enemy;
}

/// Tests AttackEnemy
/// Checks if  attack is 3
TEST(EnemyTest, AttackEnemyTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newAttack = 3;

    Enemy *enemy = EnemyFactory::createAttackEnemy(moveStrategy);
    ASSERT_EQ(enemy->getAttack(), newAttack);

    delete enemy;
}

/// Tests DefenseEnemy
/// Checks if defense is 3
TEST(EnemyTest, DefenseEnemyTest)
{

    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newDefense = 3;

    Enemy *enemy = EnemyFactory::createDefenseEnemy(moveStrategy);
    ASSERT_EQ(enemy->getDefense(), newDefense);

    delete enemy;
}

/// Tests AttackEnemy
/// Checks if defense is 3, attack is 3
TEST(EnemyTest, AttackDefenseEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newDefense = 3;
    int newAttack = 3;

    Enemy *enemy = EnemyFactory::createAttackDefenseEnemy(moveStrategy);
    ASSERT_EQ(enemy->getDefense(), newDefense);
    ASSERT_EQ(enemy->getAttack(), newAttack);

    delete enemy;
}

/// Tests SpeedDefenseEnemy
/// Checks if defense is 3, speed is 3
TEST(EnemyTest, SpeedDefenseEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newDefense = 3;
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createSpeedDefenseEnemy(moveStrategy);
    ASSERT_EQ(enemy->getDefense(), newDefense);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);

    delete enemy;
}

/// Tests SpeedAttackEnemy
/// Checks attack is 3, speed is 3
TEST(EnemyTest, SpeedAttackEnemyTest)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();
    int newAttack = 3;
    int newSpeed= 3;

    Enemy *enemy = EnemyFactory::createAttackSpeedEnemy(moveStrategy);
    ASSERT_EQ(enemy->getAttack(), newAttack);
    ASSERT_EQ(enemy->getSpeed(), newSpeed);

    delete enemy;
}
