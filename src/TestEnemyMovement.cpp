#include "TestEnemyMovement.h"

TestEnemyMovement::TestEnemyMovement()
{
    //ctor
}

TestEnemyMovement::~TestEnemyMovement()
{
    //dtor
}

///Test if the enemy horizontal movement strategy works
TEST(EnemyMoveTest, TestMoveHorizontal)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();

    Enemy *enemy = EnemyFactory::createEnemy(moveStrategy);

    //test initial position
    ASSERT_EQ(enemy->getPosX(), 10);
    ASSERT_EQ(enemy->getPosY(), 10);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 9);
    ASSERT_EQ(enemy->getPosY(), 10);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 8);
    ASSERT_EQ(enemy->getPosY(), 10);
}

///Test if the enemy Vertical movement strategy works and update correctly
TEST(EnemyMoveTest, TestMoveVertical)
{
    EnemyOrientation* moveStrategy = new EnemyVertical();

    Enemy *enemy = EnemyFactory::createEnemy(moveStrategy);

    //test initial position
    ASSERT_EQ(enemy->getPosX(), 10);
    ASSERT_EQ(enemy->getPosY(), 10);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 10);
    ASSERT_EQ(enemy->getPosY(), 9);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 10);
    ASSERT_EQ(enemy->getPosY(), 8);
}

///Test if the enemy movement strategies change correctly
TEST(EnemyMoveTest, TestChangeMoveStrategy)
{
    EnemyOrientation* moveStrategy = new EnemyHorizontal();

    Enemy *enemy = EnemyFactory::createEnemy(moveStrategy);

    //test initial position
    ASSERT_EQ(enemy->getPosX(), 10);
    ASSERT_EQ(enemy->getPosY(), 10);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 9);
    ASSERT_EQ(enemy->getPosY(), 10);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 8);
    ASSERT_EQ(enemy->getPosY(), 10);

    //change to vertical movement
    moveStrategy = new EnemyVertical();
    enemy->setStrategy(moveStrategy);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 8);
    ASSERT_EQ(enemy->getPosY(), 9);

    enemy->update();

    ASSERT_EQ(enemy->getPosX(), 8);
    ASSERT_EQ(enemy->getPosY(), 8);
}



