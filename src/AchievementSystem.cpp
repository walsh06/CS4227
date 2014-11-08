#include "AchievementSystem.h"

AchievementSystem::AchievementSystem()
{
    numOfAchievements = 0;
    numUnlocked = 0;

    Achievement* achievement1 = new Achievement("5 Kills", GameEvent::TYPE_KILLS, 5);
    //Achievement* achievement2 = new Achievement("10 Kills", GameEvent::TYPE_KILLS, 10);
    //Achievement* achievement3 = new Achievement("15 Kills", GameEvent::TYPE_KILLS, 15);

    //Achievement* achievement4 = new Achievement("10 points", GameEvent::TYPE_POINTS, 10);
    //Achievement* achievement5 = new Achievement("50 points", GameEvent::TYPE_POINTS, 50);
    //Achievement* achievement6 = new Achievement("100 points", GameEvent::TYPE_POINTS, 100);
    addAchievement(achievement1);
}

AchievementSystem::~AchievementSystem()
{
    for(int i =0; i < numOfAchievements; i++)
    {
        delete achievements[i];
    }
}

void AchievementSystem::addAchievement(Achievement* achievement)
{
    achievements.push_back(achievement);
    numOfAchievements++;
}

void AchievementSystem::removeAchievement(Achievement* achievement)
{
    for(int i = 0; i < numOfAchievements; i++)
    {
        if(achievements[i] == achievement)
        {
            achievements.erase(achievements.begin() + i);
            numOfAchievements--;
            break;
        }
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
