#include "MoveUpCommand.h"
#include "Player.h"

//Concrete Command to move upwards takes a player movement Reciever.
MoveUpCommand::MoveUpCommand(Player* player)
{
    this->player = player;
}

//Destructor
MoveUpCommand::~MoveUpCommand()
{
    this->player = NULL;
    delete player;
}

//Command allowing the player to move upwards.
void MoveUpCommand::execute()
{
    player->moveUp();
}