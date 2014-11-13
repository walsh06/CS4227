#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "GameObserver.h"
#include "GameSubject.h"

/**
 The player class is part of the Model of the MVC
 It holds and manipulates the data of the model.
*/
class Player
{
    public:
        Player();

        int getPoints();
        int getKillCount();
        int getMoney();
        int getHealth();
        void setHealth(int health);
        void update();
        int getXPosition();
        int getYPosition();
        void setPoints(int points);
        void setKillCount(int kills);
        void setMoney(int money);
        void setXPosition(int x);
        void setYPosition(int y);

        //Commands to move the player across the screen
        void attack();
        void moveLeft();
        void moveRight();
        void moveDown();
        void moveUp();

    protected:
    private:
        int health;
        int killCount, points, money, xPos, yPos;
};

#endif // PLAYER_H
