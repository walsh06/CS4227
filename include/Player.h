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
        void setPoints(int points);
        void setKillCount(int kills);
        void setMoney(int money);

        void addObserver(GameObserver* o);
        void removeObserver(GameObserver* o);
    protected:
        void notify(int type, int value);
    private:

        std::vector<GameObserver *> observers;
        int numOfObservers;
        int killCount, points, money;
};

#endif // PLAYER_H
