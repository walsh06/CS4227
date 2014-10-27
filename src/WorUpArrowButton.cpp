#include "WorUpArrowButton.h"

WorUpArrowButton::WorUpArrowButton(Command* command)
{
    this->aCommand = command;
}

WorUpArrowButton::~WorUpArrowButton()
{
    //dtor
}
void WorUpArrowButton::press()
{
    aCommand->execute();
}
