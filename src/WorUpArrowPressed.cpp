#include "WorUpArrowPressed.h"

WorUpArrowPressed::WorUpArrowPressed(Command* command)
{
    aCommand = command;
}

WorUpArrowPressed::~WorUpArrowPressed()
{
    //this->aCommand = NULL;
}

void WorUpArrowPressed::press()
{
    aCommand->execute();
}
