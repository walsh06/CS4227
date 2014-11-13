#ifndef ATTACKITEM_H
#define ATTACKITEM_H

#include "EnemyItemDecorator.h"

class AttackItem : public EnemyItemDecorator
{
    public:
        /** Default constructor */
        AttackItem(Enemy* enemy);

        int getAttack();
    protected:
    private:
};

#endif // ATTACKITEM_H
