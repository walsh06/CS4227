#include "MoveLeftCommand.h"
#include "PlayerMovement.h"

//Concrete Command to move left takes a player movement Reciever.
MoveLeftCommand::MoveLeftCommand(PlayerMovement* playerMovement)
{
    this->playerMovement = playerMovement;
}

//Destructor
MoveLeftCommand::~MoveLeftCommand()
{
    this->playerMovement = NULL;
    delete playerMovement;

}

//Command allowing the player to move left.
void MoveLeftCommand::execute()
{
    playerMovement->moveLeft();
}
