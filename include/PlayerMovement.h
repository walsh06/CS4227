#ifndef PLAYERMOVEMENT_H
#define PLAYERMOVEMENT_H
#include <iostream>

using namespace std;

class PlayerMovement
{
    public:
        PlayerMovement(const char* name);
        virtual ~PlayerMovement();
        void moveLeft();
        void moveRight();
        void moveDown();
        void moveUp();
    protected:
    private:
        const char* name;
};

#endif // PLAYERMOVEMENT_H
