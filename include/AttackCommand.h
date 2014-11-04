#ifndef ATTACKCOMMAND_H
#define ATTACKCOMMAND_H
#include "PlayerMovement.h"
#include <iostream>
#include "Command.h"

using namespace std;

class AttackCommand:public Command
{
   public:
        AttackCommand(PlayerMovement* playerMovement);
        virtual ~AttackCommand();
        void execute();
    protected:
    private:
        PlayerMovement* playerMovement;
};

#endif // ATTACKCOMMAND_H
