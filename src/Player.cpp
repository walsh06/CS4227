#include "Player.h"
#include <iostream>

/**
 Model of the MVC
*/
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

/**
 Get the players points.
*/
int Player::getPoints()
{
    return points;
}

/**
 Get the number of enemies the
 player has killed.
*/
int Player::getKillCount()
{
    return killCount;
}

/**
 Get the money the player has
 earned.
*/
int Player::getMoney()
{
    return money;
}

/**
 Get the x coordinate of the
 player.
*/
int Player::getXPosition()
{
    return xPos;
}

/**
 Get the y coordinate of the
 player.
*/
int Player::getYPosition()
{
    return yPos;
}

/**
 Set the player points.
*/
void Player::setPoints(int points)
{
    this->points = points;
}

/**
 Set the players kills.
*/
void Player::setKillCount(int kills)
{
    this->killCount = kills;
}

/**
 Get the enemy Health.
*/
int Player::getHealth()
{
    return this->health;
}

/**
 Set the player Health.
*/
void Player::setHealth(int health)
{
    this->health = health;
}

/**
 Set the x coordinate of the
 player.
*/
void Player::setXPosition(int x)
{
    this->xPos = x;
}

/**
 Set the y coordinate of the
 player.
*/
void Player::setYPosition(int y)
{
    this->yPos = y;
}

/**
 Attack an enemy.
*/
void Player::attack()
{
    std::cout<<"Attacking enemy"<<std::endl;
}

/**
 Moves the player to the left by 1
*/
void Player::moveLeft()
{
    this->xPos--;
}

/**
 Moves the player to the right by 1
*/
void Player::moveRight()
{
    this->xPos++;
}

/**
 Moves the player to the down by 1
*/
void Player::moveDown()
{
    this->yPos--;
}

/**
 Moves the player to the up by 1
*/
void Player::moveUp()
{
    this->yPos++;
}

/**
 Set the players money.
*/
void Player::setMoney(int money)
{
    this->money = money;
}

/**
 Update the player.
 If the players health is below 1
 they are dead and thus removed.
*/
void Player::update()
{
    if(this->health < 1){
        delete this;
    }
}

