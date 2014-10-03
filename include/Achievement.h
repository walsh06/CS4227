#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H
#include <iostream>


class Achievement
{
    public:
        Achievement(std::string name, int type, int requiredValue);
        virtual ~Achievement();

        bool updateProgress(int type, int newValue);
        void unlock();

        static const int TYPE_KILLS = 1, TYPE_POINTS = 2, TYPE_MONEY = 3;
    protected:
    private:
        int requiredValue;
        int currentValue;
        bool unlocked;
        std::string name;
        int type;
};

#endif // ACHIEVEMENT_H
