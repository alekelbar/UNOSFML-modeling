#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class CardModel {

public:
	enum class Color {
		red, yellow, green, blue
	};

	enum class Type {
		number, reverse, jump, take_two, take_four, change_color
	};

	CardModel(Color color, Type type, int number = -1);

	void draw(sf::RenderWindow &w);

	void setPosition(sf::Vector2f position) {
		sprite.setPosition(position);
	}

private: 
	Color m_color;
	Type m_type;
	int m_number = -1; // Esto solo aplica en caso de ser númerica...
	// graphics 
	sf::Sprite sprite;
	sf::Texture texture;
};

