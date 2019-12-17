#include "Window.h"
#include <iostream>

using namespace std;

void Window::init()
{
	cout << "Height: " << _Height << "; Width: " << _Width << "; Name: " << _Name;
}

Window::Window(int Width, int Height, char* Name)
{
	_Width = Width;
	_Height = Height;
	_Name = Name;
	init();
}

Window::~Window()
{
}
