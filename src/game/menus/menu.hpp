#pragma once

#include "../engine/core.hpp"

#include <vector>
#include <string>

#define FLASH_TIME	20

// Use a hard coded define for the version for now, in the future use a config file
#define VERSION "1.0.0 ALPHA"

// Hard coded button values
#define NUM_BUTTONS 4

class Menu : public State {

public:

	Menu();
	~Menu();

	void handleEvent(const SDL_Event& e);   // Handles incoming events
	void update(int delta);                 // Handles state logic
	void render();                          // Handles entity rendering

private:
	// Sprites
	Sprite background;
	Sprite highlight;

	// Menu state
	int selected_option;

	// Counter for flashing text
	int counter;
	bool render_text;

	// The buttons to move to next states
	std::vector<std::string> buttons;
	std::vector<ScreenCoord> buttonCoords;
};