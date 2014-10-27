#include "AorLeftArrowButton.h"

AorLeftArrowButton::AorLeftArrowButton(Command* command)
{
    this->aCommand = command;
}

AorLeftArrowButton::~AorLeftArrowButton()
{
    //dtor
}
void AorLeftArrowButton::press()
{
    aCommand->execute();
}

