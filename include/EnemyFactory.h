#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H


#include <Enemy.h>
#include "EnemyWave.h"

class EnemyFactory
{
    public:
        static Enemy *createEnemyEnemy();
        static Enemy *createEnemyEnemyWithPower(int power);
        static Enemy *createEnemyEnemyWithHealth(int health);
        static Enemy *createEnemyEnemyWithHealthAndPower(int health, int power);
        static EnemyWave* createWaveWithHealthAndPower(int size, int health, int power);
        static EnemyWave* createWaveWithPower(int size, int power);

    protected:
    private:
};

#endif // ENEMYFACTORY_H
