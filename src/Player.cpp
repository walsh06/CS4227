#include "Player.h"
#include <iostream>

//Model of the MVC
Player::Player()
{
    killCount = 0;
    points = 0;
    money = 0;
    health = 10;
    xPos = 0;
    yPos = 0;
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
int Player::getXPosition()
{
    return xPos;
}
int Player::getYPosition()
{
    return yPos;
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

void Player::setXPosition(int x)
{
    this->xPos = x;
}
void Player::setYPosition(int y)
{
    this->yPos = y;
}

void Player::attack()
{
    std::cout<<"Attacking enemy"<<std::endl;
}

//Allows the player to move left.
void Player::moveLeft()
{
    this->xPos--;
}

//Allows the player to move right.
void Player::moveRight()
{
    this->xPos++;
}

//Allows the player to move downwards.
void Player::moveDown()
{
    this->yPos--;
}

//Allows the player to move upwards.
void Player::moveUp()
{
    this->yPos++;
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

