#include "MoveRightCommand.h"
#include "PlayerMovement.h"

MoveRightCommand::MoveRightCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

MoveRightCommand::~MoveRightCommand()
{
    this->playerMovement = NULL;
}

void MoveRightCommand::execute()
{
    playerMovement->moveLeft();
}
