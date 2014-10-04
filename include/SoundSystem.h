#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

#include "GameObserver.h"
#include "GameEvent.h"

#include <string>
#include <vector>
#include <iostream>

class SoundSystem : public GameObserver
{
    public:
        SoundSystem();
        virtual ~SoundSystem();

        void update(GameEvent event);
    protected:
    private:
        std::vector<std::string> sounds;
        void playSound(int soundNumber);
};

#endif // SOUNDSYSTEM_H
