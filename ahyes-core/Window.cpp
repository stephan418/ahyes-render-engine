#include "Window.h"

#include <iostream>
#include <SDL.h>
using namespace std;

void Window::init()
{
	cout << "Height: " << _Height << "; Width: " << _Width << "; Name: " << _Name << endl;
	if (SDL_INIT_EVERYTHING != 0){
		cout << SDL_GetError() << endl;
	}
	window = SDL_CreateWindow(_Name, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, _Height, _Width, NULL);
	primarySurface = SDL_GetWindowSurface(window);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(renderer,0x00, 0x00, 0x00, 0xFF);

}

Window::Window(int Width, int Height, char* Name)
{
	_Width = Width;
	_Height = Height;
	_Name = Name;
	init();
}

void Window::Loop()
{
	Render();
}

void Window::Render()
{
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}

void Window::Cleanup()
{
	if (renderer) {
		SDL_DestroyRenderer(renderer);
		renderer = NULL;
	}
	if (window) {
		SDL_DestroyWindow(window);
		window = NULL;
	}
	SDL_Quit();
}

Window::~Window()
{
}
