#include "MoveUpCommand.h"
#include "PlayerMovement.h"

//Concrete Command to move upwards takes a player movement Reciever.
MoveUpCommand::MoveUpCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

//Destructor
MoveUpCommand::~MoveUpCommand()
{
    this->playerMovement = NULL;
    delete playerMovement;
}

//Command allowing the player to move upwards.
void MoveUpCommand::execute()
{
    playerMovement->moveUp();
}
