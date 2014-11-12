#include "EnemyWave.h"

EnemyWave::EnemyWave(int waveSize)
{
    this->waveSize = waveSize;
}

EnemyWave::~EnemyWave()
{
    for(int i =0; i < waveSize; i++)
    {
        delete wave[i];
    }
}

void EnemyWave::update()
{
    //update the enemies each tick
    for (int i = 0; i < waveSize; i++ )
    {
        wave[i]->update();
    }

    if (waveSize < 1)
    {
        delete this;
    }
}

void EnemyWave::draw(GameView* view)
{
    for (int i = 0; i < waveSize; i++ )
    {
        wave[i]->draw(view);
    }
}

void EnemyWave::addEnemy(EnemyInterface* enemy)
{
    wave.push_back(enemy);
    waveSize++;
}

void EnemyWave::removeEnemy(EnemyInterface* enemy)
{
    for(int i = 0; i < waveSize; i++)
    {
        if(wave[i] == enemy)
        {
            wave.erase(wave.begin() + i);
            waveSize--;
            break;
        }
    }
}

EnemyInterface* EnemyWave::getEnemy(int enemyIndex)
{
    return wave[enemyIndex];
}
