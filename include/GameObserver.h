#ifndef GAMEOBSERVER_H
#define GAMEOBSERVER_H


class GameObserver
{
    public:
        virtual void update(int type, int value) = 0;
};

#endif // GAMEOBSERVER_H
