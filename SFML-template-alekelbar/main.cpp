#include <iostream>
#include <SFML/Graphics.hpp>
#include <locale.h>

// propias
#include "CardModel.hpp"
#include "Game.hpp"
#include "Menu.hpp"

int main() {
	std::locale::global(std::locale("")); // tildes, signos de pregunta, etc...
	// Ciclo de juego...
	Game::create(new Menu());

	while (Game::getInstance().playing())
	{
		Game::getInstance().pollEvents();
		Game::getInstance().update();
		Game::getInstance().render();
	}

	return EXIT_SUCCESS;
}