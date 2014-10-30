#ifndef WORUPARROWPRESSED_H
#define WORUPARROWPRESSED_H
#include "Command.h"

class WorUpArrowPressed
{
    public:
        WorUpArrowPressed(Command* command);
        virtual ~WorUpArrowPressed();
        Command* aCommand;
        void press();
    protected:
    private:
};

#endif // WORUPARROWPRESSED_H
