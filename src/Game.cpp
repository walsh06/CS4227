#include "Game.h"


Game::Game()
{
    this->numOfObservers = 0;
    this->player = new Player();
}

Game::~Game()
{
    //dtor
}

void Game::update()
{
    while(true)
    {
        //Waiting for player update, being done by Killian?
        //this->player->update();

        for (auto &enemy : enemies) // access by reference to avoid copying
        {
            enemy->update();
        }

        this->player->update();

        usleep(3000);
    }
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
    for(int i = 0; i < numOfObservers; i++)
    {
        GameEvent event(type, value);
        observers[i]->update(event);
    }
}
