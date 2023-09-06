#include "Table.h"

Table::Table() {
	if (!button_tx.loadFromFile("assets/green_0.png")) {
		std::cout << "Error asset";
	}
	button_sp.setTexture(button_tx);
}

Table::~Table()
{
}

// functions

void Table::update()
{
}

void Table::render(sf::RenderWindow& w) {
	w.draw(button_sp);
};

void Table::pollEvents()
{
}
