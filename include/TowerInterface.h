#ifndef TOWERINTERFACE_H
#define TOWERINTERFACE_H


class TowerInterface
{
    public:
        /** Destructor */
        virtual ~TowerInterface() {}

        virtual int getHealth() = 0;
        virtual void setHealth(int health) = 0;

        virtual int getPower() = 0;
        virtual void setPower(int power) = 0;

		virtual int getX() = 0;
		virtual void setX(int x) = 0;

		virtual int getY() = 0;
		virtual void setY(int y) = 0;

    protected:
    private:
};

#endif // TOWERINTERFACE_H
