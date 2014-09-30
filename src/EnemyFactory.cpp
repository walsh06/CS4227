#include "EnemyFactory.h"

RobotEnemy *EnemyFactory::createRobotEnemy()
{
    return new RobotEnemy();
}

RobotEnemy *EnemyFactory::createRobotEnemyWithPower(int power)
{
    RobotEnemy *robot = new RobotEnemy();
    robot->setPower(power);
    return robot;
}

RobotEnemy *EnemyFactory::createRobotEnemyWithHealth(int health)
{
    RobotEnemy *robot = new RobotEnemy();
    robot->setHealth(health);
    return robot;
}

RobotEnemy *EnemyFactory::createRobotEnemyWithHealthAndPower(int health, int power)
{
    RobotEnemy *robot = new RobotEnemy();
    robot->setPower(power);
    robot->setHealth(health);
    return robot;
}
