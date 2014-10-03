#include "SoundSystem.h"

SoundSystem::SoundSystem()
{
    sounds = {"Enemy Killed", "Point Scored", "Money Gained"};
}

SoundSystem::~SoundSystem()
{
    //dtor
}

void SoundSystem::update(int type, int value)
{
    playSound(type);
}

void SoundSystem::playSound(int soundNumber)
{
    std::cout << sounds[soundNumber] << std::endl;
}


