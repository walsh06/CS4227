#ifndef KEYBOARDBRIDGEINTERFACE_H
#define KEYBOARDBRIDGEINTERFACE_H


class KeyboardBridgeInterface
{
    public:
        /** Default destructor */
        virtual ~KeyboardBridgeInterface() {};
        virtual char getKey() =0;
    protected:
    private:
};

#endif // KEYBOARDBRIDGEINTERFACE_H
