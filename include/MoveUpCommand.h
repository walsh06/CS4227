#ifndef MOVEUPCOMMAND_H
#define MOVEUPCOMMAND_H
#include "PlayerMovement.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Command Class.
class MoveUpCommand:public Command
{
    public:
        MoveUpCommand(PlayerMovement* playerMovement);
        virtual ~MoveUpCommand();
        void execute();
    protected:
    private:
        PlayerMovement* playerMovement;
};
#endif // MOVEUPCOMMAND_H
