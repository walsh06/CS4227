#include "MoveLeftCommand.h"
#include "PlayerMovement.h"

MoveLeftCommand::MoveLeftCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

MoveLeftCommand::~MoveLeftCommand()
{
    this->playerMovement = NULL;
}

void MoveLeftCommand::execute()
{
    playerMovement->moveLeft();
}
