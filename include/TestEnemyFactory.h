#ifndef TESTENEMYFACTORY_H
#define TESTENEMYFACTORY_H

#include <EnemyFactory.h>
//#include <gtest/gtest.h>


class TestEnemyFactory : public EnemyFactory
{
    public:
        /** Default constructor */
        TestEnemyFactory();
        /** Default destructor */
        virtual ~TestEnemyFactory();
    protected:
    private:
};

#endif // TESTENEMYFACTORY_H
