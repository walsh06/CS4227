#ifndef ENEMYHORIZONTAL_H
#define ENEMYHORIZONTAL_H

#include <EnemyOrientation.h>


class EnemyHorizontal : public EnemyOrientation
{
    public:
        EnemyHorizontal();
        virtual ~EnemyHorizontal();

        void move(int &posX, int &posY, int speed);
    protected:
    private:
};

#endif // ENEMYHORIZONTAL_H
