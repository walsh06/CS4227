#include "Enemy.h"

Enemy::Enemy() :
EnemyInterface()
{
    this->health = 10;
    this->attack = 1;
    this->defense = 1;
    this->speed = 1;
    moveStrategy = new EnemyHorizontal();

}

Enemy::~Enemy()
{
    //dtor
}


void Enemy::update()
{
    //update the enemies each tick
    moveStrategy->move(posX, posY, speed);
}


int Enemy::getHealth()
{
    return this->health;
}

void Enemy::setHealth(int health)
{
    this->health = health;
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
