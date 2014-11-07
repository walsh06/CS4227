#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H


#include "Enemy.h"
#include "SpeedItem.h"
#include "AttackItem.h"
#include "DefenseItem.h"




class EnemyFactory
{
    public:
        static Enemy *createEnemy(EnemyOrientation* moveStrategy);
        static Enemy *createEnemyWithHealth(EnemyOrientation* moveStrategy,int health);

        static Enemy *createSpeedEnemy(EnemyOrientation* moveStrategy);
        static Enemy *createAttackEnemy(EnemyOrientation* moveStrategy);
        static Enemy *createDefenseEnemy(EnemyOrientation* moveStrategy);
        static Enemy *createSpeedDefenseEnemy(EnemyOrientation* moveStrategy);
        static Enemy *createAttackDefenseEnemy(EnemyOrientation* moveStrategy);
        static Enemy *createAttackSpeedEnemy(EnemyOrientation* moveStrategy);

    protected:
    private:
};

#endif // ENEMYFACTORY_H
