/*#include "TestEnemyFactory.h"

TEST(RobotEnemyTest, RobotEnemyDefaultTest)
{
    RobotEnemy *robot = EnemyFactory::createRobotEnemy();
    ASSERT_EQ(robot->getHealth(), 10);
    ASSERT_EQ(robot->getPower(), 10);
}


TEST(RobotEnemyTest, RobotEnemyHealthTest)
{
    int newHealth = 11;

    RobotEnemy *robot = EnemyFactory::createRobotEnemyWithHealth(newHealth);
    ASSERT_EQ(robot->getHealth(), newHealth);
    ASSERT_EQ(robot->getPower(), 10);
}


TEST(RobotEnemyTest, RobotEnemyPowerTest)
{
    int newPower = 11;

    RobotEnemy *robot = EnemyFactory::createRobotEnemyWithPower(newPower);
    ASSERT_EQ(robot->getHealth(), 10);
    ASSERT_EQ(robot->getPower(), newPower);
}

TEST(RobotEnemyTest, RobotEnemyHealthAndPowerTest)
{
    int newHealth = 11;
    int newPower = 11;

    RobotEnemy *robot = EnemyFactory::createRobotEnemyWithHealthAndPower(newHealth, newPower);
    ASSERT_EQ(robot->getHealth(), newHealth);
    ASSERT_EQ(robot->getPower(), newPower);
}
*/
