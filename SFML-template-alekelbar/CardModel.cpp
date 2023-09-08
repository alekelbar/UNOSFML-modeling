#include "CardModel.hpp"

CardModel::CardModel(Color color, Type type, int number)
{
	m_color = color;
	m_type = type;

	if (type == Type::number) {
		m_number = number;
		std::string spritePath = "";

		// setting sprite...
		switch (color)
		{
		case CardModel::Color::red:
			spritePath += "assets/red_" + std::to_string(m_number) + ".png";
			if (!texture.loadFromFile(spritePath)) {
				std::cout << "[LOG]: Ocurrio un error con la textura";
			}

			break;
		case CardModel::Color::yellow:
			spritePath += "assets/yellow_" + std::to_string(m_number) + ".png";
			if (!texture.loadFromFile(spritePath)) {
				std::cout << "[LOG]: Ocurrio un error con la textura";
			}
			break;
		case CardModel::Color::green:
			spritePath += "assets/green_" + std::to_string(m_number) + ".png";
			if (!texture.loadFromFile(spritePath)) {
				std::cout << "[LOG]: Ocurrio un error con la textura";
			}

			break;
		case CardModel::Color::blue:
			spritePath += "assets/blue_" + std::to_string(m_number) + ".png";
			if (!texture.loadFromFile(spritePath)) {
				std::cout << "[LOG]: Ocurrio un error con la textura";
			}
			break;
		default:
			break;
		}
	}

	// definiendo el sprite...
	sprite.setTexture(texture);
}

void CardModel::draw(sf::RenderWindow& w)
{
	w.draw(sprite);
}
