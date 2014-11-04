#include "EnemyVertical.h"

EnemyVertical::EnemyVertical()
{
    //ctor
}

EnemyVertical::~EnemyVertical()
{
    //dtor
}

void EnemyVertical::move(int &posX, int &posY, int speed)
{
    posY -= speed;
}
