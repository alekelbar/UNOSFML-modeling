#pragma once
#include "Scene.hpp"

class Table : public Scene
{
private:
	sf::Sprite button_sp;
	sf::Texture button_tx;

public:
	Table();

	~Table();

	// overrides
	void update() override;

	void render(sf::RenderWindow& w) override;

	void pollEvents() override;
};

