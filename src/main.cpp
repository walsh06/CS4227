//#include <gtest/gtest.h>
#include "PlayerMovement.h"

#include "WorUpArrowButton.h"

#include "MoveLeftCommand.h"
#include "MoveUpCommand.h"
#include "MoveRightCommand.h"
#include "MoveDownCommand.h"

using namespace std;

int main(int argc, char** argv)
{
    //default set to r as error when left blank.
    char input = 'r';

    //Creating the player movement.
    PlayerMovement* pMove = new PlayerMovement("The Player");

    MoveLeftCommand* moveLeft = new MoveLeftCommand(pMove);
    WorUpArrowButton* ifApressed = new WorUpArrowButton(moveLeft);

    MoveUpCommand* moveUp = new MoveUpCommand(pMove);
    WorUpArrowButton* ifWpressed = new WorUpArrowButton(moveUp);

    MoveRightCommand* moveRight = new MoveRightCommand(pMove);
    WorUpArrowButton* ifDpressed = new WorUpArrowButton(moveRight);

    MoveDownCommand* moveDown = new MoveDownCommand(pMove);
    WorUpArrowButton* ifSpressed = new WorUpArrowButton(moveDown);

    while(true){
        cout<< "Move left, right, up or down with a,d,w,s respectively. q to quit"<<endl;
        cin>>input;
        if(input == 'a' or input == 'A'){
            ifApressed->press();
        }else if(input == 'w' or input == 'W'){
            ifWpressed->press();
        }else if(input == 'D' or input == 'd'){
            ifDpressed->press();
        }else  if(input == 's' or input == 's'){
            ifSpressed->press();
        }else  if(input == 'q' or input == 'Q'){
            return(0);
        }
    }

    //testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
}
