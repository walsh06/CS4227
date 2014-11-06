#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "GameObserver.h"
#include "GameSubject.h"
class Player
{
    public:
        Player();
        virtual ~Player();

        int getPoints();
        int getKillCount();
        int getMoney();
        int getHealth();
        void setHealth(int health);
        void setPoints(int points);
        void setKillCount(int kills);
        void setMoney(int money);
        void update();

    protected:
    private:
        int health;
        int killCount, points, money;
};

#endif // PLAYER_H
