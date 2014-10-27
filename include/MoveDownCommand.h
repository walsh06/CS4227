#ifndef MOVEDOWNCOMMAND_H
#define MOVEDOWNCOMMAND_H
#include "PlayerMovement.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Command Class.
class MoveDownCommand:public Command
{
    public:
        MoveDownCommand(PlayerMovement* playerMovement);
        virtual ~MoveDownCommand();
        void execute();
    protected:
    private:
        PlayerMovement* playerMovement;
};

#endif // MOVEDOWNCOMMAND_H
