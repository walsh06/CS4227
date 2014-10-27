#ifndef WORUPARROWBUTTON_H
#define WORUPARROWBUTTON_H
#include "Command.h"

class WorUpArrowButton
{
    public:
        WorUpArrowButton(Command* command);
        virtual ~WorUpArrowButton();
        Command* aCommand;
        void press();
    protected:
    private:
};

#endif // WORUPARROWBUTTON_H
