#include "Events.h"
#include <SDL.h>
bool Events::Keydown(char key)
{
	SDL_Event event;
	SDL_PollEvent(&event);
	if (event.type == SDL_KEYDOWN) {
		if (event.key.keysym.sym == (SDL_Keycode)key) {
			return true;
		}
	}
	else {
		return false;
	}
}
