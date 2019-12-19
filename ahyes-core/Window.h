#pragma once

#include <SDL.h>

class Window
{
private:
	int _Width;
	int _Height;
	char* _Name;
	SDL_Renderer* renderer;
	SDL_Window* window;
	SDL_Surface* primarySurface;

public:
	Window(int Width, int Height, char* Name);
	void Loop();
	void Render();
	void Cleanup();
	bool inline getRunning() { SDL_Event event; SDL_PollEvent(&event); return event.type == SDL_QUIT;};
	~Window();
private:
	void init();
};

