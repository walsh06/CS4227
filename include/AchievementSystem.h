#ifndef ACHIEVEMENTSYSTEM_H
#define ACHIEVEMENTSYSTEM_H

#include "GameObserver.h"
#include "Achievement.h"
#include <vector>
#include "GameEvent.h"
#include "AchievementSystemInterace.h"


class AchievementSystem : public AchievementSystemInterace
{
    public:
        AchievementSystem();
        virtual ~AchievementSystem();

        void update(GameEvent event);
        void addAchievement(Achievement* achievement);
        void removeAchievement(Achievement* achievement);

        int getNumUnlocked();
    protected:
    private:
        std::vector<Achievement*> achievements;
        std::vector<Achievement*> unlockedAchievements;
        int numOfAchievements;
        int numUnlocked;
};

#endif // ACHIEVEMENTSYSTEM_H
