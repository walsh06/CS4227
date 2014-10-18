#ifndef ENEMYINTERFACE_H
#define ENEMYINTERFACE_H


class EnemyInterface
{
    public:
        /** Destructor */
        virtual ~EnemyInterface() {}

        virtual void setHealth(int health) = 0;

        virtual void setPower(int power) = 0;

    protected:
    private:
};

#endif // ENEMYINTERFACE_H
