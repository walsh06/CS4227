#include "Context.h"

Context::Context(int type, std::string message)
{
    this->type = type;
    this->message = message;
}

Context::~Context()
{
    //dtor
}

int Context::getType()
{
    return type;
}

std::string Context::getMessage()
{
    return message;
}
