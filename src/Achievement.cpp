#include "Achievement.h"
#include <iostream>

Achievement::Achievement(std::string name, int requiredValue)
{
    this->name  = name;
    this->requiredValue = requiredValue;
    this->currentValue = 0;
}

Achievement::~Achievement()
{
    //dtor
}

bool Achievement::updateProgress()
{
    currentValue++;
    std::cout<< currentValue << " " << requiredValue << std::endl;
    return currentValue >= requiredValue;
}

 void Achievement::unlock()
{
    std::cout << "Achievement Unlocked!!"<< std::endl;
    std::cout << name << std::endl;
}

