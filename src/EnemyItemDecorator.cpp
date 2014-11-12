#include "EnemyItemDecorator.h"


/// Enemy Item Decorator constructor. Sets a temporaryEnemy.
EnemyItemDecorator::EnemyItemDecorator(Enemy* enemy)
{
    this->tempEnemy = enemy;
}

/// Enemy Item Decorator Constructor.
EnemyItemDecorator::~EnemyItemDecorator()
{
    //dtor
}

/// Returns the attack of the tempEnemy.
int EnemyItemDecorator::getAttack()
{
    return this->tempEnemy->getAttack();
}

/// Returns the Defense of the tempEnemy.
int EnemyItemDecorator::getDefense()
{
    return this->tempEnemy->getDefense();
}

/// Returns the Speed of the tempEnemy.
int EnemyItemDecorator::getSpeed()
{
    return this->tempEnemy->getSpeed();
}

/// Returns the Health of the tempEnemy.
int EnemyItemDecorator::getHealth()
{
    return this->tempEnemy->getHealth();
}


/// Returns the Health of the tempEnemy.
void EnemyItemDecorator::setHealth(int health)
{
    return this->tempEnemy->setHealth(health);
}
