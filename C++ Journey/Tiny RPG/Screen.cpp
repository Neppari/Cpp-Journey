#include "Screen.h"

SDL_Rect mSpriteClips[288];

namespace rpg_screen
{
	Screen::Screen() {}

	bool Screen::init()
	{
		if (SDL_Init(SDL_INIT_VIDEO) < 0)
		{
			printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
			return false;
		}

		mWindow = SDL_CreateWindow("Tiny RPG", SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);

		if (mWindow == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
			SDL_Quit();
			return false;
		}

		mRenderer = SDL_CreateRenderer(mWindow, -1, SDL_RENDERER_ACCELERATED);

		if (mRenderer == NULL)
		{
			SDL_DestroyWindow(mWindow);
			SDL_Quit();
			return false;
		}

		SDL_SetRenderDrawColor(mRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
		int imgFlags = IMG_INIT_PNG;

		if (!(IMG_Init(imgFlags) & imgFlags))
		{
			printf("SDL_image could not init. error: %s\n", IMG_GetError());
			return false;
		}
				
		//get window surface
		//mScreenSurface = SDL_GetWindowSurface(mWindow);				
			
		return true;
	}

	bool Screen::loadMedia()
	{
		if (!tex1.loadFromFile("Images/sheet.png"))
		{
			printf("Failed to load Sheet' texture image!\n");
			SDL_DestroyRenderer(mRenderer);
			SDL_DestroyWindow(mWindow);
			SDL_Quit();
			return false;
		}

		mSpriteClips[0].x = 0;
		mSpriteClips[0].y = 0;
		mSpriteClips[0].w = 16;
		mSpriteClips[0].h = 16;

		mSpriteClips[1].x = 16;
		mSpriteClips[1].y = 0;
		mSpriteClips[1].w = 16;
		mSpriteClips[1].h = 16;

		mSpriteClips[2].x = 32;
		mSpriteClips[2].y = 0;
		mSpriteClips[2].w = 16;
		mSpriteClips[2].h = 16;

		mSpriteClips[3].x = 48;
		mSpriteClips[3].y = 0;
		mSpriteClips[3].w = 16;
		mSpriteClips[3].h = 16;

		return true; 
	}

	void Screen::update()
	{
		//Clear screen
		SDL_SetRenderDrawColor(mRenderer, 0xFF, 0, 0xFF, 0xFF);
		SDL_RenderClear(mRenderer);

		//Render texture to screen
		//tex1.render(0, 0, mRenderer, &mSpriteClips[0]);
		//tex1.render(mSpriteClips[1].w, 0, mRenderer, &mSpriteClips[1]);
		//tex1.render(mSpriteClips[2].w * 2, 0, mRenderer, &mSpriteClips[2]);
		//tex1.render(mSpriteClips[3].w * 3, 0, mRenderer, &mSpriteClips[3]);

		//Update Screen
		SDL_RenderPresent(mRenderer);
	}

	void Screen::close()
	{
		//tex1.free();

		//Destroy Window
		SDL_DestroyRenderer(mRenderer);
		SDL_DestroyWindow(mWindow);
		mRenderer = NULL;
		mWindow = NULL;

		IMG_Quit();
		SDL_Quit();
	}
}