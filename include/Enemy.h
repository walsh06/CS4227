#ifndef ENEMY_H
#define ENEMY_H

#include "EnemyInterface.h"
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

        virtual int getHealth() ;
        virtual int getAttack() ;
        virtual int getDefense()  ;
        virtual int getSpeed()  ;
        virtual void setHealth(int health)  ;
        void setStrategy(EnemyOrientation* moveStrategy);
        void update();
        int getPosX();
        int getPosY();

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
