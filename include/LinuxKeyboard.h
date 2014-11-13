#ifndef LINUXKEYBOARD_H
#define LINUXKEYBOARD_H

#include "KeyboardBridgeInterface.h"

#ifdef __linux__
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#endif


class LinuxKeyboard : public KeyboardBridgeInterface
{
    public:
        /** Default constructor */
        LinuxKeyboard();

        char getKey();
    protected:
    private:
};

#endif // LINUXKEYBOARD_H
