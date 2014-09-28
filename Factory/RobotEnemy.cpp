#include "RobotEnemy.h"

RobotEnemy::RobotEnemy()
{
    RobotEnemy::health = 10;
    RobotEnemy::power = 10;
}

RobotEnemy::~RobotEnemy()
{
    //dtor
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
