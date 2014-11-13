#include "AttackItem.h"

/**
 Attack Item Constructor, calls super constructor
*/
AttackItem::AttackItem(Enemy* enemy)
: EnemyItemDecorator(enemy)
{
}

/**
 Returns the result of the super's getAttack + 2.
 Decorator Method
*/
int AttackItem::getAttack()
{
    return EnemyItemDecorator::getAttack() + 2;
}

