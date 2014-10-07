#include "SoundSystem.h"

SoundSystem::SoundSystem()
{
    sounds = {"Enemy Killed", "Point Scored", "Money Gained"};
}

SoundSystem::~SoundSystem()
{
    //dtor
}

void SoundSystem::update(GameEvent event)
{
    playSound(event.getType());
}

void SoundSystem::playSound(int soundNumber)
{
    std::cout << sounds[soundNumber] << std::endl;
}


