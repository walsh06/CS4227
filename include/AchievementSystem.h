#ifndef ACHIEVEMENTSYSTEM_H
#define ACHIEVEMENTSYSTEM_H

#include "GameObserver.h"
#include "Achievement.h"
#include <vector>
#include "GameEvent.h"


class AchievementSystem : public GameObserver
{
    public:
        AchievementSystem();
        virtual ~AchievementSystem();

        void update(GameEvent event);

        int getNumUnlocked();
    protected:
    private:
        std::vector<Achievement*> achievements;
        int numOfAchievements;
        int numUnlocked;
};

#endif // ACHIEVEMENTSYSTEM_H
