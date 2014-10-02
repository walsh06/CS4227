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

        void update(int value);
    protected:
    private:
        std::vector<Achievement*> achievements;
        int numOfAchievements;
};

#endif // ACHIEVEMENTSYSTEM_H
