#ifndef TESTCOMMAND_H
#define TESTCOMMAND_H

#include <gtest/gtest.h>

#include "Player.h"

#include "DeviceButton.h"

#include "MoveLeftCommand.h"
#include "MoveUpCommand.h"
#include "MoveRightCommand.h"
#include "MoveDownCommand.h"

class TestCommand
{
    public:
        TestCommand();
        virtual ~TestCommand();
    protected:
    private:
};

#endif // TESTCOMMAND_H
