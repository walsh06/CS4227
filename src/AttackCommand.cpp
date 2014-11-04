#include "AttackCommand.h"
#include "Player.h"

AttackCommand::AttackCommand(Player* player)
{
    this->player = player;
}

//Destructor
AttackCommand::~AttackCommand()
{
    this->player = NULL;
    delete player;
}

//Command allowing the player to move downwards.
void AttackCommand::execute()
{
    player->moveDown();
}

