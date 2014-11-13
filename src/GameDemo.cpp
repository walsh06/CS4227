#include "GameDemo.h"

/**
 Constructor: Creates a game demo.
*/
GameDemo::GameDemo()
{
    game = new Game();
}

/**
 Destructor: Removes a game demo.
*/
GameDemo::~GameDemo()
{
    delete game;
}

/**
 Runs the game demo.
*/
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
