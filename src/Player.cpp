#include "Player.h"

Player::Player()
{
    killCount = 0;
    points = 0;
    money = 0;
    health = 10;
}

Player::~Player()
{
    //dtor
}

int Player::getPoints()
{
    return points;
}
int Player::getKillCount()
{
    return killCount;
}
int Player::getMoney()
{
    return money;
}
void Player::setPoints(int points)
{
    this->points = points;
}
void Player::setKillCount(int kills)
{
    this->killCount = kills;
}

int Player::getHealth()
{
    return this->health;
}
void Player::setHealth(int health)
{
    this->health = health;
}


void Player::setMoney(int money)
{
    this->money = money;
}

void Player::update()
{
    if(this->health < 1){
        delete this;
    }
}

