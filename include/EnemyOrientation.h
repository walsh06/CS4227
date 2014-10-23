#ifndef ENEMYORIENTATION_H
#define ENEMYORIENTATION_H


class EnemyOrientation
{
    public:
        virtual void move(int &posX, int &posY, int speed) = 0;
    protected:
    private:
};

#endif // ENEMYORIENTATION_H
