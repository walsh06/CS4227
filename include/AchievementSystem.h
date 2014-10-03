#ifndef ACHIEVEMENTSYSTEM_H
#define ACHIEVEMENTSYSTEM_H

#include "GameObserver.h"
#include "Achievement.h"
#include <vector>

class AchievementSystem : public GameObserver
{
    public:
        AchievementSystem();
        virtual ~AchievementSystem();

        void update(int type, int value);

        int getNumUnlocked();
    protected:
    private:
        std::vector<Achievement*> achievements;
        int numOfAchievements;
        int numUnlocked;
};

#endif // ACHIEVEMENTSYSTEM_H
