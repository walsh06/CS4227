#ifndef MOVELEFTCOMMAND_H
#define MOVELEFTCOMMAND_H
#include "PlayerMovement.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Concrete Command Header.
class MoveLeftCommand:public Command
{
    public:
        MoveLeftCommand(PlayerMovement* playerMovement);
        virtual ~MoveLeftCommand();
        void execute();
    protected:
    private:
        PlayerMovement* playerMovement;
};

#endif // MOVELEFTCOMMAND_H
