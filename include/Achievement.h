#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H
#include <iostream>


class Achievement
{
    public:
        Achievement(std::string name, int type, int requiredValue);

        bool updateProgress(int type, int newValue);
        void unlock();
    protected:
    private:
        int requiredValue;
        int currentValue;
        bool unlocked;
        std::string name;
        int type;
};

#endif // ACHIEVEMENT_H
