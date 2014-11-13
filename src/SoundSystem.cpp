#include "SoundSystem.h"

/**
 Constructor
*/
SoundSystem::SoundSystem()
{
    sounds = {"Enemy Killed", "Money Gained", "Point Scored"};
}

/**
 Destructor
*/
SoundSystem::~SoundSystem()
{
    delete sounds;
}

/**
 Plays a sound to match the game event
 passed as a parameter.
*/
void SoundSystem::update(GameEvent event)
{
    playSound(event.getType());
}

/**
 Play a sound at index soundNumber.
*/
void SoundSystem::playSound(int soundNumber)
{
    std::cout << sounds[soundNumber] << std::endl;
}


