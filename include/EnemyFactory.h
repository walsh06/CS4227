#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H


#include "EnemyInterface.h"
#include "SpeedItem.h"
#include "AttackItem.h"
#include "DefenseItem.h"




class EnemyFactory
{
    public:
        static EnemyInterface *createEnemy(EnemyOrientation* moveStrategy);
        static EnemyInterface *createEnemyWithHealth(EnemyOrientation* moveStrategy,int health);

        static EnemyInterface *createSpeedEnemy(EnemyOrientation* moveStrategy);
        static EnemyInterface *createAttackEnemy(EnemyOrientation* moveStrategy);
        static EnemyInterface *createDefenseEnemy(EnemyOrientation* moveStrategy);
        static EnemyInterface *createSpeedDefenseEnemy(EnemyOrientation* moveStrategy);
        static EnemyInterface *createAttackDefenseEnemy(EnemyOrientation* moveStrategy);
        static EnemyInterface *createAttackSpeedEnemy(EnemyOrientation* moveStrategy);

    protected:
    private:
};

#endif // ENEMYFACTORY_H
