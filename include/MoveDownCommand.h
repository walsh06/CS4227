#ifndef MOVEDOWNCOMMAND_H
#define MOVEDOWNCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Command Class.
class MoveDownCommand:public Command
{
    public:
        MoveDownCommand(Player* player);
        virtual ~MoveDownCommand();
        void execute();
    protected:
    private:
        Player* player;
};

#endif // MOVEDOWNCOMMAND_H
