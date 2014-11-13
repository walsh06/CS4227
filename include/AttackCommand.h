#ifndef ATTACKCOMMAND_H
#define ATTACKCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

/**
 The Command which will allow the player to attack
 enemy ships.
*/
class AttackCommand:public Command
{
   public:
        AttackCommand(Player* player);
        void execute();
    protected:
    private:
        Player* player;
};

#endif // ATTACKCOMMAND_H
