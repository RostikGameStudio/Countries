#include <Windows.h>

#include "Project.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Game game;
	return game.Execute(500, 350);
}