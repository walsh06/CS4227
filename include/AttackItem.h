#ifndef ATTACKITEM_H
#define ATTACKITEM_H

#include <EnemyItemDecorator.h>


class AttackItem : public EnemyItemDecorator
{
    public:
        /** Default constructor */
        AttackItem(Enemy* enemy);
        /** Default destructor */
        virtual ~AttackItem();

        int getAttack();
    protected:
    private:
};

#endif // ATTACKITEM_H
