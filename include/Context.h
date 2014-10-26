#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
class Context
{
    public:
        Context(int type, std::string message);
        virtual ~Context();
        int getType();
        std::string getMessage();
        static const int DEBUG = 1, ERROR = 2;
    private:
        std::string message;
        int type;
};

#endif // CONTEXT_H
