#ifndef GAMEEVENT_H
#define GAMEEVENT_H


class GameEvent
{
    public:
        GameEvent(int type, int value);
        virtual ~GameEvent();

        int getType();
        int getValue();

        static const int TYPE_KILLS = 1, TYPE_POINTS = 2, TYPE_MONEY = 3;
    protected:
    private:
        int type;
        int value;
};

#endif // GAMEEVENT_H
