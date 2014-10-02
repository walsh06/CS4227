#ifndef ACHIEVEMENT_H
#define ACHIEVEMENT_H
#include <iostream>


class Achievement
{
    public:
        Achievement(std::string name, int requiredValue);
        virtual ~Achievement();

        bool updateProgress();
        void unlock();
    protected:
    private:
        int requiredValue;
        int currentValue;
        std::string name;
};

#endif // ACHIEVEMENT_H
