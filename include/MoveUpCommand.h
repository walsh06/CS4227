#ifndef MOVEUPCOMMAND_H
#define MOVEUPCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

/// Command to allow the player to move upwards.
class MoveUpCommand:public Command
{
    public:
        MoveUpCommand(Player* player);
        void execute();
    protected:
    private:
        Player* player;
};
#endif // MOVEUPCOMMAND_H
