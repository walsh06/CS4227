#include "RobotEnemy.h"

RobotEnemy::RobotEnemy()
{
    RobotEnemy::health = 10;
    RobotEnemy::power = 10;
    this->speed = 2;
    moveStrategy = new EnemyHorizontal();
}

RobotEnemy::~RobotEnemy()
{
    //dtor
}

void RobotEnemy::update()
{
    //update the enemies each tick
    moveStrategy->move(posX, posY, speed);
}

int RobotEnemy::getHealth()
{
    return RobotEnemy::health;
}

void RobotEnemy::setHealth(int health)
{
    RobotEnemy::health = health;
}

int RobotEnemy::getPower()
{
    return RobotEnemy::power;
}

void RobotEnemy::setPower(int power)
{
    RobotEnemy::power = power;
}
