#ifndef TOWER_H
#define TOWER_H

#include <TowerInterface.h>


class Tower : public TowerInterface
{
    public:
        /** Default constructor */
        Tower(int x, int y);
        /** Default destructor */
        virtual ~Tower(int x, int y);

        void placeTower();
        void removeTower();

        int getHealth();
        void setHealth(int health);

        int getPower();
        void setPower(int power);

		int getX();
		void setX(int x);

        int getY();
        void setY(int y);


    protected:
    private:
        int health;
        int power;
		int x;
		int y;
};

#endif // TOWER_H
