#include "MoveRightCommand.h"
#include "PlayerMovement.h"

//Concrete Command to move right takes a player movement Reciever.
MoveRightCommand::MoveRightCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

//Destructor
MoveRightCommand::~MoveRightCommand()
{
    this->playerMovement = NULL;
    delete playerMovement;
}

//Command allowing the player to move right.
void MoveRightCommand::execute()
{
    playerMovement->moveRight();
}
