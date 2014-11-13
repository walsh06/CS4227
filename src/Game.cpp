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
 Game is our MVC Controller.
 Constructor: Starts the game and declares
 all the command, devices, observers, ect.
 that is neded by the game.
*/
Game::Game()
{
    this->numOfObservers = 0;
    this->percentage = 0;
    this->player = new Player();
    this->enemyCount = enemies.size();

    addObserver(new AchievementSystem());
    addObserver(new SoundSystem());

    this->moveUp = new MoveUpCommand(player);
    this->moveDown = new MoveDownCommand(player);
    this->moveLeft = new MoveLeftCommand(player);
    this->moveRight = new MoveRightCommand(player);
    this->attack = new AttackCommand(player);

}

/**
 Deletes everything when the game ends.
 This stops memory leaks.
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
 Starts the game and continusely runs
 until the uses calls QUIT.
*/
void Game::update()
{
    bool running = true;
    this->gameView = new GameView();
    int type;

    // Adding the commands to the device buttons
    deviceAt = new DeviceButton(attack);
    deviceU = new DeviceButton(moveUp);
    deviceL = new DeviceButton(moveLeft);
    deviceD = new DeviceButton(moveDown);
    deviceR = new DeviceButton(moveRight);

    int timer = 0;
    // main loop of the game.
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

        //Set type to none as no button was pressed.
        type = NONE;
        // draws the player to the new x and y positions.
        gameView->draw(player->getXPosition(),player->getYPosition());
        this->player->update();
        //commands will be processed by client on thread
        //depending on desired input device.

        int oldEnemyCount = enemyCount;
        for (auto &enemy : enemies) // access by reference to avoid copying
        {
            enemy->update();
            enemy->draw(gameView);
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
