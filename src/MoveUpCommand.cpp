#include "MoveUpCommand.h"
#include "PlayerMovement.h"

MoveUpCommand::MoveUpCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

MoveUpCommand::~MoveUpCommand()
{
    this->playerMovement = NULL;
}

void MoveUpCommand::execute()
{
    playerMovement->moveUp();
}
