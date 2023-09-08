#include "Menu.hpp"


Menu::Menu() {
}

Menu::~Menu()
{
}

// functions

void Menu::update(sf::RenderWindow& w)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		auto circleBounds = circle.getGlobalBounds();
		auto mouse = sf::Mouse::getPosition(w);
		auto mousePos = w.mapPixelToCoords(mouse);


		if (circleBounds.contains(mousePos)) {
			Game::getInstance().switchScene(new Table());
		}
	}
}

void Menu::render(sf::RenderWindow& w) {
	circle.setRadius(50);
	auto windowsSize = w.getSize();
	circle.setPosition((windowsSize.x / static_cast<float>(2)) - 25, (windowsSize.y / static_cast<float>(2)) - 25);

	circle.setFillColor(sf::Color(0, 255, 0, 100));
	w.draw(circle);
};

void Menu::pollEvents()
{
}
