#include "EnemyWave.h"

EnemyWave::EnemyWave(int waveSize)
{
    this->waveSize = waveSize;
}

EnemyWave::~EnemyWave()
{
    //dtor
}

void EnemyWave::addEnemy(EnemyInterface* enemy)
{
    wave.push_back(enemy);
}
void EnemyWave::removeEnemy(EnemyInterface* enemy)
{

}

EnemyInterface* EnemyWave::getEnemy(int enemyIndex)
{
    return wave[enemyIndex];
}

void EnemyWave::setHealth(int health)
{
    for(int i = 0; i < waveSize; i++)
    {
        wave[i]->setHealth(health);
    }
}

void EnemyWave::setPower(int power)
{
    for(int i = 0; i < waveSize; i++)
    {
        wave[i]->setPower(power);
    }
}
