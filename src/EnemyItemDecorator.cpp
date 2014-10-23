#include "EnemyItemDecorator.h"

EnemyItemDecorator::EnemyItemDecorator(Enemy* enemy)
{
    this->tempEnemy = enemy;
}

EnemyItemDecorator::~EnemyItemDecorator()
{
    //dtor
}

int EnemyItemDecorator::getAttack()
{
    return this->tempEnemy->getAttack();
}


int EnemyItemDecorator::getDefense()
{
    return this->tempEnemy->getDefense();
}


int EnemyItemDecorator::getSpeed()
{
    return this->tempEnemy->getSpeed();
}
int EnemyItemDecorator::getHealth()
{
    return this->tempEnemy->getHealth();
}

void EnemyItemDecorator::setHealth(int health)
{
    return this->tempEnemy->setHealth(health);
}
