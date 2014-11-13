#include "SoundSystem.h"

SoundSystem::SoundSystem()
{
    sounds = {"Enemy Killed", "Money Gained", "Point Scored"};
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


