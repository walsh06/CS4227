#ifndef ATTACKCOMMAND_H
#define ATTACKCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

class AttackCommand:public Command
{
   public:
        AttackCommand(Player* player);
        virtual ~AttackCommand();
        void execute();
    protected:
    private:
        Player* player;
};

#endif // ATTACKCOMMAND_H
