#include "EnemyFactory.h"

Enemy *EnemyFactory::createEnemy(EnemyOrientation* moveStrategy)
{
    Enemy *enemy = new Enemy();
    enemy->setStrategy(moveStrategy);
    return enemy;
}

Enemy *EnemyFactory::createSpeedEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new SpeedItem(new Enemy());
    enemy->setStrategy(moveStrategy);
    return enemy;
}

Enemy *EnemyFactory::createAttackEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new AttackItem(new Enemy());
    enemy->setStrategy(moveStrategy);
    return enemy;
}

Enemy *EnemyFactory::createDefenseEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new DefenseItem(new Enemy());
    enemy->setStrategy(moveStrategy);
    return enemy;
}

Enemy *EnemyFactory::createAttackDefenseEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new AttackItem(new DefenseItem(new Enemy()));
    enemy->setStrategy(moveStrategy);
    return enemy;
}

Enemy *EnemyFactory::createSpeedDefenseEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new SpeedItem(new DefenseItem(new Enemy()));
    enemy->setStrategy(moveStrategy);
    return enemy;
}

Enemy *EnemyFactory::createAttackSpeedEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new SpeedItem(new AttackItem(new Enemy()));
    enemy->setStrategy(moveStrategy);
    return enemy;
}

Enemy *EnemyFactory::createEnemyWithHealth(EnemyOrientation* moveStrategy,int health)
{

    Enemy *enemy = new Enemy();
    enemy->setStrategy(moveStrategy);
    enemy->setHealth(health);
    return enemy;
}




