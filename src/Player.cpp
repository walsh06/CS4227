#include "Player.h"

Player::Player()
{
    killCount = 0;
    points = 0;
    money = 0;
    numOfObservers = 0;
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
    notify(2, points);
}
void Player::setKillCount(int kills)
{
    this->killCount = kills;
    notify(1, kills);
}
void Player::setMoney(int money)
{
    this->money = money;
    notify(3, money);
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
