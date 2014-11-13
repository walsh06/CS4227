#include "GameDemo.h"

GameDemo::GameDemo()
{
    game = new Game();
}

GameDemo::~GameDemo()
{
    //dtor
}

void GameDemo::runDemo()
{
    char input = ' ';
    while(true)
    {
        cout << "(R)un Demo | (A)dd enemy | (D)elete All Enemies" << endl;
        cin >> input;

        switch(input)
        {
            case('r'):
            case('R'):
                game->update();
            break;

            case('a'):
            case('A'):
            {
                EnemyInterface* e = EnemyFactory::createEnemy(new EnemyHorizontal);
                game->addEnemy(e);
            }
            break;

            case('d'):
            case('D'):
                game->clearEnemies();
            break;

            default:
                break;

        }



    }
}
