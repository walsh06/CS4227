#include "EnemyWaveFactory.h"


EnemyWave* EnemyWaveFactory::createBasicWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createEnemy(moveStrategy));
    }
    return wave;

}

EnemyWave* EnemyWaveFactory::createAttackWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createAttackEnemy(moveStrategy));
    }
    return wave;
}

EnemyWave* EnemyWaveFactory::createDefenseWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createDefenseEnemy(moveStrategy));
    }
    return wave;
}

EnemyWave* EnemyWaveFactory::createSpeedWave(EnemyOrientation* moveStrategy, int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createSpeedEnemy(moveStrategy));
    }
    return wave;
}
