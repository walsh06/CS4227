#ifndef MOVERIGHTCOMMAND_H
#define MOVERIGHTCOMMAND_H
#include "PlayerMovement.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Command Class.
class MoveRightCommand:public Command
{
    public:
        MoveRightCommand(PlayerMovement* playerMovement);
        virtual ~MoveRightCommand();
        void execute();
    protected:
    private:
        PlayerMovement* playerMovement;
};

#endif // MOVERIGHTCOMMAND_H
