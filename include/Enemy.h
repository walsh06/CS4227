#ifndef ENEMY_H
#define ENEMY_H

#include <EnemyInterface.h>

#include "EnemyOrientation.h"
#include "EnemyHorizontal.h"
#include "EnemyVertical.h"


class Enemy : public EnemyInterface
{
    public:
        /** Default constructor */
        Enemy();
        /** Default destructor */
        virtual ~Enemy();

        virtual int getHealth() = 0;
        virtual int getAttack()  = 0;
        virtual int getDefense()  = 0;
        virtual int getSpeed()  = 0;
        virtual void setHealth(int health)  = 0;
        void update();

    protected:

        int attack;
        int defense;
        int speed;

        int health;
        int posX, posY;

    private:

        EnemyOrientation* moveStrategy;
};

#endif // ENEMY_H
