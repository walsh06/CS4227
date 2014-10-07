#include "GameEvent.h"

GameEvent::GameEvent(int type, int value)
{
        this->type = type;
        this->value = value;
}

GameEvent::~GameEvent()
{
    //dtor
}

int GameEvent::getType()
{
    return type;
}

int GameEvent::getValue()
{
    return value;
}
