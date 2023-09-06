#pragma once
#include "Scene.hpp"

class Menu : public Scene
{
private:
	sf::Sprite button_sp;
	sf::Texture button_tx;

public:
	Menu();

	~Menu();

	// overrides
	void update() override;

	void render(sf::RenderWindow& w) override;

	void pollEvents() override;
};

