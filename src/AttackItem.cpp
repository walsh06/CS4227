#include "AttackItem.h"

AttackItem::AttackItem(Enemy* enemy)
: EnemyItemDecorator(enemy)
{
    //ctor
}

AttackItem::~AttackItem()
{
    //dtor
}

int AttackItem::getAttack()
{
    return EnemyItemDecorator::getAttack() + 2;
}

