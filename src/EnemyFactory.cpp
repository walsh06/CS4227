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
