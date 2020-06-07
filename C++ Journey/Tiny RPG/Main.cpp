#include <stdio.h>
#include <SDL.h>

#include "Screen.h"
using namespace rpg_screen;

int main(int argc, char* args[])
{
	Screen screen;

	if (screen.init() == false)
	{
		printf("Failed to init. \n");
	}

	if (screen.loadMedia() == false)
	{
		printf("failed to load media \n");
	}

	bool quit = false;
	SDL_Event e;

	while (!quit)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			//user requests quit
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}

		screen.update();
	}

	screen.close();
	return 0;
}