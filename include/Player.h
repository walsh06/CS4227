#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "GameObserver.h"
#include "GameSubject.h"
class Player : public GameSubject
{
    public:
        Player();
        virtual ~Player();

        int getPoints();
        int getKillCount();
        int getMoney();
        int getXPosition();
        int getYPosition();
        void setPoints(int points);
        void setKillCount(int kills);
        void setMoney(int money);
        void setXPosition(int x);
        void setYPosition(int y);

        //Commands to move the player across the screen
        void moveLeft();
        void moveRight();
        void moveDown();
        void moveUp();

        void addObserver(GameObserver* o);
        void removeObserver(GameObserver* o);
    protected:
        void notify(int type, int value);
    private:

        std::vector<GameObserver *> observers;
        int numOfObservers;
        int killCount, points, money, xPos, yPos;
};

#endif // PLAYER_H
