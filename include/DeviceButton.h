#ifndef DEVICEBUTTON_H
#define DEVICEBUTTON_H
#include "Command.h"


/**
 Contains a command and will be linked to a button
 When the button is pressed the command will be executed.
*/
class DeviceButton
{
    public:
        DeviceButton(Command* command);
        virtual ~DeviceButton();
        void press();
    protected:
    private:
        Command* aCommand;
};

#endif // DEVICEBUTTON_H
