#pragma once
#include "Game.hpp"
#include "Table.h"

class Menu : public Scene
{
private:
	sf::CircleShape circle;

public:
	Menu();

	~Menu();

	// overrides
	void update(sf::RenderWindow& w) override;

	void render(sf::RenderWindow& w) override;

	void pollEvents() override;
};

