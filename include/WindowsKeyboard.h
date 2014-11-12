#ifndef WINDOWSKEYBOARD_H
#define WINDOWSKEYBOARD_H

#include <KeyboardBridgeInterface.h>

#ifdef WINDOWS
#include <iostream>
#include <windows.h>
#include <conio.h>
#endif // WINDOWS

class WindowsKeyboard : public KeyboardBridgeInterface
{
    public:
        /** Default constructor */
        WindowsKeyboard();
        /** Default destructor */
        virtual ~WindowsKeyboard();
        char getKey();
    protected:
    private:
};

#endif // WINDOWSKEYBOARD_H
