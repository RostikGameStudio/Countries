#pragma once


#include "Project.h"
class Graphics;

class Game
{
private:
	bool run;

	Graphics* graphics;

public:
	Game();
	int Execute(int width, int height);

	void Exit();
};
