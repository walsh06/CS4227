#ifndef ENEMY_H
#define ENEMY_H

#include <EnemyInterface.h>


class Enemy : public EnemyInterface
{
    public:
        /** Default constructor */
        Enemy();
        /** Default destructor */
        virtual ~Enemy();

        int getHealth();
        int getAttack();
        int getDefense();
        int getSpeed();
        void setHealth(int health);


    protected:

        int attack;
        int defense;
        int speed;
    private:
        int health;
};

#endif // ENEMY_H
