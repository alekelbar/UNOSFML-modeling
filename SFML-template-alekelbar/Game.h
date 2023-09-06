#pragma once
#include <SFML/Graphics.hpp>

class Game
{
private:
	// variables...
	// eventos
	sf::Event ev;
	// ventana
	sf::RenderWindow* window;
	sf::VideoMode videoMode;


	// funciones de inicialización
	void initVariables();
	void initWindow();
	
public:
	Game();

	~Game();
	
	void update();

	void render();

	void pollEvents();

	// funtions
	bool playing();

};
