#ifndef ENEMYVERTICAL_H
#define ENEMYVERTICAL_H

#include <EnemyOrientation.h>


class EnemyVertical : public EnemyOrientation
{
    public:
        void moveDirection(int &posX, int &posY, int speed);
    protected:
    private:
};

#endif // ENEMYVERTICAL_H
