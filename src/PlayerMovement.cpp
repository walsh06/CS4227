#include "PlayerMovement.h"
#include <iostream>


//Reciever Class. Contains the implementions of the move commands.
PlayerMovement::PlayerMovement(const char* name)
{
    this->name = name;
}

//Destructor.
PlayerMovement::~PlayerMovement()
{
    this->name = NULL;
    delete name;
}

//Allows the player to move left.
void PlayerMovement::moveLeft()
{
    cout<<"Player moving left"<<endl;
}

//Allows the player to move right.
void PlayerMovement::moveRight()
{
    cout<<"Player moving right"<<endl;
}

//Allows the player to move downwards.
void PlayerMovement::moveDown()
{
    cout<<"Player moving down"<<endl;
}

//Allows the player to move upwards.
void PlayerMovement::moveUp()
{
    cout<<"Player moving up"<<endl;
}
