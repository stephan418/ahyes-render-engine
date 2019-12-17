#pragma once

#include <SDL.h>

class Window
{
private:
	int _Width;
	int _Height;
	char* _Name;
public:
	Window(int Width, int Height, char* Name);
	void Loop();
	void Render();
	~Window();
private:
	void init();
};

