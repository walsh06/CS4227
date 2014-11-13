#include "MoveLeftCommand.h"
#include "Player.h"

/**
 This is the Concrete Command for moving left.
 Constructor: takes a player pointer.
*/
MoveLeftCommand::MoveLeftCommand(Player* player)
{
    this->player = player;
}

/**
 Command allowing the player to move left.
 Executes calls the players move left method.
*/
void MoveLeftCommand::execute()
{
    player->moveLeft();
}
