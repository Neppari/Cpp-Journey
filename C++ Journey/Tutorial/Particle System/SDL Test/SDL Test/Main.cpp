#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
#include "Swarm.h"
#include "Particle.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
using namespace caveofprogramming;

int main(int argc, char* args[])
{
	srand(time(NULL));

	Screen screen;

	if (screen.init() == false)
	{
		cout << "Error initializing SDL." << endl;
	}

	Swarm swarm;

	while (true)
	{
		// Update particles
		// Draw particles
		int elapsed = SDL_GetTicks();

		//screen.clear();
		swarm.update(elapsed);

		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.001)) * 128);
		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.003)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.005)) * 128);

		const Particle* const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NPARTICLES; i++)
		{
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = particle.m_y * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}

		screen.boxBlur();

		// Draw the screen
		screen.update();

		// Check for messages/events
		if (screen.processEvents() == false)
		{
			break;
		}
	}

	screen.close();

	return 0;
}