#ifndef GAMESUBJECT_H
#define GAMESUBJECT_H


class GameSubject
{
    public:

        virtual void addObserver(GameObserver* observer) =0;
        virtual void removeObserver(GameObserver* observer) =0;
    protected:
        virtual void notify(int type, int value) =0;
};

#endif // GAMESUBJECT_H
