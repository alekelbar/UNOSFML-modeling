#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.hpp"
#include "Table.h"


class Game
{
private:
	// Variables...
	// Events
	sf::Event ev;
	// Windows
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
    // Scene
	Scene* scene;

	// funciones de inicialización
	void initVariables();
	void initWindow();
	
public:
	Game();

	~Game();
	
	void update();

	void render();

	void pollEvents();

	inline void setScene(Scene* scene) {
		this->scene = scene;
	}

	// funtions
	bool playing();

};
