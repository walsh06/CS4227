#include "EnemyWaveFactory.h"


EnemyWave* EnemyWaveFactory::createBasicWave(int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createEnemy());
    }
    return wave;

}

EnemyWave* EnemyWaveFactory::createAttackWave(int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createAttackEnemy());
    }
    return wave;
}

EnemyWave* EnemyWaveFactory::createDefenseWave(int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createDefenseEnemy());
    }
    return wave;
}

EnemyWave* EnemyWaveFactory::createSpeedWave(int size)
{
    EnemyWave *wave = new EnemyWave(size);
    for(int i = 0; i < size; i++)
    {
        wave->addEnemy(EnemyFactory::createSpeedEnemy());
    }
    return wave;
}
