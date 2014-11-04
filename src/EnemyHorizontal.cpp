#include "EnemyHorizontal.h"

EnemyHorizontal::EnemyHorizontal()
{
    //ctor
}

EnemyHorizontal::~EnemyHorizontal()
{
    //dtor
}

void EnemyHorizontal::move(int &posX, int &posY, int speed)
{
    posX-=speed;
}
