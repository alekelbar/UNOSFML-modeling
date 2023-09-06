#include "CardModel.hpp"

CardModel::CardModel(Color color, Type type, int number)
{
	m_color = color;
	m_type = type;

	if (type == Type::number) {
		m_number = number;
	}
}
