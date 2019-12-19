// ahyes-core.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include "Window.h"

int main(int argc, char* args[])
{
	Window w = Window(720, 420, (char*)"Fucking moron");
	while (!w.getRunning()) {
		w.Loop();
	}
	w.Cleanup();
	//TODO Import opengl
	return 0;
}
