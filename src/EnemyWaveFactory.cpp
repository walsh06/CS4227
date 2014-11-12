#include "EnemyWaveFactory.h"


/// Creates Wave of Basic Enemies (calls EnemyFactory) of size size
/// With the movement strategy moveStrategy
EnemyInterface* EnemyWaveFactory::createBasicWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createEnemy(moveStrategy));
    }
    return wave;

}

/// Creates Wave of Attack Enemies (calls EnemyFactory) of size size
/// With the movement strategy moveStrategy
EnemyInterface* EnemyWaveFactory::createAttackWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createAttackEnemy(moveStrategy));
    }
    return wave;
}

/// Creates Wave of Defense Enemies (calls EnemyFactory) of size size
/// With the movement strategy moveStrategy
EnemyInterface* EnemyWaveFactory::createDefenseWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createDefenseEnemy(moveStrategy));
    }
    return wave;
}

/// Creates Wave of Speed Enemies (calls EnemyFactory) of size size
/// With the movement strategy moveStrategy
EnemyInterface* EnemyWaveFactory::createSpeedWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createSpeedEnemy(moveStrategy));
    }
    return wave;
}
