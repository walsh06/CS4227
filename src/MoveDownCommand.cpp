#include "MoveDownCommand.h"
#include "Player.h"

/**
 This is the Concrete Command for attacking.
 Constructor: takes a player pointer.
*/
MoveDownCommand::MoveDownCommand(Player* player)
{
    this->player = player;
}

/**
 Command allowing the player to move downwards.
 Executes calls the players move down method.
*/
void MoveDownCommand::execute()
{
    player->moveDown();
}
