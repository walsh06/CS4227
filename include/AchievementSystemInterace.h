#ifndef ACHIEVEMENTSYSTEMINTERACE_H
#define ACHIEVEMENTSYSTEMINTERACE_H


class AchievementSystemInterace : public GameObserver
{
    public:
        AchievementSystemInterace() {}
        virtual ~AchievementSystemInterace() {}

        virtual void update(GameEvent event) = 0;
        virtual void addAchievement(Achievement* achievement) = 0;
        virtual void removeAchievement(Achievement* achievement) = 0;
    protected:
    private:
};

#endif // ACHIEVEMENTSYSTEMINTERACE_H
