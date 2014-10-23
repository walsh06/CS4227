#include "EnemyFactory.h"

Enemy *EnemyFactory::createEnemyEnemy()
{
    return new Enemy();
}

Enemy *EnemyFactory::createEnemyEnemyWithPower(int power)
{
    Enemy *enemy = new Enemy();
    return enemy;
}

Enemy *EnemyFactory::createEnemyEnemyWithHealth(int health)
{
    Enemy *enemy = new Enemy();
    enemy->setHealth(health);
    return enemy;
}

Enemy *EnemyFactory::createEnemyEnemyWithHealthAndPower(int health, int power)
{
    Enemy *enemy = new Enemy();
    enemy->setHealth(health);
    return enemy;
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
