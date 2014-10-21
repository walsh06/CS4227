#ifndef ENEMYINTERFACE_H
#define ENEMYINTERFACE_H


class EnemyInterface
{
    public:
        /** Destructor */
        virtual ~EnemyInterface() {}

        virtual void update() = 0;

    protected:
    private:
};

#endif // ENEMYINTERFACE_H
