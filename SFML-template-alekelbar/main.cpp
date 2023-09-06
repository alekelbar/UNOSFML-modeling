#include <iostream>
#include <SFML/Graphics.hpp>
#include "CardModel.hpp"
#include "Game.h"

int main() {
	// Ciclo de juego...
	Game game = Game();
	while (game.playing())
	{
		game.pollEvents();
		game.update();
		game.render();
	}

	return EXIT_SUCCESS;
}