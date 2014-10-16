#include "UndoableCommand.h"
#include "PlaceCommand.h"

class PlaceCommand : UndoableCommand
{
	private Tower* tower;

	public PlaceCommand(Tower* t, int x, int y)
	{
		this.tower* =t;
		tower->setX(x);
		tower->setY(y);

	}

	public override void Execute()
	{
		tower->placeTower();
	}

	public override void Undo()
	{
		tower->removeTower();
		//~Tower();
	}
}
