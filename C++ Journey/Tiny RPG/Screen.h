#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>

namespace rpg_screen
{
	class Screen
	{

	public:
		const int screen_width = 640;
		const int screen_height = 480;

	private:
		SDL_Window* mWindow = NULL;
		SDL_Renderer* mRenderer = NULL;
		SDL_Texture* mTexture = NULL;

	public:
		Screen();
		bool init();
		bool loadMedia();
		void update();
		void close();
	};
}