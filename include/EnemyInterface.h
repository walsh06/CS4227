#ifndef ENEMYINTERFACE_H
#define ENEMYINTERFACE_H

#include "GameView.h"

class EnemyInterface
{
    public:
        /** Destructor */
        virtual ~EnemyInterface() {}

        virtual void update() = 0;

        virtual void draw(GameView* view) = 0;
    protected:
    private:
};

#endif // ENEMYINTERFACE_H
