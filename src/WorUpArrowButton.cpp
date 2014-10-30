#include "WorUpArrowButton.h"

//The invoker which takes a Concrete Command as a parameter.
WorUpArrowButton::WorUpArrowButton(Command* command)
{
    this->aCommand = command;
}

//Destructor.
WorUpArrowButton::~WorUpArrowButton()
{
    delete aCommand;
}

//Called when a button is pressed.
void WorUpArrowButton::press()
{
    aCommand->execute();
}
