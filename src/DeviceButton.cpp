#include "DeviceButton.h"

//The invoker which takes a Concrete Command as a parameter.
DeviceButton::DeviceButton(Command* command)
{
    this->aCommand = command;
}

//Destructor.
DeviceButton::~DeviceButton()
{
    delete aCommand;
}

//Called when a button is pressed.
void DeviceButton::press()
{
    aCommand->execute();
}

void DeviceButton::setCommand(Command* c)
{
    aCommand = c;
}
