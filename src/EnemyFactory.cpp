#include "EnemyFactory.h"

Enemy *EnemyFactory::createEnemy()
{
    return new Enemy();
}

Enemy *EnemyFactory::createSpeedEnemy()
{

    Enemy *enemy = new SpeedItem(new Enemy());
    return enemy;
}

Enemy *EnemyFactory::createAttackEnemy()
{

    Enemy *enemy = new AttackItem(new Enemy());
    return enemy;
}

Enemy *EnemyFactory::createDefenseEnemy()
{

    Enemy *enemy = new DefenseItem(new Enemy());
    return enemy;
}

Enemy *EnemyFactory::createAttackDefenseEnemy()
{

    Enemy *enemy = new AttackItem(new DefenseItem(new Enemy()));
    return enemy;
}

Enemy *EnemyFactory::createSpeedDefenseEnemy()
{

    Enemy *enemy = new SpeedItem(new DefenseItem(new Enemy()));
    return enemy;
}

Enemy *EnemyFactory::createAttackSpeedEnemy()
{

    Enemy *enemy = new SpeedItem(new AttackItem(new Enemy()));
    return enemy;
}

Enemy *EnemyFactory::createEnemyWithHealth(int health)
{

    Enemy *enemy = new Enemy();
    enemy->setHealth(health);
    return enemy;
}




