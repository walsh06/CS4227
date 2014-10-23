#include "BoostItem.h"

BoostItem::BoostItem(Enemy* enemy)
: EnemyItemDecorator(enemy)
{
    //ctor

}

BoostItem::~BoostItem()
{
    //dtor
}

int BoostItem::getAttack()
{
    return EnemyItemDecorator::getAttack() + 2;
}

int BoostItem::getDefense()
{
    return EnemyItemDecorator::getDefense();
}

int BoostItem::getSpeed()
{
    return EnemyItemDecorator::getSpeed();
}
