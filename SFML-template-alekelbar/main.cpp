#include <iostream>
#include <SFML/Graphics.hpp>
#include "CardModel.hpp"

int main() {
	CardModel card(CardModel::Color::blue, CardModel::Type::number, 10);
	sf::Texture texture;
	sf::Event ev;

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
	window.setFramerateLimit(10);

	// Ciclo de juego...
	while (window.isOpen())
	{
		while (window.pollEvent(ev))
		{
			switch (ev.type) {
			case sf::Event::Closed:
				window.close();
				break;
			default:
				break;
			}
		}

		window.clear(sf::Color::Black);

		window.display();
	}

	return EXIT_SUCCESS;
}