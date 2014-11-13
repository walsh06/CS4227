#ifndef DEVICEBUTTON_H
#define DEVICEBUTTON_H
#include "Command.h"

class DeviceButton
{
    public:
        DeviceButton(Command* command);
        virtual ~DeviceButton();
        void setCommand(Command* c);
        void press();
    protected:
    private:
        Command* aCommand;
};

#endif // DEVICEBUTTON_H
