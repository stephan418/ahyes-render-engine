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
	SDL_Window* window = SDL_CreateWindow(_Name, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, _Height, _Width, NULL);
	SDL_Surface* primarySurface = SDL_GetWindowSurface(window);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
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
}

void Window::Render()
{
	SDL_RenderClear(renderer);
}

Window::~Window()
{
}
