#ifndef UNDOABLECOMMAND_H
#define UNDOABLECOMMAND_H

#include "Command.h"

class UndoableCommand: Command
{
	public:
		virtual void Undo() = 0;
		virtual ~UndoableCommand() { }
};

#endif //UNDOABLECOMMAND_H