#include "Game.h"


Game::Game()
{
    this->numOfObservers = 0;
    this->percentage = 0;
    this->player = new Player();
    this->enemyCount = enemies.size();
}

Game::~Game()
{
    delete player;
}

void Game::update()
{
    int timer = 0;
    while(true)
    {
        //Waiting for player update, being done by Killian?
        //this->player->update();
        int oldEnemyCount = enemyCount;
        for (auto &enemy : enemies) // access by reference to avoid copying
        {
            enemy->update();
        }

        enemyCount = enemies.size();

        if (enemyCount < 1)
        {
            notify(TYPE_POINTS, 10000 - timer);
        }

        if(enemyCount < oldEnemyCount)
        {
            int difference = oldEnemyCount - enemyCount;
            notify(TYPE_KILLS,(difference));
            moneyDrop(difference);
        }

        this->player->update();
        //commands will be processed by client on thread
        //depending on desired input device.


        usleep(30000);

        timer += 1 ;
    }
}

void Game::moneyDrop(int times)
{
    for(int i = 0 ; i < times ; i++)
        if(rand() % 100 < percentage)
            notify(TYPE_MONEY, 10);
}

void Game::addEnemy(EnemyInterface* enemy)
{
    enemies.push_back(enemy);
}

void Game::addObserver(GameObserver* o)
{
    observers.push_back(o);
    numOfObservers++;
}
void Game::removeObserver(GameObserver* o)
{
    for(int i = 0; i < numOfObservers; i++)
    {
        if(observers[i] == o)
        {
            observers.erase(observers.begin() + i);
            numOfObservers--;
        }
    }
}

void Game::notify(int type, int value)
{
    #pragma omp parallel for
    for(int i = 0; i < numOfObservers; i++)
    {
        GameEvent event(type, value);
        observers[i]->update(event);
    }
}

int Game::getPercentage()
{
    return this->percentage;
}

void Game::setPercentage(int percentage)
{
    this->percentage = percentage;
}
