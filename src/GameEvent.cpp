#include "GameEvent.h"

GameEvent::GameEvent(int type, int value)
{
        this->type = type;
        this->value = value;
}

GameEvent::~GameEvent()
{

}

int GameEvent::getType()
{
    return type;
}

int GameEvent::getValue()
{
    return value;
}
