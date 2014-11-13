#include "AttackCommand.h"
#include "Player.h"

/// This is the Concrete Command for attacking.
/// Constructor: takes a player pointer.
AttackCommand::AttackCommand(Player* player)
{
    this->player = player;
}

/// Command allowing the player to move downwards.
/// Executes calls the players attack method.
void AttackCommand::execute()
{
    player->moveDown();
}

