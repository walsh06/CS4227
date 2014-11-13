#include "DeviceButton.h"

///The invoker which takes a Concrete Command as a parameter.
DeviceButton::DeviceButton(Command* command)
{
    this->aCommand = command;
}

///Destructor: deletes the command object when
/// this object is being deleted.
DeviceButton::~DeviceButton()
{
    delete aCommand;
}

///Called when a button is pressed.
/// This method calls execute on the stored command.
void DeviceButton::press()
{
    aCommand->execute();
}
