#include "Dispatcher.h"

Dispatcher::Dispatcher()
{
    numInterceptors = 0;
}

Dispatcher::~Dispatcher()
{
    //dtor
}

void Dispatcher::notify(Context context)
{
    for(int i = 0; i < numInterceptors;i++)
    {
        interceptors[i]->update(context);
    }
}

void Dispatcher::attach(Interceptor* interceptor)
{
    interceptors.push_back(interceptor);
    numInterceptors++;
}

void Dispatcher::detach(Interceptor* interceptor)
{
    for(int i = 0; i < numInterceptors; i++)
    {
        if(interceptors[i] == interceptor)
        {
            interceptors.erase(interceptors.begin() + i);
            numInterceptors--;
            break;
        }
    }
}
