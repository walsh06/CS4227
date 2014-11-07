#ifndef ENEMYWAVEFACTORY_H
#define ENEMYWAVEFACTORY_H

#include "EnemyFactory.h"
#include "EnemyWave.h"

class EnemyWaveFactory
{
    public:
        /** Default constructor */
        EnemyWaveFactory();
        /** Default destructor */
        virtual ~EnemyWaveFactory();

        static EnemyWave* createBasicWave(EnemyOrientation* moveStrategy, int size);
        static EnemyWave* createAttackWave(EnemyOrientation* moveStrategy, int size);
        static EnemyWave* createDefenseWave(EnemyOrientation* moveStrategy, int size);
        static EnemyWave* createSpeedWave(EnemyOrientation* moveStrategy, int size);

    protected:
    private:
};

#endif // ENEMYWAVEFACTORY_H
