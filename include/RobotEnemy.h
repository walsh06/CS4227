#ifndef ROBOTENEMY_H
#define ROBOTENEMY_H

#include <EnemyInterface.h>
#include "EnemyOrientation.h"
#include "EnemyHorizontal.h"
#include "EnemyVertical.h"

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

        void update();


    protected:
    private:
        int health, power, speed;
        int posX, posY;

        EnemyOrientation* moveStrategy;

};

#endif // ROBOTENEMY_H
