#ifndef GAMESUBJECT_H
#define GAMESUBJECT_H


class GameSubject
{
    public:

        virtual void addObserver(Observer* observer) =0;
        virtual void removeObserver(Observer* observer) =0;
    protected:
        virtual void notify(int value) =0;
};

#endif // GAMESUBJECT_H
