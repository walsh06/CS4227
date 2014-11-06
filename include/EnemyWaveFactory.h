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

        static EnemyWave* createBasicWave(int size);
        static EnemyWave* createAttackWave(int size);
        static EnemyWave* createDefenseWave(int size);
        static EnemyWave* createSpeedWave(int size);

    protected:
    private:
};

#endif // ENEMYWAVEFACTORY_H
