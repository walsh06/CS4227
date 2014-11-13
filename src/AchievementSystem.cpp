#include "AchievementSystem.h"

AchievementSystem::AchievementSystem()
{
    numOfAchievements = 0;
    numUnlocked = 0;

    //Add default achievements for the default achievement system
    addAchievement(new Achievement("1 Kill", GameEvent::TYPE_KILLS, 1));
    addAchievement(new Achievement("50 Kills", GameEvent::TYPE_KILLS, 50));
    addAchievement(new Achievement("100 Kills", GameEvent::TYPE_KILLS, 100));

    addAchievement(new Achievement("10 points", GameEvent::TYPE_POINTS, 10));
    addAchievement(new Achievement("50 points", GameEvent::TYPE_POINTS, 50));
    addAchievement(new Achievement("100 points", GameEvent::TYPE_POINTS, 100));

    addAchievement(new Achievement("20 gold", GameEvent::TYPE_MONEY, 20));
    addAchievement(new Achievement("500 gold", GameEvent::TYPE_MONEY, 500));
    addAchievement(new Achievement("1000 gold", GameEvent::TYPE_MONEY, 1000));
}

AchievementSystem::~AchievementSystem()
{
    for(int i = 0; i < numOfAchievements; i++)
    {
        delete achievements[i];
    }
}

///Add a new achievement to the list
void AchievementSystem::addAchievement(Achievement* achievement)
{
    achievements.push_back(achievement);
    numOfAchievements++;
}

///Remove an achievement from the list
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

///Update method called by the subject in observer pattern
void AchievementSystem::update(GameEvent event)
{
    for(int i =0; i < numOfAchievements; i++)
    {
        //check if the achievement is finished
        if (achievements[i]->updateProgress(event.getType(), event.getValue()))
        {
            //if so unlock the achievement
            achievements[i]->unlock();
            numUnlocked++;
            removeAchievement((achievements[i]));
            unlockedAchievements.push_back(achievements[i]);
        }
    }
}

int AchievementSystem::getNumUnlocked()
{
    return numUnlocked;
}
