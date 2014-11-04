#ifndef ENEMYVERTICAL_H
#define ENEMYVERTICAL_H

#include <EnemyOrientation.h>


class EnemyVertical : public EnemyOrientation
{
    public:
        EnemyVertical();
        virtual ~EnemyVertical();

        void move(int &posX, int &posY, int speed);
    protected:
    private:
};

#endif // ENEMYVERTICAL_H