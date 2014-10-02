#include "AchievementSystem.h"

AchievementSystem::AchievementSystem()
{
    Achievement* achievement1 = new Achievement("5 Kills", 5);
    Achievement* achievement2 = new Achievement("10 Kills", 10);
    Achievement* achievement3 = new Achievement("15 Kills", 15);

    achievements = {achievement1, achievement2, achievement3};
    numOfAchievements = 3;
}

AchievementSystem::~AchievementSystem()
{
    //dtor
}

void AchievementSystem::update(int value)
{
    for(int i =0; i < numOfAchievements; i++)
    {
        if (achievements[i]->updateProgress())
        {
            achievements[i]->unlock();
            numOfAchievements--;
        }
    }
}
