#include"Undo.h"

class NoCommand:public Command
{
public: 
	void execute() const {};
	void undo() const {};
};