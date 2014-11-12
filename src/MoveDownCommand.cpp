#include "MoveDownCommand.h"
#include "Player.h"

//Concrete Command to move downwards takes a player movement Reciever.
MoveDownCommand::MoveDownCommand(Player* player)
{
    this->player = player;
}

//Destructor
MoveDownCommand::~MoveDownCommand()
{

}

//Command allowing the player to move downwards.
void MoveDownCommand::execute()
{
    player->moveDown();
}
