#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H

#include <Enemy.h>

class EnemyFactory
{
    public:
        static Enemy *createEnemyEnemy();
        static Enemy *createEnemyEnemyWithPower(int power);
        static Enemy *createEnemyEnemyWithHealth(int health);
        static Enemy *createEnemyEnemyWithHealthAndPower(int health, int power);
    protected:
    private:
};

#endif // ENEMYFACTORY_H
