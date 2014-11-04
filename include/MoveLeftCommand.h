#ifndef MOVELEFTCOMMAND_H
#define MOVELEFTCOMMAND_H
#include "Player.h"
#include <iostream>
#include "Command.h"

using namespace std;

//Concrete Command Header.
class MoveLeftCommand:public Command
{
    public:
        MoveLeftCommand(Player* player);
        virtual ~MoveLeftCommand();
        void execute();
    protected:
    private:
        Player* player;
};

#endif // MOVELEFTCOMMAND_H
