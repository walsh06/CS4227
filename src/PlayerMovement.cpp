#include "PlayerMovement.h"
#include <iostream>


//Reciever for the commands.
PlayerMovement::PlayerMovement(const char* name)
{
    this->name = name;
}

PlayerMovement::~PlayerMovement()
{
    this->name = NULL;
}

void PlayerMovement::moveLeft()
{
    cout<<"Player moving left"<<endl;
}

void PlayerMovement::moveRight()
{
    cout<<"Player moving right"<<endl;
}

void PlayerMovement::moveDown()
{
    cout<<"Player moving down"<<endl;
}

void PlayerMovement::moveUp()
{
    cout<<"Player moving up"<<endl;
}
