#include "SpeedItem.h"

SpeedItem::SpeedItem(Enemy* enemy)
: EnemyItemDecorator(enemy)
{
    //ctor

}

SpeedItem::~SpeedItem()
{
    //dtor
}

int SpeedItem::getSpeed()
{
    return EnemyItemDecorator::getSpeed() + 2;
}
