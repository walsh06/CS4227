#include "Enemy.h"

Enemy::Enemy() :
EnemyInterface()
{
    this->health = 10;
    this->attack = 1;
    this->defense = 1;
    this->speed = 1;
}

Enemy::~Enemy()
{
    //dtor
}

int Enemy::getHealth()
{
    return this->health;
}

void Enemy::setHealth(int health)
{
    Enemy::health = health;
}

int Enemy::getAttack()
{
    return this->attack;
}

int Enemy::getDefense()
{
    return this->defense;
}

int Enemy::getSpeed()
{
    return this->speed;
}

