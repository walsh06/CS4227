#include "GameEvent.h"

/**
 Constructor: Creates a game event.
*/
GameEvent::GameEvent(int type, int value)
{
    this->type = type;
    this->value = value;
}

/**
 Destructor: Removes a game event.
*/
GameEvent::~GameEvent()
{
    //dtor
}

/**
 Returns the type.
*/
int GameEvent::getType()
{
    return type;
}

/**
 Returns the value.
*/
int GameEvent::getValue()
{
    return value;
}
