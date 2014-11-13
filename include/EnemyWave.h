#ifndef ENEMYWAVE_H
#define ENEMYWAVE_H

#include "EnemyInterface.h"
#include "GameView.h"

#include <vector>

class EnemyWave : public EnemyInterface
{
    public:
        EnemyWave(int waveSize);
        virtual ~EnemyWave();

        void addEnemy(EnemyInterface* enemy);
        void removeEnemy(EnemyInterface* enemy);
        EnemyInterface* getEnemy(int enemyIndex);

        void update();

        void draw(GameView* view);

    protected:
    private:

        std::vector<EnemyInterface *> wave;
        int waveSize;
};

#endif // ENEMYWAVE_H
