#ifndef GAME_H
#define GAME_H

#include <vector>
#include "AchievementSystem.h"
#include "SoundSystem.h"
#include "EnemyInterface.h"
#include "EnemyWave.h"
#include "EnemyFactory.h"
#include "Player.h"
#include <unistd.h>
#include <iostream>


using namespace std;

class Game  : public GameSubject
{
    public:

        static const int TYPE_KILLS = 1, TYPE_POINTS = 2, TYPE_MONEY = 3;

        vector<EnemyInterface *> enemies;
        Player* player;
        /** Default constructor */
        Game();
        /** Default destructor */
        virtual ~Game();
        void update();
        void addEnemy(EnemyInterface* enemy);
        void addObserver(GameObserver* o);
        void removeObserver(GameObserver* o);
        int getPercentage();
        void setPercentage(int percentage);

    protected:
    private:
        void moneyDrop(int times);
        std::vector<GameObserver *> observers;
        int numOfObservers;
        int enemyCount;
        int percentage;

        void notify(int type, int value);
};

#endif // GAME_H
