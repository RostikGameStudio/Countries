#pragma once

#include "Project.h"

class Image
{
private:
	SDL_Surface * surf;
public:
	friend class Graphics;

	int GetWidth();
	int GetHeight();
};
