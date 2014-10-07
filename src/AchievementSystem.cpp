#include "AchievementSystem.h"

AchievementSystem::AchievementSystem()
{
    Achievement* achievement1 = new Achievement("5 Kills", GameEvent::TYPE_KILLS, 5);
    Achievement* achievement2 = new Achievement("10 Kills", GameEvent::TYPE_KILLS, 10);
    Achievement* achievement3 = new Achievement("15 Kills", GameEvent::TYPE_KILLS, 15);

    Achievement* achievement4 = new Achievement("10 points", GameEvent::TYPE_POINTS, 10);
    Achievement* achievement5 = new Achievement("50 points", GameEvent::TYPE_POINTS, 50);
    Achievement* achievement6 = new Achievement("100 points", GameEvent::TYPE_POINTS, 100);

    achievements = {achievement1, achievement2, achievement3, achievement4, achievement5, achievement6};
    numOfAchievements = 6;
    numUnlocked = 0;
}

AchievementSystem::~AchievementSystem()
{
    for(int i =0; i < numOfAchievements; i++)
    {
        delete achievements[i];
    }
}

void AchievementSystem::update(GameEvent event)
{
    for(int i =0; i < numOfAchievements; i++)
    {
        if (achievements[i]->updateProgress(event.getType(), event.getValue()))
        {
            achievements[i]->unlock();
            numUnlocked++;
        }
    }
}

int AchievementSystem::getNumUnlocked()
{
    return numUnlocked;
}
