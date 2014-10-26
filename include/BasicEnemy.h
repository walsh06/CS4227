#ifndef BASICENEMY_H
#define BASICENEMY_H

#include <Enemy.h>


class BasicEnemy : public Enemy
{
    public:

        int getHealth() ;
        int getAttack()  ;
        int getDefense()  ;
        int getSpeed() ;
        void setHealth(int health) ;
        /** Default constructor */
        BasicEnemy();
        /** Default destructor */
        virtual ~BasicEnemy();
    protected:

    protected:
    private:
};

#endif // BASICENEMY_H
