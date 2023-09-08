#pragma once
#include "Scene.hpp"
#include "CardModel.hpp"

class Table : public Scene
{
private:
	std::vector<CardModel *> cards;
public:
	Table();

	~Table();

	// overrides
	void update(sf::RenderWindow& w) override;

	void render(sf::RenderWindow& w) override;

	void pollEvents() override;
};

