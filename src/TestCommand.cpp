#include "TestCommand.h"
#include "Player.h"

#include "DeviceButton.h"

#include "MoveLeftCommand.h"
#include "MoveUpCommand.h"
#include "MoveRightCommand.h"
#include "MoveDownCommand.h"

TestCommand::TestCommand()
{
    ///default set to r as error when left blank.
    char input = 'r';

    //Creating the player movement.
    Player* pMove = new Player();

  /*  MoveLeftCommand* moveLeft = new MoveLeftCommand(pMove);
    DeviceButton* ifApressed = new DeviceButton(moveLeft);

    MoveUpCommand* moveUp = new MoveUpCommand(pMove);
    DeviceButton* ifWpressed = new DeviceButton(moveUp);

    MoveRightCommand* moveRight = new MoveRightCommand(pMove);
    DeviceButton* ifDpressed = new DeviceButton(moveRight);

    MoveDownCommand* moveDown = new MoveDownCommand(pMove);
    DeviceButton* ifSpressed = new DeviceButton(moveDown);

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
            cout<<"Closing.....not";
        }
    }*/
}

TestCommand::~TestCommand()
{
    //dtor
}
