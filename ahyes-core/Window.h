#pragma once
class Window
{
private:
	int _Width;
	int _Height;
	char* _Name;
public:
	Window(int Width, int Height, char* Name);
	~Window();
private:
	void init();
};

