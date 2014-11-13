#include "MoveRightCommand.h"
#include "Player.h"

/// This is the Concrete Command for moving left.
/// Constructor: takes a player pointer.
MoveRightCommand::MoveRightCommand(Player* player)
{
    this->player = player;
}

/// Command allowing the player to move right.
/// Executes calls the players move right method.
void MoveRightCommand::execute()
{
    player->moveRight();
}
