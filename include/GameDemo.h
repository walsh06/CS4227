#ifndef GAMEDEMO_H
#define GAMEDEMO_H

#include <iostream>
#include <vector>
#include "Game.h"
#include "Enemy.h"
#include "EnemyFactory.h"
#include "EnemyHorizontal.h"


class GameDemo
{
    public:
        /** Default constructor */
        GameDemo() ;
        /** Default destructor */
        virtual ~GameDemo() ;

        void runDemo();
    protected:
    private:
        Game* game;
};

#endif // GAMEDEMO_H
