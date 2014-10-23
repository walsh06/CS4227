#include <gtest/gtest.h>


    #include <EnemyItemDecorator.h>
    #include <Enemy.h>
    #include <BoostItem.h>

int main(int argc, char** argv)
{
    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();


    EnemyInterface *enemy = new BoostItem(new Enemy());
    std::cout << enemy->getAttack();
}
