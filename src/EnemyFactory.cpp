#include "EnemyFactory.h"

Enemy *EnemyFactory::createEnemy()
{
    return new BasicEnemy();
}

Enemy *EnemyFactory::createSpeedEnemy()
{

    Enemy *enemy = new SpeedItem(new BasicEnemy());
    return enemy;
}

Enemy *EnemyFactory::createAttackEnemy()
{

    Enemy *enemy = new AttackItem(new BasicEnemy());
    return enemy;
}

Enemy *EnemyFactory::createDefenseEnemy()
{

    Enemy *enemy = new DefenseItem(new BasicEnemy());
    return enemy;
}

Enemy *EnemyFactory::createAttackDefenseEnemy()
{

    Enemy *enemy = new AttackItem(new DefenseItem(new BasicEnemy()));
    return enemy;
}

Enemy *EnemyFactory::createSpeedDefenseEnemy()
{

    Enemy *enemy = new SpeedItem(new DefenseItem(new BasicEnemy()));
    return enemy;
}

Enemy *EnemyFactory::createAttackSpeedEnemy()
{

    Enemy *enemy = new SpeedItem(new AttackItem(new BasicEnemy()));
    return enemy;
}

Enemy *EnemyFactory::createEnemyWithHealth(int health)
{

    Enemy *enemy = new BasicEnemy();
    enemy->setHealth(health);
    return enemy;
}




