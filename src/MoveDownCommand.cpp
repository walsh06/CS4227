#include "MoveDownCommand.h"
#include "PlayerMovement.h"

//Concrete Command to move downwards takes a player movement Reciever.
MoveDownCommand::MoveDownCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

//Destructor
MoveDownCommand::~MoveDownCommand()
{
    this->playerMovement = NULL;
    delete playerMovement;
}

//Command allowing the player to move downwards.
void MoveDownCommand::execute()
{
    playerMovement->moveDown();
}
