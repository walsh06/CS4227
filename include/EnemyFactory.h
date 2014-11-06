#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H


#include "Enemy.h"
#include "SpeedItem.h"
#include "AttackItem.h"
#include "DefenseItem.h"




class EnemyFactory
{
    public:
        static Enemy *createEnemy();
        static Enemy *createEnemyWithHealth(int health);

        static Enemy *createSpeedEnemy();
        static Enemy *createAttackEnemy();
        static Enemy *createDefenseEnemy();
        static Enemy *createSpeedDefenseEnemy();
        static Enemy *createAttackDefenseEnemy();
        static Enemy *createAttackSpeedEnemy();

    protected:
    private:
};

#endif // ENEMYFACTORY_H
