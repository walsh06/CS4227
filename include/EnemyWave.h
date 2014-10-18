#ifndef ENEMYWAVE_H
#define ENEMYWAVE_H

#include "EnemyInterface.h"
#include <vector>

class EnemyWave : public EnemyInterface
{
    public:
        EnemyWave(int waveSize);
        virtual ~EnemyWave();

        void setHealth(int health);
        void setPower(int power);

        void addEnemy(EnemyInterface* enemy);
        void removeEnemy(EnemyInterface* enemy);
        EnemyInterface* getEnemy(int enemyIndex);

    protected:
    private:

        std::vector<EnemyInterface *> wave;
        int waveSize;
};

#endif // ENEMYWAVE_H
