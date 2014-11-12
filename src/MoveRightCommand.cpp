#include "MoveRightCommand.h"
#include "Player.h"

//Concrete Command to move right takes a player movement Reciever.
MoveRightCommand::MoveRightCommand(Player* player)
{
    this->player = player;
}

//Destructor
MoveRightCommand::~MoveRightCommand()
{
}

//Command allowing the player to move right.
void MoveRightCommand::execute()
{
    player->moveRight();
}
