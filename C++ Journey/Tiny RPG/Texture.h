#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

class Texture
{
public:
	Texture();
	~Texture();
	bool loadFromFile(std::string path, SDL_Renderer* mRenderer);
	void free();
	void render(int x, int y, SDL_Renderer* mRenderer, SDL_Rect* clip = NULL);
	int getWidth();
	int getHeight();

private:
	SDL_Texture* mTexture;
	int mWidth;
	int mHeight;
};