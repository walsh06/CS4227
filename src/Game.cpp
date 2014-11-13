#include "Game.h"
#include <cstdlib>

#define ATTACK 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5
#define QUIT 6
#define NONE 0

/**
 Main Game Constructor.
*/
Game::Game()
{
    this->numOfObservers = 0;
    this->percentage = 0;
    this->player = new Player();
    this->enemyCount = enemies.size();
    srand(time(NULL));

    addObserver(new AchievementSystem());
    addObserver(new SoundSystem());

    this->moveUp = new MoveUpCommand(player);
    this->moveDown = new MoveDownCommand(player);
    this->moveLeft = new MoveLeftCommand(player);
    this->moveRight = new MoveRightCommand(player);
    this->attack = new AttackCommand(player);

}

/**
 Main Game Destructor.
*/
Game::~Game()
{
    delete player;
    delete gameView;
    delete moveDown;
    delete moveUp;
    delete moveRight;
    delete moveLeft;
    delete attack;
}

/**
 Update is the game loop and starts the game.
*/
void Game::update()
{
    bool running = true;
    this->gameView = new GameView();
    int type;
    deviceAt = new DeviceButton(attack);
    deviceU = new DeviceButton(moveUp);
    deviceL = new DeviceButton(moveLeft);
    deviceD = new DeviceButton(moveDown);
    deviceR = new DeviceButton(moveRight);

    int timer = 0;
    while(running)
    {
        type = gameView->checkButtonState();

        if(type == ATTACK){
            deviceAt->press();
        }
        if(type == UP){
            deviceU->press();
        }
        if(type == DOWN){
            deviceD->press();
        }
        if(type == LEFT){
            deviceL->press();
        }
        if(type == RIGHT){
            deviceR->press();
        }
        if(type == QUIT)
        {
            std::cout<<"Exiting game"<<std::endl;
            running = false;
        }


        type = NONE;
        gameView->draw("Player", player->getXPosition(),player->getYPosition());
        //Waiting for player update, being done by Killian?
        this->player->update();
        int oldEnemyCount = enemyCount;
        for (auto &enemy : enemies) // access by reference to avoid copying
        {
            enemy->update();
            gameView->draw("Enemy", enemy->getPosX(), enemy->getPosY());
        }

        enemyCount = enemies.size();

        if (enemyCount < 1 && oldEnemyCount > 0 )
        {
            notify(GameEvent::TYPE_POINTS, 10000 - timer);
        }

        if(enemyCount < oldEnemyCount)
        {
            int difference = oldEnemyCount - enemyCount;
            notify(GameEvent::TYPE_KILLS,(difference));
            moneyDrop(difference);
        }

        this->player->update();
        //commands will be processed by client on thread
        //depending on desired input device.


        usleep(300000);

        timer += 1 ;
    }
}

/**
 Gives money to player depend on how many times.
*/
void Game::moneyDrop(int times)
{
    for(int i = 0 ; i < times ; i++)
        if(rand() % 100 < percentage)
            notify(GameEvent::TYPE_MONEY, 10);
}

/**
 Adds an enemy to the game.
*/
void Game::addEnemy(EnemyInterface* enemy)
{
    enemies.push_back(enemy);
}

/**
 Clears an enemy from the game.
*/
void Game::clearEnemies()
{
    for (auto &enemy : enemies) // access by reference to avoid copying
    {
        enemies.pop_back();
    }
}

/**
 Adds an observer to the game.
*/
void Game::addObserver(GameObserver* o)
{
    observers.push_back(o);
    numOfObservers++;
}

/**
 Removes an observer from the game.
*/
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

/**
 Notify the observers.
*/
void Game::notify(int type, int value)
{
    #pragma omp parallel for
    for(int i = 0; i < numOfObservers; i++)
    {
        GameEvent event(type, value);
        observers[i]->update(event);
    }
}

/**
 Get the percentage.
*/
int Game::getPercentage()
{
    return this->percentage;
}

/**
 Set the percentage
*/
void Game::setPercentage(int percentage)
{
    this->percentage = percentage;
}
