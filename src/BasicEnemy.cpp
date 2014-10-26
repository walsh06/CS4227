#include "BasicEnemy.h"

BasicEnemy::BasicEnemy()
{

}

BasicEnemy::~BasicEnemy()
{
    //dtor
}

int BasicEnemy::getHealth()
{
    return this->health;
}

void BasicEnemy::setHealth(int health)
{
    BasicEnemy::health = health;
}

int BasicEnemy::getAttack()
{
    return this->attack;
}

int BasicEnemy::getDefense()
{
    return this->defense;
}

int BasicEnemy::getSpeed()
{
    return this->speed;
}
