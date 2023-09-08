#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Scene
{
public:
	Scene() {};
	
	virtual void update(sf::RenderWindow& w) {};

	virtual void render(sf::RenderWindow& w) {};

	virtual void pollEvents() {};
};

