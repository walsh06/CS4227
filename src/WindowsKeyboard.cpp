#include "WindowsKeyboard.h"

WindowsKeyboard::WindowsKeyboard()
{
    //ctor
}

WindowsKeyboard::~WindowsKeyboard()
{
    //dtor
}

char WindowsKeyboard::getKey()
{
    #ifdef _WIN32
    if(kbhit())
    {
        return getch();
    }
    #endif // _WIN32
    return 0;

}
