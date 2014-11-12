#include "Achievement.h"
#include <iostream>

Achievement::Achievement(std::string name, int type, int requiredValue)
{
    this->name  = name;
    this->requiredValue = requiredValue;
    this->currentValue = 0;
    unlocked = false;
    this->type = type;
}

Achievement::~Achievement()
{
    //dtor
}

///Update the achievement progress
bool Achievement::updateProgress(int type, int newValue)
{
    if(!unlocked && type == this->type)
    {
        currentValue += newValue;
        return currentValue >= requiredValue;
    }
    else
    {
        return false;
    }
}

///unlock the achievement
 void Achievement::unlock()
{
    std::cout << "Achievement Unlocked!! "<< name << std::endl;
    unlocked = true;
}

