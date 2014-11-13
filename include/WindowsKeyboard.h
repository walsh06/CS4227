#ifndef WINDOWSKEYBOARD_H
#define WINDOWSKEYBOARD_H

#include "KeyboardBridgeInterface.h"

#ifdef _WIN32
#include <iostream>
#include <windows.h>
#include <conio.h>
#endif // WINDOWS

class WindowsKeyboard : public KeyboardBridgeInterface
{
    public:
        /** Default constructor */
        WindowsKeyboard();
        char getKey();
    protected:
    private:
};

#endif // WINDOWSKEYBOARD_H
