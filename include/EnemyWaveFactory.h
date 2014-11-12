#ifndef ENEMYWAVEFACTORY_H
#define ENEMYWAVEFACTORY_H

#include "EnemyFactory.h"
#include "EnemyWave.h"
#include "EnemyInterface.h"

class EnemyWaveFactory
{
    public:
        /** Default constructor */
        EnemyWaveFactory();
        /** Default destructor */
        virtual ~EnemyWaveFactory();

        static EnemyInterface* createBasicWave(EnemyOrientation* moveStrategy, int size);
        static EnemyInterface* createAttackWave(EnemyOrientation* moveStrategy, int size);
        static EnemyInterface* createDefenseWave(EnemyOrientation* moveStrategy, int size);
        static EnemyInterface* createSpeedWave(EnemyOrientation* moveStrategy, int size);

    protected:
    private:
};

#endif // ENEMYWAVEFACTORY_H
