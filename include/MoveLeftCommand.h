#ifndef MOVELEFTCOMMAND_H
#define MOVELEFTCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

/**
 Command to allow the player to move left.
*/
class MoveLeftCommand:public Command
{
    public:
        MoveLeftCommand(Player* player);
        void execute();
    protected:
    private:
        Player* player;
};

#endif // MOVELEFTCOMMAND_H
