#include "AttackCommand.h"

AttackCommand::AttackCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

//Destructor
AttackCommand::~AttackCommand()
{
    this->playerMovement = NULL;
    delete playerMovement;
}

//Command allowing the player to move downwards.
void AttackCommand::execute()
{
    playerMovement->moveDown();
}

