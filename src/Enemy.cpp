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
