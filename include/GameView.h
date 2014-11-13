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

/// This is the View for the game.
/// This will handle user input and
/// button pressed. The controller
/// will then take this input at a
/// later time.
class GameView
{
    public:
        GameView();
        int checkButtonState();
        void draw(int x, int y);

        KeyboardBridgeInterface* keyboard;
    protected:
    private:
};

#endif // GAMEVIEW_H
