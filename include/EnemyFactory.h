#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H

#include <RobotEnemy.h>
#include "EnemyWave.h"

class EnemyFactory
{
    public:
        static RobotEnemy *createRobotEnemy();
        static RobotEnemy *createRobotEnemyWithPower(int power);
        static RobotEnemy *createRobotEnemyWithHealth(int health);
        static RobotEnemy *createRobotEnemyWithHealthAndPower(int health, int power);
        static EnemyWave* createWaveWithHealthAndPower(int size, int health, int power);
        static EnemyWave* createWaveWithPower(int size, int power);

    protected:
    private:
};

#endif // ENEMYFACTORY_H
