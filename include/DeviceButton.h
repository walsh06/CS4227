#ifndef DEVICEBUTTON_H
#define DEVICEBUTTON_H
#include "Command.h"

class DeviceButton
{
    public:
        DeviceButton(Command* command);
        virtual ~DeviceButton();
        Command* aCommand;
        void press();
    protected:
    private:
};

#endif // DEVICEBUTTON_H
