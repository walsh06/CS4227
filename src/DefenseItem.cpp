#include "DefenseItem.h"

/**
 Defense Item Constructor, calls super constructor
*/
DefenseItem::DefenseItem(Enemy* enemy)
: EnemyItemDecorator(enemy)
{

}

/**
 Returns the result of the super's getDefense + 2.
 Decorator Method
*/
int DefenseItem::getDefense()
{
    return EnemyItemDecorator::getDefense() + 2;
}
