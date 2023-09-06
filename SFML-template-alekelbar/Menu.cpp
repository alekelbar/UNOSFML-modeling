#include "Menu.hpp"

Menu::Menu() { 
	if (!button_tx.loadFromFile("assets/blue_0.png")) {
		std::cout << "Error con un asset";
	}
	button_sp.setTexture(button_tx);
	button_sp.setPosition(0, 0);
}

Menu::~Menu()
{
}

// functions

void Menu::update()
{
}

void Menu::render(sf::RenderWindow& w) {
	w.draw(button_sp);
};

void Menu::pollEvents()
{
}
