#include "Tower.h"

Tower::Tower(int x, int y)
{
	Tower::x = x;
	Tower::y = y;
    Tower::health = 10;
    Tower::power = 10;
}

Tower::~Tower(int x, int y)
{
    //dtor
}

//Place the tower on the grid at x and y.
void Tower::placeTower()
{
	//Method to place the tower here.
}

//Remove the tower from its x and y position.
void Tower::removeTower()
{
	//Remove tower code here.
}

int Tower::getHealth()
{
    return Tower::health;
}

void Tower::setHealth(int health)
{
    Tower::health = health;
}

int Tower::getPower()
{
    return Tower::power;
}

void Tower::setPower(int power)
{
    Tower::power = power;
}

int Tower::getX()
{
	return Tower::x;
}

void Tower::setX(int x)
{
	Tower::x = x;
}

int Tower::getY()
{
	return Tower::y;
}

void Tower::setY(int y)
{
	Tower::y = y;
}
