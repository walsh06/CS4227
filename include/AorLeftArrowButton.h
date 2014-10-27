#ifndef AORLEFTARROWBUTTON_H
#define AORLEFTARROWBUTTON_H
#include "Command.h"

class AorLeftArrowButton
{
    public:
        AorLeftArrowButton(Command* command);
        virtual ~AorLeftArrowButton();
        Command* aCommand;
        void press();
    protected:
    private:
};

#endif // AORLEFTARROWBUTTON_H
