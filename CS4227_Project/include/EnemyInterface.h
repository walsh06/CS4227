#ifndef ENEMYINTERFACE_H
#define ENEMYINTERFACE_H


class EnemyInterface
{
    public:
        /** Destructor */
        virtual ~EnemyInterface() {}

        virtual int getHealth() = 0;
        virtual void setHealth(int health) = 0;

        virtual int getPower() = 0;
        virtual void setPower(int power) = 0;

    protected:
    private:
};

#endif // ENEMYINTERFACE_H
