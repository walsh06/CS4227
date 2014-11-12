#include "EnemyFactory.h"

/// Creates Enemy | Health = 10 Attack = 1 Speed = 1 Defense = 1
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createEnemy(EnemyOrientation* moveStrategy)
{
    Enemy *enemy = new Enemy();
    enemy->setStrategy(moveStrategy);
    return enemy;
}

/// Creates Enemy | Health = 10 Attack = 1 Speed = 3 Defense = 1
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createSpeedEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new SpeedItem(new Enemy());
    enemy->setStrategy(moveStrategy);
    return enemy;
}

/// Creates Enemy | Health = 10 Attack = 3 Speed = 1 Defense = 1
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createAttackEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new AttackItem(new Enemy());
    enemy->setStrategy(moveStrategy);
    return enemy;
}

/// Creates Enemy | Health = 10 Attack = 1 Speed = 1 Defense = 3
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createDefenseEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new DefenseItem(new Enemy());
    enemy->setStrategy(moveStrategy);
    return enemy;
}

/// Creates Enemy | Health = 10 Attack = 3 Speed = 1 Defense = 3
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createAttackDefenseEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new AttackItem(new DefenseItem(new Enemy()));
    enemy->setStrategy(moveStrategy);
    return enemy;
}

/// Creates Enemy | Health = 10 Attack = 1 Speed = 3 Defense = 3
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createSpeedDefenseEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new SpeedItem(new DefenseItem(new Enemy()));
    enemy->setStrategy(moveStrategy);
    return enemy;
}

/// Creates Enemy | Health = 10 Attack = 3 Speed = 3 Defense = 1
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createAttackSpeedEnemy(EnemyOrientation* moveStrategy)
{

    Enemy *enemy = new SpeedItem(new AttackItem(new Enemy()));
    enemy->setStrategy(moveStrategy);
    return enemy;
}

/// Creates Enemy | Health =  health Attack = 1 Speed = 1 Defense = 1
/// With the movement strategy moveStrategy
Enemy *EnemyFactory::createEnemyWithHealth(EnemyOrientation* moveStrategy,int health)
{

    Enemy *enemy = new Enemy();
    enemy->setStrategy(moveStrategy);
    enemy->setHealth(health);
    return enemy;
}




