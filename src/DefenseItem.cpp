#include "DefenseItem.h"

DefenseItem::DefenseItem(Enemy* enemy)
: EnemyItemDecorator(enemy)
{
    //ctor
}

DefenseItem::~DefenseItem()
{
    //dtor
}

int DefenseItem::getDefense()
{
    return EnemyItemDecorator::getDefense() + 2;
}
