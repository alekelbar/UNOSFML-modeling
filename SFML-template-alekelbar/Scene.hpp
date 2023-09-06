#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Scene
{
public:
	Scene() {};
	
	virtual void update() {};

	virtual void render(sf::RenderWindow& w) {};

	virtual void pollEvents() {};
};

