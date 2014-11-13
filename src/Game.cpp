#include "Game.h"
#include <cstdlib>

#define ATTACK 1
#define LEFT 2
#define RIGHT 3
#define UP 4
#define DOWN 5
#define QUIT 6
#define NONE 0

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
            enemy->draw(gameView);
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

void Game::moneyDrop(int times)
{
    for(int i = 0 ; i < times ; i++)
        if(rand() % 100 < percentage)
            notify(GameEvent::TYPE_MONEY, 10);
}

void Game::addEnemy(EnemyInterface* enemy)
{
    enemies.push_back(enemy);
}

void Game::clearEnemies()
{
    for (auto &enemy : enemies) // access by reference to avoid copying
    {
        enemies.pop_back();
    }
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
