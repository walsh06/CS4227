#ifndef DISPATCHER_H
#define DISPATCHER_H

#include "Interceptor.h"
#include <vector>

class Dispatcher
{
    public:
        Dispatcher();
        virtual ~Dispatcher();

        void notify(Context context);

        void attach(Interceptor* interceptor);
        void detach(Interceptor* interceptor);
    protected:
    private:
        int numInterceptors;
        std::vector<Interceptor *> interceptors;
};

#endif // DISPATCHER_H
