#include "Table.h"
#include "Game.hpp"
#include "Menu.hpp"

Table::Table() {
	float xPos = 0, yPos = 0;
	// build numbers...
	for (int number = 0; number <= 9; number++) {
		for (int color = 0; color < 4; color++)
		{
			CardModel* model = new CardModel((CardModel::Color)color, CardModel::Type::number, number);
			CardModel* modelCopy = new CardModel((CardModel::Color)color, CardModel::Type::number, number);

			model->setPosition({ xPos, yPos });
			modelCopy->setPosition({ xPos, yPos + 182 });

			this->cards.push_back(model);
			this->cards.push_back(modelCopy);

			xPos += 10;
		}
		if (xPos >= 500) {
			xPos = 0;
			yPos += 150;
		}
	}
}

Table::~Table()
{
}

// functions

void Table::update(sf::RenderWindow& w)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {
		std::cout << "[KEY PRESS]: A \n";
		Game::getInstance().switchScene(new Menu());
	}
}

void Table::render(sf::RenderWindow& w) {
	for (int card = 0; card < cards.size(); card++)
		cards.at(card)->draw(w);
};

void Table::pollEvents()
{
}
