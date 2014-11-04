#ifndef ENEMYITEM_H
#define ENEMYITEM_H

#include "EnemyInterface.h"
#include "Enemy.h"

class EnemyItemDecorator : public Enemy
{
    public:
        Enemy* tempEnemy;

        /** Default constructor */
        EnemyItemDecorator(Enemy* enemy);
        /** Default destructor */
        virtual ~EnemyItemDecorator();

        int getAttack();
        int getDefense();
        int getSpeed();

        int getHealth();
        void setHealth(int health);
    protected:
    private:
};

#endif // ENEMYITEM_H
