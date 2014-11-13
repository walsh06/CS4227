#include "MoveUpCommand.h"
#include "Player.h"

/// This is the Concrete Command for moving upwards.
/// Constructor: takes a player pointer.
MoveUpCommand::MoveUpCommand(Player* player)
{
    this->player = player;
}

/// Command allowing the player to move up.
/// Executes calls the players move up method.
void MoveUpCommand::execute()
{
    player->moveUp();
}
