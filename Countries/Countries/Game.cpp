#include "Game.h"



Game::Game()
{
	run = true;
}

int Game::Execute()
{
	while (run);
	return 0;
}

void Game::Exit()
{
	run = false;
}

