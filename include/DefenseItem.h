#ifndef DEFENSEITEM_H
#define DEFENSEITEM_H

#include "EnemyItemDecorator.h"


class DefenseItem : public EnemyItemDecorator
{
    public:
        /** Default constructor */
        DefenseItem(Enemy* enemy);

        int getDefense();
    protected:
    private:
};

#endif // DEFENSEITEM_H
