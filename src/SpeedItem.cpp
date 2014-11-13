#include "SpeedItem.h"

/**
 Speed Item Constructor, calls super constructor
*/
SpeedItem::SpeedItem(Enemy* enemy)
: EnemyItemDecorator(enemy)
{
    //ctor
}

/**
 Returns the result of the super's getDefense + 2.
 Decorator Method
*/
int SpeedItem::getSpeed()
{
    return EnemyItemDecorator::getSpeed() + 2;
}
