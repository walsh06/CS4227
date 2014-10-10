#include "TowerFactory.h"

Tower *TowerFactory::createTower()
{
    return new Tower();
}

Tower *TowerFactory::createTowerWithPower(int power)
{
    Tower *tower = new Tower();
    tower->setPower(power);
    return tower;
}

Tower *TowerFactory::createTowerWithHealth(int health)
{
    Tower *tower = new Tower();
    tower->setHealth(health);
    return tower;
}

Tower *TowerFactory::createTowerWithHealthAndPower(int health, int power)
{
    Tower *tower = new Tower();
    tower->setPower(power);
    tower->setHealth(health);
    return tower;
}