#include <stack>
#include "UndoableCommand.h"

class CommandManager
{
	//Stack of undo-able commands
    private Stack commandStack = new Stack();

	//Execute the command.
    public void ExecuteCommand(Command cmd)
    {
        cmd.Execute();
        if (cmd is UndoableCommand )
        {
			commandStack.Push(cmd);
        }
    }

	//Undo the command if the command is an undo-able one.
    public void Undo()
    {
        if (commandStack.Count > 0)
        {
            UndoableCommand cmd = (UndoableCommand)commandStack.Pop();
            cmd.Undo();
        }
    }
}