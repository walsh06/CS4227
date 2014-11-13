#include "Enemy.h"

/**
 Enemy Constructor, calls super constructor.
 Initializes health, attack, defense, speed, and strategy of the player
*/
Enemy::Enemy() :
EnemyInterface()
{
    this->health = 10;
    this->attack = 1;
    this->defense = 1;
    this->speed = 1;
    this->moveStrategy = new EnemyHorizontal();

    posX = 10;
    posY = 10;
}

/**
 Enemy destrcutor. Deletes pointer to moveStrategy
*/
Enemy::~Enemy()
{
    delete this->moveStrategy;
}

/**
 Enemy update method. Handles Enemy movement and health
*/
void Enemy::update()
{
    //update the enemies each tick
    moveStrategy->moveDirection(posX, posY, speed);

    //if enemy's health is 0 or less delete the enemy
    if(this-> health < 1){
        delete this;
    }
}

/**
 Draws the enemy to the view.
*/
void Enemy::draw(GameView* view)
{
    view->draw("Enemy", posX, posY);
}

/**
 Returns the enemy's health.
*/
int Enemy::getHealth()
{
    return this->health;
}

/**
 Set the enemy health
*/
void Enemy::setHealth(int health)
{
    this->health = health;
}

/**
 Returns the enemy's Attack.
*/
int Enemy::getAttack()
{
    return this->attack;
}

/**
 Returns the enemy's Defense.
*/
int Enemy::getDefense()
{
    return this->defense;
}

/**
 Returns the enemy's Speed.
*/
int Enemy::getSpeed()
{
    return this->speed;
}

/**
 Set the strategy of the Enemy.
*/
void Enemy::setStrategy(EnemyOrientation* moveStrategy)
{
    this->moveStrategy = moveStrategy;
}

/**
 Returns the enemy's x coordinate.
*/
int Enemy::getPosX()
{
    return this->posX;
}

/**
 Returns the enemy's y coordinate.
*/
int Enemy::getPosY()
{
    return this->posY;
}
