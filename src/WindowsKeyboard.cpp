#include "WindowsKeyboard.h"

WindowsKeyboard::WindowsKeyboard()
{
    //ctor
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
