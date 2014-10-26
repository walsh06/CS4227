#ifndef INTERCEPTOR_H
#define INTERCEPTOR_H

#include "Context.h"

class Interceptor
{
    public:
        Interceptor() {}
        virtual ~Interceptor() {}

        virtual void update(Context context) = 0;
    protected:
    private:
};

#endif // INTERCEPTOR_H
