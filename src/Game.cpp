#include "Game.h"


Game::Game()
{
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

        usleep(3000);
    }
}

void Game::addEnemy(EnemyInterface* enemy)
{
    enemies.push_back(enemy);
}
