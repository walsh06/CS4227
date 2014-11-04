#ifndef MOVEUPCOMMAND_H
#define MOVEUPCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Command Class.
class MoveUpCommand:public Command
{
    public:
        MoveUpCommand(Player* player);
        virtual ~MoveUpCommand();
        void execute();
    protected:
    private:
        Player* player;
};
#endif // MOVEUPCOMMAND_H
