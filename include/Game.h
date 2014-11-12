#ifndef GAME_H
#define GAME_H

#include <vector>
#include "EnemyInterface.h"
#include "EnemyWave.h"
#include "EnemyFactory.h"
#include "Player.h"
#include "GameView.h"
#include "DeviceButton.h"
#include "MoveUpCommand.h"
#include "MoveDownCommand.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "AttackCommand.h"
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
        GameView* gameView;
        DeviceButton* deviceAt;
        DeviceButton* deviceL;
        DeviceButton* deviceR;
        DeviceButton* deviceU;
        DeviceButton* deviceD;
        MoveUpCommand* moveUp;
        MoveDownCommand* moveDown;
        MoveLeftCommand* moveLeft;
        MoveRightCommand* moveRight;
        AttackCommand* attack;
        void moneyDrop(int times);
        std::vector<GameObserver *> observers;
        int numOfObservers;
        int enemyCount;
        int percentage;

        void notify(int type, int value);
};

#endif // GAME_H
