#ifndef PLACECOMMAND_H
#define PLACECOMMAND_H

#include "UndoableCommand.h"

class PlaceCommand : public UndoableCommand
{
	public:
		 PlaceCommand(Tower t, int x, int y);

	protected:
	private:
		Tower tower;
}

#endif // PLACECOMMAND_H
