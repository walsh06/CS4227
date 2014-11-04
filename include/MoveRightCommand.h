#ifndef MOVERIGHTCOMMAND_H
#define MOVERIGHTCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Concrete Command Header.
class MoveRightCommand:public Command
{
    public:
        MoveRightCommand(Player* player);
        virtual ~MoveRightCommand();
        void execute();
    protected:
    private:
        Player* player;
};

#endif // MOVERIGHTCOMMAND_H
