#ifndef MOVEDOWNCOMMAND_H
#define MOVEDOWNCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

/// Command to allow the player to move downwards.
class MoveDownCommand:public Command
{
    public:
        MoveDownCommand(Player* player);
        void execute();
    protected:
    private:
        Player* player;
};

#endif // MOVEDOWNCOMMAND_H
