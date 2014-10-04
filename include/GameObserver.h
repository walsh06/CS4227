#ifndef GAMEOBSERVER_H
#define GAMEOBSERVER_H

#include "GameEvent.h"
class GameObserver
{
    public:
        virtual void update(GameEvent event) = 0;
};

#endif // GAMEOBSERVER_H
