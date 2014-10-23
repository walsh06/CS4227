#ifndef BOOSTITEM_H
#define BOOSTITEM_H

#include <EnemyItemDecorator.h>


class BoostItem : public EnemyItemDecorator
{
    public:
        /** Default constructor */
        BoostItem(Enemy* enemy);
        /** Default destructor */
        virtual ~BoostItem();

        int getAttack();
        int getDefense();
        int getSpeed();
    protected:
    private:
};

#endif // BOOSTITEM_H
