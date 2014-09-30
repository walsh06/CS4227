#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H

#include <RobotEnemy.h>

class EnemyFactory
{
    public:
        static RobotEnemy *createRobotEnemy();
        static RobotEnemy *createRobotEnemyWithPower(int power);
        static RobotEnemy *createRobotEnemyWithHealth(int health);
        static RobotEnemy *createRobotEnemyWithHealthAndPower(int health, int power);
    protected:
    private:
};

#endif // ENEMYFACTORY_H
