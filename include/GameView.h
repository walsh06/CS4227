#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include <iostream>
#include <string>
#include <KeyboardBridgeInterface.h>

#include <WindowsKeyboard.h>



#ifdef _WIN32
#include "WindowsKeyboard.h"
#endif // _WIN32
#ifdef __linux__

#include "LinuxKeyboard.h"

#endif // linux

using namespace std;

class GameView
{
    public:
        GameView();
        virtual ~GameView();
        int checkButtonState();
        void draw(int x, int y);

        KeyboardBridgeInterface* keyboard;


    protected:
    private:
};

#endif // GAMEVIEW_H
