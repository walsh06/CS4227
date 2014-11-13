#ifndef ENEMYINTERFACE_H
#define ENEMYINTERFACE_H

#include "EnemyOrientation.h"
#include "GameView.h"

class EnemyInterface
{
    public:
        /** Destructor */
        virtual ~EnemyInterface() {}

        virtual int getHealth() = 0;
        virtual int getAttack() = 0;
        virtual int getDefense() = 0 ;
        virtual int getSpeed()  = 0;
        virtual void setHealth(int health)  = 0;
        virtual void setStrategy(EnemyOrientation* moveStrategy)= 0;
        virtual void update() = 0;

        virtual int getPosX() = 0;
        virtual int getPosY() = 0;

    protected:
    private:
};

#endif // ENEMYINTERFACE_H
