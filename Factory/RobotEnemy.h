#ifndef ROBOTENEMY_H
#define ROBOTENEMY_H

#include <EnemyInterface.h>


class RobotEnemy : public EnemyInterface
{
    public:
        /** Default constructor */
        RobotEnemy();
        /** Default destructor */
        virtual ~RobotEnemy();


        int getHealth();
        void setHealth(int health);

        int getPower();
        void setPower(int power);


    protected:
    private:
        int health;
        int power;
};

#endif // ROBOTENEMY_H
