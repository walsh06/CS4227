#include "Player.h"
#include <iostream>

//Model of the MVC
Player::Player()
{
    killCount = 0;
    points = 0;
    money = 0;
    numOfObservers = 0;
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
    notify(GameEvent::TYPE_POINTS, points);
}
void Player::setKillCount(int kills)
{
    this->killCount = kills;
    notify(GameEvent::TYPE_KILLS, kills);
}
void Player::setMoney(int money)
{
    this->money = money;
    notify(GameEvent::TYPE_MONEY, money);
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

void Player::addObserver(GameObserver* o)
{
    observers.push_back(o);
    numOfObservers++;
}
void Player::removeObserver(GameObserver* o)
{
    for(int i = 0; i < numOfObservers; i++)
    {
        if(observers[i] == o)
        {
            observers.erase(observers.begin() + i);
            numOfObservers--;
        }
    }
}

void Player::notify(int type, int value)
{
    for(int i = 0; i < numOfObservers; i++)
    {
        GameEvent event(type, value);
        observers[i]->update(event);
    }
}
