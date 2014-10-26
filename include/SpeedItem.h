#ifndef SPEEDITEM_H
#define SPEEDITEM_H

#include <EnemyItemDecorator.h>


class SpeedItem : public EnemyItemDecorator
{
    public:
        /** Default constructor */
        SpeedItem(Enemy* enemy);
        /** Default destructor */
        virtual ~SpeedItem();

        int getSpeed();
    protected:
    private:
};

#endif // SPEEDITEM_H
