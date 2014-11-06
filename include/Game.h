#ifndef GAME_H
#define GAME_H

#include <vector>
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

    protected:
    private:

        std::vector<GameObserver *> observers;
        int numOfObservers;

        void notify(int type, int value);
};

#endif // GAME_H
