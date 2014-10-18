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

EnemyWave* EnemyFactory::createWaveWithHealthAndPower(int size, int health, int power)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createRobotEnemyWithHealthAndPower(health, power));
    }
    return wave;
}

EnemyWave* EnemyFactory::createWaveWithPower(int size, int power)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createRobotEnemyWithPower(power));
    }
    return wave;
}
