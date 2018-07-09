#include "Game.h"

Game::Game()
{
	run = true;
}

int Game::Execute(int width, int height)
{
	graphics = new Graphics(width, height);

	while (run);

	SDL_Quit();
	return 0;
}

void Game::Exit()
{
	run = false;
}