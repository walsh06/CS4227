#ifndef MOVERIGHTCOMMAND_H
#define MOVERIGHTCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

/// Command to allow the player to move right.
class MoveRightCommand:public Command
{
    public:
        MoveRightCommand(Player* player);
        void execute();
    protected:
    private:
        Player* player;
};

#endif // MOVERIGHTCOMMAND_H
