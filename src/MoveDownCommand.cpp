#include "MoveDownCommand.h"
#include "PlayerMovement.h"

MoveDownCommand::MoveDownCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

MoveDownCommand::~MoveDownCommand()
{
    this->playerMovement = NULL;
}

void MoveDownCommand::execute()
{
    playerMovement->moveLeft();
}
